// Oblivion rotation type-4 nested cleanup. Iterates exactly three scalar-axis subtracks in the outer rotation record, destroys each nonnull axis key array through its numeric-type destructor, then clears that axis pointer, count, and type fields.
int __thiscall NiEulerRotKey_DestroyAxisTracks(int *this)
{
  int *v1; // esi
  int v2; // ebx
  int result; // eax

  v1 = this + 0xC; /*0x6be493*/
  v2 = 3; /*0x6be496*/
  do /*0x6be4c4*/
  {
    result = *v1; /*0x6be4a0*/
    if ( *v1 ) /*0x6be4a0*/
      result = (*(int (__cdecl **)(int))(4 * v1[0xFFFFFFFC] + 0xB3D2C8))(*v1); /*0x6be4b1*/
    *v1 = 0; /*0x6be4b6*/
    v1[0xFFFFFFF9] = 0; /*0x6be4b8*/
    v1[0xFFFFFFFC] = 0; /*0x6be4bb*/
    ++v1; /*0x6be4be*/
    --v2; /*0x6be4c1*/
  }
  while ( v2 ); /*0x6be4c4*/
  return result; /*0x6be4c6*/
}
