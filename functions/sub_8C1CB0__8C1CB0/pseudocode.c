int __thiscall sub_8C1CB0(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf

  if ( *(this + 3) )
  {
    *a2 = 0;
    return *(this + 3);
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x14u);
    if ( v3 )
    {
      v4 = v3 + 1;
      v3[1] = 0;
      v3[3] = 0;
      v3[4] = 0;
      v3[2] = 1;
      *v3 = &hkPrismaticConstraintCinfo::`vftable';
    }
    else
    {
      v4 = 0;
    }
    v5 = *(this + 2) == 0;
    *(this + 3) = v4;
    if ( !v5 )
    {
      if ( v4 )
      {
        sub_8A07E0(this, v4 + 0xFFFFFFFF);
        *a2 = 1;
        return *(this + 3);
      }
      sub_8A07E0(this, 0);
    }
    *a2 = 1;
    return *(this + 3);
  }
}
