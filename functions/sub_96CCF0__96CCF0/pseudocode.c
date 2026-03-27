float *__cdecl sub_96CCF0(int a1)
{
  float *v1; // eax
  float *v2; // esi

  v1 = (float *)FormHeapAlloc(0x14u);
  if ( v1 )
  {
    v2 = sub_96C420(v1, 1.0, (int)&Vector3_InitValue_);
    (**(void (__thiscall ***)(float *, int))v2)(v2, a1);
    return v2;
  }
  else
  {
    (**(void (__thiscall ***)(_DWORD, int))0)(0, a1);
    return 0;
  }
}
