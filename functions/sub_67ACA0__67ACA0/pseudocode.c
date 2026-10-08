// [Verified] Per-actor temp-effect update loop visits both activeTempEffects (+0x40) and extendedTempEffects (+0x48), dispatches virtual Update(effect, deltaSeconds), removes effects returning false, and releases manager references. Active-list decals (types 0/1) and particles (2) update through this shared manager. Fallout divergence: Fallout updates its separate BGSDecalManager simple-decal/emitter collections through UpdateDecals.
void __thiscall ActorProcessManager_UpdateTempEffects(ActorProcessManager *self, float deltaSeconds)
{
  ActorProcessManager *v2; // ebp
  bool v3; // zf
  int *p_activeTempEffects; // edi
  float v5; // esi
  char v6; // bl
  char v7; // bl
  Ni2DBuffer *v8; // esi
  void (__thiscall ***v9)(_DWORD, int); // ebp
  ActorProcessManager *p_extendedTempEffects; // ebp
  float v11; // esi
  char v12; // bl
  int *v13; // edi
  char v14; // bl
  Ni2DBuffer *v15; // esi
  void (__thiscall ***v16)(_DWORD, int); // ebp
  Ni2DBuffer *v17[5]; // [esp+10h] [ebp-24h] BYREF
  int v18; // [esp+24h] [ebp-10h]
  ActorProcessManager *v19; // [esp+28h] [ebp-Ch]
  int v20; // [esp+2Ch] [ebp-8h] BYREF
  Ni2DBuffer **v21; // [esp+30h] [ebp-4h]

  v2 = self; /*0x67aca6*/
  v3 = self->activeTempEffects.node.next == 0; /*0x67aca8*/
  p_activeTempEffects = (int *)&self->activeTempEffects; /*0x67acad*/
  v19 = self; /*0x67acb0*/
  v18 = 0; /*0x67acb4*/
  if ( v3 ) /*0x67acbc*/
  {
    v5 = 0.0; /*0x67acbe*/
    v3 = *p_activeTempEffects == 0; /*0x67acc0*/
    v18 = 1; /*0x67acc2*/
    if ( v3 ) /*0x67acca*/
    {
      v6 = 1; /*0x67accc*/
      goto LABEL_6; /*0x67acce*/
    }
  }
  else
  {
    v5 = deltaSeconds; /*0x67acd0*/
  }
  v6 = 0; /*0x67acd4*/
LABEL_6:
  if ( (v18 & 1) != 0 ) /*0x67acdb*/
  {
    v18 &= ~1u; /*0x67acdd*/
    if ( v5 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v5) + 4)) ) /*0x67acea*/
      (**(void (__thiscall ***)(float, int))LODWORD(v5))(COERCE_FLOAT(LODWORD(v5)), 1); /*0x67acfc*/
  }
  if ( !v6 ) /*0x67ad00*/
  {
    v7 = 1; /*0x67ad08*/
    if ( p_activeTempEffects ) /*0x67ad0a*/
    {
      do /*0x67ad91*/
      {
        v8 = (Ni2DBuffer *)*NodeVoid_GetDataAddRef(p_activeTempEffects, &v20); /*0x67ad1c*/
        if ( v20 ) /*0x67ad24*/
        {
          v9 = (void (__thiscall ***)(_DWORD, int))v20; /*0x67ad26*/
          if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x67ad2c*/
            (**v9)(v9, 1); /*0x67ad43*/
        }
        if ( !v7 ) /*0x67ad47*/
          p_activeTempEffects = (int *)p_activeTempEffects[1]; /*0x67ad49*/
        if ( !v8 /*0x67ad5f*/
          || (*((unsigned __int8 (__thiscall **)(Ni2DBuffer *, _DWORD))v8->__vftable + 0x14))(v8, LODWORD(deltaSeconds)) )// BloodOnDeath decode 2026-05-30: primary temp-effect list +0x40 updates ordinary blood decal type 0, geometry decal type 1, and particle type 2 by calling virtual +0x50(effect, deltaSeconds). False return removes the effect.
        {
          if ( v7 ) /*0x67ad88*/
          {
            p_activeTempEffects = (int *)p_activeTempEffects[1]; /*0x67ad8a*/
            v7 = 0; /*0x67ad8d*/
          }
        }
        else
        {
          v17[0] = v8; /*0x67ad68*/
          v21 = v17; /*0x67ad6a*/
          InterlockedIncrement((volatile LONG *)&v8->members); /*0x67ad72*/
          sub_67A760((Ni2DBuffer **)&v19->activeTempEffects, v17[0]); /*0x67ad7f*/
        }
      }
      while ( p_activeTempEffects ); /*0x67ad91*/
      v2 = v19; /*0x67ad97*/
    }
  }
  p_extendedTempEffects = (ActorProcessManager *)&v2->extendedTempEffects; /*0x67ad9b*/
  v3 = p_extendedTempEffects->middleHighActors.head.node.next == 0; /*0x67ad9e*/
  v19 = p_extendedTempEffects; /*0x67ada2*/
  if ( v3 ) /*0x67adab*/
  {
    v18 |= 2u; /*0x67adad*/
    v11 = 0.0; /*0x67adb1*/
    if ( !p_extendedTempEffects->middleHighActors.head.node.data ) /*0x67adb3*/
    {
      v12 = 1; /*0x67adb8*/
      goto LABEL_29; /*0x67adba*/
    }
  }
  else
  {
    v11 = deltaSeconds; /*0x67adbc*/
  }
  v12 = 0; /*0x67adc0*/
LABEL_29:
  if ( (v18 & 2) != 0 && v11 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v11) + 4)) ) /*0x67add0*/
    (**(void (__thiscall ***)(float, int))LODWORD(v11))(COERCE_FLOAT(LODWORD(v11)), 1); /*0x67ade2*/
  if ( !v12 ) /*0x67ade6*/
  {
    v13 = (int *)p_extendedTempEffects; /*0x67adec*/
    v14 = 1; /*0x67adf0*/
    if ( p_extendedTempEffects ) /*0x67adf2*/
    {
      do /*0x67ae78*/
      {
        v15 = (Ni2DBuffer *)*NodeVoid_GetDataAddRef(v13, &v20); /*0x67ae04*/
        if ( v20 ) /*0x67ae0c*/
        {
          v16 = (void (__thiscall ***)(_DWORD, int))v20; /*0x67ae0e*/
          if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x67ae14*/
            (**v16)(v16, 1); /*0x67ae2b*/
          p_extendedTempEffects = v19; /*0x67ae2d*/
        }
        if ( !v14 ) /*0x67ae33*/
          v13 = (int *)v13[1]; /*0x67ae35*/
        if ( !v15 /*0x67ae4b*/
          || (*((unsigned __int8 (__thiscall **)(Ni2DBuffer *, _DWORD))v15->__vftable + 0x14))(
               v15,
               LODWORD(deltaSeconds)) )         // BloodOnDeath decode 2026-05-30: secondary temp-effect list +0x48 is for type IDs 4..6 (magic/hit effects), not ordinary blood decals.
        {
          if ( v14 ) /*0x67ae6f*/
          {
            v13 = (int *)v13[1]; /*0x67ae71*/
            v14 = 0; /*0x67ae74*/
          }
        }
        else
        {
          v17[0] = v15; /*0x67ae54*/
          v21 = v17; /*0x67ae56*/
          InterlockedIncrement((volatile LONG *)&v15->members); /*0x67ae5e*/
          sub_67A760((Ni2DBuffer **)p_extendedTempEffects, v17[0]); /*0x67ae66*/
        }
      }
      while ( v13 ); /*0x67ae78*/
    }
  }
}
