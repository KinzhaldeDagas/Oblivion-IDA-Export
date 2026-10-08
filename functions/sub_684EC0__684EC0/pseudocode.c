int __thiscall sub_684EC0(int **this)
{
  unsigned int v2; // edi
  double v3; // st7
  float v5; // [esp+8h] [ebp-Ch]
  float v6; // [esp+Ch] [ebp-8h]
  float v7; // [esp+10h] [ebp-4h]

  sub_684830(this); /*0x684ec7*/
  v2 = (unsigned int)*(this + 0xC); /*0x684ecc*/
  if ( v2 ) /*0x684ed1*/
  {
    sub_538B60(*(this + 0xC)); /*0x684ed5*/
    FormHeapFree(v2); /*0x684edb*/
    *(this + 0xC) = 0; /*0x684ee3*/
  }
  sub_68C6E0((NiDX92DBufferData **)this + 5); /*0x684eed*/
  v3 = flt_A32048; /*0x684ef2*/
  *((float *)this + 7) = flt_A32048; /*0x684ef8*/
  *(this + 0x12) = 0; /*0x684efe*/
  *((float *)this + 9) = 0.0; /*0x684f05*/
  *((_BYTE *)this + 0x2C) = 0; /*0x684f08*/
  *((float *)this + 8) = 0.0; /*0x684f0c*/
  v5 = v3; /*0x684f0f*/
  v6 = v3; /*0x684f17*/
  *((float *)this + 0xF) = v5; /*0x684f1f*/
  v7 = v3; /*0x684f22*/
  *((float *)this + 0x10) = v6; /*0x684f2a*/
  *((float *)this + 0x11) = v7; /*0x684f2d*/
  return LODWORD(v5); /*0x684f30*/
}
