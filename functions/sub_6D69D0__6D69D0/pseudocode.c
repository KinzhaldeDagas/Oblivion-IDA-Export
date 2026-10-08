// Oblivion NiTransformInterpolator viewer-string output. Appends base/type strings, cached transform details, and recursively appends NiTransformData viewer strings when data +0x2C is nonnull.
void __thiscall NiTransformInterpolator_GetViewerStrings(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  int v7; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d69d2*/
  sub_6EC460(this, a2); /*0x6d69da*/
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)stru_B3D91C); /*0x6d69e5*/
  end = v2->end; /*0x6d69ea*/
  capacity = v2->capacity; /*0x6d69ee*/
  a2 = v4; /*0x6d69f7*/
  if ( end >= capacity ) /*0x6d69fb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6d6a06*/
  NiTArray_SetAt(v2, end, &a2); /*0x6d6a13*/
  sub_6CBAD0(this + 3, (unsigned __int16 *)v2); /*0x6d6a1c*/
  v7 = *((_DWORD *)this + 0xB); /*0x6d6a21*/
  if ( v7 ) /*0x6d6a26*/
    (*(void (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v7 + 0x30))(v7, v2); /*0x6d6a2e*/
}
