int __thiscall sub_684EC0(int **this)
{
  unsigned int v2; // edi
  double v3; // st7
  float v5; // [esp+8h] [ebp-Ch]
  float v6; // [esp+Ch] [ebp-8h]
  float v7; // [esp+10h] [ebp-4h]

  sub_684830(this);
  v2 = (unsigned int)*(this + 0xC);
  if ( v2 )
  {
    sub_538B60(*(this + 0xC));
    FormHeapFree(v2);
    *(this + 0xC) = 0;
  }
  sub_68C6E0(this + 5);
  v3 = flt_A32048;
  *((float *)this + 7) = flt_A32048;
  *(this + 0x12) = 0;
  *((float *)this + 9) = 0.0;
  *((_BYTE *)this + 0x2C) = 0;
  *((float *)this + 8) = 0.0;
  v5 = v3;
  v6 = v3;
  *((float *)this + 0xF) = v5;
  v7 = v3;
  *((float *)this + 0x10) = v6;
  *((float *)this + 0x11) = v7;
  return LODWORD(v5);
}
