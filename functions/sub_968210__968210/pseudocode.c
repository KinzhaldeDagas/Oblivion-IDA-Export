float *__cdecl sub_968210(int a1)
{
  float *v1; // eax
  float *v2; // esi

  v1 = (float *)FormHeapAlloc(0x40u); /*0x968213*/
  if ( v1 ) /*0x96821d*/
  {
    v2 = sub_961580(v1, &flt_B258F4, &g_zeroNiPoint3.x, &stru_B258D0.x, &stru_B258DC.x, &rhs.x); /*0x968243*/
    (**(void (__thiscall ***)(float *, int))v2)(v2, a1); /*0x96824c*/
    return v2; /*0x96824e*/
  }
  else
  {
    (**(void (__thiscall ***)(_DWORD, int))0)(0, a1); /*0x96825f*/
    return 0; /*0x968261*/
  }
}
