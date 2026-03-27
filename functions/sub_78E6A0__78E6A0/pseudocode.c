void __thiscall sub_78E6A0(float *this)
{
  int i; // eax
  double v3; // st6
  float v4; // [esp+4h] [ebp-4h]

  v4 = sub_78E600(this);
  if ( v4 != 0.0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 5); *(this + i - 1) = v3 / v4 )
      v3 = *(this + i++);
  }
}
