char __thiscall sub_563F90(float *this, float a2)
{
  double v3; // st7

  if ( a2 == 0.0 )
    return 1;
  v3 = a2;
  if ( 0.0 == *(this + 0x3B) )
  {
    *(this + 0x3B) = v3 + flt_B3A024 + flt_B3A024 / (double)iUpdateGroups * (double)(unsigned __int8)byte_B3A000;
    byte_B3A000 = (unsigned __int8)(byte_B3A000 + 1) % iUpdateGroups;
    return 1;
  }
  else if ( *(this + 0x3B) >= v3 )
  {
    return 0;
  }
  else
  {
    *(this + 0x3B) = v3 + flt_B3A024;
    return 1;
  }
}
