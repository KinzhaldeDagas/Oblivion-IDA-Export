bool __cdecl sub_8975C0(int a1, int a2)
{
  bool result; // al
  int v3; // eax

  result = 0; /*0x8975c5*/
  if ( a1 ) /*0x8975c9*/
  {
    if ( !a2 || (v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x58))(a1, a2)) == 0 ) /*0x8975df*/
      v3 = a1; /*0x8975e1*/
    return *(float *)(v3 + 0x84) > 0.0; /*0x8975f0*/
  }
  return result; /*0x8975f4*/
}
