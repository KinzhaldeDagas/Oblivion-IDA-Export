// Fixed-stride 0x0C vector insert/fill machinery for OB_CBranchChildRef records. Handles overlap, capacity growth, reallocation, and count copies; the observed wrapper at 0x791460 always requests count=1.
unsigned int __thiscall OB_stVectorBranchChildRef_InsertFill_010201A0(
        OB_stVector16_010201A0 *this,
        int iteratorOwner,
        OB_CBranchChildRef_010201A0 *position,
        unsigned int count,
        const OB_CBranchChildRef_010201A0 *value)
{
  float percentBetweenParentVertices; // edx
  unsigned int result; // eax
  void *begin; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  void *v16; // ecx
  int v17; // eax
  unsigned int v18; // edi
  OB_CBranchChildRef_010201A0 *end; // ecx
  unsigned int v20; // edi
  _DWORD *v21; // [esp-20h] [ebp-4Ch]
  _DWORD *v22; // [esp-Ch] [ebp-38h]
  int v23; // [esp-8h] [ebp-34h]
  int v24; // [esp+0h] [ebp-2Ch] BYREF
  _DWORD v25[4]; // [esp+10h] [ebp-1Ch] BYREF
  int v26; // [esp+28h] [ebp-4h]
  OB_CBranchChildRef_010201A0 *counta; // [esp+3Ch] [ebp+10h]
  OB_CBranchChildRef_010201A0 *valuea; // [esp+40h] [ebp+14h]
  const OB_CBranchChildRef_010201A0 *valueb; // [esp+40h] [ebp+14h]

  v25[3] = &v24; /*0x790eb8*/
  percentBetweenParentVertices = value->percentBetweenParentVertices; /*0x790ec2*/
  result = value->childBranch; /*0x790ec5*/
  v25[0] = value->parentVertexIndex; /*0x790ec8*/
  begin = this->begin; /*0x790ecb*/
  *(float *)&v25[1] = percentBetweenParentVertices; /*0x790ed0*/
  v25[2] = result; /*0x790ed3*/
  if ( begin ) /*0x790ed6*/
  {
    result = 0x2AAAAAAB * ((char *)this->capacityEnd - (char *)begin); /*0x790ee6*/
    v9 = ((char *)this->capacityEnd - (char *)begin) / 0xC; /*0x790eef*/
  }
  else
  {
    v9 = 0; /*0x790ed8*/
  }
  if ( count ) /*0x790ef6*/
  {
    if ( begin ) /*0x790efe*/
      v10 = ((char *)this->end - (char *)begin) / 0xC; /*0x790f17*/
    else
      v10 = 0; /*0x790f00*/
    if ( 0x15555555 - v10 < count ) /*0x790f22*/
      OB_stVector_ThrowLengthError_010201A0(count); /*0x790f24*/
    if ( begin ) /*0x790f2b*/
      v11 = ((char *)this->end - (char *)begin) / 0xC; /*0x790f44*/
    else
      v11 = 0; /*0x790f2d*/
    if ( v9 >= count + v11 ) /*0x790f4a*/
    {
      end = (OB_CBranchChildRef_010201A0 *)this->end; /*0x79105e*/
      valueb = end; /*0x79107a*/
      if ( end - position >= count ) /*0x79107d*/
      {
        v20 = count; /*0x7910f7*/
        counta = &end[-count]; /*0x7910ff*/
        this->end = sub_6F15A0(counta, end, end); /*0x79110a*/
        OB_CBranchChildRef_CopyBackwardThunk_010201A0((int)position, (int)counta, (int)valueb);// Checked insertion shifts the initialized CBranchChildRef suffix backward in 0x0C-byte records before filling the insertion gap; RT4.1 names the equivalent record SIdvBranch only after this Oblivion layout was established. /*0x791113*/
        return (unsigned int)OB_stVectorBranchChildRef_FillRange_010201A0( /*0x791120*/
                               position,
                               &position[v20].parentVertexIndex,
                               v25);
      }
      else
      {
        sub_6F15A0(position, end, &position[count].parentVertexIndex); /*0x791090*/
        v23 = count - ((char *)this->end - (char *)position) / 0xC; /*0x7910b2*/
        v22 = this->end; /*0x7910b3*/
        v26 = 2; /*0x7910b6*/
        sub_6F1380(v22, v23, v25); /*0x7910bd*/
        this->end = (char *)this->end + 0xC * count; /*0x7910c5*/
        return (unsigned int)OB_stVectorBranchChildRef_FillRange_010201A0( /*0x7910d3*/
                               position,
                               (_DWORD *)this->end + 0xFFFFFFFD * count,
                               v25);
      }
    }
    else
    {
      if ( 0x15555555 - (v9 >> 1) >= v9 ) /*0x790f5d*/
        v12 = (v9 >> 1) + v9; /*0x790f63*/
      else
        v12 = 0; /*0x790f5f*/
      if ( begin ) /*0x790f67*/
        v13 = ((char *)this->end - (char *)begin) / 0xC; /*0x790f80*/
      else
        v13 = 0; /*0x790f69*/
      if ( v12 < count + v13 ) /*0x790f86*/
        v12 = count + sub_6F1080(this); /*0x790f91*/
      valuea = (OB_CBranchChildRef_010201A0 *)OB_stVectorBranchChildRef_Allocate_010201A0((char *)v12); /*0x790fa6*/
      v21 = this->begin; /*0x790fb3*/
      v26 = 0; /*0x790fb4*/
      v14 = sub_6F11A0(v21, position, valuea); /*0x790fbb*/
      v15 = sub_6F1380(v14, count, v25); /*0x790fcb*/
      sub_6F11A0(position, (_DWORD *)this->end, v15); /*0x790fe6*/
      v16 = this->begin; /*0x790feb*/
      if ( v16 ) /*0x790ff3*/
        v17 = ((char *)this->end - (char *)v16) / 0xC; /*0x79100c*/
      else
        v17 = 0; /*0x790ff5*/
      v18 = v17 + count; /*0x79100e*/
      if ( v16 ) /*0x791012*/
        FormHeapFree((unsigned int)this->begin); /*0x791015*/
      this->capacityEnd = &valuea[v12]; /*0x791029*/
      this->end = &valuea[v18]; /*0x79102f*/
      this->begin = valuea; /*0x791032*/
      return (unsigned int)valuea; /*0x79101d*/
    }
  }
  return result; /*0x791035*/
}
