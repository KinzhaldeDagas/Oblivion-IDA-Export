double __usercall Actor_GetFatigueFraction@<st0>(Actor *this@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  float BaseCalcAVi; // [esp+4h] [ebp-4h]

  BaseCalcAVi = (float)Actor_GetBaseCalcAVi((int *)this, a2, a3, (int)this, 0xA);
  if ( 0.0 == BaseCalcAVi )
    return (float)1.0;
  return (float)(((double (__thiscall *)(Actor *, int))this->vtbl->GetAV_F)(this, 0xA) / BaseCalcAVi);
}
