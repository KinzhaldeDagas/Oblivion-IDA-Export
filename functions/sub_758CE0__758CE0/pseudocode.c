bool __thiscall sub_758CE0(char *this, int a2)
{
  if ( !sub_752CD0((NiTriBasedGeomData *)this, a2) ) /*0x758cf0*/
    return 0; /*0x758cf0*/
  if ( *((_DWORD *)this + 6) ) /*0x758cf2*/
  {
    if ( !*(_DWORD *)(a2 + 0x18) /*0x758d1d*/
      || *(_DWORD *)(a2 + 0x18)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 6) + 0x2C))(
            *((_DWORD *)this + 6),
            *(_DWORD *)(a2 + 0x18)) )
    {
      return 0; /*0x758d21*/
    }
  }
  else if ( *(_DWORD *)(a2 + 0x18) ) /*0x758d03*/
  {
    return 0; /*0x758d07*/
  }
  return !NiPoint3__NotEqual((const NiPoint3 *)(a2 + 0x1C), (const NiPoint3 *)(this + 0x1C)) /*0x758d60*/
      && *((float *)this + 0xA) == *(float *)(a2 + 0x28)
      && *((float *)this + 0xB) == *(float *)(a2 + 0x2C)
      && *((float *)this + 0xC) == *(float *)(a2 + 0x30);
}
