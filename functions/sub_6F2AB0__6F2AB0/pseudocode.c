unsigned int *__thiscall sub_6F2AB0(OB_stVector4_010201A0 *this, unsigned int *a2, int a3)
{
  unsigned int *begin; // ecx
  unsigned int *v5; // eax
  int v6; // edi
  unsigned int *v7; // ebp
  unsigned int *end; // ebp
  unsigned int *v9; // edi
  unsigned int *v10; // edi
  OB_stVector4Iterator_010201A0 result; // [esp+10h] [ebp-8h] BYREF

  begin = this->begin; /*0x6f2ab8*/
  if ( begin ) /*0x6f2abe*/
    v5 = (unsigned int *)(this->end - begin); /*0x6f2ac9*/
  else
    v5 = 0; /*0x6f2ac0*/
  if ( v5 >= a2 ) /*0x6f2ad2*/
  {
    if ( begin ) /*0x6f2b0d*/
    {
      end = this->end; /*0x6f2b0f*/
      v5 = (unsigned int *)(end - begin); /*0x6f2b16*/
      if ( a2 < v5 ) /*0x6f2b1b*/
      {
        if ( begin > end ) /*0x6f2b1f*/
          _invalid_parameter_noinfo(); /*0x6f2b21*/
        v9 = this->begin; /*0x6f2b26*/
        if ( v9 > this->end ) /*0x6f2b2c*/
          _invalid_parameter_noinfo(); /*0x6f2b2e*/
        result.current = v9; /*0x6f2b33*/
        v10 = &v9[(_DWORD)a2]; /*0x6f2b37*/
        if ( v10 > this->end || v10 < this->begin ) /*0x6f2b42*/
          _invalid_parameter_noinfo(); /*0x6f2b44*/
        return (unsigned int *)OB_stVector4_EraseRange_010201A0( /*0x6f2b54*/
                                 this,
                                 &result,
                                 (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)v10, (unsigned int)this),
                                 (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this));
      }
    }
  }
  else
  {
    if ( begin ) /*0x6f2ad6*/
      v6 = this->end - begin; /*0x6f2ae1*/
    else
      v6 = 0; /*0x6f2ad8*/
    v7 = this->end; /*0x6f2ae4*/
    if ( begin > v7 ) /*0x6f2ae9*/
      _invalid_parameter_noinfo(); /*0x6f2aeb*/
    return sub_6F1C40(&this->allocatorState, (int)this, v7, (unsigned int)a2 - v6, (unsigned int *)&a3); /*0x6f2afc*/
  }
  return v5; /*0x6f2b01*/
}
