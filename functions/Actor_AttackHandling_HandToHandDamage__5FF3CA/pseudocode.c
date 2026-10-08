// positive sp value has been detected, the output may be wrong!
int __usercall Actor_AttackHandling_::HandToHandDamage@<eax>(
        char a1@<bl>,
        int a2@<ebp>,
        Actor *a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        float a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28)
{
  SInt32 v28; // eax
  int v29; // eax
  double v30; // st7
  int v32; // [esp-8h] [ebp-18h]
  char v33; // [esp+0h] [ebp-10h]
  float FatigueFraction; // [esp+8h] [ebp-8h]

  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a4 + 0x19C))(a4, &a9, &a18); /*0x5ff3de*/
  FatigueFraction = Actor_GetFatigueFraction(a3, a1, (int)a3); /*0x5ff3f1*/
  v33 = ((int (__thiscall *)(Actor *))a3->vtbl->GetActorValue)(a3); /*0x5ff3fa*/
  v32 = ((int (__thiscall *)(Actor *))a3->vtbl->GetActorValue)(a3); /*0x5ff409*/
  v28 = ((int (__thiscall *)(Actor *))a3->vtbl->GetActorValue)(a3); /*0x5ff416*/
  Calc_HandToHandDamage(v28, 0x11, v32, COERCE_FLOAT(7), v33, 0, (float *)LODWORD(FatigueFraction)); /*0x5ff419*/
  a28 = 0x11; /*0x5ff423*/
  if ( !Actor_IsCreature(a3) ) /*0x5ff42b*/
  {
    if ( LOBYTE(STACK[0x1F0]) ) /*0x5ff434*/
    {
      v29 = a3->vtbl->GetActorValue(a3, kActorVal_HandToHand); /*0x5ff44a*/
      v30 = Calc_PowerAttackBonus(v29, a2); /*0x5ff44d*/
    }
    else
    {
      v30 = 1.0; /*0x5ff457*/
    }
    *(float *)&a16 = v30; /*0x5ff459*/
  }
  if ( !Actor_IsSneaking(a3) ) /*0x5ff45f*/
  {
    *(float *)&a9 = *(float *)&a16 * *(float *)&a9; /*0x5ff476*/
    *(float *)&a18 = *(float *)&a16 * *(float *)&a18; /*0x5ff47e*/
  }
  return Actor_AttackHandling_::ApplySneakAttackBonus(
           (int *)a3,
           a1,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28);
}
