int __thiscall sub_8F5FA0(_DWORD *this)
{
  bool v2; // zf
  int result; // eax
  HMODULE v4; // [esp-8h] [ebp-Ch]

  result = dword_BA81C4 - 1;
  v2 = dword_BA81C4 == 1;
  *this = &off_A9B3DC;
  dword_BA81C4 = result;
  if ( v2 )
  {
    v4 = hModule;
    dword_BA81C0 = 0;
    dword_BA81BC = 0;
    dword_BA81B8 = 0;
    dword_BA81B4 = 0;
    dword_BA81B0 = 0;
    dword_BA81AC = 0;
    dword_BA81A8 = 0;
    dword_BA81A4 = 0;
    result = FreeLibrary(v4);
    hModule = 0;
  }
  *this = &hkBaseObject::`vftable';
  return result;
}
