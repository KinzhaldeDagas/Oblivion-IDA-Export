char __cdecl sub_4F5CB0(void *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f5cbe*/
  if ( a1 ) /*0x4f5cc0*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f5ccc*/
    {
      if ( ((*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x18C))(a1) == 4 || sub_5E3290(a1)) /*0x4f5d08*/
        && ((*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x380))(a1)
         || (*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x388))(a1)) )
      {
        *a4 = 1.0; /*0x4f5d10*/
      }
    }
  }
  return 1; /*0x4f5d12*/
}
