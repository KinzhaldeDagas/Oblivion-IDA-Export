_DWORD *__thiscall sub_731B60(_BYTE *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)FormHeapAlloc(0x20u);
  v3 = v2;
  if ( v2 )
  {
    *v2 = &NiRefObject::`vftable';
    v2[1] = 0;
    InterlockedIncrement(&NiRefObject_objcount);
    *v3 = &NiDynamicEffectState::`vftable';
    *((_BYTE *)v3 + 8) = 0;
    v3[3] = 0;
    v3[4] = 0;
    v3[5] = 0;
    v3[6] = 0;
    v3[7] = 0;
  }
  else
  {
    v3 = 0;
  }
  *((_BYTE *)v3 + 8) = *(this + 8);
  sub_731A90(*((_DWORD **)this + 3), v3 + 3);
  sub_731A90(*((_DWORD **)this + 4), v3 + 4);
  sub_731A90(*((_DWORD **)this + 5), v3 + 5);
  v3[6] = *((_DWORD *)this + 6);
  v3[7] = *((_DWORD *)this + 7);
  return v3;
}
