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
  char v12[769]; // [esp+107h] [ebp-409h] BYREF
  char Dst[260]; // [esp+408h] [ebp-108h] BYREF

  v2 = (_DWORD *)*(this + 0x225); /*0x71e47c*/
  strcpy_s(Dst, 0x104u, Src); /*0x71e490*/
  Shared_NoOpVirtual_60D0A0(Dst); /*0x71e49d*/
  sub_748760(Dir, Dst); /*0x71e4b1*/
  if ( v2 ) /*0x71e4b8*/
  {
    while ( 1 ) /*0x71e4c0*/
    {
      v3 = v2[2]; /*0x71e4c0*/
      v2 = (_DWORD *)*v2; /*0x71e4cb*/
      if ( (*(unsigned __int8 (__thiscall **)(int, char *))(*(_DWORD *)v3 + 4))(v3, v12) ) /*0x71e4d5*/
        break; /*0x71e4d5*/
      if ( !v2 ) /*0x71e4dd*/
        return 0; /*0x71e4dd*/
    }
    LODWORD(v9) = 0x8000; /*0x71e4e1*/
    NiFile_Indirect = NiFile_GetNiFile_Indirect((int)Dst, 0, v9); /*0x71e4f0*/
    v5 = (void (__thiscall ***)(_DWORD, int))NiFile_Indirect; /*0x71e4f5*/
    if ( NiFile_Indirect ) /*0x71e4fc*/
    {
      v6 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)NiFile_Indirect + 4))(NiFile_Indirect, v10) == 0; /*0x71e509*/
      v7 = **v5; /*0x71e50b*/
      if ( !v6 ) /*0x71e511*/
      {
        v7(v5, 1); /*0x71e513*/
        return 1; /*0x71e52c*/
      }
      v7(v5, 1); /*0x71e52f*/
    }
  }
  return 0; /*0x71e517*/
}
