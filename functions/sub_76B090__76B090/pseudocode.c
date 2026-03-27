signed int __thiscall sub_76B090(unsigned __int16 *this, int a2, int a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  char v7; // al
  _DWORD *v8; // esi
  void *v9; // ecx
  void *v10; // ecx
  size_t v12; // [esp-8h] [ebp-48h]
  size_t v13; // [esp-4h] [ebp-44h]
  _BYTE Dst[56]; // [esp+8h] [ebp-38h] BYREF

  v4 = *(_DWORD *)((*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x21E) + 0x70))(
                     *((_DWORD *)this + 0x21E),
                     0)
                 + 0x10);
  if ( v4 )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x10))(v4);
    if ( v6 )
    {
      while ( (_UNKNOWN *)v6 != &unk_B4265C )
      {
        v6 = *(_DWORD *)(v6 + 4);
        if ( !v6 )
          goto LABEL_6;
      }
      v7 = 1;
    }
    else
    {
LABEL_6:
      v7 = 0;
    }
    v5 = v7 != 0 ? v4 : 0;
  }
  else
  {
    v5 = 0;
  }
  v8 = (_DWORD *)(v5 + 0x14);
  LODWORD(v13) = 0x38;
  memcpy(Dst, (const void *)(v5 + 0x14), v13);
  *v8 = a2;
  v8[1] = a3;
  if ( sub_76A970((NiDX9Renderer *)this) )
    return 2;
  HIDWORD(v12) = "NiDX9Renderer::Recreate> Could not reset device to desired parameters - trying to recover original values\n";
  TESTexture::ClearComponentReferences(v9);
  LODWORD(v12) = 0x38;
  memcpy(v8, Dst, v12);
  if ( sub_76A970((NiDX9Renderer *)this) )
    return 1;
  TESTexture::ClearComponentReferences(v10);
  return 0;
}
