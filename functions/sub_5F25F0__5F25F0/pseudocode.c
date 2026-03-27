int __userpurge sub_5F25F0@<eax>(PlayerCharacter *a1@<ecx>, int a2@<ebx>, int a3@<edi>, float a4, float a5)
{
  double AVModifierf; // st7
  LowProcess *process; // ecx
  double v8; // st7
  double v9; // st6
  double v10; // st7
  int v11; // eax
  float v13; // [esp+8h] [ebp-18h]
  float v14; // [esp+18h] [ebp-8h]
  float v15; // [esp+1Ch] [ebp-4h]
  float v16; // [esp+24h] [ebp+4h]
  float v17; // [esp+24h] [ebp+4h]
  float v18; // [esp+24h] [ebp+4h]
  float v19; // [esp+28h] [ebp+8h]

  if ( a1->super.super.magicCaster.vtbl->GetActiveMagicItem(&a1->super.super.magicCaster) && LOBYTE(a5) )
    return sub_5F2714(LODWORD(a4), LODWORD(a5));
  v19 = 0.0;
  if ( a1 == TESDataHandler_g_PlayerRef )
  {
    AVModifierf = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 9);
LABEL_7:
    v19 = AVModifierf;
    goto LABEL_8;
  }
  process = a1->super.super.super.process;
  if ( process )
  {
    AVModifierf = ((double (__thiscall *)(LowProcess *, int))process->Unk_119)(process, 9);
    goto LABEL_7;
  }
LABEL_8:
  Actor_GetBaseCalcAVi((int *)a1, a2, a3, (int)a1, 9);
  v16 = a1->vtbl->super.GetAV_F((Actor *)a1, kActorVal_Magicka);
  v8 = v16;
  v17 = (float)Double_To_SInt32(v16);
  v9 = v8 - v17;
  v10 = v17;
  if ( v9 < dbl_A2FC68 )
    v10 = v10 - dbl_A2F928;
  v18 = v10;
  if ( v14 <= (double)v18 )
    return sub_5F2714(LODWORD(v18), LODWORD(v19));
  v13 = COERCE_FLOAT(a1->vtbl->super.GetActorValue((Actor *)a1, kActorVal_StuntedMagicka));
  v11 = ((int (__thiscall *)(PlayerCharacter *))a1->vtbl->super.GetActorValue)(a1);
  v15 = Calc_MagickaReturnRate(v11, 2, v13) * v14;
  if ( v15 <= 0.0 )
    return sub_5F2714(LODWORD(v18), LODWORD(v19));
  else
    return ((int (__thiscall *)(PlayerCharacter *, int, float, _DWORD))a1->vtbl->super.DamageAV_F)(
             a1,
             9,
             COERCE_FLOAT(LODWORD(v15)),
             0);
}
