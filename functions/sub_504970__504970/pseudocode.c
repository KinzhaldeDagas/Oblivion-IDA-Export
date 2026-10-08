char __cdecl Cmd_GetWeaponAnimType(int a1, int a2, _DWORD *a3, int a4, int a5, int a6, double *a7)
{
  if ( a3 ) /*0x504976*/
    return CmdHelper_GetWeaponAnimType(a3, 0, 0, a7); /*0x504982*/
  else
    return 1; /*0x50498b*/
}
