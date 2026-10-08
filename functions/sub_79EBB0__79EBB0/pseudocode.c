// OBLIVION AUTHORITY (2026-08-30): Checked insert-fill implementation for vector<vector<float>>. Deep-copies the fill value, reuses capacity or grows by roughly 1.5x, moves existing inner-vector owners with ownership transfer, and preserves exception cleanup. Oblivion call flow establishes the specialization; RT4.1 FrondEngine.cpp lines 768-779 corroborate its m_vRunningLengths resize role.
// positive sp value has been detected, the output may be wrong!
void __thiscall OB_stVector_stVectorFloat_InsertFill_010201A0(
        OB_stVector_stVectorFloat_010201A0 *this,
        OB_stVector_stVectorFloat_010201A0 *expectedOwner,
        OB_stVectorFloat_010201A0 *position,
        unsigned int count,
        const OB_stVectorFloat_010201A0 *value)
{
  OB_stVectorFloat_010201A0 *begin; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  OB_stVector16_010201A0 *_010201A0; // eax
  OB_stVector4_010201A0 *v14; // ecx
  OB_stVector4_010201A0 *v15; // eax
  OB_stVector4_010201A0 *v16; // eax
  OB_stVector4_010201A0 *v17; // ecx
  OB_stVector4_010201A0 *v18; // ecx
  int v19; // eax
  unsigned int v20; // edi
  OB_stVectorFloat_010201A0 *end; // eax
  OB_stVector4_010201A0 *v22; // edi
  OB_stVectorFloat_010201A0 *v23; // [esp-10h] [ebp-48h]
  unsigned int v24; // [esp-Ch] [ebp-44h]
  OB_stVectorFloat_010201A0 *v25; // [esp-Ch] [ebp-44h]
  int v26; // [esp-4h] [ebp-3Ch] BYREF
  OB_stVector4_010201A0 v27; // [esp+10h] [ebp-28h] BYREF
  OB_stVectorFloat_010201A0 *destinationEnd; // [esp+20h] [ebp-18h]
  OB_stVector_stVectorFloat_010201A0 *v29; // [esp+24h] [ebp-14h]
  int *v30; // [esp+28h] [ebp-10h]
  int v31; // [esp+34h] [ebp-4h]
  OB_stVector4_010201A0 *source; // [esp+4Ch] [ebp+14h]

  v30 = &v26; /*0x79ebd8*/
  v29 = this; /*0x79ebdd*/
  OB_stVector4_CopyCtor_010201A0(&v27, (const OB_stVector4_010201A0 *)value); /*0x79ebe7*/
  begin = this->begin; /*0x79ebec*/
  v7 = 0; /*0x79ebef*/
  v31 = 0; /*0x79ebf3*/
  if ( begin ) /*0x79ebf6*/
    v8 = this->capacityEnd - begin; /*0x79ec01*/
  else
    v8 = 0; /*0x79ebf8*/
  if ( count ) /*0x79ec09*/
  {
    if ( begin ) /*0x79ec11*/
      v7 = this->end - begin; /*0x79ec18*/
    if ( 0xFFFFFFF - v7 < count ) /*0x79ec24*/
      OB_stVector_ThrowLengthError_010201A0(count); /*0x79ec26*/
    if ( begin ) /*0x79ec2d*/
      v9 = this->end - begin; /*0x79ec38*/
    else
      v9 = 0; /*0x79ec2f*/
    if ( v8 >= count + v9 ) /*0x79ec3f*/
    {
      end = this->end; /*0x79ed55*/
      destinationEnd = end; /*0x79ed64*/
      if ( end - position >= count ) /*0x79ed67*/
      {
        v22 = (OB_stVector4_010201A0 *)&end[-count]; /*0x79ede7*/
        this->end = (OB_stVectorFloat_010201A0 *)OB_stVector4_UninitializedMoveRangeThunk_010201A0( /*0x79edf5*/
                                                   v22,
                                                   (OB_stVector4_010201A0 *)end,
                                                   (OB_stVector4_010201A0 *)end);
        OB_stVector_stVectorFloat_MoveAssignRangeBackwardThunk_010201A0( /*0x79edfe*/
          position,
          (OB_stVectorFloat_010201A0 *)v22,
          destinationEnd);
        OB_stVectorFloat_CopyAssignFillRange_010201A0( /*0x79ee0e*/
          position,
          &position[count],
          (const OB_stVectorFloat_010201A0 *)&v27);
      }
      else
      {
        OB_stVector4_UninitializedMoveRangeThunk_010201A0( /*0x79ed78*/
          (OB_stVector4_010201A0 *)position,
          (OB_stVector4_010201A0 *)end,
          (OB_stVector4_010201A0 *)&position[count]);
        v24 = count - (this->end - position); /*0x79ed8d*/
        v23 = this->end; /*0x79ed8e*/
        LOBYTE(v31) = 3; /*0x79ed91*/
        OB_stVector_stVectorFloat_UninitializedFillNThunk_010201A0(v23, v24, (const OB_stVectorFloat_010201A0 *)&v27); /*0x79ed95*/
        this->end += count; /*0x79ed9d*/
        v25 = &this->end[-count]; /*0x79eda9*/
        v31 = 0; /*0x79edab*/
        OB_stVectorFloat_CopyAssignFillRange_010201A0(position, v25, (const OB_stVectorFloat_010201A0 *)&v27); /*0x79edb2*/
      }
    }
    else
    {
      if ( 0xFFFFFFF - (v8 >> 1) >= v8 ) /*0x79ec52*/
        v10 = (v8 >> 1) + v8; /*0x79ec58*/
      else
        v10 = 0; /*0x79ec54*/
      if ( begin ) /*0x79ec5c*/
        v11 = this->end - begin; /*0x79ec67*/
      else
        v11 = 0; /*0x79ec5e*/
      if ( v10 < count + v11 ) /*0x79ec6e*/
      {
        if ( begin ) /*0x79ec72*/
          v12 = this->end - begin; /*0x79ec7d*/
        else
          v12 = 0; /*0x79ec74*/
        v10 = v12 + count; /*0x79ec80*/
      }
      _010201A0 = OB_stVector16_Allocate_010201A0(v10); /*0x79ec86*/
      v14 = (OB_stVector4_010201A0 *)this->begin; /*0x79ec8b*/
      LOBYTE(destinationEnd) = 0; /*0x79ec8e*/
      source = (OB_stVector4_010201A0 *)_010201A0; /*0x79ec9f*/
      LOBYTE(v31) = 1; /*0x79eca7*/
      v15 = OB_stVector4_UninitializedMoveRange_010201A0( /*0x79ecab*/
              v14,
              (OB_stVector4_010201A0 *)position,
              (OB_stVector4_010201A0 *)_010201A0);
      v16 = (OB_stVector4_010201A0 *)OB_stVector_stVectorFloat_UninitializedFillNThunk_010201A0( /*0x79ecbe*/
                                       (OB_stVectorFloat_010201A0 *)v15,
                                       count,
                                       (const OB_stVectorFloat_010201A0 *)&v27);
      v17 = (OB_stVector4_010201A0 *)this->end; /*0x79ecc3*/
      LOBYTE(destinationEnd) = 0; /*0x79ecc6*/
      OB_stVector4_UninitializedMoveRange_010201A0((OB_stVector4_010201A0 *)position, v17, v16); /*0x79ecdc*/
      v18 = (OB_stVector4_010201A0 *)this->begin; /*0x79ece1*/
      if ( v18 ) /*0x79ece9*/
        v19 = ((char *)this->end - (char *)v18) >> 4; /*0x79ecf4*/
      else
        v19 = 0; /*0x79eceb*/
      v20 = v19 + count; /*0x79ecf7*/
      if ( v18 ) /*0x79ecfb*/
      {
        OB_stVector4_DestroyRange_010201A0(v18, (OB_stVector4_010201A0 *)this->end); /*0x79ed07*/
        FormHeapFree((unsigned int)this->begin); /*0x79ed10*/
      }
      this->capacityEnd = (OB_stVectorFloat_010201A0 *)&source[v10]; /*0x79ed25*/
      this->end = (OB_stVectorFloat_010201A0 *)&source[v20]; /*0x79ed28*/
      this->begin = (OB_stVectorFloat_010201A0 *)source; /*0x79ed2b*/
    }
  }
  if ( v27.begin ) /*0x79ee1b*/
    FormHeapFree((unsigned int)v27.begin); /*0x79ee1e*/
}
