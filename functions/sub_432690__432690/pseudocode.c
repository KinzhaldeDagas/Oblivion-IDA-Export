_DWORD *__thiscall sub_432690(_DWORD *this, int a2, int a3, int *a4)
{
  int v5; // edi
  int v6; // eax
  bool v7; // zf

  *(this + 2) = 0; /*0x4326ba*/
  *(this + 3) = 0; /*0x4326cd*/
  *this = a2; /*0x4326d4*/
  *(this + 1) = a3; /*0x4326d6*/
  v5 = *(this + 2); /*0x4326d9*/
  if ( v5 != *a4 ) /*0x4326e6*/
  {
    if ( v5 ) /*0x4326ea*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 8)) ) /*0x4326f0*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x432706*/
    }
    v6 = *a4; /*0x432708*/
    v7 = *a4 == 0; /*0x43270a*/
    *(this + 2) = *a4; /*0x43270c*/
    if ( !v7 ) /*0x43270f*/
      InterlockedIncrement((volatile LONG *)(v6 + 8)); /*0x432715*/
  }
  return this; /*0x43271d*/
}
