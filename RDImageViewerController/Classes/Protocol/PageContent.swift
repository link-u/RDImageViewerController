//
//  PageContent.swift
//  RDImageViewerController
//
//  Created by Akira Matsuda on 2020/07/01.
//

public protocol PageContent {
    func isPreloadable() -> Bool
    func isPreloading() -> Bool
    func preload()
    func preload(completion: ((PageContent) -> Void)?)
    func stopPreload()
    func reload()
    func reload(completion: ((PageContent) -> Void)?)
    func reuseIdentifier() -> String
    func size(
        inRect rect: CGRect,
        direction: PagingView.ForwardDirection,
        traitCollection: UITraitCollection,
        isDoubleSpread: Bool
    ) -> CGSize
}
