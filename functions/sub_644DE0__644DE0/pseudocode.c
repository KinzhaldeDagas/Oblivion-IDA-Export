void __thiscall sub_644DE0(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  if ( !*(this + 0xD) )
  {
    v2 = (_DWORD *)FormHeapAlloc(0x14u);
    if ( v2 )
      v3 = sub_68A9F0(v2);
    else
      v3 = 0;
    *(this + 0xD) = v3;
    *((_BYTE *)v3 + 0x10) = 0;
  }
}
