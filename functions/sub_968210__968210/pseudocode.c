float *__cdecl sub_968210(int a1)
{
  float *v1; // eax
  float *v2; // esi

  v1 = (float *)FormHeapAlloc(0x40u);
  if ( v1 )
  {
    v2 = sub_961580(
           v1,
           &flt_B258F4,
           &Vector3_InitValue_,
           (float *)&dword_B258D0,
           (float *)&dword_B258DC,
           (float *)&dword_B258E8);
    (**(void (__thiscall ***)(float *, int))v2)(v2, a1);
    return v2;
  }
  else
  {
    (**(void (__thiscall ***)(_DWORD, int))0)(0, a1);
    return 0;
  }
}
