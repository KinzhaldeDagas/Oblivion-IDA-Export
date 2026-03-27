int __thiscall HighProcess_ModMaxAVf_(float *this, int a2, int a3, float a4)
{
  int result; // eax

  result = MiddleProcess_ModAVfMax(this, a2, a3, a4);
  if ( a3 == 0xB )
  {
    *(this + 0xA5) = flt_A30634;
  }
  else if ( a3 == 0x30 )
  {
    *(this + 0xA6) = NAN;
  }
  return result;
}
