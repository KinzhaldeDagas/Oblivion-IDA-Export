char __cdecl sub_4F7800(_DWORD *a1, int a2, int a3, double *a4)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  double v7; // st7

  *a4 = 0.0; /*0x4f780e*/
  if ( a1 ) /*0x4f7810*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) ) /*0x4f781c*/
    {
      v4 = a1[0x16]; /*0x4f7822*/
      if ( v4 ) /*0x4f7827*/
      {
        v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0xEC))(v4, 1); /*0x4f7833*/
        if ( v5 ) /*0x4f7837*/
        {
          v6 = *(_DWORD *)(v5 + 8); /*0x4f7839*/
          if ( v6 ) /*0x4f783e*/
          {
            if ( *(_BYTE *)(v6 + 4) == 0x21 ) /*0x4f7844*/
            {
              switch ( *(_BYTE *)(v6 + 0x90) ) /*0x4f7852*/
              {
                case 0: /*0x4f7852*/
                case 1: /*0x4f7852*/
                  v7 = 1.0; /*0x4f7859*/
                  goto LABEL_11; /*0x4f785b*/
                case 2: /*0x4f7852*/
                case 3: /*0x4f7852*/
                  v7 = dbl_A3D0C0; /*0x4f785d*/
                  goto LABEL_11; /*0x4f7863*/
                case 5: /*0x4f7852*/
                  v7 = dbl_A30E48; /*0x4f7865*/
LABEL_11:
                  *a4 = v7; /*0x4f786b*/
                  break; /*0x4f786b*/
                default:
                  break;
              }
            }
          }
        }
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f786d*/
    Interface_ConsolePrint("Get Weapon Skill >> %0.2f", *a4); /*0x4f7883*/
  return 1; /*0x4f788b*/
}
