int __thiscall sub_8C35B0(_DWORD *this, _BYTE *a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  bool v5; // zf
  int v6; // eax

  if ( *(this + 3) )
  {
    *a2 = 0;
    return *(this + 3);
  }
  else
  {
    v3 = FormHeapAlloc(0x10u);
    if ( v3 )
    {
      *(_DWORD *)v3 = 0;
      *(float *)(v3 + 0xC) = 1.0;
      *(_DWORD *)(v3 + 4) = 0;
      *(_DWORD *)(v3 + 8) = 0;
      v4 = (_DWORD *)v3;
    }
    else
    {
      v4 = 0;
    }
    v5 = *(this + 2) == 0;
    *(this + 3) = v4;
    if ( !v5 )
    {
      sub_8B0280(this, v4);
      v6 = *(this + 2);
      if ( v6 )
      {
        v4[2] = *(_DWORD *)(v6 + 0x10);
        *a2 = 1;
        return *(this + 3);
      }
      v4[2] = 0;
    }
    *a2 = 1;
    return *(this + 3);
  }
}
