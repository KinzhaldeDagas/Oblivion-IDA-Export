_DWORD *__thiscall sub_72F290(Ni2DBuffer **this, _DWORD *a2)
{
  _DWORD *result; // eax
  Ni2DBuffer *v4; // eax

  nullsub_returnvVoid_1arg((int)a2); /*0x72f299*/
  result = (_DWORD *)a2[0x36]; /*0x72f29e*/
  if ( (unsigned int)result >= 0x4000001 && (unsigned int)result < 0xA010065 ) /*0x72f2b0*/
  {
    v4 = (Ni2DBuffer *)sub_7124A0(a2); /*0x72f2b4*/
    return NiSmartPointer_Set__(this + 2, v4); /*0x72f2bd*/
  }
  return result; /*0x72f2c2*/
}
