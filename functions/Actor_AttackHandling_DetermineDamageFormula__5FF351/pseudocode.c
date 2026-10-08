void __usercall Actor_AttackHandling_::DetermineDamageFormula(
        TESObjectREFR *a1@<edi>,
        char a2@<bl>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10,
        int a11,
        float *a12,
        int a13,
        int a14,
        EntryData *a15,
        float a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27)
{
  ActorAnimData *v27; // eax
  unsigned __int8 AnimGroupFromField8Value; // al
  int GroupID; // ebp
  int v30; // [esp+18h] [ebp+18h]
  int v31; // [esp+34h] [ebp+34h]
  int v32; // [esp+3Ch] [ebp+3Ch]

  *(float *)&v30 = 0.0; /*0x5ff35b*/
  *(float *)&v32 = 0.0; /*0x5ff35f*/
  *(float *)&v31 = 1.0; /*0x5ff369*/
  v27 = a1->vtbl->GetAnimData(a1); /*0x5ff375*/
  AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v27, 3); /*0x5ff379*/
  GroupID = AnimKey_GetGroupID(AnimGroupFromField8Value); /*0x5ff38f*/
  if ( a15 ) /*0x5ff395*/
  {
    Actor_AttackHandling_::WeaponDamage( /*0x5ff395*/
      a2,
      (Actor *)a1,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      v30,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      v31,
      a17,
      *(float *)&v32,
      a19,
      a20,
      a21,
      a22,
      GroupID,
      a24,
      a25,
      a26,
      a27);
  }
  else if ( a12 ) /*0x5ff3a0*/
  {
    Actor_AttackHandling_::WeaponDamage_( /*0x5ff3a0*/
      a2,
      (Actor *)a1,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      v30,
      a10,
      a11,
      a12,
      a13,
      a14,
      0,
      v31,
      a17,
      *(float *)&v32,
      a19,
      a20,
      a21,
      a22,
      GroupID,
      a24,
      a25,
      a26,
      a27);
  }
  else if ( Actor_IsNPC((Actor *)a1) ) /*0x5ff3a8*/
  {
    Actor_AttackHandling_::HandToHandDamage( /*0x5ff3af*/
      a2,
      GroupID,
      (Actor *)a1,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      *(float *)&v30,
      a10,
      a11,
      0,
      a13,
      a14,
      0,
      v31,
      a17,
      *(float *)&v32,
      a19,
      a20,
      a21,
      a22,
      GroupID,
      a24,
      a25,
      a26,
      a27);
  }
  else
  {
    Actor_AttackHandling_::CreatureDamage( /*0x5ff3b0*/
      (int)a1,
      a4,
      a5,
      a6,
      a7,
      a8,
      v30,
      a10,
      a11,
      0,
      a13,
      a14,
      0,
      v31,
      a17,
      v32,
      a19,
      a20,
      a21,
      a22,
      GroupID);
  }
}
