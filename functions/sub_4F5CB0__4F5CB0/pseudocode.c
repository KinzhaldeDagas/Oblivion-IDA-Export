char __cdecl sub_4F5CB0(void *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      if ( ((*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x18C))(a1) == 4 || sub_5E3290(a1))
        && ((*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x380))(a1)
         || (*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x388))(a1)) )
      {
        *a4 = 1.0;
      }
    }
  }
  return 1;
}
