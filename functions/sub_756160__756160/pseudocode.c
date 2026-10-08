bool __thiscall sub_756160(float *this, int a2)
{
  if ( !sub_75EED0((NiTriBasedGeomData *)this, a2) ) /*0x756170*/
    return 0; /*0x756170*/
  if ( *((_DWORD *)this + 0xB) ) /*0x756172*/
  {
    if ( !*(_DWORD *)(a2 + 0x2C) /*0x75619d*/
      || *(_DWORD *)(a2 + 0x2C)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0xB) + 0x2C))(
            *((_DWORD *)this + 0xB),
            *(_DWORD *)(a2 + 0x2C)) )
    {
      return 0; /*0x7561a1*/
    }
  }
  else if ( *(_DWORD *)(a2 + 0x2C) ) /*0x756183*/
  {
    return 0; /*0x756187*/
  }
  return *(float *)(a2 + 0x30) == *(this + 0xC) /*0x7561e1*/
      && *(float *)(a2 + 0x34) == *(this + 0xD)
      && !NiPoint3__NotEqual((const NiPoint3 *)(this + 0xE), (const NiPoint3 *)(a2 + 0x38))
      && !NiPoint3__NotEqual((const NiPoint3 *)(this + 0x11), (const NiPoint3 *)(a2 + 0x44));
}
