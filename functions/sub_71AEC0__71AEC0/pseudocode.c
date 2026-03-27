char __thiscall sub_71AEC0(_DWORD *this, char *FullPath, int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int8 (__thiscall *v8)(_DWORD *, _BYTE *); // edx
  _DWORD *v9; // esi
  void (__thiscall ***NiFile_Indirect)(_DWORD, int); // edi
  bool v11; // zf
  void (__thiscall *v12)(_DWORD, int); // edx
  void (__thiscall ***v13)(_DWORD, _DWORD); // ecx
  __int64 v15; // [esp-4h] [ebp-428h]
  char Dir[259]; // [esp+1Ch] [ebp-408h] BYREF
  _BYTE v17[769]; // [esp+11Fh] [ebp-305h] BYREF

  sub_748760(Dir, FullPath);
  v8 = *(unsigned __int8 (__thiscall **)(_DWORD *, _BYTE *))(*(this + 0x20) + 4);
  v9 = this + 0x20;
  if ( v8(v9, v17) )
  {
    LODWORD(v15) = 0x8000;
    NiFile_Indirect = (void (__thiscall ***)(_DWORD, int))NiFile_GetNiFile_Indirect((int)FullPath, 0, v15);
    if ( NiFile_Indirect )
    {
      if ( ((unsigned __int8 (__thiscall *)(void (__thiscall ***)(_DWORD, int)))(*NiFile_Indirect)[1])(NiFile_Indirect) )
      {
        v11 = (*(unsigned __int8 (__thiscall **)(_DWORD *, void (__thiscall ***)(_DWORD, int), int, int, int, int, int))(*v9 + 0xC))(
                v9,
                NiFile_Indirect,
                a5,
                a6,
                a3,
                a4,
                a7) == 0;
        v12 = **NiFile_Indirect;
        v13 = NiFile_Indirect;
        if ( !v11 )
        {
          v12(NiFile_Indirect, 1);
          return 1;
        }
      }
      else
      {
        v12 = **NiFile_Indirect;
        v13 = NiFile_Indirect;
      }
      v12(v13, 1);
    }
  }
  return 0;
}
