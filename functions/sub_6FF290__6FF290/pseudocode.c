NiObject *__thiscall sub_6FF290(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x3Cu); /*0x6ff2b7*/
  v4 = 0; /*0x6ff2c3*/
  if ( v3 ) /*0x6ff2cb*/
    v4 = sub_6FEEE0(v3); /*0x6ff2d4*/
  sub_752C40(this, (int)v4, a2); /*0x6ff2e6*/
  v4[4].__vftable = *((NiObjectVtbl **)this + 8); /*0x6ff2ee*/
  return v4; /*0x6ff2f3*/
}
