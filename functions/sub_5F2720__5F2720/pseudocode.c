void __userpurge sub_5F2720(PlayerCharacter *a1@<ecx>, int a2@<ebx>, int a3@<edi>, float a4)
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

  v11 = 0.0;
  if ( a1 == TESDataHandler_g_PlayerRef )
  {
    AVModifierf = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 0xA);
  }
  else
  {
    process = a1->super.super.super.process;
    if ( !process )
      goto LABEL_6;
    AVModifierf = ((double (__thiscall *)(LowProcess *, int))process->Unk_119)(process, 0xA);
  }
  v11 = AVModifierf;
LABEL_6:
  v12 = a1->vtbl->super.GetAV_F((Actor *)a1, kActorVal_Fatigue);
  v7 = v12;
  v13 = (float)Double_To_SInt32(v12);
  v8 = v7 - v13;
  v9 = v13;
  if ( v8 < dbl_A2FC68 )
    v9 = v9 - dbl_A2F928;
  v14 = v9;
  if ( v14 < (double)Actor_GetBaseCalcAVi((int *)a1, a2, a3, (int)a1, 0xA) + v11 )
  {
    v10 = a1->vtbl->super.GetActorValue((Actor *)a1, kActorVal_Endurance);
    v15 = Calc_FatigueReturnRate(v10) * a4;
    if ( v15 > 0.0 )
      a1->vtbl->super.DamageAV_F((Actor *)a1, 0xA, COERCE_FLOAT(LODWORD(v15)), 0);
  }
}
