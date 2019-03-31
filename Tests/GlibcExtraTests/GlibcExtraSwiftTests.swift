import XCTest
import class Foundation.Bundle
import GlibcExtra

final class GlibcExtraSwiftTests: XCTestCase {
    func testExample() throws {
        let fd = epoll_create(1)
        XCTAssertEqual(fd, 3)

        fcntl_set(0, 0, 0)

        let n = arc4random()
        XCTAssertNotEqual(n, 0)
        print("random n: \(n)")

        let u = arc4random_uniform(100)
        print("random u: \(u)")

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
