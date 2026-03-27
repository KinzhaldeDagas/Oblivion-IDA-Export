NiAVObject *__thiscall sub_749F90(char **this, volatile LONG *a2)
{
  NiAVObject *v3; // eax
  NiAVObject *v4; // esi

  v3 = (NiAVObject *)FormHeapAlloc(0xF0u);
  if ( v3 )
  {
    v4 = sub_749EE0(v3);
    sub_749A70(this, (int)v4, a2);
    return v4;
  }
  else
  {
    sub_749A70(this, 0, a2);
    return 0;
  }
}
