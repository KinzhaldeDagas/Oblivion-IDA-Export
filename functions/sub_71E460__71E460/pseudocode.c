char __thiscall sub_71E460(_DWORD *this, char *Src)
{
  _DWORD *v2; // esi
  int v3; // ecx
  int NiFile_Indirect; // eax
  void (__thiscall ***v5)(_DWORD, int); // esi
  bool v6; // zf
  void (__thiscall *v7)(_DWORD, int); // eax
  __int64 v9; // [esp-4h] [ebp-514h]
  int v10; // [esp+0h] [ebp-510h]
  char Dir[259]; // [esp+4h] [ebp-50Ch] BYREF
  _BYTE v12[769]; // [esp+107h] [ebp-409h] BYREF
  char Dst[260]; // [esp+408h] [ebp-108h] BYREF

  v2 = (_DWORD *)*(this + 0x225);
  strcpy_s(Dst, 0x104u, Src);
  TESTexture::ClearComponentReferences(Dst);
  sub_748760(Dir, Dst);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = v2[2];
      v2 = (_DWORD *)*v2;
      if ( (*(unsigned __int8 (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 4))(v3, v12) )
        break;
      if ( !v2 )
        return 0;
    }
    LODWORD(v9) = 0x8000;
    NiFile_Indirect = NiFile_GetNiFile_Indirect((int)Dst, 0, v9);
    v5 = (void (__thiscall ***)(_DWORD, int))NiFile_Indirect;
    if ( NiFile_Indirect )
    {
      v6 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)NiFile_Indirect + 4))(NiFile_Indirect, v10) == 0;
      v7 = **v5;
      if ( !v6 )
      {
        v7(v5, 1);
        return 1;
      }
      v7(v5, 1);
    }
  }
  return 0;
}
