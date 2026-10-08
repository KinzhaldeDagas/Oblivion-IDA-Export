void __thiscall sub_4A07E0(float *this)
{
  NiObjectNET *v2; // eax
  NiObjectNET *v3; // esi
  NiObjectNET *v4; // eax
  void (__thiscall ***v5)(_DWORD, int); // edi

  if ( !*(_DWORD *)&MEMORY[0xB33E90][0x1400] ) /*0x4a0806*/
  {
    v2 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x4a0815*/
    v3 = v2; /*0x4a081a*/
    if ( v2 ) /*0x4a082d*/
    {
      NiObjectNET::NiObjectNET(v2); /*0x4a0831*/
      v3->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable'; /*0x4a0836*/
      LOWORD(v3[1].vtbl) = 0xEC; /*0x4a083c*/
      BYTE2(v3[1].vtbl) = 0; /*0x4a0842*/
    }
    else
    {
      v3 = 0; /*0x4a0848*/
    }
    v4 = *(NiObjectNET **)&MEMORY[0xB33E90][0x1400]; /*0x4a084a*/
    if ( *(NiObjectNET **)&MEMORY[0xB33E90][0x1400] != v3 ) /*0x4a0859*/
    {
      if ( v4 ) /*0x4a085d*/
      {
        v5 = *(void (__thiscall ****)(_DWORD, int))&MEMORY[0xB33E90][0x1400]; /*0x4a085f*/
        if ( !InterlockedDecrement((volatile LONG *)&v4->members) ) /*0x4a0865*/
          (**v5)(v5, 1); /*0x4a087b*/
      }
      v4 = v3; /*0x4a087f*/
      *(_DWORD *)&MEMORY[0xB33E90][0x1400] = v3; /*0x4a0881*/
      if ( v3 ) /*0x4a0886*/
      {
        InterlockedIncrement((volatile LONG *)&v3->members); /*0x4a088c*/
        v4 = *(NiObjectNET **)&MEMORY[0xB33E90][0x1400]; /*0x4a0892*/
      }
    }
    LOWORD(v4[1].vtbl) |= 1u; /*0x4a0897*/
  }
  *((_BYTE *)this + 0xEC) = 0; /*0x4a089e*/
  *(this + 0x38) = 0.0; /*0x4a08a5*/
  *((_BYTE *)this + 0xDC) = 1; /*0x4a08ab*/
  *(this + 0x39) = 0.0; /*0x4a08b2*/
  *(this + 0x3A) = 1.0; /*0x4a08ba*/
}
