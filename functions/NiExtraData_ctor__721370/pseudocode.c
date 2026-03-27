NiObject *__thiscall NiExtraData_ctor(NiObject *this, const char *a2)
{
  unsigned int v3; // kr04_4
  char *v4; // eax

  NiObject_constr(this);
  this->__vftable = (NiObjectVtbl *)&NiExtraData::`vftable';
  if ( a2 )
  {
    if ( strlen(a2) )
    {
      v3 = strlen(a2);
      v4 = (char *)FormHeapAlloc(v3 + 1);
      *((_DWORD *)this + 2) = v4;
      strcpy_s(v4, v3 + 1, a2);
    }
  }
  return this;
}
