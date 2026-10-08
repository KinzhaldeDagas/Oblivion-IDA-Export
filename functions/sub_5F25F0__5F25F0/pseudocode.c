// Fast-travel loop player AV update: magicka regeneration/active magic adjustment over travel time.
void __userpurge sub_5F25F0(PlayerCharacter *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5)
{
  double AVModifierf; // st7
  LowProcess *process; // ecx
  double v8; // st7
  double v9; // st6
  double v10; // st7
  int v11; // eax
  float v12; // [esp+8h] [ebp-18h]
  float v13; // [esp+18h] [ebp-8h]
  float v14; // [esp+1Ch] [ebp-4h]
  float v15; // [esp+24h] [ebp+4h]
  float v16; // [esp+24h] [ebp+4h]
  int v17; // [esp+24h] [ebp+4h]
  int v18; // [esp+28h] [ebp+8h]

  if ( a1->super.super.magicCaster.vtbl->GetActiveMagicItem(&a1->super.super.magicCaster) && (_BYTE)a5 ) /*0x5f2608*/
  {
    sub_5F2714(a4, a5); /*0x5f2608*/
    return; /*0x5f2608*/
  }
  *(float *)&v18 = 0.0; /*0x5f2618*/
  if ( a1 == reference ) /*0x5f261c*/
  {
    AVModifierf = Player_GetAVModifierf((float *)reference, 0, 9); /*0x5f2622*/
LABEL_7:
    *(float *)&v18 = AVModifierf; /*0x5f263c*/
    goto LABEL_8; /*0x5f263c*/
  }
  process = a1->super.super.super.process; /*0x5f2629*/
  if ( process ) /*0x5f262e*/
  {
    AVModifierf = ((double (__thiscall *)(LowProcess *, int))process->Unk_119)(process, 9); /*0x5f263a*/
    goto LABEL_7; /*0x5f263a*/
  }
LABEL_8:
  Actor_GetBaseCalcAVi((int *)a1, a2, a3, (int)a1, 9); /*0x5f2640*/
  v15 = a1->vtbl->super.GetAV_F((Actor *)a1, kActorVal_Magicka); /*0x5f2667*/
  v8 = v15; /*0x5f266b*/
  v16 = (float)Double_To_SInt32(v15); /*0x5f267e*/
  v9 = v8 - v16; /*0x5f268a*/
  v10 = v16; /*0x5f268a*/
  if ( v9 < dbl_A2FC68 ) /*0x5f2697*/
    v10 = v10 - dbl_A2F928; /*0x5f2699*/
  *(float *)&v17 = v10; /*0x5f269f*/
  if ( v13 <= (double)*(float *)&v17 /*0x5f26f7*/
    || (v12 = COERCE_FLOAT(a1->vtbl->super.GetActorValue((Actor *)a1, kActorVal_StuntedMagicka)),
        v11 = ((int (__thiscall *)(PlayerCharacter *))a1->vtbl->super.GetActorValue)(a1),
        v14 = Calc_MagickaReturnRate(v11, 2, v12) * v13,
        v14 <= 0.0) )
  {
    sub_5F2714(v17, v18); /*0x5f2713*/
  }
  else
  {
    ((void (__thiscall *)(PlayerCharacter *, int, _DWORD, _DWORD))a1->vtbl->super.DamageAV_F)(a1, 9, LODWORD(v14), 0); /*0x5f270b*/
  }
}
