bool __thiscall sub_4B9CB0(float *this)
{
  return (*(this + 0x1E) <= 0.0 || *(this + 0x1E) > fConst_200)
      && (*(this + 0x1F) <= 0.0 || flt_A44F64 < (double)*(this + 0x1F));
}
