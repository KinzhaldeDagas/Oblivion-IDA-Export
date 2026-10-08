HavokError *__thiscall HavokError::HavokError(HavokError *this)
{
  char **v2; // esi

  *((_WORD *)this + 3) = 1; /*0x53445a*/
  *(_DWORD *)this = &HavokError::`vftable'; /*0x534462*/
  *((_DWORD *)this + 2) = 0; /*0x53446c*/
  *((_DWORD *)this + 3) = 0; /*0x53446f*/
  *((_DWORD *)this + 4) = 0x80000000; /*0x534472*/
  v2 = (char **)((char *)this + 0x14); /*0x534479*/
  sub_8B0E10((char **)this + 5, 0); /*0x534483*/
  sub_8B0E80(v2, 0x6E8D163Bu, 1); /*0x534496*/
  sub_8B0E80(v2, 0x6CEE9071u, 1); /*0x5344a4*/
  sub_8B0E80(v2, 0xF0DE4355, 1); /*0x5344b2*/
  sub_8B0E80(v2, 0x2FF8C16Fu, 1); /*0x5344c0*/
  sub_8B0E80(v2, 0xF0FE4356, 1); /*0x5344ce*/
  sub_8B0E80(v2, 0x275EC1FDu, 1); /*0x5344dc*/
  sub_8B0E80(v2, 0x1ADAAD0Eu, 1); /*0x5344ea*/
  sub_8B0E80(v2, 0x70DC41CBu, 1); /*0x5344f8*/
  sub_8B0E80(v2, 0x1FF88F0Eu, 1); /*0x534506*/
  sub_8B0E80(v2, 0x475D86B1u, 1); /*0x534514*/
  sub_8B0E80(v2, 0x6FE84A9Bu, 1); /*0x534522*/
  sub_8B0E80(v2, 0x21C8AB2Au, 1); /*0x534530*/
  sub_8B0E80(v2, 0x309314D9u, 1); /*0x53453e*/
  sub_8B0E80(v2, 0xAD67FA3A, 1); /*0x53454c*/
  sub_8B0E80(v2, 0xAD67FA3A, 1); /*0x53455a*/
  sub_8B0E80(v2, 0xF032DE34, 1); /*0x534568*/
  sub_8B0E80(v2, 0x34DF5494u, 1); /*0x534576*/
  sub_8B0E80(v2, 0xF02E32DF, 1); /*0x534584*/
  sub_8B0E80(v2, 0xF043D534, 1); /*0x534592*/
  sub_8B0E80(v2, 0xF02DE43E, 1); /*0x5345a0*/
  sub_8B0E80(v2, 0xF02132DF, 1); /*0x5345ae*/
  sub_8B0E80(v2, 0xF02132FF, 1); /*0x5345bc*/
  sub_8B0E80(v2, 0x2A1DB936u, 1); /*0x5345ca*/
  sub_8B0E80(v2, 0x68C4E1DCu, 1); /*0x5345d8*/
  sub_5340F0((const void **)this, "hkVisualDebugger.cpp", 0x26); /*0x5345e6*/
  sub_5340F0((const void **)this, "hkVisualDebugger.cpp", 0x56); /*0x5345f4*/
  sub_5340F0((const void **)this, "hkVisualDebugger.cpp", 0x5D); /*0x534602*/
  sub_5340F0((const void **)this, "hkVisualDebugger.cpp", 0x6A); /*0x534610*/
  sub_5340F0((const void **)this, "hkVisualDebugger.cpp", 0x6E); /*0x53461e*/
  sub_5340F0((const void **)this, "hkVisualDebugger.cpp", 0x73); /*0x53462c*/
  sub_5340F0((const void **)this, "hkVisualDebugger.cpp", 0x7E); /*0x53463a*/
  sub_5340F0((const void **)this, "hkVisualDebugger.cpp", 0x85); /*0x53464b*/
  sub_5340F0((const void **)this, "hkVisualDebugger.cpp", 0xBF); /*0x53465c*/
  sub_5340F0((const void **)this, "hkVisualDebugger.cpp", 0xF6); /*0x53466d*/
  sub_5340F0((const void **)this, "hkVisualDebugger.cpp", 0x115); /*0x53467e*/
  *((_BYTE *)this + 0x20) = 0; /*0x534683*/
  return this; /*0x534688*/
}
