double __thiscall sub_89DA90(float *this)
{
  if ( *(this + 0x30) == *(float *)&SrcStr ) /*0x89daa5*/
    return *(float *)&SrcStr; /*0x89daa9*/
  else
    return fConstant_1 / *(this + 0x30); /*0x89dab0*/
}
