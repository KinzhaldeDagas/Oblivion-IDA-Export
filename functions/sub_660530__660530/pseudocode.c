int __thiscall sub_660530(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  TESObjectREFR **v5; // eax
  int v6; // ecx

  v2 = (_DWORD *)*(this + 0x16B);
  if ( v2 )
  {
    v3 = 0;
    do
    {
      if ( *v2 )
        ++v3;
      v2 = (_DWORD *)v2[1];
    }
    while ( v2 );
    *(this + 0x1E8) = v3;
    return v3;
  }
  else
  {
    v5 = sub_6758E0((int)this, 0xC, 0);
    if ( v5 )
    {
      v6 = 0;
      do
      {
        if ( *v5 )
          ++v6;
        v5 = (TESObjectREFR **)v5[1];
      }
      while ( v5 );
      *(this + 0x1E8) = v6;
      return v6;
    }
    else
    {
      *(this + 0x1E8) = 0;
      return *(this + 0x1E8);
    }
  }
}
