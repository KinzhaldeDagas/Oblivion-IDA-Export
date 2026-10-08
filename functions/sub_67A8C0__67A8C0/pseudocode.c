// [Verified] Called by TESObjectCELL_Deactivate. Removes active and extended temp effects whose BSTempEffect parentCell field at +0x0C equals the unloading cell, irrespective of remaining duration, then releases the list's reference. Thus decal lifetime survives normal updates but not unloading its owning cell.
void __thiscall ActorProcessManager_RemoveTempEffectsForCell(ActorProcessManager *self, TESObjectCELL *cell)
{
  bool v2; // zf
  int *p_activeTempEffects; // esi
  TESObjectCELL *v4; // edi
  char v5; // bl
  int v6; // edi
  char v7; // bl
  int v8; // edi
  void (__thiscall ***v9)(_DWORD, int); // ebp
  int *v10; // ebx
  int *p_extendedTempEffects; // esi
  TESObjectCELL *v12; // edi
  char v13; // bl
  ActorProcessManager *v14; // edi
  char v15; // bl
  int v16; // edi
  void (__thiscall ***v17)(_DWORD, int); // ebp
  int *v18; // ebx
  Ni2DBuffer *v19[5]; // [esp+0h] [ebp-2Ch] BYREF
  int v20; // [esp+14h] [ebp-18h]
  int *v21; // [esp+18h] [ebp-14h]
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch] BYREF
  ActorProcessManager *v24; // [esp+24h] [ebp-8h]
  Ni2DBuffer **v25; // [esp+28h] [ebp-4h]

  v2 = self->activeTempEffects.node.next == 0; /*0x67a8c3*/
  p_activeTempEffects = (int *)&self->activeTempEffects; /*0x67a8ca*/
  v24 = self; /*0x67a8ce*/
  v20 = 0; /*0x67a8d2*/
  if ( v2 ) /*0x67a8da*/
  {
    v4 = 0; /*0x67a8dc*/
    v2 = *p_activeTempEffects == 0; /*0x67a8de*/
    v20 = 1; /*0x67a8e0*/
    if ( v2 ) /*0x67a8e8*/
    {
      v5 = 1; /*0x67a8ea*/
      goto LABEL_6; /*0x67a8ec*/
    }
  }
  else
  {
    v4 = cell; /*0x67a8ee*/
  }
  v5 = 0; /*0x67a8f2*/
LABEL_6:
  if ( (v20 & 1) != 0 ) /*0x67a8f9*/
  {
    v20 &= ~1u; /*0x67a8fb*/
    if ( v4 ) /*0x67a902*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) ) /*0x67a908*/
        ((void (__thiscall *)(TESObjectCELL *, int))v4->vtbl->super.InitializeComponent)(v4, 1); /*0x67a91a*/
    }
  }
  if ( !v5 ) /*0x67a91e*/
  {
    v21 = 0; /*0x67a926*/
    if ( p_activeTempEffects ) /*0x67a92e*/
    {
      while ( !p_activeTempEffects[1] ) /*0x67a938*/
      {
        v20 |= 2u; /*0x67a93a*/
        v6 = 0; /*0x67a93f*/
        v2 = *p_activeTempEffects == 0; /*0x67a941*/
        v22 = 0; /*0x67a943*/
        if ( !v2 ) /*0x67a947*/
          goto LABEL_16; /*0x67a947*/
        v7 = 1; /*0x67a949*/
LABEL_17:
        if ( (v20 & 2) != 0 ) /*0x67a958*/
        {
          v20 &= ~2u; /*0x67a95a*/
          if ( v6 ) /*0x67a961*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x67a967*/
              (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x67a979*/
          }
        }
        if ( !v7 ) /*0x67a97d*/
        {
          v8 = *NodeVoid_GetDataAddRef(p_activeTempEffects, &v23); /*0x67a98b*/
          if ( v23 ) /*0x67a993*/
          {
            v9 = (void (__thiscall ***)(_DWORD, int))v23; /*0x67a995*/
            if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x67a99b*/
              (**v9)(v9, 1); /*0x67a9b2*/
          }
          if ( *(TESObjectCELL **)(v8 + 0xC) == cell )// BloodOnDeath decode 2026-05-30: temp effects tied to this cell are removed on cell unload regardless of duration; long decal lifetime means persists while cell stays loaded/unreset, not across unload cleanup. /*0x67a9bb*/
          {
            v10 = v21; /*0x67a9bd*/
            if ( v21 ) /*0x67a9c3*/
            {
              v19[0] = (Ni2DBuffer *)v8; /*0x67a9c8*/
              v25 = v19; /*0x67a9ca*/
              InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x67a9d2*/
              sub_67A760((Ni2DBuffer **)v10, v19[0]); /*0x67a9da*/
              p_activeTempEffects = (int *)v10[1]; /*0x67a9df*/
            }
            else
            {
              sub_67A850(p_activeTempEffects); /*0x67a9e6*/
            }
          }
          else
          {
            v21 = p_activeTempEffects; /*0x67a9ed*/
            p_activeTempEffects = (int *)p_activeTempEffects[1]; /*0x67a9f1*/
          }
          if ( p_activeTempEffects ) /*0x67a9f6*/
            continue; /*0x67a9f6*/
        }
        goto LABEL_31; /*0x67a9f6*/
      }
      v6 = v22; /*0x67a94d*/
LABEL_16:
      v7 = 0; /*0x67a951*/
      goto LABEL_17; /*0x67a951*/
    }
  }
LABEL_31:
  p_extendedTempEffects = (int *)&v24->extendedTempEffects; /*0x67a9fc*/
  if ( v24->extendedTempEffects.node.next ) /*0x67aa03*/
  {
    v12 = cell; /*0x67aa1c*/
  }
  else
  {
    v20 |= 4u; /*0x67aa0e*/
    v12 = 0; /*0x67aa12*/
    if ( !*p_extendedTempEffects ) /*0x67aa14*/
    {
      v13 = 1; /*0x67aa18*/
      goto LABEL_36; /*0x67aa1a*/
    }
  }
  v13 = 0; /*0x67aa20*/
LABEL_36:
  if ( (v20 & 4) != 0 ) /*0x67aa26*/
  {
    v20 &= ~4u; /*0x67aa28*/
    if ( v12 ) /*0x67aa2f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v12->members) ) /*0x67aa35*/
        ((void (__thiscall *)(TESObjectCELL *, int))v12->vtbl->super.InitializeComponent)(v12, 1); /*0x67aa47*/
    }
  }
  if ( !v13 ) /*0x67aa4b*/
  {
    v21 = 0; /*0x67aa53*/
    if ( p_extendedTempEffects ) /*0x67aa5b*/
    {
      while ( !p_extendedTempEffects[1] ) /*0x67aa65*/
      {
        v20 |= 8u; /*0x67aa67*/
        v14 = 0; /*0x67aa6c*/
        v2 = *p_extendedTempEffects == 0; /*0x67aa6e*/
        v24 = 0; /*0x67aa70*/
        if ( !v2 ) /*0x67aa74*/
          goto LABEL_46; /*0x67aa74*/
        v15 = 1; /*0x67aa76*/
LABEL_47:
        if ( (v20 & 8) != 0 ) /*0x67aa85*/
        {
          v20 &= ~8u; /*0x67aa87*/
          if ( v14 ) /*0x67aa8e*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v14->middleHighActors.head.node.next) ) /*0x67aa94*/
              ((void (__thiscall *)(ActorProcessManager *, int))v14->middleHighActors.head.node.data->vtbl)(v14, 1); /*0x67aaa6*/
          }
        }
        if ( !v15 ) /*0x67aaaa*/
        {
          v16 = *NodeVoid_GetDataAddRef(p_extendedTempEffects, &v23); /*0x67aab8*/
          if ( v23 ) /*0x67aac0*/
          {
            v17 = (void (__thiscall ***)(_DWORD, int))v23; /*0x67aac2*/
            if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x67aac8*/
              (**v17)(v17, 1); /*0x67aadf*/
          }
          if ( *(TESObjectCELL **)(v16 + 0xC) == cell ) /*0x67aae8*/
          {
            v18 = v21; /*0x67aaea*/
            if ( v21 ) /*0x67aaf0*/
            {
              v19[0] = (Ni2DBuffer *)v16; /*0x67aaf5*/
              v25 = v19; /*0x67aaf7*/
              InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x67aaff*/
              sub_67A760((Ni2DBuffer **)v18, v19[0]); /*0x67ab07*/
              p_extendedTempEffects = (int *)v18[1]; /*0x67ab0c*/
            }
            else
            {
              sub_67A850(p_extendedTempEffects); /*0x67ab13*/
            }
          }
          else
          {
            v21 = p_extendedTempEffects; /*0x67ab1a*/
            p_extendedTempEffects = (int *)p_extendedTempEffects[1]; /*0x67ab1e*/
          }
          if ( p_extendedTempEffects ) /*0x67ab23*/
            continue; /*0x67ab23*/
        }
        return; /*0x67ab23*/
      }
      v14 = v24; /*0x67aa7a*/
LABEL_46:
      v15 = 0; /*0x67aa7e*/
      goto LABEL_47; /*0x67aa7e*/
    }
  }
}
