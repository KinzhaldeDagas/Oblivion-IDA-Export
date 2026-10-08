void __userpurge sub_572F60(double a1@<st2>, char a2)
{
  int i; // ebp
  int v3; // edx
  void (__thiscall ***v4)(_DWORD, int); // edi
  float v5; // [esp+10h] [ebp-8h]
  float v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h] BYREF

  for ( i = 0; i < 3; ++i ) /*0x572f66*/
  {
    v3 = *(_DWORD *)(0x18 * i + 0xB12DD0); /*0x572f76*/
    if ( v3 ) /*0x572f86*/
    {
      if ( *(_BYTE *)(0x18 * i + 0xB12DC8) ) /*0x572f8c*/
      {
        if ( a2 ) /*0x572f99*/
        {
          if ( i == 2 ) /*0x572f9e*/
            sub_5ADB40(a1, 0.0); /*0x572fa0*/
        }
        if ( *(float *)(0x18 * i + 0xB12DD4) < 1.0 ) /*0x572faf*/
        {
          a1 = 1.0; /*0x572fb8*/
          v5 = 1.0 / *(float *)(0x18 * i + 0xB12DCC) * *(float *)&MEMORY[0xB33E90][0xC] /*0x572fc5*/
             + *(float *)(0x18 * i + 0xB12DD4);
          *(float *)(0x18 * i + 0xB12DD4) = v5; /*0x572fcd*/
          if ( v5 > 1.0 ) /*0x572fd7*/
            *(float *)(0x18 * i + 0xB12DD4) = 1.0; /*0x572fd9*/
          sub_4A2A90(*(_DWORD *)(0x18 * i + 0xB12DD0), *(float *)(0x18 * i + 0xB12DD4)); /*0x572feb*/
        }
      }
      else if ( *(float *)(0x18 * i + 0xB12DD4) > 0.0 ) /*0x573000*/
      {
        a1 = 1.0 / *(float *)(0x18 * i + 0xB12DCC) * *(float *)&MEMORY[0xB33E90][0xC]; /*0x573055*/
        v6 = *(float *)(0x18 * i + 0xB12DD4) - a1; /*0x57305d*/
        *(float *)(0x18 * i + 0xB12DD4) = v6; /*0x573065*/
        if ( v6 < 0.0 ) /*0x57306f*/
          *(float *)(0x18 * i + 0xB12DD4) = 0.0; /*0x573071*/
        sub_4A2A90(v3, *(float *)(0x18 * i + 0xB12DD4)); /*0x573080*/
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v3 + 0x1C) + 0x88))( /*0x573015*/
          *(_DWORD *)(v3 + 0x1C),
          &v7,
          *(_DWORD *)(0x18 * i + 0xB12DD0));
        if ( v7 ) /*0x57301d*/
        {
          v4 = (void (__thiscall ***)(_DWORD, int))v7; /*0x57301f*/
          if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x573025*/
            (**v4)(v4, 1); /*0x57303b*/
        }
        *(_DWORD *)(0x18 * i + 0xB12DD0) = 0; /*0x57303f*/
        *(float *)(0x18 * i + 0xB12DD4) = 0.0; /*0x573046*/
      }
    }
  }
}
