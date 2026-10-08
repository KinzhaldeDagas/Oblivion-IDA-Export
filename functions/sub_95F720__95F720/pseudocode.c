float *__cdecl sub_95F720(int a1)
{
  float *v1; // eax
  float *v2; // esi

  v1 = (float *)FormHeapAlloc(0x20u); /*0x95f723*/
  if ( v1 ) /*0x95f72d*/
  {
    v2 = sub_95F620(v1, &g_zeroNiPoint3.x, &stru_B258DC.x); /*0x95f744*/
    (**(void (__thiscall ***)(float *, int))v2)(v2, a1); /*0x95f74d*/
    return v2; /*0x95f74f*/
  }
  else
  {
    (**(void (__thiscall ***)(_DWORD, int))0)(0, a1); /*0x95f760*/
    return 0; /*0x95f762*/
  }
}
