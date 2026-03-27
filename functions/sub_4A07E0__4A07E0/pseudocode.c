void __thiscall sub_4A07E0(float *this)
{
  NiObjectNET *v2; // eax
  int v3; // esi
  int v4; // eax
  void (__thiscall ***v5)(_DWORD, int); // edi

  if ( !dword_B35290 )
  {
    v2 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v3 = (int)v2;
    if ( v2 )
    {
      NiObjectNET::NiObjectNET(v2);
      *(_DWORD *)v3 = &NiAlphaProperty::`vftable';
      *(_WORD *)(v3 + 0x18) = 0xEC;
      *(_BYTE *)(v3 + 0x1A) = 0;
    }
    else
    {
      v3 = 0;
    }
    v4 = dword_B35290;
    if ( dword_B35290 != v3 )
    {
      if ( v4 )
      {
        v5 = (void (__thiscall ***)(_DWORD, int))dword_B35290;
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
          (**v5)(v5, 1);
      }
      v4 = v3;
      dword_B35290 = v3;
      if ( v3 )
      {
        InterlockedIncrement((volatile LONG *)(v3 + 4));
        v4 = dword_B35290;
      }
    }
    *(_WORD *)(v4 + 0x18) |= 1u;
  }
  *((_BYTE *)this + 0xEC) = 0;
  *(this + 0x38) = 0.0;
  *((_BYTE *)this + 0xDC) = 1;
  *(this + 0x39) = 0.0;
  *(this + 0x3A) = 1.0;
}
