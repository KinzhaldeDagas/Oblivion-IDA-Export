NiObject *__thiscall sub_7556F0(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x18u);
  v4 = v3;
  if ( v3 )
  {
    sub_752BF0(v3);
    v4->__vftable = (NiObjectVtbl *)&NiPSysPositionModifier::`vftable';
    sub_752C40(this, (int)v4, a2);
    return v4;
  }
  else
  {
    sub_752C40(this, 0, a2);
    return 0;
  }
}
