// Oblivion NiTransformData translation-key ownership setter. Destroys previous keys +0x24 through the destructor table indexed by type +0x14, then installs count +0x0A, pointer +0x24, type +0x14, and table-derived stride +0x1D. Null pointer or zero count clears the channel fields.
char __thiscall NiTransformData_SetTranslationKeys(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax

  v5 = *(this + 9); /*0x6e1f04*/
  if ( v5 ) /*0x6e1f0b*/
    LOBYTE(v5) = (*(int (__cdecl **)(int))(4 * *(this + 5) + 0xB3D2E0))(v5); /*0x6e1f18*/
  if ( a2 && (LOBYTE(v5) = a3, a3) ) /*0x6e1f2b*/
  {
    *((_WORD *)this + 5) = a3; /*0x6e1f2d*/
    *(this + 9) = a2; /*0x6e1f35*/
    *(this + 5) = a4; /*0x6e1f38*/
    LOBYTE(v5) = unk_B3D3EE[a4]; /*0x6e1f3b*/
    *((_BYTE *)this + 0x1D) = v5; /*0x6e1f41*/
  }
  else
  {
    *((_WORD *)this + 5) = 0; /*0x6e1f49*/
    *(this + 9) = 0; /*0x6e1f4d*/
    *(this + 5) = 0; /*0x6e1f50*/
    *((_BYTE *)this + 0x1D) = 0; /*0x6e1f53*/
  }
  return v5; /*0x6e1f44*/
}
