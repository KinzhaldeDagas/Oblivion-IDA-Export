// Complete Oblivion insert-fill specialization for vector<st_vector<SFrondGuide>> at CFrondEngine+0x18. Uses an alias-safe deep snapshot, checked max size, 1.5x growth, ownership moves for old levels, deep fill construction, and exception cleanup.
// positive sp value has been detected, the output may be wrong!
void __thiscall OB_stVector_stVector_SFrondGuide_InsertFill_010201A0(
        OB_stVector_stVector_SFrondGuide_010201A0 *this,
        OB_stVector_stVector_SFrondGuide_010201A0 *expectedOwner,
        OB_stVector_SFrondGuide_010201A0 *position,
        unsigned int count,
        const OB_stVector_SFrondGuide_010201A0 *value)
{
  OB_stVector_SFrondGuide_010201A0 *begin; // ecx
  int existingSize; // eax
  unsigned int capacityCount; // ebx
  int v9; // eax
  unsigned int newCapacityCount; // ebx
  int v11; // eax
  int v12; // eax
  OB_stVector_SFrondGuide_010201A0 *newStorage; // eax
  OB_stVector_SFrondGuide_010201A0 *oldBegin; // ecx
  OB_stVector_SFrondGuide_010201A0 *afterPrefix; // eax
  OB_stVector_SFrondGuide_010201A0 *afterInserted; // eax
  OB_stVector_SFrondGuide_010201A0 *oldEnd; // ecx
  OB_stVector_SFrondGuide_010201A0 *oldBeginForDestroy; // ecx
  int v19; // eax
  unsigned int newSize; // edi
  OB_stVector_SFrondGuide_010201A0 *end; // eax
  OB_stVector_SFrondGuide_010201A0 *tailFirst; // edi
  OB_SFrondGuide_010201A0 *snapshotBegin; // esi
  OB_stVector_SFrondGuide_010201A0 *v24; // [esp-10h] [ebp-48h]
  unsigned int remainingFillCount; // [esp-Ch] [ebp-44h]
  OB_stVector_SFrondGuide_010201A0 *v26; // [esp-Ch] [ebp-44h]
  int v27; // [esp-4h] [ebp-3Ch] BYREF
  OB_stVector_SFrondGuide_010201A0 valueSnapshot; // [esp+10h] [ebp-28h] BYREF
  OB_stVector_SFrondGuide_010201A0 *destinationEnd; // [esp+20h] [ebp-18h]
  OB_stVector_stVector_SFrondGuide_010201A0 *vector; // [esp+24h] [ebp-14h]
  int *v31; // [esp+28h] [ebp-10h]
  int v32; // [esp+34h] [ebp-4h]
  OB_stVector_SFrondGuide_010201A0 *newStorageBegin; // [esp+4Ch] [ebp+14h]

  v31 = &v27; /*0x7a1068*/
  vector = this; /*0x7a106d*/
  OB_stVector_SFrondGuide_CopyCtor_010201A0(&valueSnapshot, value); /*0x7a1077*/
  begin = this->begin; /*0x7a107c*/
  existingSize = 0; /*0x7a107f*/
  v32 = 0; /*0x7a1083*/
  if ( begin ) /*0x7a1086*/
    capacityCount = this->capacityEnd - begin; /*0x7a1091*/
  else
    capacityCount = 0; /*0x7a1088*/
  if ( count ) /*0x7a1099*/
  {
    if ( begin ) /*0x7a10a1*/
      existingSize = this->end - begin; /*0x7a10a8*/
    if ( 0xFFFFFFF - existingSize < count ) /*0x7a10b4*/
      OB_stVector_ThrowLengthError_010201A0(count); /*0x7a10b6*/
    if ( begin ) /*0x7a10bd*/
      v9 = this->end - begin; /*0x7a10c8*/
    else
      v9 = 0; /*0x7a10bf*/
    if ( capacityCount >= count + v9 ) /*0x7a10cf*/
    {
      end = this->end; /*0x7a11e5*/
      destinationEnd = end; /*0x7a11f4*/
      if ( end - position >= count ) /*0x7a11f7*/
      {
        tailFirst = &end[-count]; /*0x7a1277*/
        this->end = OB_stVector_stVector_SFrondGuide_UninitializedMoveThunk_010201A0(tailFirst, end, end); /*0x7a1285*/
        OB_stVector_stVector_SFrondGuide_MoveAssignRangeBackwardThunk_010201A0(position, tailFirst, destinationEnd); /*0x7a128e*/
        OB_stVector_SFrondGuide_CopyAssignFillRange_010201A0(position, &position[count], &valueSnapshot); /*0x7a129e*/
      }
      else
      {
        OB_stVector_stVector_SFrondGuide_UninitializedMoveThunk_010201A0(position, end, &position[count]); /*0x7a1208*/
        remainingFillCount = count - (this->end - position); /*0x7a121d*/
        v24 = this->end; /*0x7a121e*/
        LOBYTE(v32) = 3; /*0x7a1221*/
        OB_stVector_stVector_SFrondGuide_UninitializedFillNThunk_010201A0(v24, remainingFillCount, &valueSnapshot); /*0x7a1225*/
        this->end += count; /*0x7a122d*/
        v26 = &this->end[-count]; /*0x7a1239*/
        v32 = 0; /*0x7a123b*/
        OB_stVector_SFrondGuide_CopyAssignFillRange_010201A0(position, v26, &valueSnapshot); /*0x7a1242*/
      }
    }
    else
    {
      if ( 0xFFFFFFF - (capacityCount >> 1) >= capacityCount ) /*0x7a10e2*/
        newCapacityCount = (capacityCount >> 1) + capacityCount; /*0x7a10e8*/
      else
        newCapacityCount = 0; /*0x7a10e4*/
      if ( begin ) /*0x7a10ec*/
        v11 = this->end - begin; /*0x7a10f7*/
      else
        v11 = 0; /*0x7a10ee*/
      if ( newCapacityCount < count + v11 ) /*0x7a10fe*/
      {
        if ( begin ) /*0x7a1102*/
          v12 = this->end - begin; /*0x7a110d*/
        else
          v12 = 0; /*0x7a1104*/
        newCapacityCount = v12 + count; /*0x7a1110*/
      }
      newStorage = (OB_stVector_SFrondGuide_010201A0 *)OB_stVector16_Allocate_010201A0((char *)newCapacityCount); /*0x7a1116*/
      oldBegin = this->begin; /*0x7a111b*/
      LOBYTE(destinationEnd) = 0; /*0x7a111e*/
      newStorageBegin = newStorage; /*0x7a112f*/
      LOBYTE(v32) = 1; /*0x7a1137*/
      afterPrefix = OB_stVector_stVector_SFrondGuide_UninitializedMove_010201A0(oldBegin, position, newStorage); /*0x7a113b*/
      afterInserted = OB_stVector_stVector_SFrondGuide_UninitializedFillNThunk_010201A0( /*0x7a114e*/
                        afterPrefix,
                        count,
                        &valueSnapshot);
      oldEnd = this->end; /*0x7a1153*/
      LOBYTE(destinationEnd) = 0; /*0x7a1156*/
      OB_stVector_stVector_SFrondGuide_UninitializedMove_010201A0(position, oldEnd, afterInserted); /*0x7a116c*/
      oldBeginForDestroy = this->begin; /*0x7a1171*/
      if ( oldBeginForDestroy ) /*0x7a1179*/
        v19 = this->end - oldBeginForDestroy; /*0x7a1184*/
      else
        v19 = 0; /*0x7a117b*/
      newSize = v19 + count; /*0x7a1187*/
      if ( oldBeginForDestroy ) /*0x7a118b*/
      {
        OB_stVector_stVector_SFrondGuide_DestroyRange_010201A0(oldBeginForDestroy, this->end); /*0x7a1197*/
        FormHeapFree((unsigned int)this->begin); /*0x7a11a0*/
      }
      this->capacityEnd = &newStorageBegin[newCapacityCount]; /*0x7a11b5*/
      this->end = &newStorageBegin[newSize]; /*0x7a11b8*/
      this->begin = newStorageBegin; /*0x7a11bb*/
    }
  }
  snapshotBegin = valueSnapshot.begin; /*0x7a12a6*/
  if ( valueSnapshot.begin ) /*0x7a12ab*/
  {
    OB_SFrondGuide_DestroyRange_010201A0(valueSnapshot.begin, valueSnapshot.end); /*0x7a12ba*/
    FormHeapFree((unsigned int)snapshotBegin); /*0x7a12c0*/
  }
}
