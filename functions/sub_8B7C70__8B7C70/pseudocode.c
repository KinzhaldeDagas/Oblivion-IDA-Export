int __thiscall sub_8B7C70(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  bool v4; // zf

  if ( *(this + 3) )
  {
    *a2 = 0;
    return *(this + 3);
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x10u);
    if ( v3 )
    {
      *v3 = 0;
      v3[1] = 0;
      v3[2] = 0;
      v3[3] = 0x80000000;
    }
    else
    {
      v3 = 0;
    }
    v4 = *(this + 2) == 0;
    *(this + 3) = v3;
    if ( !v4 )
      sub_8B77A0(this, v3);
    *a2 = 1;
    return *(this + 3);
  }
}
