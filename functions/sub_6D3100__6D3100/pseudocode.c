// Oblivion Euler/type-4 rotation axis ownership installer. Destroys any previous three axes, installs each axis pointer/count/numeric type, clears cached axis cursor/state words, and derives each nonempty axis stride from the scalar key type table.
_DWORD *__thiscall NiEulerRotKey_SetAxisTracks(
        int *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  _DWORD *result; // eax
  int *v12; // ecx
  int v13; // esi

  NiEulerRotKey_DestroyAxisTracks(this); /*0x6d3105*/
  *(this + 5) = a3; /*0x6d3116*/
  result = this + 8; /*0x6d3119*/
  *(this + 8) = a4; /*0x6d311c*/
  *(this + 0xC) = a2; /*0x6d3122*/
  *(this + 0xD) = a5; /*0x6d3129*/
  *(this + 6) = a6; /*0x6d3130*/
  *(this + 7) = a9; /*0x6d3137*/
  *(this + 9) = a7; /*0x6d313e*/
  *(this + 0xA) = a10; /*0x6d3145*/
  *(this + 0xE) = a8; /*0x6d314a*/
  *(this + 0xF) = 0; /*0x6d314d*/
  *(this + 0x10) = 0; /*0x6d3150*/
  *(this + 0x11) = 0; /*0x6d3153*/
  v12 = this + 0xB; /*0x6d3156*/
  v13 = 3; /*0x6d3159*/
  do /*0x6d317c*/
  {
    if ( result[0xFFFFFFFD] ) /*0x6d3160*/
      *(_BYTE *)v12 = byte_B3D3E8[*result]; /*0x6d316d*/
    else
      *(_BYTE *)v12 = 0; /*0x6d3171*/
    ++result; /*0x6d3173*/
    v12 = (int *)((char *)v12 + 1); /*0x6d3176*/
    --v13; /*0x6d3179*/
  }
  while ( v13 ); /*0x6d317c*/
  return result; /*0x6d317e*/
}
