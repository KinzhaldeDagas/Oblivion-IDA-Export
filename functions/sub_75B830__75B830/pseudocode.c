bool __thiscall sub_75B830(char *this, int a2)
{
  if ( !sub_752CD0((NiTriBasedGeomData *)this, a2) ) /*0x75b840*/
    return 0; /*0x75b840*/
  if ( *((_DWORD *)this + 6) ) /*0x75b842*/
  {
    if ( !*(_DWORD *)(a2 + 0x18) /*0x75b86d*/
      || *(_DWORD *)(a2 + 0x18)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 6) + 0x2C))(
            *((_DWORD *)this + 6),
            *(_DWORD *)(a2 + 0x18)) )
    {
      return 0; /*0x75b871*/
    }
  }
  else if ( *(_DWORD *)(a2 + 0x18) ) /*0x75b853*/
  {
    return 0; /*0x75b857*/
  }
  return !NiPoint3__NotEqual((const NiPoint3 *)(this + 0x1C), (const NiPoint3 *)(a2 + 0x1C)) /*0x75b8b1*/
      && *(float *)(a2 + 0x28) == *((float *)this + 0xA)
      && *(float *)(a2 + 0x2C) == *((float *)this + 0xB)
      && *((_DWORD *)this + 0xC) == *(_DWORD *)(a2 + 0x30)
      && *((_DWORD *)this + 0xD) == *(_DWORD *)(a2 + 0x34);
}
