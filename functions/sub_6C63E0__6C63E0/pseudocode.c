int __thiscall sub_6C63E0(unsigned __int16 *this)
{
  unsigned __int16 v1; // ax

  v1 = *(this + 5);
  if ( v1 == 0xFFFF )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)this + 8) + v1;
}
