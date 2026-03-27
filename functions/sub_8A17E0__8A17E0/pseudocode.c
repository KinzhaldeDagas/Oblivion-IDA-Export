int __thiscall sub_8A17E0(_DWORD *this, _BYTE *a2)
{
  int v3; // eax
  bool v4; // zf

  if ( *(this + 3) )
  {
    *a2 = 0;
    return *(this + 3);
  }
  else
  {
    v3 = FormHeapAlloc(0x1Cu);
    if ( v3 )
    {
      *(_DWORD *)v3 = 0;
      *(_DWORD *)(v3 + 4) = 0;
      *(_DWORD *)(v3 + 8) = 0;
      *(_DWORD *)(v3 + 0xC) = 0x80000000;
      *(_DWORD *)(v3 + 0x10) = 0;
      *(_DWORD *)(v3 + 0x14) = 0;
      *(_DWORD *)(v3 + 0x18) = 0x80000000;
    }
    else
    {
      v3 = 0;
    }
    v4 = *(this + 2) == 0;
    *(this + 3) = v3;
    if ( !v4 )
      sub_8A16D0(this, (const void **)v3);
    *a2 = 1;
    return *(this + 3);
  }
}
