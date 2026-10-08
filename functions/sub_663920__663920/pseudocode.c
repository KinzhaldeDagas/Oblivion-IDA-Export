// For the actor's currently equipped AMMO, removes all matching transferred ArrowProjectile references (+0x95 transfer marker) by calling cleanup with INT_MAX and immediate-destroy flags.
void __thiscall Actor_CleanupTransferredArrowProjectilesForEquippedAmmo(Actor *this)
{
  LowProcess *process; // esi
  TESForm *type; // eax

  if ( g_liveArrowProjectileCount > 0 ) /*0x66392a*/
  {
    process = this->members.super.process; /*0x66392d*/
    if ( process ) /*0x663932*/
    {
      if ( process->GetEquippedAmmoData(process, 1) ) /*0x663940*/
      {
        type = process->GetEquippedAmmoData(process, 1)->type; /*0x663954*/
        if ( type ) /*0x663959*/
          ArrowProjectile_CleanupMatchingByBaseAndTarget(type, 0x7FFFFFFF, (TESObjectREFR *)this, 1, 1);// Remove all matching +0x95 transferred projectile refs for this actor and currently equipped AMMO form; max count is INT_MAX, immediate-destroy mode enabled. /*0x663966*/
      }
    }
  }
}
