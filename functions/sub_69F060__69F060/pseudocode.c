void __thiscall sub_69F060(float *this, int a2)
{
  double v3; // st7
  void (__thiscall *v4)(float *, _DWORD); // edx
  float v5; // [esp+8h] [ebp-4h]
  float v6; // [esp+8h] [ebp-4h]

  v5 = sub_673B00(); /*0x69f06e*/
  v3 = v5; /*0x69f072*/
  v6 = v5 - *(this + 0x1E); /*0x69f07b*/
  if ( *(this + 0x1E) > v3 || *(this + 0x1E) < 0.0 ) /*0x69f095*/
  {
    v6 = 0.0; /*0x69f097*/
    if ( v3 > 0.0 && flt_A3744C > v3 ) /*0x69f0b1*/
      v6 = v3; /*0x69f0b3*/
  }
  *(this + 0x1E) = v3; /*0x69f0bb*/
  if ( sub_572EA0(2) <= *(float *)&SrcStr ) /*0x69f0d6*/
  {
    v4 = *(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 0x204); /*0x69f0de*/
    *(this + 0x19) = v6 + *(this + 0x19); /*0x69f0ec*/
    v4(this, LODWORD(v6)); /*0x69f0f2*/
  }
}
