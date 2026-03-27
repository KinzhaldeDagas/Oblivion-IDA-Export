int __thiscall sub_7EE1F0(_DWORD *this)
{
  _DWORD *v1; // eax

  if ( !*(this + 0x24) )
    return 0;
  v1 = (_DWORD *)*(this + 0x24);
  *(this + 0x24) = *v1;
  return v1[2];
}
