int __thiscall sub_8F5FA0(_DWORD *this)
{
  bool v2; // zf
  int result; // eax
  HMODULE v4; // [esp-8h] [ebp-Ch]

  result = unk_BA81C4 - 1; /*0x8f5fa8*/
  v2 = unk_BA81C4 == 1; /*0x8f5fa8*/
  *this = &off_A9B3DC; /*0x8f5fa9*/
  unk_BA81C4 = result; /*0x8f5faf*/
  if ( v2 ) /*0x8f5fb4*/
  {
    v4 = MEMORY[0xBA81C8]; /*0x8f5fbe*/
    unk_BA81C0 = 0; /*0x8f5fbf*/
    unk_BA81BC = 0; /*0x8f5fc5*/
    unk_BA81B8 = 0; /*0x8f5fcb*/
    unk_BA81B4 = 0; /*0x8f5fd1*/
    unk_BA81B0 = 0; /*0x8f5fd7*/
    unk_BA81AC = 0; /*0x8f5fdd*/
    unk_BA81A8 = 0; /*0x8f5fe3*/
    unk_BA81A4 = 0; /*0x8f5fe9*/
    result = FreeLibrary(v4); /*0x8f5fef*/
    MEMORY[0xBA81C8] = 0; /*0x8f5ff5*/
  }
  *this = &hkBaseObject::`vftable'; /*0x8f5ffc*/
  return result; /*0x8f6002*/
}
