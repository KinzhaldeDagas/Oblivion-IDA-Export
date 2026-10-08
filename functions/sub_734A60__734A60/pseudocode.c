void __thiscall sub_734A60(unsigned __int16 *this, _BYTE *a2, _BYTE *a3)
{
  unsigned int i; // esi
  _BYTE *v6; // eax

  for ( i = 0; i < *(this + 0x87); a2 += 4 ) /*0x734a66*/
  {
    *a3 = a2[2]; /*0x734a84*/
    a3[1] = a2[1]; /*0x734a8a*/
    v6 = a3 + 2; /*0x734a93*/
    *v6++ = *a2; /*0x734a96*/
    *v6 = a2[3]; /*0x734a9f*/
    ++i; /*0x734aa8*/
    a3 = v6 + 1; /*0x734aab*/
  }
}
