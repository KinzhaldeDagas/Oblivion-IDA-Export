int __thiscall sub_73EB60(float *this, int a2)
{
  if ( 0.0 == *(this + 5) ) /*0x73eb6a*/
    return sub_73EA40((NiPoint3 *)this, a2); /*0x73eb6c*/
  else
    return NiBound_TransformInto(this + 6, (NiPoint3 *)(this + 2), (NiTransform *)(a2 + 0x64)); /*0x73eb80*/
}
