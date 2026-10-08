unsigned int *__thiscall sub_7722B0(unsigned int *this, char a2)
{
  int v3; // ebp
  unsigned int *v4; // ebx
  unsigned int *v5; // eax
  int v6; // ebp
  unsigned int *v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // esi

  if ( (a2 & 2) != 0 ) /*0x7722b8*/
  {
    v3 = *(this + 0xFFFFFFFF); /*0x7722bc*/
    v4 = this + 0xFFFFFFFF; /*0x7722bf*/
    v5 = this + 0x18 * v3; /*0x7722c9*/
    v6 = v3 - 1; /*0x7722cb*/
    if ( v6 >= 0 ) /*0x7722ce*/
    {
      v7 = v5 + 5; /*0x7722d1*/
      do /*0x77231c*/
      {
        v8 = v7[0xFFFFFFE8]; /*0x7722d4*/
        v7 += 0xFFFFFFE8; /*0x7722d7*/
        if ( v8 ) /*0x7722dc*/
          sub_77CB50(*(_DWORD *)(v8 + 8)); /*0x7722e2*/
        sub_773620((NiD3DPass *)v7[0xFFFFFFFE]); /*0x7722ee*/
        v9 = v7[0xFFFFFFFC]; /*0x7722f3*/
        if ( v9 ) /*0x7722fb*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x772301*/
            (**(void (__thiscall ***)(unsigned int, int))v9)(v9, 1); /*0x772317*/
        }
        --v6; /*0x772319*/
      }
      while ( v6 >= 0 ); /*0x77231c*/
    }
    if ( (a2 & 1) != 0 ) /*0x772324*/
      FormHeapFree((unsigned int)v4); /*0x772327*/
    return v4; /*0x772330*/
  }
  else
  {
    sub_772100(this); /*0x772337*/
    if ( (a2 & 1) != 0 ) /*0x772341*/
      FormHeapFree((unsigned int)this); /*0x772344*/
    return this; /*0x77234c*/
  }
}
