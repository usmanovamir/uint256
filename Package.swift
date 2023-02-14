// swift-tools-version: 5.4
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "uint256",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "uint256",
            targets: ["AUInt256"]
        ),
    ],
    targets: [
        .binaryTarget(name: "uint256", path: "Frameworks/uint256.xcframework"),
    ]
)
