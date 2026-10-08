NiObject *__thiscall NiExtraData_ctor(NiObject *this, const char *a2)
{
  unsigned int v3; // kr04_4
  char *v4; // eax

  NiObject_constr(this); /*0x72139a*/
  this->__vftable = (NiObjectVtbl *)&NiExtraData::`vftable'; /*0x7213ad*/
  if ( a2 ) /*0x7213b3*/
  {
    if ( strlen(a2) ) /*0x7213b7*/
    {
      v3 = strlen(a2); /*0x7213cf*/
      v4 = (char *)FormHeapAlloc(v3 + 1); /*0x7213e1*/
      *((_DWORD *)this + 2) = v4; /*0x7213e9*/
      strcpy_s(v4, v3 + 1, a2); /*0x7213ec*/
    }
  }
  return this; /*0x7213f6*/
}
