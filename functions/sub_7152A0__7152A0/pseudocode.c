void __thiscall sub_7152A0(float *this)
{
  double v1; // st7
  float v2; // [esp+0h] [ebp-4h]
  float v3; // [esp+0h] [ebp-4h]
  float v4; // [esp+0h] [ebp-4h]
  float v5; // [esp+0h] [ebp-4h]

  v2 = fabs(*(this + 1));
  v1 = flt_A7E738;
  if ( v1 >= v2 && 0.0 != *(this + 1) )
    *(this + 1) = 0.0;
  v3 = fabs(*(this + 2));
  if ( v3 <= v1 && 0.0 != *(this + 2) )
    *(this + 2) = 0.0;
  v4 = fabs(*(this + 3));
  if ( v4 <= v1 && 0.0 != *(this + 3) )
    *(this + 3) = 0.0;
  v5 = fabs(*this);
  if ( v5 <= v1 && 0.0 != *this )
    *this = 0.0;
}
