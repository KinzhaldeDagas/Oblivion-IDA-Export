// Arrow projectile Havok-contact callback. Resolves the collidable to a live NiAVObject/TESObjectREFR, classifies Actor versus non-Actor impact, converts contact vectors, and dispatches the corresponding impact handler.
void __cdecl ArrowProjectile_HandleCollisionHit(
        ArrowProjectile *projectile,
        void *collidable,
        const void *havokPoint,
        const void *havokNormal)
{
  double v4; // st5
  double v5; // st6
  double v6; // st7
  TESChildCELL *v7; // edi
  NiAVObject *v8; // eax
  Actor *v9; // esi
  LowProcess *process; // ecx
  TESObjectREFR *v11; // edi
  float *v12; // eax
  int v13; // ebp
  TESObjectREFR *shooter; // ecx
  TESObjectREFR *v15; // edi
  float *v16; // eax
  int v17; // eax
  int v18; // eax
  TESObjectREFR *v19; // esi
  int v20; // eax
  int v21[3]; // [esp+10h] [ebp-18h] BYREF
  float v22[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v7 = 0; /*0x60d95c*/
  v8 = bhkCollidable_ResolveNiAVObject((int)collidable);// Resolve Havok collidable to NiAVObject and then owning TESObjectREFR; projectile impact never substitutes the equipped WEAP reference. /*0x60d95e*/
  if ( v8 ) /*0x60d968*/
    v7 = (TESChildCELL *)sub_4DC270((int)v8); /*0x60d973*/
  v9 = (Actor *)OblivionDynamicCast( /*0x60d990*/
                  v7,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);                           // Classify struck reference as Actor for actor damage/embedding versus non-actor reference impact.
  if ( *((_BYTE *)collidable + 0x18) != 2 || !((char *)collidable + *((_DWORD *)collidable + 4)) ) /*0x60d99b*/
  {
LABEL_14:
    v13 = HIWORD(*((_DWORD *)collidable + 7)); /*0x60da37*/
    if ( v13 != sub_607B60() && (!v7 || v7 != (TESChildCELL *)reference->unk578) ) /*0x60da5a*/
    {
      HavokVector_ToWorldVector((float *)v21, (__m128 *)havokPoint); /*0x60da6a*/
      sub_4D68A0(v22, (__m128 *)havokNormal); /*0x60da79*/
      if ( v13 == 1 ) /*0x60da84*/
      {
        ArrowProjectile_HandleCollisionLayer1Impact( /*0x60da96*/
          (Actor *)projectile,
          (int)v21,
          (void (__thiscall **)(MagicCaster *, MagicCaster *))v22);
        shooter = (TESObjectREFR *)projectile->shooter; /*0x60da9b*/
        if ( shooter ) /*0x60daa0*/
          sub_677760( /*0x60dac9*/
            (int)&qword_B3BB2C[0x75],
            (char)collidable,
            v4,
            v6,
            v5,
            shooter,
            *(float *)v21,
            v21[1],
            v21[2],
            0,
            0);
      }
      else if ( v7 ) /*0x60dad8*/
      {
        if ( v9 ) /*0x60dae0*/
        {
          if ( !Actor_IsGhost(v9) ) /*0x60dae4*/
          {
            v15 = (TESObjectREFR *)projectile->shooter; /*0x60daf5*/
            if ( v15 ) /*0x60dafa*/
            {
              v16 = v9->vtbl->super.super.GetPos(v9); /*0x60db06*/
              sub_677760( /*0x60db26*/
                (int)&qword_B3BB2C[0x75],
                (char)projectile,
                v4,
                v6,
                v5,
                v15,
                *v16,
                *((_DWORD *)v16 + 1),
                *((_DWORD *)v16 + 2),
                1,
                (TESObjectREFR *)v9);
            }
            ArrowProjectile_HandleActorImpact( /*0x60db38*/
              (Actor *)projectile,
              (float *)v21,
              (void (__thiscall **)(MagicCaster *, MagicCaster *))v22,
              (TESObjectREFR *)v9);
          }
        }
        else
        {
          v17 = sub_47DE00((int)collidable);    // RealArenaTraining decode: non-actor arrow collision branch after collidable -> TESObjectREFR resolution; Actor dynamic cast was null. /*0x60db46*/
          if ( v17 ) /*0x60db50*/
            v18 = *(_DWORD *)(v17 + 0xC); /*0x60db52*/
          else
            v18 = 0; /*0x60db57*/
          ArrowProjectile_HandleReferenceImpact(projectile, v21, v22, v7, v18);// RealArenaTraining decode: earlier arrow non-actor collision call to sub_60B120. Plugin hooks this call so TargetHay01 Marksman does not depend on later optional Script_AddEventToExtraScript branches. /*0x60db6b*/
          v19 = (TESObjectREFR *)projectile->shooter; /*0x60db70*/
          if ( v19 ) /*0x60db75*/
          {
            v20 = (*((int (__thiscall **)(TESChildCELL *))v7->vtbl + 0x5D))(v7); /*0x60db81*/
            sub_677760( /*0x60dba2*/
              (int)&qword_B3BB2C[0x75],
              (char)collidable,
              v4,
              v6,
              v5,
              v19,
              *(float *)v20,
              *(_DWORD *)(v20 + 4),
              *(_DWORD *)(v20 + 8),
              0,
              0);
          }
        }
      }
    }
    return; /*0x60dad5*/
  }
  if ( v9 ) /*0x60d9a5*/
  {
    if ( !v9->vtbl->super.super.IsDead((TESObjectREFR *)v9, 0) ) /*0x60d9b7*/
    {
      process = v9->members.super.process; /*0x60d9c1*/
      if ( !process /*0x60d9e6*/
        || !((int (__thiscall *)(LowProcess *))process->GetKnockedState)(process)
        || ((int (__thiscall *)(LowProcess *))v9->members.super.process->GetKnockedState)(v9->members.super.process) == 6 )
      {
        if ( v9->vtbl->super.super.GetSleepState((TESObjectREFR *)v9) == kSitSleep_Sitting /*0x60da0c*/
          || v9->vtbl->super.super.GetSleepState((TESObjectREFR *)v9) == kSitSleep_Sleeping )
        {
          v11 = (TESObjectREFR *)projectile->shooter; /*0x60da12*/
          if ( v11 ) /*0x60da17*/
          {
            v12 = v9->vtbl->super.super.GetPos(v9); /*0x60da27*/
            sub_677760( /*0x60da32*/
              (int)&qword_B3BB2C[0x75],
              (char)collidable,
              v4,
              v6,
              v5,
              v11,
              *v12,
              *((_DWORD *)v12 + 1),
              *((_DWORD *)v12 + 2),
              1,
              (TESObjectREFR *)v9);
          }
          return; /*0x60da32*/
        }
        goto LABEL_14; /*0x60da0c*/
      }
    }
  }
}
