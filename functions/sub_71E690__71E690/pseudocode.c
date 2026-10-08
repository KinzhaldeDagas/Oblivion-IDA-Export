int __thiscall sub_71E690(_DWORD *this, char *Src, int a3)
{
  _DWORD *v3; // ebx
  int v4; // edi
  int NiFile_Indirect; // eax
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // edi
  __int64 v9; // [esp-4h] [ebp-520h]
  char Dir[259]; // [esp+10h] [ebp-50Ch] BYREF
  char v11[769]; // [esp+113h] [ebp-409h] BYREF
  char Dst[260]; // [esp+414h] [ebp-108h] BYREF

  v3 = (_DWORD *)*(this + 0x225); /*0x71e6ac*/
  strcpy_s(Dst, 0x104u, Src); /*0x71e6ca*/
  Shared_NoOpVirtual_60D0A0(Dst); /*0x71e6d7*/
  sub_748760(Dir, Dst); /*0x71e6eb*/
  if ( !v3 ) /*0x71e6f2*/
    return 0; /*0x71e6f2*/
  while ( 1 ) /*0x71e6f4*/
  {
    v4 = v3[2]; /*0x71e6f4*/
    v3 = (_DWORD *)*v3; /*0x71e6ff*/
    if ( !(*(unsigned __int8 (__thiscall **)(int, char *))(*(_DWORD *)v4 + 4))(v4, v11) ) /*0x71e70f*/
      goto LABEL_6; /*0x71e70f*/
    LODWORD(v9) = 0x8000; /*0x71e711*/
    NiFile_Indirect = NiFile_GetNiFile_Indirect((int)Dst, 0, v9); /*0x71e720*/
    v6 = (void (__thiscall ***)(_DWORD, int))NiFile_Indirect; /*0x71e725*/
    if ( !NiFile_Indirect ) /*0x71e72c*/
      return 0; /*0x71e72c*/
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)NiFile_Indirect + 4))(NiFile_Indirect) ) /*0x71e735*/
      break; /*0x71e735*/
    v7 = (*(int (__thiscall **)(int, void (__thiscall ***)(_DWORD, int), int))(*(_DWORD *)v4 + 8))(v4, v6, a3); /*0x71e748*/
    (**v6)(v6, 1); /*0x71e750*/
    if ( v7 ) /*0x71e754*/
      return v7; /*0x71e75e*/
LABEL_6:
    if ( !v3 ) /*0x71e758*/
      return 0; /*0x71e758*/
  }
  if ( v6 ) /*0x71e762*/
    (**v6)(v6, 1); /*0x71e76c*/
  return 0; /*0x71e770*/
}
