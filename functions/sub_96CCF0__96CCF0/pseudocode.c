float *__cdecl sub_96CCF0(int a1)
{
  float *v1; // eax
  float *v2; // esi

  v1 = (float *)FormHeapAlloc(0x14u); /*0x96ccf3*/
  if ( v1 ) /*0x96ccfd*/
  {
    v2 = sub_96C420(v1, 1.0, (int)&g_zeroNiPoint3); /*0x96cd15*/
    (**(void (__thiscall ***)(float *, int))v2)(v2, a1); /*0x96cd1e*/
    return v2; /*0x96cd20*/
  }
  else
  {
    (**(void (__thiscall ***)(_DWORD, int))0)(0, a1); /*0x96cd31*/
    return 0; /*0x96cd33*/
  }
}
