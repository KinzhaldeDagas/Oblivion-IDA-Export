// Oblivion NiTransformData rotation-key ownership setter. Destroys the previous +0x20 array via the destructor table indexed by type +0x10; type 4 first destroys its three nested scalar-axis tracks. Installs count +8, pointer +0x20, type +0x10, and table-derived stride +0x1C, or clears all four fields for null/zero input.
int __thiscall NiTransformData_SetRotationKeys(int this, int a2, int a3, int a4)
{
  int v5; // edi
  int result; // eax

  v5 = *(_DWORD *)(this + 0x20); /*0x6e1e95*/
  if ( v5 ) /*0x6e1e9c*/
  {
    if ( *(_DWORD *)(this + 0x10) == 4 ) /*0x6e1ea2*/
      NiEulerRotKey_DestroyAxisTracks(*(int **)(this + 0x20)); /*0x6e1ea6*/
    result = (*(int (__cdecl **)(int))(4 * *(_DWORD *)(this + 0x10) + 0xB3D2F8))(v5); /*0x6e1eb6*/
  }
  if ( a2 && (result = a3) != 0 ) /*0x6e1ec9*/
  {
    *(_WORD *)(this + 8) = a3; /*0x6e1ecb*/
    *(_DWORD *)(this + 0x20) = a2; /*0x6e1ed3*/
    *(_DWORD *)(this + 0x10) = a4; /*0x6e1ed6*/
    *(_BYTE *)(this + 0x1C) = byte_B3D3F4[a4]; /*0x6e1ee0*/
    return a4; /*0x6e1ecf*/
  }
  else
  {
    *(_WORD *)(this + 8) = 0; /*0x6e1ee9*/
    *(_DWORD *)(this + 0x20) = 0; /*0x6e1eed*/
    *(_DWORD *)(this + 0x10) = 0; /*0x6e1ef0*/
    *(_BYTE *)(this + 0x1C) = 0; /*0x6e1ef3*/
  }
  return result; /*0x6e1edf*/
}
