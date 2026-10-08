int __thiscall sub_75DCA0(int *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v5)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v6)(unsigned int, unsigned int **, int, int *, int); // eax
  void (__cdecl *v7)(unsigned int, unsigned int *, int, int *, int); // edx
  NiTArray_NiTexturingPropertyMap *v8; // ebp
  unsigned int i; // esi
  void (__cdecl *v10)(unsigned int, unsigned int *, int, int *, int); // eax
  MEF_RefPointerArray16 *v11; // eax
  unsigned int v12; // [esp-44h] [ebp-58h]
  unsigned int v13; // [esp-30h] [ebp-44h]
  unsigned int v14; // [esp-1Ch] [ebp-30h]
  unsigned int v15; // [esp-1Ch] [ebp-30h]
  unsigned int v16; // [esp+8h] [ebp-Ch] BYREF
  unsigned int capacity; // [esp+Ch] [ebp-8h] BYREF
  int v18; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x75dca5*/
  sub_759DE0(this, (signed int)a2); /*0x75dcac*/
  if ( v2[0x36] > 0xA010000 ) /*0x75dcbb*/
  {
    v14 = v2[0x87]; /*0x75dcf5*/
    v5 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v14 + 4); /*0x75dcf6*/
    v18 = 4; /*0x75dcf9*/
    v5(v14, this + 0x1C, 4, &v18, 1); /*0x75dcfd*/
    v13 = v2[0x87]; /*0x75dd13*/
    v6 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v13 + 4); /*0x75dd14*/
    v18 = 1; /*0x75dd17*/
    v6(v13, &a2, 1, &v18, 1); /*0x75dd1f*/
    *((_BYTE *)this + 0x6C) = (_BYTE)a2 != 0; /*0x75dd31*/
    v7 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v2[0x87] + 4); /*0x75dd3a*/
    v12 = v2[0x87]; /*0x75dd43*/
    v18 = 4; /*0x75dd44*/
    v7(v12, &v16, 4, &v18, 1); /*0x75dd48*/
    v8 = (NiTArray_NiTexturingPropertyMap *)(this + 0x1D); /*0x75dd51*/
    NiTArray_SetSize((unsigned __int16 *)this + 0x3A, v16); /*0x75dd57*/
    for ( i = 0; i < v16; ++i ) /*0x75dd62*/
    {
      v15 = v2[0x87]; /*0x75dd78*/
      v10 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v15 + 4); /*0x75dd79*/
      v18 = 4; /*0x75dd7c*/
      v10(v15, &capacity, 4, &v18, 1); /*0x75dd84*/
      if ( capacity ) /*0x75dd8d*/
      {
        v11 = (MEF_RefPointerArray16 *)FormHeapAlloc(0x10u); /*0x75dd91*/
        if ( v11 ) /*0x75dd9b*/
        {
          v11->vtable = &NiTArray<NiPointer<NiAVObject>>::`vftable'; /*0x75dd9d*/
          v11->capacity = 0; /*0x75dda3*/
          v11->growBy = 1; /*0x75dda7*/
          v11->usedEnd = 0; /*0x75ddad*/
          v11->occupiedCount = 0; /*0x75ddb1*/
          v11->data = 0; /*0x75ddb5*/
        }
        else
        {
          v11 = 0; /*0x75ddba*/
        }
        v18 = (int)v11; /*0x75ddc3*/
        NiTObjectArray_Resize16(v11, capacity); /*0x75ddc7*/
        NiTArray_SetAt(v8, i, &v18); /*0x75ddd4*/
      }
    }
    return sub_712A20(v2); /*0x75dde6*/
  }
  else
  {
    *(this + 0x1C) = *((unsigned __int16 *)this + 4); /*0x75dcc5*/
    sub_75DB40((unsigned __int16 *)this, 1u); /*0x75dcc8*/
    return sub_712A20(v2); /*0x75dccf*/
  }
}
