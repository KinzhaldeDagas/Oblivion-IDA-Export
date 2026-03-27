unsigned int *__thiscall sub_730C20(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0xCu);
  v4 = (unsigned int *)v3;
  if ( v3 )
  {
    sub_721350(v3);
    *v4 = (unsigned int)&NiVertWeightsExtraData::`vftable';
  }
  else
  {
    v4 = 0;
  }
  sub_7214A0(this, v4, a2);
  return v4;
}
