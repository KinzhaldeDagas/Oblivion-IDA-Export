LONG __thiscall sub_6C4790(int **this, LONG *a2)
{
  int *v3; // eax
  int v4; // eax
  int v5; // eax
  int *v6; // edi
  LONG result; // eax
  int v8; // esi
  bool v9; // zf

  v3 = *(this + 1); /*0x6c4794*/
  if ( *(this + 2) == v3 ) /*0x6c479b*/
  {
    if ( v3 ) /*0x6c479f*/
      v4 = 2 * (_DWORD)v3; /*0x6c47a1*/
    else
      v4 = 1; /*0x6c47a5*/
    sub_6C40A0(this, v4); /*0x6c47ab*/
  }
  v5 = (int)*(this + 2); /*0x6c47b0*/
  v6 = &(*this)[v5]; /*0x6c47b9*/
  result = v5 + 1; /*0x6c47bc*/
  *(this + 2) = (int *)result; /*0x6c47bf*/
  v8 = *v6; /*0x6c47c2*/
  if ( *v6 != *a2 ) /*0x6c47c6*/
  {
    if ( v8 ) /*0x6c47ca*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x6c47d0*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x6c47e6*/
    }
    result = *a2; /*0x6c47e8*/
    v9 = *a2 == 0; /*0x6c47ea*/
    *v6 = *a2; /*0x6c47ec*/
    if ( !v9 ) /*0x6c47ee*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x6c47fa*/
  }
  return result; /*0x6c47f0*/
}
