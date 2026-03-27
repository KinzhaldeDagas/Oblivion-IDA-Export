NiObject *__thiscall sub_9A22E0(NiObject *this, char *Src, int a3, int a4)
{
  sub_721350(this);
  this->__vftable = (NiObjectVtbl *)&NiSCMExtraData::`vftable';
  sub_721440((unsigned int *)this, Src);
  *((_DWORD *)this + 3) = a3;
  *((_DWORD *)this + 5) = 0;
  if ( a3 )
    *((_DWORD *)this + 7) = FormHeapAlloc((unsigned __int64)(unsigned int)a3 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * a3);
  else
    *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 4) = a4;
  *((_DWORD *)this + 6) = 0;
  if ( a4 )
    *((_DWORD *)this + 8) = FormHeapAlloc((unsigned __int64)(unsigned int)a4 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * a4);
  else
    *((_DWORD *)this + 8) = 0;
  return this;
}
