BOOL __stdcall sub_441E90(_DWORD *a1)
{
  char v1; // cl
  int v2; // ecx
  BOOL result; // eax

  v1 = *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a1 + 0x170))(a1) + 4); /*0x441ea1*/
  result = 0; /*0x441ee0*/
  if ( (a1[2] & 0x20) == 0 && (a1[2] & 0x800) == 0 ) /*0x441eb6*/
  {
    if ( v1 == 0x1A ) /*0x441ebb*/
      return 1; /*0x441ebb*/
    if ( v1 == 0x12 ) /*0x441ec0*/
      return 1; /*0x441ec0*/
    v2 = a1[7]; /*0x441ec2*/
    if ( !v2 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 0xF4))(v2) ) /*0x441ed1*/
      return 1; /*0x441eaf*/
  }
  return result; /*0x441edc*/
}
