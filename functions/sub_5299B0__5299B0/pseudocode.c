bool __thiscall sub_5299B0(int *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int *v3; // esi
  int v4; // ebx

  v2 = a2; /*0x5299b3*/
  v3 = this + 0x12; /*0x5299b9*/
  if ( !a2 ) /*0x5299bc*/
    return 1; /*0x5299bc*/
  if ( this != (int *)0xFFFFFFB8 ) /*0x5299c0*/
  {
    do /*0x5299c2*/
    {
      v4 = *v3; /*0x5299c2*/
      if ( *v3 && ConditionList_EvaluateForActor((unsigned __int8 **)(v4 + 4), (Actor *)reference, 0) ) /*0x5299d3*/
      {
        if ( !v2 || !*v2 || *v2 != v4 ) /*0x5299e8*/
          return 0; /*0x5299e8*/
        v2 = (_DWORD *)v2[1]; /*0x5299ea*/
      }
      v3 = (int *)v3[1]; /*0x5299ed*/
    }
    while ( v3 ); /*0x5299c2*/
  }
  return !v2 || !v2[1] && !*v2; /*0x529a0d*/
}
