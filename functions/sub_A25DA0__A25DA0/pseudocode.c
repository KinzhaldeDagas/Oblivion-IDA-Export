void __cdecl sub_A25DA0()
{
  unsigned int *v0; // ebx
  unsigned int v1; // esi
  Crime *v2; // ebp
  _DWORD *v3; // eax
  float v4; // esi
  float v5; // esi
  float v6; // esi
  LONG (__stdcall *v7)(volatile LONG *); // ebp
  float v8; // esi
  int v9; // [esp+0h] [ebp-14h]

  v0 = (unsigned int *)&qword_B3BB2C[0x7F]; /*0x6783c6*/
  v9 = 6; /*0x6783c9*/
  do /*0x678421*/
  {
    v1 = *v0; /*0x6783d0*/
    if ( *v0 ) /*0x6783d0*/
    {
      while ( 1 ) /*0x6783d6*/
      {
        v2 = *(Crime **)v1; /*0x6783d6*/
        if ( !*(_DWORD *)v1 ) /*0x6783d6*/
          break; /*0x6783d6*/
        Crime_Destructor(*(Crime **)v1); /*0x6783de*/
        FormHeapFree((unsigned int)v2); /*0x6783e4*/
        v3 = *(_DWORD **)(v1 + 4); /*0x6783e9*/
        if ( v3 ) /*0x6783f1*/
        {
          *(_DWORD *)(v1 + 4) = v3[1]; /*0x6783f6*/
          *(_DWORD *)v1 = *v3; /*0x6783fc*/
          FormHeapFree((unsigned int)v3); /*0x6783fe*/
        }
        else
        {
          *(_DWORD *)v1 = 0; /*0x678408*/
        }
      }
    }
    FormHeapFree(v1); /*0x678411*/
    ++v0; /*0x678419*/
    --v9; /*0x67841c*/
  }
  while ( v9 ); /*0x678421*/
  if ( LODWORD(qword_B3BB2C[0x8A]) ) /*0x678425*/
  {
    do /*0x678444*/
    {
      v4 = *(float *)(LODWORD(qword_B3BB2C[0x8A]) + 4); /*0x678433*/
      FormHeapFree(LODWORD(qword_B3BB2C[0x8A])); /*0x678437*/
      qword_B3BB2C[0x8A] = v4; /*0x678441*/
    }
    while ( v4 != 0.0 ); /*0x678444*/
  }
  qword_B3BB2C[0x89] = 0.0; /*0x678446*/
  if ( LODWORD(qword_B3BB2C[0x8E]) ) /*0x678449*/
  {
    do /*0x678464*/
    {
      v5 = *(float *)(LODWORD(qword_B3BB2C[0x8E]) + 4); /*0x678453*/
      FormHeapFree(LODWORD(qword_B3BB2C[0x8E])); /*0x678457*/
      qword_B3BB2C[0x8E] = v5; /*0x678461*/
    }
    while ( v5 != 0.0 ); /*0x678464*/
  }
  qword_B3BB2C[0x8D] = 0.0; /*0x678469*/
  sub_643230((unsigned int **)&qword_B3BB2C[0x94]); /*0x678471*/
  BSSimpleList_Clear(&qword_B3BB2C[0x8F]); /*0x67847e*/
  v6 = qword_B3BB2C[0x87]; /*0x678483*/
  v7 = InterlockedDecrement; /*0x678488*/
  if ( v6 != 0.0 && !v7((volatile LONG *)(LODWORD(v6) + 4)) ) /*0x678499*/
    (**(void (__thiscall ***)(float, int))LODWORD(v6))(COERCE_FLOAT(LODWORD(v6)), 1); /*0x6784ab*/
  v8 = qword_B3BB2C[0x85]; /*0x6784ad*/
  if ( v8 != 0.0 && !v7((volatile LONG *)(LODWORD(v8) + 4)) ) /*0x6784bd*/
    (**(void (__thiscall ***)(float, int))LODWORD(v8))(COERCE_FLOAT(LODWORD(v8)), 1); /*0x6784cf*/
  BSSimpleList_Clear(&qword_B3BB2C[0x7B]); /*0x6784d9*/
  BSSimpleList_Clear(&qword_B3BB2C[0x78]); /*0x6784e6*/
  BSSimpleList_Clear(&qword_B3BB2C[0x75]); /*0x6784f5*/
}
