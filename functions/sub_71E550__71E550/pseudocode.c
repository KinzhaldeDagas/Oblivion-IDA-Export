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
  char v17[769]; // [esp+123h] [ebp-409h] BYREF
  char Dst[260]; // [esp+424h] [ebp-108h] BYREF

  v7 = (_DWORD *)*(this + 0x225); /*0x71e573*/
  strcpy_s(Dst, 0x104u, Src); /*0x71e5b6*/
  Shared_NoOpVirtual_60D0A0(Dst); /*0x71e5c3*/
  sub_748760(Dir, Dst); /*0x71e5d7*/
  if ( !v7 ) /*0x71e5de*/
    return 0; /*0x71e5de*/
  while ( 1 ) /*0x71e5e4*/
  {
    v8 = v7[2]; /*0x71e5e4*/
    v7 = (_DWORD *)*v7; /*0x71e5ef*/
    if ( !(*(unsigned __int8 (__thiscall **)(int, char *))(*(_DWORD *)v8 + 4))(v8, v17) ) /*0x71e5ff*/
      goto LABEL_7; /*0x71e5ff*/
    LODWORD(v14) = 0x8000; /*0x71e601*/
    NiFile_Indirect = NiFile_GetNiFile_Indirect((int)Dst, 0, v14); /*0x71e610*/
    v10 = (void (__thiscall ***)(_DWORD, int))NiFile_Indirect; /*0x71e615*/
    if ( !NiFile_Indirect ) /*0x71e61c*/
      return 0; /*0x71e61c*/
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)NiFile_Indirect + 4))(NiFile_Indirect) ) /*0x71e625*/
      break; /*0x71e625*/
    v11 = (*(unsigned __int8 (__thiscall **)(int, void (__thiscall ***)(_DWORD, int), int, int, int, int, int, int))(*(_DWORD *)v8 + 0xC))( /*0x71e64a*/
            v8,
            v10,
            a5,
            a6,
            a3,
            a4,
            a7,
            v15) == 0;
    v12 = (void (__thiscall *)(_DWORD))**v10; /*0x71e64e*/
    HIDWORD(v14) = 1; /*0x71e650*/
    if ( !v11 ) /*0x71e654*/
    {
      ((void (__thiscall *)(_DWORD, int))v12)(v10, 1); /*0x71e65e*/
      return 1; /*0x71e662*/
    }
    v12(v10); /*0x71e656*/
LABEL_7:
    if ( !v7 ) /*0x71e65a*/
      return 0; /*0x71e65a*/
  }
  if ( v10 ) /*0x71e666*/
    (**v10)(v10, 1); /*0x71e670*/
  return 0; /*0x71e674*/
}
