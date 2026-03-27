void __thiscall sub_69F060(float *this, int a2)
{
  double v3; // st7
  void (__thiscall *v4)(float *, _DWORD); // edx
  float v5; // [esp+8h] [ebp-4h]
  float v6; // [esp+8h] [ebp-4h]

  v5 = sub_673B00();
  v3 = v5;
  v6 = v5 - *(this + 0x1E);
  if ( *(this + 0x1E) > v3 || *(this + 0x1E) < 0.0 )
  {
    v6 = 0.0;
    if ( v3 > 0.0 && flt_A3744C > v3 )
      v6 = v3;
  }
  *(this + 0x1E) = v3;
  if ( sub_572EA0(2) <= *(float *)&SrcStr )
  {
    v4 = *(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 0x204);
    *(this + 0x19) = v6 + *(this + 0x19);
    v4(this, LODWORD(v6));
  }
}
