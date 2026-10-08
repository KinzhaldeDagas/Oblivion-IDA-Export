int __thiscall sub_4120D0(_DWORD *this, int Dst)
{
  int result; // eax
  bool v4; // zf
  int v5; // eax
  int v6; // ecx
  int v7; // ecx

  SaveLoad_LoadData(g_TESSaveLoadGame, this + 1, 0x20u); /*0x4120df*/
  if ( (_WORD)Dst == 0xFFFF ) /*0x4120eb*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 2u); /*0x4120fa*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 9, 1u); /*0x41210b*/
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)this + 0x25, 1u); /*0x41211c*/
  result = Dst + 0xFFFF; /*0x412125*/
  v4 = (_WORD)Dst == 1; /*0x41212a*/
  Dst += 0xFFFF; /*0x41212d*/
  if ( !v4 ) /*0x412131*/
  {
    v5 = FormHeapAlloc(0x2Cu); /*0x412135*/
    if ( v5 ) /*0x41213f*/
    {
      *(_DWORD *)(v5 + 4) = 0; /*0x412143*/
      *(_DWORD *)(v5 + 8) = 0; /*0x412146*/
      *(_DWORD *)(v5 + 0xC) = 0; /*0x412149*/
      *(_DWORD *)(v5 + 0x10) = 0; /*0x41214c*/
      *(_DWORD *)(v5 + 0x14) = 0; /*0x41214f*/
      *(_DWORD *)(v5 + 0x18) = 0; /*0x412152*/
      *(_DWORD *)(v5 + 0x1C) = 0; /*0x412155*/
      *(_DWORD *)(v5 + 0x20) = 0; /*0x412158*/
      *(_BYTE *)(v5 + 0x24) = 0; /*0x41215b*/
      *(_BYTE *)(v5 + 0x25) = 0; /*0x41215e*/
      *(_DWORD *)(v5 + 0x28) = 0; /*0x412161*/
      *(_DWORD *)v5 = &IntSeenData::`vftable'; /*0x412164*/
      v6 = Dst; /*0x41216a*/
      *(this + 0xA) = v5; /*0x41216e*/
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x10))(v5, v6); /*0x412179*/
    }
    else
    {
      v7 = Dst; /*0x41217f*/
      *(this + 0xA) = 0; /*0x412185*/
      return (*(int (__thiscall **)(_DWORD, int))(MEMORY[0] + 0x10))(0, v7); /*0x412190*/
    }
  }
  return result; /*0x41217b*/
}
