char __usercall sub_4F74B0@<al>(double i@<st1>, double a2@<st0>, int a3, int a4, int a5, double *a6)
{
  float *v6; // ebx
  float *v7; // eax
  double v8; // st5
  double v9; // st4
  double v10; // st5
  double v11; // rt0
  double v12; // rt1
  double v13; // st4
  double j; // st4
  float v16; // [esp+2Ch] [ebp-1Ch]
  float v17; // [esp+30h] [ebp-18h]
  float v18; // [esp+30h] [ebp-18h]
  double v19; // [esp+30h] [ebp-18h]
  float v20[3]; // [esp+3Ch] [ebp-Ch] BYREF

  *a6 = 0.0; /*0x4f74c6*/
  if ( a3 ) /*0x4f74c8*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x188))(a3) ) /*0x4f74d8*/
    {
      if ( a4 ) /*0x4f74e6*/
      {
        v6 = (float *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a3 + 0x174))( /*0x4f74fb*/
                        a3,
                        a2,
                        i);
        v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x174))(a4); /*0x4f7505*/
        v16 = v7[1] - v6[1]; /*0x4f750d*/
        v17 = v7[2] - v6[2]; /*0x4f7517*/
        v20[0] = *v7 - *v6; /*0x4f7524*/
        v20[1] = v16; /*0x4f752c*/
        v20[2] = v17; /*0x4f7534*/
        v18 = Vector3_CalculateHeadingRadiansXY(v20); /*0x4f753f*/
        v19 = v18; /*0x4f7550*/
        (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 0x1E0))(a3); /*0x4f7556*/
        *a6 = v19 - 0.0; /*0x4f755c*/
        v8 = dbl_A491E0; /*0x4f7568*/
        v9 = dbl_A3D5B0; /*0x4f756d*/
        if ( v8 > v19 - 0.0 ) /*0x4f7573*/
        {
          while ( 1 ) /*0x4f757f*/
          {
            *a6 = *a6 + v9; /*0x4f757f*/
            v12 = v9; /*0x4f7581*/
            v13 = v8; /*0x4f7581*/
            v10 = v12; /*0x4f7581*/
            if ( v13 <= *a6 ) /*0x4f758a*/
              break; /*0x4f758a*/
            v11 = v13; /*0x4f7579*/
            v9 = v10; /*0x4f7579*/
            v8 = v11; /*0x4f7579*/
          }
        }
        else
        {
          v10 = v9; /*0x4f7575*/
        }
        for ( j = dbl_A3D5B8; j < *a6; *a6 = *a6 - v10 ) /*0x4f759b*/
          ; /*0x4f75a1*/
        *a6 = *a6 * dbl_A30DC8; /*0x4f75b8*/
      }
    }
  }
  if ( MEMORY[0xB361AC] )
    Interface_ConsolePrint("Heading Angle: %0.2f", *a6);
  return 1; /*0x4f75d8*/
}
