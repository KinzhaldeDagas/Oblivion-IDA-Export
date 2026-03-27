NiObject *__thiscall BSTempEff_constr(NiObject *this, int a2, float a3)
{
  NiObject_constr(this);
  *((float *)this + 2) = a3;
  *((_DWORD *)this + 3) = a2;
  *((float *)this + 4) = 0.0;
  this->__vftable = (NiObjectVtbl *)&BSTempEffect::`vftable';
  *((_BYTE *)this + 0x14) = 0;
  return this;
}
