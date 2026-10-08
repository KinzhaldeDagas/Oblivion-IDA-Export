// Reconcile one ordinary source light against current scene receivers. Projector-mode lights are skipped; culled sources clear associations, visible sources begin/add/remove receiver reconciliation.
void __thiscall ShadowSceneNode_ReconcileSourceLightReceivers(
        ShadowSceneNode_DecodedLayout *self,
        ShadowSceneLight_DecodedLayout *light)
{
  ShadowSceneLight_DecodedLayout *v2; // ebp
  char v4; // bl
  ShadowSceneLight_DecodedLayout *v5; // esi
  unsigned int i; // esi
  int v7; // ecx
  _BYTE *v8; // eax

  v2 = light; /*0x7c5f61*/
  if ( !light->perSourceProjectorMode_F4 ) /*0x7c5f65*/
  {
    v4 = *(_BYTE *)(*ShadowSceneLight_GetLightRef(light, &light) + 0x18) & 1; /*0x7c5f8c*/
    if ( light ) /*0x7c5f91*/
    {
      v5 = light; /*0x7c5f93*/
      if ( !InterlockedDecrement((volatile LONG *)&light->base_000[4]) ) /*0x7c5f99*/
        (**(void (__thiscall ***)(ShadowSceneLight_DecodedLayout *, int))v5->base_000)(v5, 1); /*0x7c5faf*/
    }
    if ( v4 ) /*0x7c5fb5*/
    {
      ShadowSceneLight_ClearReceiverAssociations(v2); /*0x7c5fb7*/
    }
    else
    {
      ShadowSceneLight_BeginReceiverReconciliation((Ni2DBuffer **)v2); /*0x7c5fc3*/
      for ( i = 0; i < *(unsigned __int16 *)&self->base_000[0xB8]; ++i ) /*0x7c5fca*/
      {
        if ( *(unsigned __int16 *)&self->base_000[0xB6] > i ) /*0x7c5fdc*/
        {
          v7 = *(_DWORD *)(*(_DWORD *)&self->base_000[0xB0] + 4 * i); /*0x7c5fe4*/
          if ( v7 ) /*0x7c5fe9*/
          {
            v8 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x7c5ff0*/
            if ( v8 ) /*0x7c5ff4*/
              ShadowSceneLight_AddToScene(v2, v8); /*0x7c5ff9*/
          }
        }
      }
      ShadowSceneLight_RemoveStaleReceivers((int **)v2); /*0x7c600e*/
    }
  }
}
