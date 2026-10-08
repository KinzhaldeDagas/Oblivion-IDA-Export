int __thiscall sub_8B04D0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  int v7; // edi
  int result; // eax
  int v9; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8b04d2*/
  sub_8A2A50(this, a2); /*0x8b04da*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7F9C.name); /*0x8b04e5*/
  end = v2->end; /*0x8b04ea*/
  capacity = v2->capacity; /*0x8b04ee*/
  a2 = v4; /*0x8b04f7*/
  if ( end >= capacity ) /*0x8b04fb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8b0506*/
  NiTArray_SetAt(v2, end, &a2); /*0x8b0513*/
  if ( this && (v7 = *(this + 2)) != 0 ) /*0x8b0521*/
    result = *(_DWORD *)(v7 + 0xC); /*0x8b0523*/
  else
    result = 0; /*0x8b0528*/
  if ( result ) /*0x8b052c*/
  {
    v9 = *(_DWORD *)(result + 8); /*0x8b052e*/
    if ( v9 ) /*0x8b0533*/
      return (*(int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v9 + 0x30))(v9, v2); /*0x8b053b*/
  }
  return result; /*0x8b053d*/
}
