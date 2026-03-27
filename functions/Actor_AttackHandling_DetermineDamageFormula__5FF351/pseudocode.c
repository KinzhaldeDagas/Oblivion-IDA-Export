void __usercall Actor_AttackHandling_::DetermineDamageFormula(
        Actor *a1@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        float a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25)
{
  ActorAnimData *v25; // eax
  unsigned __int8 AnimGroupFromField8Value; // al
  int v27; // [esp+18h] [ebp+18h]
  int v28; // [esp+34h] [ebp+34h]
  int v29; // [esp+3Ch] [ebp+3Ch]
  int v30; // [esp+50h] [ebp+50h]

  *(float *)&v27 = 0.0;
  *(float *)&v29 = 0.0;
  *(float *)&v28 = 1.0;
  v25 = a1->vtbl->super.super.GetAnimData((TESObjectREFR *)a1);
  AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v25, 3);
  v30 = sub_51AA00(AnimGroupFromField8Value);
  if ( a13 )
  {
    Actor_AttackHandling_::WeaponDamage(
      a2,
      a3,
      a4,
      a5,
      a6,
      v27,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      v28,
      a15,
      v29,
      a17,
      a18,
      a19,
      a20,
      v30,
      a22,
      a23,
      a24,
      a25,
      0x48);
  }
  else if ( a10 )
  {
    Actor_AttackHandling_::WeaponDamage_(
      a2,
      a3,
      a4,
      a5,
      a6,
      v27,
      a8,
      a9,
      a10,
      a11,
      a12,
      0,
      v28,
      a15,
      v29,
      a17,
      a18,
      a19,
      a20,
      v30,
      a22,
      a23,
      a24,
      a25,
      0x48);
  }
  else if ( Actor_IsNPC(a1) )
  {
    Actor_AttackHandling_::HandToHandDamage(
      a2,
      a3,
      a4,
      a5,
      a6,
      v27,
      a8,
      a9,
      0,
      a11,
      a12,
      0,
      v28,
      a15,
      v29,
      a17,
      a18,
      a19,
      a20,
      v30,
      a22,
      a23,
      a24,
      a25,
      0x48);
  }
  else
  {
    Actor_AttackHandling_::CreatureDamage(
      (int)a1,
      a2,
      a3,
      a4,
      a5,
      a6,
      v27,
      a8,
      a9,
      0,
      a11,
      a12,
      0,
      v28,
      a15,
      v29,
      a17,
      a18,
      a19,
      a20,
      v30);
  }
}
