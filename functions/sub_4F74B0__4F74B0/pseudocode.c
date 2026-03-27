char __usercall sub_4F74B0@<al>(double i@<st1>, double a2@<st0>, int a3, int a4, int a5, double *a6)
{
  float *v7; // ebx
  float *v8; // eax
  double v9; // st5
  double v10; // st4
  double v11; // st5
  double v12; // rt0
  double v13; // rt1
  double v14; // st4
  double j; // st4
  float v17; // [esp+2Ch] [ebp-1Ch]
  float v18; // [esp+30h] [ebp-18h]
  float v19; // [esp+30h] [ebp-18h]
  double v20; // [esp+30h] [ebp-18h]
  float v21[3]; // [esp+3Ch] [ebp-Ch] BYREF

  *a6 = 0.0;
  if ( a3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x188))(a3) )
    {
      if ( a4 )
      {
        v7 = (float *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a3 + 0x174))(
                        a3,
                        a2,
                        i);
        v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x174))(a4);
        v17 = v8[1] - v7[1];
        v18 = v8[2] - v7[2];
        v21[0] = *v8 - *v7;
        v21[1] = v17;
        v21[2] = v18;
        v19 = sub_683CB0(v21);
        v20 = v19;
        (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 0x1E0))(a3);
        *a6 = v20 - 0.0;
        v9 = dbl_A491E0;
        v10 = dbl_A3D5B0;
        if ( v9 > v20 - 0.0 )
        {
          while ( 1 )
          {
            *a6 = *a6 + v10;
            v13 = v10;
            v14 = v9;
            v11 = v13;
            if ( v14 <= *a6 )
              break;
            v12 = v14;
            v10 = v11;
            v9 = v12;
          }
        }
        else
        {
          v11 = v10;
        }
        for ( j = dbl_A3D5B8; j < *a6; *a6 = *a6 - v11 )
          ;
        *a6 = *a6 * dbl_A30DC8;
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Heading Angle: %0.2f", *a6);
  return 1;
}
