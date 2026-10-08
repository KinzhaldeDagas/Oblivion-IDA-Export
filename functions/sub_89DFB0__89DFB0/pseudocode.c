_OWORD *__thiscall sub_89DFB0(_OWORD *this, _OWORD *a2)
{
  _OWORD *result; // eax

  result = sub_89DF00(a2 + 1, (int)(this + 1)); /*0x89dfbf*/
  a2[0xD] = *(this + 0xD); /*0x89dfcb*/
  a2[0xE] = *(this + 0xE); /*0x89dfd9*/
  return result; /*0x89dfe0*/
}
