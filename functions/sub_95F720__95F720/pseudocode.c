float *__cdecl sub_95F720(int a1)
{
  float *v1; // eax
  float *v2; // esi

  v1 = (float *)FormHeapAlloc(0x20u);
  if ( v1 )
  {
    v2 = sub_95F620(v1, &Vector3_InitValue_, (float *)&dword_B258DC);
    (**(void (__thiscall ***)(float *, int))v2)(v2, a1);
    return v2;
  }
  else
  {
    (**(void (__thiscall ***)(_DWORD, int))0)(0, a1);
    return 0;
  }
}
