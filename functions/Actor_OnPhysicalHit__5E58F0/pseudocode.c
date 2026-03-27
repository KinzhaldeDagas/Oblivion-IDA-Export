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

  v16 = v4;
  a2 = -arg0;
  a3a = -Actor_AdjustDmgByDifficulty(this, a2, a3);
  if ( a3 )
  {
    if ( ((int (__thiscall *)(Actor *, int))a3->vtbl->GetCombatController)(a3, v16) )
    {
      v7 = a3->vtbl->GetCombatController(a3);
      v8 = (float *)sub_613640(v7, (int)this);
      if ( v8 )
        v8[4] = v8[4] + a3a;
    }
  }
  if ( ((int (__thiscall *)(Actor *, int))this->vtbl->GetCombatController)(this, v16)
    && (v9 = this->vtbl->GetCombatController(this), (v10 = (float *)sub_613640(v9, (int)a3)) != 0) )
  {
    v11 = v18;
    v10[3] = v10[3] + v18;
  }
  else
  {
    v11 = v18;
  }
  if ( v11 > 0.0 )
  {
    v14 = -v11;
    ((void (__thiscall *)(Actor *, int, _DWORD, Actor *))this->vtbl->DamageAV_F)(this, 8, LODWORD(v14), a3);
  }
  if ( a3a <= 0.0 )
    return ((int (__thiscall *)(Actor *, _DWORD))this->vtbl->super.super.IsDead)(this, 0);
  v15 = -a3a;
  ((void (__thiscall *)(Actor *, int, _DWORD))this->vtbl->DamageAV_F)(this, 0xA, LODWORD(v15));
  return ((int (__thiscall *)(Actor *, _DWORD))this->vtbl->super.super.IsDead)(this, 0);
}
