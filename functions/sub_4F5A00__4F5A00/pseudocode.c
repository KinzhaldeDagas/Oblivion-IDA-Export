char __cdecl sub_4F5A00(char *a1, int a2, int a3, double *a4)
{
  const char *v4; // edi

  *a4 = 0.0; /*0x4f5a07*/
  v4 = 0; /*0x4f5a0f*/
  if ( a1 ) /*0x4f5a13*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f5a1f*/
    {
      v4 = a1; /*0x4f5a27*/
      if ( sub_5E8870(a1) ) /*0x4f5a29*/
        *a4 = 1.0; /*0x4f5a34*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f5a36*/
  {
    if ( 0.0 != *a4 ) /*0x4f5a49*/
    {
      Interface_ConsolePrint("%s  is offering services", v4); /*0x4f5a50*/
      return 1; /*0x4f5a5d*/
    }
    Interface_ConsolePrint("%s is not offering services", v4); /*0x4f5a63*/
  }
  return 1; /*0x4f5a58*/
}
