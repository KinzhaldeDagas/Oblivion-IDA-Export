// Verified temp-effect serialized size pass. Starts at two bytes for effect count; walks manager lists +0x40 and +0x48; for each IsSaveable (+0x58) effect adds one type byte plus virtual GetSaveSize (+0x5C). This size is consumed by TESSaveLoadGame_SaveTempEffectsList.
UInt32 __thiscall ActorProcessManager_GetTempEffectsSaveSize(ActorProcessManager *self)
{
  tListVoid *p_activeTempEffects; // esi
  volatile LONG *v2; // ebx
  void *v3; // ebp
  void (__thiscall ***v4)(void *, int); // edi
  NodeVoid *v5; // edi
  volatile LONG *v6; // ebx
  void *v7; // ebp
  void (__thiscall ***v8)(void *, int); // esi
  char v10; // [esp+13h] [ebp-11h]
  char v11; // [esp+13h] [ebp-11h]
  int v12; // [esp+14h] [ebp-10h]
  UInt32 v13; // [esp+18h] [ebp-Ch]
  void *outData; // [esp+1Ch] [ebp-8h] BYREF
  void *v15; // [esp+20h] [ebp-4h] BYREF

  p_activeTempEffects = &self->activeTempEffects; /*0x679486*/
  v15 = self; /*0x67948c*/
  v12 = 0; /*0x679490*/
  v13 = 2; /*0x679498*/
  if ( self != (ActorProcessManager *)0xFFFFFFC0 ) /*0x6794a0*/
  {
    v2 = (volatile LONG *)v15; /*0x6794a6*/
    do /*0x679557*/
    {
      if ( p_activeTempEffects->node.next || (v12 |= 1u, v2 = 0, v10 = 1, p_activeTempEffects->node.data) ) /*0x6794bd*/
        v10 = 0; /*0x6794c6*/
      if ( (v12 & 1) != 0 ) /*0x6794d0*/
      {
        v12 &= ~1u; /*0x6794d2*/
        if ( v2 ) /*0x6794d9*/
        {
          if ( !InterlockedDecrement(v2 + 1) ) /*0x6794df*/
            (**(void (__thiscall ***)(void *, int))v2)((void *)v2, 1); /*0x6794f1*/
        }
      }
      if ( v10 ) /*0x6794f8*/
        break; /*0x6794f8*/
      v3 = *NodeVoid_GetDataAddRef(&p_activeTempEffects->node, &outData); /*0x679506*/
      if ( outData ) /*0x67950e*/
      {
        v4 = (void (__thiscall ***)(void *, int))outData; /*0x679510*/
        if ( !InterlockedDecrement((volatile LONG *)outData + 1) ) /*0x679516*/
          (**v4)(v4, 1); /*0x67952c*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v3 + 0x58))(v3) ) /*0x679536*/
        v13 += (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 0x5C))(v3) + 1; /*0x67954e*/
      p_activeTempEffects = (tListVoid *)p_activeTempEffects->node.next; /*0x679552*/
    }
    while ( p_activeTempEffects ); /*0x679557*/
  }
  v5 = (NodeVoid *)((char *)v15 + 0x48); /*0x679561*/
  if ( v15 != (void *)0xFFFFFFB8 ) /*0x679564*/
  {
    v6 = (volatile LONG *)v15; /*0x67956a*/
    do /*0x679617*/
    {
      if ( v5->next || (v12 |= 2u, v6 = 0, v11 = 1, v5->data) ) /*0x67957d*/
        v11 = 0; /*0x679586*/
      if ( (v12 & 2) != 0 ) /*0x679590*/
      {
        v12 &= ~2u; /*0x679592*/
        if ( v6 ) /*0x679599*/
        {
          if ( !InterlockedDecrement(v6 + 1) ) /*0x67959f*/
            (**(void (__thiscall ***)(void *, int))v6)((void *)v6, 1); /*0x6795b1*/
        }
      }
      if ( v11 ) /*0x6795b8*/
        break; /*0x6795b8*/
      v7 = *NodeVoid_GetDataAddRef(v5, &v15); /*0x6795c6*/
      if ( v15 ) /*0x6795ce*/
      {
        v8 = (void (__thiscall ***)(void *, int))v15; /*0x6795d0*/
        if ( !InterlockedDecrement((volatile LONG *)v15 + 1) ) /*0x6795d6*/
          (**v8)(v8, 1); /*0x6795ec*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v7 + 0x58))(v7) ) /*0x6795f6*/
        v13 += (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 0x5C))(v7) + 1; /*0x67960e*/
      v5 = v5->next; /*0x679612*/
    }
    while ( v5 ); /*0x679617*/
  }
  return v13; /*0x679621*/
}
