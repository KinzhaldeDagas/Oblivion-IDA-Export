// Oblivion vector<collision-record>::insert(position,count,value): authoritative 0x1C record stride, checked maximum 0x09249249, 1.5x growth, alias-safe in-place/reallocation paths, and FormHeap ownership.
void __thiscall OB_stVector_CollisionObject_InsertFill_010201A0(
        OB_stVector_CollisionObject_010201A0 *this,
        OB_stVector_CollisionObjectIterator_010201A0 position,
        unsigned int count,
        const OB_CollisionObject_010201A0 *value)
{
  OB_CollisionObject_010201A0 *begin; // ecx
  unsigned int v6; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  OB_CollisionObject_010201A0 *v12; // eax
  OB_CollisionObject_010201A0 *v13; // eax
  OB_CollisionObject_010201A0 *v14; // eax
  char *v15; // esi
  OB_CollisionObject_010201A0 *end; // ecx
  unsigned int v17; // eax
  const OB_CollisionObject_010201A0 *v18; // esi
  OB_CollisionObject_010201A0 *v19; // [esp-20h] [ebp-5Ch]
  OB_CollisionObject_010201A0 *v20; // [esp-Ch] [ebp-48h]
  unsigned int v21; // [esp-8h] [ebp-44h]
  int v22; // [esp+0h] [ebp-3Ch] BYREF
  OB_CollisionObject_010201A0 v23; // [esp+10h] [ebp-2Ch] BYREF
  int *v24; // [esp+2Ch] [ebp-10h]
  int v25; // [esp+38h] [ebp-4h]
  OB_CollisionObject_010201A0 *counta; // [esp+4Ch] [ebp+10h]
  OB_CollisionObject_010201A0 *valuea; // [esp+50h] [ebp+14h]
  const OB_CollisionObject_010201A0 *valueb; // [esp+50h] [ebp+14h]

  v24 = &v22; /*0x78ae08*/
  qmemcpy(&v23, value, sizeof(v23)); /*0x78ae18*/
  begin = this->begin; /*0x78ae1a*/
  if ( begin ) /*0x78ae1f*/
    v6 = this->capacityEnd - begin; /*0x78ae3b*/
  else
    v6 = 0; /*0x78ae21*/
  if ( count ) /*0x78ae42*/
  {
    if ( begin ) /*0x78ae4a*/
      v8 = this->end - this->begin; /*0x78ae67*/
    else
      v8 = 0; /*0x78ae4c*/
    if ( 0x9249249 - v8 < count ) /*0x78ae72*/
      OB_stVector_ThrowLengthError_010201A0(v6); /*0x78ae74*/
    if ( this->begin ) /*0x78ae79*/
      v9 = this->end - this->begin; /*0x78ae9a*/
    else
      v9 = 0; /*0x78ae7f*/
    if ( v6 >= count + v9 ) /*0x78aea0*/
    {
      end = this->end; /*0x78afc8*/
      counta = end; /*0x78afdf*/
      if ( end - position.current >= count ) /*0x78aff5*/
      {
        v17 = 0x1C * count; /*0x78b06f*/
        v18 = &end[-count]; /*0x78b074*/
        valueb = (const OB_CollisionObject_010201A0 *)v17; /*0x78b079*/
        this->end = OB_stVector_CollisionObject_UninitializedCopyRange_Stdcall_010201A0( /*0x78b087*/
                      &end[v17 / 0xFFFFFFE4],
                      end,
                      end);
        OB_stVector_CollisionObject_CopyBackwardRange_Thunk_010201A0(position.current, v18, counta); /*0x78b08a*/
        OB_stVector_CollisionObject_CopyFillRange_010201A0( /*0x78b09a*/
          position.current,
          (OB_CollisionObject_010201A0 *)((char *)position.current + (unsigned int)valueb),
          &v23);
      }
      else
      {
        OB_stVector_CollisionObject_UninitializedCopyRange_Stdcall_010201A0( /*0x78b007*/
          position.current,
          end,
          &position.current[count]);
        v21 = count - (this->end - position.current); /*0x78b02d*/
        v20 = this->end; /*0x78b02e*/
        v25 = 2; /*0x78b031*/
        OB_stVector_CollisionObject_UninitializedFillN_Stdcall_010201A0(v20, v21, &v23); /*0x78b038*/
        this->end += count; /*0x78b040*/
        OB_stVector_CollisionObject_CopyFillRange_010201A0(position.current, &this->end[-count], &v23); /*0x78b04e*/
      }
    }
    else
    {
      if ( 0x9249249 - (v6 >> 1) >= v6 ) /*0x78aeb3*/
        v10 = (v6 >> 1) + v6; /*0x78aeb9*/
      else
        v10 = 0; /*0x78aeb5*/
      if ( this->begin ) /*0x78aebb*/
        v11 = this->end - this->begin; /*0x78aedc*/
      else
        v11 = 0; /*0x78aec1*/
      if ( v10 < count + v11 ) /*0x78aee2*/
        v10 = count + OB_stVector_CollisionObject_Size_010201A0(this); /*0x78aeed*/
      valuea = OB_stVector_CollisionObject_Allocate_010201A0(v10); /*0x78af02*/
      v19 = this->begin; /*0x78af0f*/
      v25 = 0; /*0x78af10*/
      v12 = OB_stVector_CollisionObject_UninitializedCopyRange_010201A0(v19, position.current, valuea); /*0x78af17*/
      v13 = OB_stVector_CollisionObject_UninitializedFillN_Stdcall_010201A0(v12, count, &v23); /*0x78af27*/
      OB_stVector_CollisionObject_UninitializedCopyRange_010201A0(position.current, this->end, v13); /*0x78af42*/
      v14 = this->begin; /*0x78af47*/
      if ( v14 ) /*0x78af4f*/
        v14 = (OB_CollisionObject_010201A0 *)(this->end - v14); /*0x78af67*/
      v15 = (char *)v14 + count; /*0x78af69*/
      if ( this->begin ) /*0x78af6b*/
        FormHeapFree((unsigned int)this->begin); /*0x78af73*/
      this->capacityEnd = &valuea[v10]; /*0x78af93*/
      this->end = &valuea[(_DWORD)v15]; /*0x78af99*/
      this->begin = valuea; /*0x78af9c*/
    }
  }
}
