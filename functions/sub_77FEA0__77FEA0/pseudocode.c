_DWORD *__thiscall sub_77FEA0(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  result = this + 0x48; /*0x77fea0*/
  v2 = 0x100; /*0x77fea6*/
  do /*0x77febb*/
  {
    result[1] = *result; /*0x77feb2*/
    result += 2; /*0x77feb5*/
    --v2; /*0x77feb8*/
  }
  while ( v2 ); /*0x77febb*/
  return result; /*0x77febd*/
}
