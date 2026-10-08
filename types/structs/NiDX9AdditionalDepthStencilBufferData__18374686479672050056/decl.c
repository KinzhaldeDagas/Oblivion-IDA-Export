struct NiDX9AdditionalDepthStencilBufferData
{
NiDX92DBufferDataVtbl *__vftable;
NiDX92DBufferDataMembr super;
D3DFORMAT depthFormat; ///< Requested depth format saved at0x14 by factory76DF2B; checked and reused by Recreate76D5C0. Native CreateDepthStencilSurface uses NONE/quality0.
BOOL discardDepthStencil; ///< BOOL discard policy at0x18 copied fromB294EC by factory76DEAE and passed to device slot29; not an MSAA setting.
};
