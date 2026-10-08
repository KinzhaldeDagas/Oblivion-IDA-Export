// SmartAI v0.3 evidence: current fatigue / calculated base fatigue; returns 1.0 when base is zero.
double __usercall Actor_GetFatigueFraction@<st0>(Actor *this@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  float BaseCalcAVi; // [esp+4h] [ebp-4h]

  BaseCalcAVi = (float)Actor_GetBaseCalcAVi((int *)this, a2, a3, (int)this, 0xA); /*0x5f4893*/
  if ( 0.0 == BaseCalcAVi ) /*0x5f48a2*/
    return (float)1.0; /*0x5f48c5*/
  return (float)(((double (__thiscall *)(Actor *, int))this->vtbl->GetAV_F)(this, 0xA) / BaseCalcAVi); /*0x5f48bd*/
}
