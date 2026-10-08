int __thiscall sub_71AFB0(_DWORD *this, char *FullPath, int a3)
{
  unsigned __int8 (__thiscall *v4)(_DWORD *, _BYTE *); // edx
  _DWORD *v5; // esi
  int NiFile_Indirect; // edi
  int v7; // esi
  __int64 v9; // [esp-4h] [ebp-418h]
  char Dir[259]; // [esp+Ch] [ebp-408h] BYREF
  _BYTE v11[769]; // [esp+10Fh] [ebp-305h] BYREF

  sub_748760(Dir, FullPath); /*0x71afdc*/
  v4 = *(unsigned __int8 (__thiscall **)(_DWORD *, _BYTE *))(*(this + 0x20) + 4); /*0x71afe7*/
  v5 = this + 0x20; /*0x71afea*/
  if ( v4(v5, v11) ) /*0x71affa*/
  {
    LODWORD(v9) = 0x8000; /*0x71b000*/
    NiFile_Indirect = NiFile_GetNiFile_Indirect((int)FullPath, 0, v9); /*0x71b00d*/
    if ( NiFile_Indirect ) /*0x71b014*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)NiFile_Indirect + 4))(NiFile_Indirect) ) /*0x71b01d*/
      {
        v7 = (*(int (__thiscall **)(_DWORD *, int, int))(*v5 + 8))(v5, NiFile_Indirect, a3); /*0x71b02e*/
        (**(void (__thiscall ***)(int, int))NiFile_Indirect)(NiFile_Indirect, 1); /*0x71b038*/
        if ( v7 ) /*0x71b03c*/
          return v7; /*0x71b040*/
      }
      else
      {
        (**(void (__thiscall ***)(int, int))NiFile_Indirect)(NiFile_Indirect, 1); /*0x71b04a*/
      }
    }
  }
  return 0; /*0x71b04e*/
}
