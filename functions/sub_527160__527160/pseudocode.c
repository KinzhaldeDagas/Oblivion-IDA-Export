// Vector resize: retain existing prefix, erase surplus elements when shrinking, fill only newly inserted elements when growing. Equal size does not overwrite coefficients. Matrix dimension products must already be valid; no recovery from rows*columns overflow.
void __userpurge FaceGenFloatVector_ResizeFill(
        OB_stVector4_010201A0 *this@<ecx>,
        int a2@<edi>,
        unsigned int a3,
        unsigned int value)
{
  unsigned int *begin; // ecx
  unsigned int v6; // eax
  int v7; // edi
  unsigned int *v8; // ebp
  unsigned int *end; // ebp
  unsigned int *v10; // edi
  unsigned int *v11; // edi
  OB_stVector4Iterator_010201A0 result; // [esp+10h] [ebp-8h] BYREF

  begin = this->begin; /*0x527168*/
  if ( begin ) /*0x52716e*/
    v6 = this->end - begin; /*0x527179*/
  else
    v6 = 0; /*0x527170*/
  if ( v6 >= a3 ) /*0x527182*/
  {
    if ( begin ) /*0x5271bd*/
    {
      end = this->end; /*0x5271bf*/
      if ( a3 < end - begin ) /*0x5271cb*/
      {
        if ( begin > end ) /*0x5271cf*/
          _invalid_parameter_noinfo(a3, a2, (int)this); /*0x5271d1*/
        v10 = this->begin; /*0x5271d6*/
        if ( v10 > this->end ) /*0x5271dc*/
          _invalid_parameter_noinfo(a3, (int)v10, (int)this); /*0x5271de*/
        result.current = v10; /*0x5271e3*/
        v11 = &v10[a3]; /*0x5271e7*/
        if ( v11 > this->end || v11 < this->begin ) /*0x5271f2*/
          _invalid_parameter_noinfo(a3, (int)v11, (int)this); /*0x5271f4*/
        OB_stVector4_EraseRange_010201A0( /*0x527204*/
          this,
          &result,
          (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)v11, (unsigned int)this),
          (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this));
      }
    }
  }
  else
  {
    if ( begin ) /*0x527186*/
      v7 = this->end - begin; /*0x527191*/
    else
      v7 = 0; /*0x527188*/
    v8 = this->end; /*0x527194*/
    if ( begin > v8 ) /*0x527199*/
      _invalid_parameter_noinfo(a3, v7, (int)this); /*0x52719b*/
    OB_stVectorFloat_InsertFill_CompilerCopy_010201A0( /*0x5271ac*/
      (OB_stVectorFloat_010201A0 *)this,
      (OB_stVectorFloatIterator_010201A0)__PAIR64__((unsigned int)v8, (unsigned int)this),
      a3 - v7,
      (const float *)&value);
  }
}
