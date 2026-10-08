// MoonSugarEffect decode: GeometryDecalShader transform slot (+0x34). If skinned, prepares bone matrices/vertex blending; then calls sub_765480 with passed NiTransform. Non-skinned wrapper affects decal geometry through normal world matrix path.
int __thiscall sub_8052C0(
        _DWORD *this,
        int a2,
        NiSkinInstance *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        NiTransform *a8,
        int a9)
{
  if ( !a3 ) /*0x8052cf*/
    goto LABEL_6; /*0x8052cf*/
  if ( a4 ) /*0x8052d7*/
  {
    if ( !*(this + 0xD) ) /*0x8052d9*/
      NiDX9Renderer::CalculateBoneMatrixes(unk_B43104, a3, a8, 0, 3, 1); /*0x8052ed*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 6) + 0x30))( /*0x8052ff*/
      *(this + 6),
      *(unsigned __int16 *)(a4 + 0x24));
LABEL_6:
    NiDX9Renderer_SetModelTransform((NiDX9Renderer *)*(this + 5), (float *)a8, 0); /*0x805301*/
  }
  return 0; /*0x80530c*/
}
