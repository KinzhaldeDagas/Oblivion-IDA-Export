int __thiscall sub_9433A0(int this, int *a2)
{
  int v3; // ebx
  int result; // eax

  v3 = *(_DWORD *)(this + 0xC); /*0x9433a9*/
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 0x20))(*(_DWORD *)(this + 8)); /*0x9433ac*/
  if ( v3 > 0 ) /*0x9433b1*/
  {
    do /*0x9433d6*/
    {
      *a2 = result; /*0x9433c0*/
      a2[1] = 0; /*0x9433c2*/
      a2 += 4; /*0x9433cf*/
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 8) + 0x24))(*(_DWORD *)(this + 8), result); /*0x9433d2*/
      --v3; /*0x9433d5*/
    }
    while ( v3 ); /*0x9433d6*/
  }
  return result; /*0x9433d9*/
}
