// ODismemberment: Actor_OnPhysicalHit authoritative ABI. Args are (float fatigueLikeDamage, float healthDamage, Actor* attacker); second float is applied to Health AV 8, first is difficulty-adjusted and applied to Fatigue AV 0x0A, return is IsDead.
int __thiscall Actor_OnPhysicalHit(Actor *this, float arg0, float _18, Actor *a3)
{
  int v4; // edi
  CombatController *v7; // eax
  float *v8; // eax
  CombatController *v9; // eax
  float *v10; // eax
  double v11; // st7
  float a2; // [esp+0h] [ebp-10h]
  float v14; // [esp+4h] [ebp-Ch]
  float v15; // [esp+4h] [ebp-Ch]
  int v16; // [esp+8h] [ebp-8h]
  float a3a; // [esp+1Ch] [ebp+Ch]
  float v18; // [esp+20h] [ebp+10h]

  v16 = v4; /*0x5e58f5*/
  a2 = -arg0; /*0x5e58fe*/
  a3a = -Actor_AdjustDmgByDifficulty(this, a2, a3); /*0x5e590c*/
  if ( a3 ) /*0x5e5910*/
  {
    if ( ((int (__thiscall *)(Actor *, int))a3->vtbl->GetCombatController)(a3, v16) ) /*0x5e591c*/
    {
      v7 = a3->vtbl->GetCombatController(a3); /*0x5e592d*/
      v8 = (float *)CombatController_FindTargetInfo(v7, (int)this);// Attacker TargetInfo+0x10 accumulates difficulty-adjusted fatigue-like physical pressure dealt to this victim; SmartAI v0.7 reads it as bounded engagement momentum. /*0x5e5931*/
      if ( v8 ) /*0x5e5938*/
        v8[4] = v8[4] + a3a; /*0x5e5941*/
    }
  }
  if ( ((int (__thiscall *)(Actor *, int))this->vtbl->GetCombatController)(this, v16) /*0x5e596a*/
    && (v9 = this->vtbl->GetCombatController(this), (v10 = (float *)CombatController_FindTargetInfo(v9, (int)a3)) != 0) )// Find victim's TargetInfo for attacker; +0x0C accumulates positive health damage received from this attacker.
  {
    v11 = v18; /*0x5e5977*/
    v10[3] = v10[3] + v18; /*0x5e5979*/
  }
  else
  {
    v11 = v18; /*0x5e597e*/
  }
  if ( v11 > 0.0 ) /*0x5e598b*/
  {
    v14 = -v11; /*0x5e5999*/
    ((void (__thiscall *)(Actor *, int, _DWORD, Actor *))this->vtbl->DamageAV_F)(this, 8, LODWORD(v14), a3);// ODismemberment: Actor_OnPhysicalHit applies the second float argument to Health AV 8 through DamageAV_F. /*0x5e59a0*/
  }
  if ( a3a <= 0.0 ) /*0x5e59b5*/
    return ((int (__thiscall *)(Actor *, _DWORD))this->vtbl->super.super.IsDead)(this, 0); /*0x5e59ed*/
  v15 = -a3a; /*0x5e59c3*/
  ((void (__thiscall *)(Actor *, int, _DWORD))this->vtbl->DamageAV_F)(this, 0xA, LODWORD(v15));// ODismemberment: Actor_OnPhysicalHit applies the first/difficulty-adjusted float argument to Fatigue AV 0x0A, then returns IsDead. /*0x5e59ca*/
  return ((int (__thiscall *)(Actor *, _DWORD))this->vtbl->super.super.IsDead)(this, 0); /*0x5e59dc*/
}
