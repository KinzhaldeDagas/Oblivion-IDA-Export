// Fast-travel loop player AV update: fatigue regeneration over travel time.
void __userpurge sub_5F2720(Actor *a1@<ecx>, int a2@<ebx>, int a3@<edi>, float a4)
{
  double AVModifierf; // st7
  LowProcess *process; // ecx
  double v7; // st7
  double v8; // st6
  double v9; // st7
  signed int v10; // eax
  float v11; // [esp+18h] [ebp-Ch]
  float v12; // [esp+1Ch] [ebp-8h]
  float v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+1Ch] [ebp-8h]
  float v15; // [esp+28h] [ebp+4h]

  v11 = 0.0; /*0x5f2728*/
  if ( a1 == (Actor *)reference ) /*0x5f2734*/
  {
    AVModifierf = Player_GetAVModifierf((float *)reference, 0, 0xA); /*0x5f273a*/
  }
  else
  {
    process = a1->members.super.process; /*0x5f2741*/
    if ( !process ) /*0x5f2746*/
      goto LABEL_6; /*0x5f2746*/
    AVModifierf = ((double (__thiscall *)(LowProcess *, int))process->Unk_119)(process, 0xA); /*0x5f2752*/
  }
  v11 = AVModifierf; /*0x5f2754*/
LABEL_6:
  v12 = a1->vtbl->GetAV_F(a1, kActorVal_Fatigue); /*0x5f2758*/
  v7 = v12; /*0x5f276a*/
  v13 = (float)Double_To_SInt32(v12); /*0x5f277d*/
  v8 = v7 - v13; /*0x5f2789*/
  v9 = v13; /*0x5f2789*/
  if ( v8 < dbl_A2FC68 ) /*0x5f2796*/
    v9 = v9 - dbl_A2F928; /*0x5f2798*/
  v14 = v9; /*0x5f279e*/
  if ( v14 < (double)Actor_GetBaseCalcAVi((int *)a1, a2, a3, (int)a1, 0xA) + v11 ) /*0x5f27ca*/
  {
    v10 = a1->vtbl->GetActorValue(a1, kActorVal_Endurance); /*0x5f27d8*/
    v15 = Calc_FatigueReturnRate(v10) * a4; /*0x5f27e7*/
    if ( v15 > 0.0 ) /*0x5f27fa*/
      ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))a1->vtbl->DamageAV_F)(a1, 0xA, LODWORD(v15), 0); /*0x5f280e*/
  }
}
