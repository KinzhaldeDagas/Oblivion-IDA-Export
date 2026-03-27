char __thiscall sub_71E550(_DWORD *this, char *Src, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v7; // ebx
  int v8; // edi
  int NiFile_Indirect; // eax
  void (__thiscall ***v10)(_DWORD, int); // esi
  bool v11; // zf
  void (__thiscall *v12)(_DWORD); // edx
  __int64 v14; // [esp-4h] [ebp-530h]
  int v15; // [esp+0h] [ebp-52Ch]
  char Dir[259]; // [esp+20h] [ebp-50Ch] BYREF
  _BYTE v17[769]; // [esp+123h] [ebp-409h] BYREF
  char Dst[260]; // [esp+424h] [ebp-108h] BYREF

  v7 = (_DWORD *)*(this + 0x225);
  strcpy_s(Dst, 0x104u, Src);
  TESTexture::ClearComponentReferences(Dst);
  sub_748760(Dir, Dst);
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    v8 = v7[2];
    v7 = (_DWORD *)*v7;
    if ( !(*(unsigned __int8 (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 4))(v8, v17) )
      goto LABEL_7;
    LODWORD(v14) = 0x8000;
    NiFile_Indirect = NiFile_GetNiFile_Indirect((int)Dst, 0, v14);
    v10 = (void (__thiscall ***)(_DWORD, int))NiFile_Indirect;
    if ( !NiFile_Indirect )
      return 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)NiFile_Indirect + 4))(NiFile_Indirect) )
      break;
    v11 = (*(unsigned __int8 (__thiscall **)(int, void (__thiscall ***)(_DWORD, int), int, int, int, int, int, int))(*(_DWORD *)v8 + 0xC))(
            v8,
            v10,
            a5,
            a6,
            a3,
            a4,
            a7,
            v15) == 0;
    v12 = (void (__thiscall *)(_DWORD))**v10;
    HIDWORD(v14) = 1;
    if ( !v11 )
    {
      ((void (__thiscall *)(_DWORD, int))v12)(v10, 1);
      return 1;
    }
    v12(v10);
LABEL_7:
    if ( !v7 )
      return 0;
  }
  if ( v10 )
    (**v10)(v10, 1);
  return 0;
}
