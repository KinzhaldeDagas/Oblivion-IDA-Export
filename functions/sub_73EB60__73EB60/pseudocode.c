int __thiscall sub_73EB60(float *this, int a2)
{
  if ( 0.0 == *(this + 5) )
    return sub_73EA40((NiPoint3 *)this, a2);
  else
    return sub_72A820(this + 6, (NiPoint3 *)(this + 2), (NiTransform *)(a2 + 0x64));
}
