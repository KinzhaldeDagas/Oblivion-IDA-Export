// Oblivion st_vector<SFrondGuide> copy constructor. Allocates sourceCount*0x30 and deep-copy-constructs each compact guide, including its owned SFrondVertex vector. The executable establishes the by-value layout.
// positive sp value has been detected, the output may be wrong!
OB_stVector_SFrondGuide_010201A0 *__thiscall OB_stVector_SFrondGuide_CopyCtor_010201A0(
        OB_stVector_SFrondGuide_010201A0 *this,
        const OB_stVector_SFrondGuide_010201A0 *source)
{
  OB_SFrondGuide_010201A0 *begin; // eax
  unsigned int sourceCount; // esi
  OB_SFrondGuide_010201A0 *allocatedBegin; // eax
  OB_SFrondGuide_010201A0 *sourceEnd; // esi
  bool v8; // cc
  const OB_SFrondGuide_010201A0 *v9; // ecx
  int v11; // [esp-18h] [ebp-3Ch] BYREF
  OB_stVector_SFrondGuide_010201A0 *v12; // [esp+10h] [ebp-14h]
  int *v13; // [esp+14h] [ebp-10h]
  int v14; // [esp+20h] [ebp-4h]
  OB_SFrondGuide_010201A0 *sourceBegin; // [esp+2Ch] [ebp+8h]

  v13 = &v11; /*0x79ee68*/
  v12 = this; /*0x79ee6d*/
  begin = source->begin; /*0x79ee73*/
  if ( begin ) /*0x79ee7a*/
    sourceCount = source->end - begin; /*0x79ee94*/
  else
    sourceCount = 0; /*0x79ee7c*/
  this->begin = 0; /*0x79ee9a*/
  this->end = 0; /*0x79ee9d*/
  this->capacityEnd = 0; /*0x79eea0*/
  if ( sourceCount ) /*0x79eea3*/
  {
    if ( sourceCount > 0x5555555 ) /*0x79eeab*/
      OB_stVector_ThrowLengthError_010201A0((int)this); /*0x79eead*/
    allocatedBegin = OB_stVector_SFrondGuide_Allocate_010201A0(sourceCount); /*0x79eeb4*/
    this->begin = allocatedBegin; /*0x79eec1*/
    this->end = allocatedBegin; /*0x79eec4*/
    this->capacityEnd = &allocatedBegin[sourceCount]; /*0x79eec7*/
    sourceEnd = source->end; /*0x79eeca*/
    v8 = source->begin <= sourceEnd; /*0x79eed0*/
    v14 = 0; /*0x79eed3*/
    if ( !v8 ) /*0x79eeda*/
      _invalid_parameter_noinfo((int)source, (int)this, (int)sourceEnd); /*0x79eedc*/
    sourceBegin = source->begin; /*0x79eee7*/
    v9 = sourceBegin; /*0x79eee1*/
    if ( sourceBegin > source->end ) /*0x79eeea*/
    {
      _invalid_parameter_noinfo((int)source, (int)this, (int)sourceEnd); /*0x79eeec*/
      v9 = sourceBegin; /*0x79eef1*/
    }
    this->end = OB_SFrondGuide_UninitializedCopy_010201A0(v9, sourceEnd, this->begin); /*0x79ef0f*/
  }
  return this; /*0x79ef14*/
}
