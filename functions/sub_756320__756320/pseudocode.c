float *__thiscall sub_756320(float *this, _DWORD **a2)
{
  char *v3; // eax
  float *v4; // esi

  v3 = (char *)FormHeapAlloc(0x100u); /*0x756329*/
  if ( v3 ) /*0x756333*/
    v4 = (float *)sub_7561F0( /*0x756392*/
                    v3,
                    1.0,
                    0,
                    0,
                    0,
                    0,
                    1.0,
                    1.0,
                    LODWORD(stru_B258D0.x),
                    LODWORD(stru_B258D0.y),
                    LODWORD(stru_B258D0.z),
                    LODWORD(stru_B258DC.x),
                    LODWORD(stru_B258DC.y),
                    LODWORD(stru_B258DC.z));
  else
    v4 = 0; /*0x756396*/
  sub_75ED50(this, (int)v4, a2); /*0x7563a0*/
  v4[0xC] = *(this + 0xC); /*0x7563a8*/
  v4[0xD] = *(this + 0xD); /*0x7563ae*/
  v4[0xE] = *(this + 0xE); /*0x7563b4*/
  v4[0xF] = *(this + 0xF); /*0x7563ba*/
  v4[0x10] = *(this + 0x10); /*0x7563c3*/
  v4[0x11] = *(this + 0x11); /*0x7563c8*/
  v4[0x12] = *(this + 0x12); /*0x7563ce*/
  v4[0x13] = *(this + 0x13); /*0x7563d4*/
  return v4; /*0x7563d7*/
}
