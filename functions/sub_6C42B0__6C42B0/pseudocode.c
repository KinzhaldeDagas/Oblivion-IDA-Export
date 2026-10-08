char __thiscall sub_6C42B0(float *this, MEF_U32PointerMapEntry32 *position)
{
  MEF_U32PointerMapEntry32 *v2; // ebp
  unsigned int i; // esi
  int v6; // ecx
  int v7; // eax
  unsigned int keyOut; // [esp+8h] [ebp-Ch] BYREF
  void *valueOut; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = position; /*0x6c42b4*/
  if ( !NiTimeController_IsEqual((NiTriBasedGeomData *)this, (int)position) /*0x6c42d7*/
    || *((_WORD *)this + 0x23) != HIWORD(v2[5].value) )
  {
    return 0; /*0x6c42c6*/
  }
  position = (MEF_U32PointerMapEntry32 *)NiTMapBase_GetFirstNode((unsigned int *)this + 0x16); /*0x6c42e7*/
  if ( position ) /*0x6c42eb*/
  {
    while ( 1 ) /*0x6c4301*/
    {
      NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)(this + 0x16), &position, &keyOut, &valueOut); /*0x6c4301*/
      if ( !NiTMap_GetAt(&v2[7].key, keyOut, &v10) /*0x6c4329*/
        || !(*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)valueOut + 0x2C))(valueOut, v10) )
      {
        return 0; /*0x6c4360*/
      }
      if ( !position ) /*0x6c4334*/
        goto LABEL_8; /*0x6c4334*/
    }
  }
  else
  {
LABEL_8:
    for ( i = 0; i < *((unsigned __int16 *)this + 0x23); ++i ) /*0x6c4338*/
    {
      v6 = *(_DWORD *)(*((_DWORD *)this + 0x10) + 4 * i); /*0x6c4343*/
      v7 = *(_DWORD *)(v2[5].key + 4 * i); /*0x6c434b*/
      if ( v6 && v7 ) /*0x6c4352*/
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x2C))(v6, v7) ) /*0x6c435a*/
          return 0; /*0x6c435e*/
      }
      else if ( v6 != v7 ) /*0x6c436e*/
      {
        return 0; /*0x6c436e*/
      }
    }
    return 1; /*0x6c437e*/
  }
}
