// GetWeaponAnimType helper: derives script return from actor weapon animation state on the low/high process.
char __cdecl CmdHelper_GetWeaponAnimType(_DWORD *a1, int a2, int a3, double *a4)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  double v7; // st7

  *a4 = 0.0; /*0x4f775e*/
  if ( a1 ) /*0x4f7760*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) ) /*0x4f776c*/
    {
      v4 = a1[0x16]; /*0x4f7772*/
      if ( v4 ) /*0x4f7777*/
      {
        v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0xEC))(v4, 1); /*0x4f7783*/
        if ( v5 ) /*0x4f7787*/
        {
          v6 = *(_DWORD *)(v5 + 8); /*0x4f7789*/
          if ( v6 ) /*0x4f778e*/
          {
            if ( *(_BYTE *)(v6 + 4) == 0x21 ) /*0x4f7794*/
            {
              switch ( *(_BYTE *)(v6 + 0x90) ) /*0x4f77a2*/
              {
                case 0: /*0x4f77a2*/
                case 2: /*0x4f77a2*/
                  v7 = 1.0; /*0x4f77a9*/
                  goto LABEL_11; /*0x4f77ab*/
                case 1: /*0x4f77a2*/
                case 3: /*0x4f77a2*/
                  v7 = dbl_A3D0C0; /*0x4f77ad*/
                  goto LABEL_11; /*0x4f77b3*/
                case 5: /*0x4f77a2*/
                  v7 = dbl_A30E48; /*0x4f77b5*/
LABEL_11:
                  *a4 = v7; /*0x4f77bb*/
                  break; /*0x4f77bb*/
                default:
                  break;
              }
            }
          }
        }
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f77bd*/
    Interface_ConsolePrint("Get Weapon Anim >> %0.2f", *a4); /*0x4f77d3*/
  return 1; /*0x4f77db*/
}
