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
  if ( !a3 )
    goto LABEL_6;
  if ( a4 )
  {
    if ( !*(this + 0xD) )
      NiDX9Renderer::CalculateBoneMatrixes(dword_B43104, a3, a8, 0, 3, 1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 6) + 0x30))(
      *(this + 6),
      *(unsigned __int16 *)(a4 + 0x24));
LABEL_6:
    sub_765480((NiDX9Renderer *)*(this + 5), (float *)a8, 0);
  }
  return 0;
}
