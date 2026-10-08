bool __cdecl sub_897580(int a1, int a2)
{
  bool result; // al
  int v3; // eax

  result = 0; /*0x897585*/
  if ( a1 ) /*0x897589*/
  {
    if ( !a2 || (v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x58))(a1, a2)) == 0 ) /*0x89759f*/
      v3 = a1; /*0x8975a1*/
    return *(float *)(v3 + 0x80) > 0.0; /*0x8975b0*/
  }
  return result; /*0x8975b4*/
}
