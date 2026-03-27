HavokError *__thiscall HavokError::HavokError(HavokError *this)
{
  int *v2; // esi

  *((_WORD *)this + 3) = 1;
  *(_DWORD *)this = &HavokError::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0x80000000;
  v2 = (int *)((char *)this + 0x14);
  sub_8B0E10((char *)this + 0x14);
  sub_8B0E80(v2, 0x6E8D163Bu, 1);
  sub_8B0E80(v2, 0x6CEE9071u, 1);
  sub_8B0E80(v2, 0xF0DE4355, 1);
  sub_8B0E80(v2, 0x2FF8C16Fu, 1);
  sub_8B0E80(v2, 0xF0FE4356, 1);
  sub_8B0E80(v2, 0x275EC1FDu, 1);
  sub_8B0E80(v2, 0x1ADAAD0Eu, 1);
  sub_8B0E80(v2, 0x70DC41CBu, 1);
  sub_8B0E80(v2, 0x1FF88F0Eu, 1);
  sub_8B0E80(v2, 0x475D86B1u, 1);
  sub_8B0E80(v2, 0x6FE84A9Bu, 1);
  sub_8B0E80(v2, 0x21C8AB2Au, 1);
  sub_8B0E80(v2, 0x309314D9u, 1);
  sub_8B0E80(v2, 0xAD67FA3A, 1);
  sub_8B0E80(v2, 0xAD67FA3A, 1);
  sub_8B0E80(v2, 0xF032DE34, 1);
  sub_8B0E80(v2, 0x34DF5494u, 1);
  sub_8B0E80(v2, 0xF02E32DF, 1);
  sub_8B0E80(v2, 0xF043D534, 1);
  sub_8B0E80(v2, 0xF02DE43E, 1);
  sub_8B0E80(v2, 0xF02132DF, 1);
  sub_8B0E80(v2, 0xF02132FF, 1);
  sub_8B0E80(v2, 0x2A1DB936u, 1);
  sub_8B0E80(v2, 0x68C4E1DCu, 1);
  sub_5340F0(this, "hkVisualDebugger.cpp", 0x26);
  sub_5340F0(this, "hkVisualDebugger.cpp", 0x56);
  sub_5340F0(this, "hkVisualDebugger.cpp", 0x5D);
  sub_5340F0(this, "hkVisualDebugger.cpp", 0x6A);
  sub_5340F0(this, "hkVisualDebugger.cpp", 0x6E);
  sub_5340F0(this, "hkVisualDebugger.cpp", 0x73);
  sub_5340F0(this, "hkVisualDebugger.cpp", 0x7E);
  sub_5340F0(this, "hkVisualDebugger.cpp", 0x85);
  sub_5340F0(this, "hkVisualDebugger.cpp", 0xBF);
  sub_5340F0(this, "hkVisualDebugger.cpp", 0xF6);
  sub_5340F0(this, "hkVisualDebugger.cpp", 0x115);
  *((_BYTE *)this + 0x20) = 0;
  return this;
}
