void __thiscall sub_76C8C0(_WORD *this)
{
  unsigned __int16 i; // bx
  NiD3DPass **v3; // edi
  NiD3DPass *v4; // ecx

  for ( i = 0; i < *(this + 5); ++i )
  {
    v3 = (NiD3DPass **)(*((_DWORD *)this + 1) + 4 * i);
    v4 = *v3;
    if ( *v3 )
    {
      if ( v4->RefCount-- == 1 )
        sub_7604D0(v4);
      *v3 = 0;
    }
  }
  *(this + 6) = 0;
  *(this + 5) = 0;
}
