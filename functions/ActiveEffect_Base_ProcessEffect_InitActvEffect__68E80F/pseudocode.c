int __usercall ActiveEffect_Base_ProcessEffect_::InitActvEffect@<eax>(int a1@<esi>, int a2, float a3)
{
  *(_BYTE *)(a1 + 0x10) = 1;
  *(float *)(a1 + 4) = 0.0;
  return ActiveEffect_Base_ProcessEffect_::TestUpdate_(a2, a3);
}
