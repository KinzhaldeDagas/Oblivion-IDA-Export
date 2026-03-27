int __thiscall sub_71E690(_DWORD *this, char *Src, int a3)
{
  _DWORD *v3; // ebx
  int v4; // edi
  int NiFile_Indirect; // eax
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // edi
  __int64 v9; // [esp-4h] [ebp-520h]
  char Dir[259]; // [esp+10h] [ebp-50Ch] BYREF
  _BYTE v11[769]; // [esp+113h] [ebp-409h] BYREF
  char Dst[260]; // [esp+414h] [ebp-108h] BYREF

  v3 = (_DWORD *)*(this + 0x225);
  strcpy_s(Dst, 0x104u, Src);
  TESTexture::ClearComponentReferences(Dst);
  sub_748760(Dir, Dst);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v4 = v3[2];
    v3 = (_DWORD *)*v3;
    if ( !(*(unsigned __int8 (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 4))(v4, v11) )
      goto LABEL_6;
    LODWORD(v9) = 0x8000;
    NiFile_Indirect = NiFile_GetNiFile_Indirect((int)Dst, 0, v9);
    v6 = (void (__thiscall ***)(_DWORD, int))NiFile_Indirect;
    if ( !NiFile_Indirect )
      return 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)NiFile_Indirect + 4))(NiFile_Indirect) )
      break;
    v7 = (*(int (__thiscall **)(int, void (__thiscall ***)(_DWORD, int), int))(*(_DWORD *)v4 + 8))(v4, v6, a3);
    (**v6)(v6, 1);
    if ( v7 )
      return v7;
LABEL_6:
    if ( !v3 )
      return 0;
  }
  if ( v6 )
    (**v6)(v6, 1);
  return 0;
}
