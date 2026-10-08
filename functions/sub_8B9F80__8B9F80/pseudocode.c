unsigned int __thiscall sub_8B9F80(char **this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  _DWORD *v7; // ecx
  hkVector4 *PositionPtr; // eax
  unsigned __int16 *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edx
  char *v12; // ecx
  __m128 *LinearVelocityPtr; // eax
  unsigned __int16 *v14; // eax
  unsigned int v15; // edi
  float v17[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8b9f85*/
  sub_89D820(this, a2); /*0x8b9f8d*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA8024.name); /*0x8b9f98*/
  end = v2->end; /*0x8b9f9d*/
  capacity = v2->capacity; /*0x8b9fa1*/
  a2 = v4; /*0x8b9faa*/
  if ( end >= capacity ) /*0x8b9fae*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8b9fb9*/
  NiTArray_SetAt(v2, end, &a2); /*0x8b9fc6*/
  if ( this && (v7 = *(this + 2)) != 0 ) /*0x8b9fd4*/
    PositionPtr = (hkVector4 *)bhkCollisionWrapper_GetPositionPtr(v7); /*0x8b9fd6*/
  else
    PositionPtr = &unk_BA7A40; /*0x8b9fdd*/
  HavokVector_ToWorldVector(v17, (__m128 *)PositionPtr); /*0x8b9fe8*/
  v9 = (unsigned __int16 *)sub_707280(v17, (char *)&off_A981C4); /*0x8b9ff9*/
  v10 = v2->end; /*0x8b9ffe*/
  v11 = v2->capacity; /*0x8ba002*/
  a2 = v9; /*0x8ba008*/
  if ( v10 >= v11 ) /*0x8ba00c*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x8ba017*/
  NiTArray_SetAt(v2, v10, &a2); /*0x8ba024*/
  if ( this ) /*0x8ba02b*/
  {
    v12 = *(this + 2); /*0x8ba02d*/
    if ( v12 ) /*0x8ba032*/
    {
      LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(v12); /*0x8ba034*/
      HavokVector_ToWorldVector(v17, LinearVelocityPtr); /*0x8ba03f*/
    }
  }
  v14 = (unsigned __int16 *)sub_707280(v17, (char *)&off_A981C0); /*0x8ba050*/
  v15 = v2->end; /*0x8ba055*/
  a2 = v14; /*0x8ba059*/
  if ( v15 >= v2->capacity ) /*0x8ba063*/
    NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize); /*0x8ba06e*/
  return NiTArray_SetAt(v2, v15, &a2); /*0x8ba080*/
}
