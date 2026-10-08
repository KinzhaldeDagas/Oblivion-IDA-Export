// Oblivion NiTransformData scale-key ownership setter. Destroys previous keys +0x28 through the destructor table indexed by type +0x18, then installs count +0x0C, pointer +0x28, type +0x18, and table-derived stride +0x1E. Null pointer or zero count clears the channel fields.
char __thiscall NiTransformData_SetScaleKeys(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax

  v5 = *(this + 0xA); /*0x6e1f64*/
  if ( v5 ) /*0x6e1f6b*/
    LOBYTE(v5) = (*(int (__cdecl **)(int))(4 * *(this + 6) + 0xB3D2C8))(v5); /*0x6e1f78*/
  if ( a2 && (LOBYTE(v5) = a3, a3) ) /*0x6e1f8b*/
  {
    *((_WORD *)this + 6) = a3; /*0x6e1f8d*/
    *(this + 0xA) = a2; /*0x6e1f95*/
    *(this + 6) = a4; /*0x6e1f98*/
    LOBYTE(v5) = byte_B3D3E8[a4]; /*0x6e1f9b*/
    *((_BYTE *)this + 0x1E) = v5; /*0x6e1fa1*/
  }
  else
  {
    *((_WORD *)this + 6) = 0; /*0x6e1fa9*/
    *(this + 0xA) = 0; /*0x6e1fad*/
    *((_BYTE *)this + 0x1E) = 0; /*0x6e1fb0*/
    *(this + 6) = 0; /*0x6e1fb3*/
  }
  return v5; /*0x6e1fa4*/
}
