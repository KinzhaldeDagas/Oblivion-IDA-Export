signed int *__cdecl sub_8B1950(signed int a1)
{
  signed int v1; // esi
  signed int *result; // eax

  v1 = a1;
  if ( a1 < 0x33 )
    v1 = 0x33;
  result = (signed int *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                           dword_BA7D98,
                           v1 + 0xD,
                           0x13);
  *result = a1;
  result[1] = v1;
  result[2] = 0;
  return result;
}
