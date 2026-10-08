char __cdecl sub_4F5A80(_BYTE *a1, int a2, int a3, double *a4)
{
  double v5; // st7
  char *v6; // eax
  char *v8; // [esp+8h] [ebp+4h]

  if ( a1 ) /*0x4f5a87*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f5a93*/
    {
      v8 = sub_5FAA70(a1); /*0x4f5aa2*/
      v5 = (double)(int)v8; /*0x4f5aa6*/
      if ( (int)v8 < 0 ) /*0x4f5aaa*/
        v5 = v5 + flt_A2FC78; /*0x4f5aac*/
      *a4 = v5; /*0x4f5ab6*/
      if ( MEMORY[0xB361AC] ) /*0x4f5ab8*/
      {
        v6 = sub_5FAA70(a1); /*0x4f5ac3*/
        Interface_ConsolePrint("%s  has %d barter gold currently", a1, v6); /*0x4f5acf*/
      }
    }
  }
  return 1; /*0x4f5ad9*/
}
