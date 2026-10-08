void __thiscall sub_76C8C0(_WORD *this)
{
  unsigned __int16 i; // bx
  NiD3DPass **v3; // edi
  NiD3DPass *v4; // ecx

  for ( i = 0; i < *(this + 5); ++i ) /*0x76c8c9*/
  {
    v3 = (NiD3DPass **)(*((_DWORD *)this + 1) + 4 * i); /*0x76c8d6*/
    v4 = *v3; /*0x76c8d9*/
    if ( *v3 ) /*0x76c8d9*/
    {
      if ( v4->RefCount-- == 1 ) /*0x76c8df*/
        NiD3DPass_ReleaseToPool(v4); /*0x76c8e5*/
      *v3 = 0; /*0x76c8ea*/
    }
  }
  *(this + 6) = 0; /*0x76c8f6*/
  *(this + 5) = 0; /*0x76c8fa*/
}
