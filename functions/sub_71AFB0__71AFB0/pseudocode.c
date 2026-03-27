int __thiscall sub_71AFB0(_DWORD *this, char *FullPath, int a3)
{
  unsigned __int8 (__thiscall *v4)(_DWORD *, _BYTE *); // edx
  _DWORD *v5; // esi
  int NiFile_Indirect; // edi
  int v7; // esi
  __int64 v9; // [esp-4h] [ebp-418h]
  char Dir[259]; // [esp+Ch] [ebp-408h] BYREF
  _BYTE v11[769]; // [esp+10Fh] [ebp-305h] BYREF

  sub_748760(Dir, FullPath);
  v4 = *(unsigned __int8 (__thiscall **)(_DWORD *, _BYTE *))(*(this + 0x20) + 4);
  v5 = this + 0x20;
  if ( v4(v5, v11) )
  {
    LODWORD(v9) = 0x8000;
    NiFile_Indirect = NiFile_GetNiFile_Indirect((int)FullPath, 0, v9);
    if ( NiFile_Indirect )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)NiFile_Indirect + 4))(NiFile_Indirect) )
      {
        v7 = (*(int (__thiscall **)(_DWORD *, int, int))(*v5 + 8))(v5, NiFile_Indirect, a3);
        (**(void (__thiscall ***)(int, int))NiFile_Indirect)(NiFile_Indirect, 1);
        if ( v7 )
          return v7;
      }
      else
      {
        (**(void (__thiscall ***)(int, int))NiFile_Indirect)(NiFile_Indirect, 1);
      }
    }
  }
  return 0;
}
