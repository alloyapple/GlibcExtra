import XCTest
import class Foundation.Bundle
import GlibcExtra

final class GlibcExtraSwiftTests: XCTestCase {
    func testExample() throws {
        let fd = epoll_create(1)
        XCTAssertEqual(fd, 3)

        fcntl_set(0, 0, 0)

    }

    /// Returns path to the built products directory.
    var productsDirectory: URL {
      #if os(macOS)
        for bundle in Bundle.allBundles where bundle.bundlePath.hasSuffix(".xctest") {
            return bundle.bundleURL.deletingLastPathComponent()
        }
        fatalError("couldn't find the products directory")
      #else
        return Bundle.main.bundleURL
      #endif
    }

    static var allTests = [
        ("testExample", testExample),
    ]
}
