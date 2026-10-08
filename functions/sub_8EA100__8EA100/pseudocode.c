_OWORD *__thiscall sub_8EA100(void *this, _OWORD *a2)
{
  _OWORD *result; // eax

  result = sub_89DF00(a2 + 1, (int)this + 0x10); /*0x8ea114*/
  a2[0xD] = 0; /*0x8ea11c*/
  a2[0xE] = 0; /*0x8ea123*/
  return result; /*0x8ea12a*/
}
