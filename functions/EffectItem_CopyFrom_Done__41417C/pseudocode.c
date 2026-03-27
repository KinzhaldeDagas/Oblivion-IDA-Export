// positive sp value has been detected, the output may be wrong!
void __userpurge EffectItem_CopyFrom_::Done(int a1@<esi>, double a2@<st0>, int a3)
{
  *(float *)(a1 + 0x20) = a2;
}
