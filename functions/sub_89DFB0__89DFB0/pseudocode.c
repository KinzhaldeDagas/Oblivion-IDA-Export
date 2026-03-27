_OWORD *__thiscall sub_89DFB0(_OWORD *this, _OWORD *a2)
{
  _OWORD *result; // eax

  result = sub_89DF00(a2 + 1, (int)(this + 1));
  a2[0xD] = *(this + 0xD);
  a2[0xE] = *(this + 0xE);
  return result;
}
