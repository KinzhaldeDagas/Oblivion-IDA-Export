char __cdecl sub_4F7AF0(int a1, int a2, unsigned int a3, double *a4)
{
  int v4; // edi
  char v5; // al

  *a4 = 0.0; /*0x4f7afc*/
  v4 = 0; /*0x4f7afe*/
  if ( a2 ) /*0x4f7b02*/
  {
    if ( (unsigned int)*(unsigned __int8 *)(a2 + 4) - 0x31 <= 2 ) /*0x4f7b0e*/
      v4 = a2; /*0x4f7b10*/
  }
  if ( a1 ) /*0x4f7b19*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f7b25*/
    {
      if ( v4 ) /*0x4f7b2d*/
      {
        if ( a3 > 5 ) /*0x4f7b36*/
          v5 = sub_675C40(&qword_B3BB2C[0x75], a1, v4, a1, 0xFFFFFFFF, 0, 0xFFFFFFFF); /*0x4f7b52*/
        else
          v5 = sub_675C40(&qword_B3BB2C[0x75], a1, v4, a1, a3, 0, 0xFFFFFFFF); /*0x4f7b42*/
        if ( v5 ) /*0x4f7b59*/
          *a4 = 1.0; /*0x4f7b5d*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f7b5f*/
    Interface_ConsolePrint("GetCrime >> %0.2f", *a4); /*0x4f7b76*/
  return 1; /*0x4f7b7e*/
}
