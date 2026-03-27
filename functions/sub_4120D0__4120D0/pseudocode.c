int __thiscall sub_4120D0(_DWORD *this, int Dst)
{
  int result; // eax
  bool v4; // zf
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  size_t v8; // [esp-4h] [ebp-8h]
  size_t v9; // [esp-4h] [ebp-8h]
  size_t v10; // [esp-4h] [ebp-8h]

  LODWORD(v8) = 0x20;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 1, v8);
  if ( (_WORD)Dst == 0xFFFF )
  {
    LODWORD(v9) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v9);
  }
  LODWORD(v9) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 9, v9);
  LODWORD(v10) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0x25, v10);
  result = Dst + 0xFFFF;
  v4 = (_WORD)Dst == 1;
  Dst += 0xFFFF;
  if ( !v4 )
  {
    v5 = FormHeapAlloc(0x2Cu);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 4) = 0;
      *(_DWORD *)(v5 + 8) = 0;
      *(_DWORD *)(v5 + 0xC) = 0;
      *(_DWORD *)(v5 + 0x10) = 0;
      *(_DWORD *)(v5 + 0x14) = 0;
      *(_DWORD *)(v5 + 0x18) = 0;
      *(_DWORD *)(v5 + 0x1C) = 0;
      *(_DWORD *)(v5 + 0x20) = 0;
      *(_BYTE *)(v5 + 0x24) = 0;
      *(_BYTE *)(v5 + 0x25) = 0;
      *(_DWORD *)(v5 + 0x28) = 0;
      *(_DWORD *)v5 = &IntSeenData::`vftable';
      v6 = Dst;
      *(this + 0xA) = v5;
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x10))(v5, v6);
    }
    else
    {
      v7 = Dst;
      *(this + 0xA) = 0;
      return (*(int (__thiscall **)(_DWORD, int))(MEMORY[0] + 0x10))(0, v7);
    }
  }
  return result;
}
