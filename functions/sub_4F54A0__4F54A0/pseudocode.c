char __usercall sub_4F54A0@<al>(double a1@<st1>, double a2@<st0>, int a3, int a4, int a5, double *a6)
{
  int v7; // eax
  int v8; // eax
  double v9; // st5
  float v11; // [esp+20h] [ebp+10h]

  *a6 = 0.0; /*0x4f54ae*/
  if ( a3 ) /*0x4f54b0*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3) ) /*0x4f54bc*/
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3); /*0x4f54cc*/
      if ( v7 ) /*0x4f54d0*/
      {
        v8 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v7 + 8))(v7, a2, a1); /*0x4f54d9*/
        if ( sub_4DE320((int)a6, v8) ) /*0x4f54dc*/
          v9 = 1.0; /*0x4f54e8*/
        else
          v9 = 0.0; /*0x4f54ec*/
        v11 = v9; /*0x4f54ee*/
        *a6 = v11; /*0x4f54f6*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f54f8*/
    Interface_ConsolePrint("HasFlames >> %0.2f", *a6); /*0x4f550e*/
  return 1; /*0x4f5516*/
}
