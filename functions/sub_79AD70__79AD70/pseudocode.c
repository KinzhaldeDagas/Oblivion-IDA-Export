// Oblivion-authoritative copy construction for the 16-byte vector wrapper embedded at SFrondGuide+0x00. Allocates capacity for the exact source count and deep-copies 0x38-byte SFrondVertex records; scalar guide fields are copied separately by callers.
OB_stVector16_010201A0 *__thiscall OB_stVector_SFrondVertex_CopyCtor_010201A0(
        OB_stVector16_010201A0 *this,
        const OB_stVector16_010201A0 *source)
{
  unsigned int begin; // eax
  const OB_SFrondVertex_010201A0 *end; // ebx
  bool v6; // cc
  const OB_SFrondVertex_010201A0 *v7; // ecx
  int v9; // [esp+0h] [ebp-24h] BYREF
  void *v10; // [esp+10h] [ebp-14h]
  int *v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+20h] [ebp-4h]
  const OB_stVector16_010201A0 *sourcea; // [esp+2Ch] [ebp+8h]

  v11 = &v9; /*0x79ad98*/
  v10 = this; /*0x79ad9d*/
  begin = (unsigned int)source->begin; /*0x79ada3*/
  if ( begin ) /*0x79ada8*/
    begin = (int)((int)source->end - begin) / 0x38; /*0x79adc0*/
  if ( OB_stVector_SFrondVertex_Buy_010201A0(this, begin) ) /*0x79adc5*/
  {
    end = (const OB_SFrondVertex_010201A0 *)source->end; /*0x79adce*/
    v6 = source->begin <= end; /*0x79add1*/
    v12 = 0; /*0x79add4*/
    if ( !v6 ) /*0x79addb*/
      _invalid_parameter_noinfo((int)end, (int)this, (int)source); /*0x79addd*/
    sourcea = (const OB_stVector16_010201A0 *)source->begin; /*0x79ade8*/
    v7 = (const OB_SFrondVertex_010201A0 *)sourcea; /*0x79ade2*/
    if ( sourcea > source->end ) /*0x79adeb*/
    {
      _invalid_parameter_noinfo((int)end, (int)this, (int)source); /*0x79aded*/
      v7 = (const OB_SFrondVertex_010201A0 *)sourcea; /*0x79adf2*/
    }
    this->end = OB_SFrondVertex_UninitializedCopy_010201A0(v7, end, (OB_SFrondVertex_010201A0 *)this->begin); /*0x79ae10*/
  }
  return this; /*0x79ae15*/
}
