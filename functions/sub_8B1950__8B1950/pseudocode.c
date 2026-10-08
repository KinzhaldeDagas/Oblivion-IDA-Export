signed int *__cdecl sub_8B1950(signed int a1)
{
  signed int v1; // esi
  signed int *result; // eax

  v1 = a1; /*0x8b1959*/
  if ( a1 < 0x33 ) /*0x8b195b*/
    v1 = 0x33; /*0x8b195d*/
  result = (signed int *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x8b1970*/
                           unk_BA7D98,
                           v1 + 0xD,
                           0x13);
  *result = a1; /*0x8b1973*/
  result[1] = v1; /*0x8b1976*/
  result[2] = 0; /*0x8b1979*/
  return result; /*0x8b1975*/
}
