int __cdecl sub_8F8DB0(int a1, int a2, int a3)
{
  int i; // esi
  int v4; // eax

  for ( i = 0; i < 3; ++i ) /*0x8f8dbb*/
  {
    v4 = *(unsigned __int16 *)(a2 + 2 * i); /*0x8f8dc2*/
    if ( (_WORD)v4 != 0xFFFF ) /*0x8f8dca*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x10))(a3, v4); /*0x8f8dd1*/
      *(_WORD *)(a2 + 2 * i) = 0xFFFF; /*0x8f8dd4*/
    }
  }
  return a2 + 0x20; /*0x8f8de3*/
}
