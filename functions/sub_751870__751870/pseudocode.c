bool __thiscall sub_751870(float *this, int a2)
{
  if ( !sub_752CD0((NiTriBasedGeomData *)this, a2) ) /*0x751880*/
    return 0; /*0x751880*/
  if ( *((_DWORD *)this + 6) ) /*0x751886*/
  {
    if ( !*(_DWORD *)(a2 + 0x18) /*0x7518b1*/
      || *(_DWORD *)(a2 + 0x18)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 6) + 0x2C))(
            *((_DWORD *)this + 6),
            *(_DWORD *)(a2 + 0x18)) )
    {
      return 0; /*0x7518b5*/
    }
  }
  else if ( *(_DWORD *)(a2 + 0x18) ) /*0x751897*/
  {
    return 0; /*0x75189b*/
  }
  return !NiPoint3__NotEqual((const NiPoint3 *)(a2 + 0x1C), (const NiPoint3 *)(this + 7)) /*0x75190b*/
      && *(this + 0xA) == *(float *)(a2 + 0x28)
      && *(this + 0xB) == *(float *)(a2 + 0x2C)
      && *(_DWORD *)(a2 + 0x30) == *((_DWORD *)this + 0xC)
      && *(this + 0xD) == *(float *)(a2 + 0x34)
      && *(this + 0xE) == *(float *)(a2 + 0x38);
}
