char __cdecl sub_4F7800(_DWORD *a1, int a2, int a3, double *a4)
{
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  double v10; // st5

  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) )
    {
      v7 = a1[0x16];
      if ( v7 )
      {
        v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0xEC))(v7, 1);
        if ( v8 )
        {
          v9 = *(_DWORD *)(v8 + 8);
          if ( v9 )
          {
            if ( *(_BYTE *)(v9 + 4) == 0x21 )
            {
              switch ( *(_BYTE *)(v9 + 0x90) )
              {
                case 0:
                case 1:
                  v10 = 1.0;
                  goto LABEL_11;
                case 2:
                case 3:
                  v10 = dbl_A3D0C0;
                  goto LABEL_11;
                case 5:
                  v10 = dbl_A30E48;
LABEL_11:
                  *a4 = v10;
                  break;
                default:
                  break;
              }
            }
          }
        }
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Get Weapon Skill >> %0.2f", *a4);
  return 1;
}
