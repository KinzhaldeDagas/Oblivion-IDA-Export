bool __thiscall sub_758CE0(void *this, int a2)
{
  if ( !sub_752CD0((NiTriBasedGeomData *)this, a2) )
    return 0;
  if ( *((_DWORD *)this + 6) )
  {
    if ( !*(_DWORD *)(a2 + 0x18)
      || *(_DWORD *)(a2 + 0x18)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 6) + 0x2C))(
            *((_DWORD *)this + 6),
            *(_DWORD *)(a2 + 0x18)) )
    {
      return 0;
    }
  }
  else if ( *(_DWORD *)(a2 + 0x18) )
  {
    return 0;
  }
  return !sub_8AA390((float *)(a2 + 0x1C), (float *)this + 7)
      && *((float *)this + 0xA) == *(float *)(a2 + 0x28)
      && *((float *)this + 0xB) == *(float *)(a2 + 0x2C)
      && *((float *)this + 0xC) == *(float *)(a2 + 0x30);
}
