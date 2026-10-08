// [Verified] ActorProcessManager_SaveTempEffects walks active and extended effect lists, skips effects whose virtual IsSaveable returns false, writes each saveable effect's one-byte GetTypeID, then calls SaveGame and increments the count. Thus fallback decals may persist without a target reference, while generated-geometry decals require a valid target reference and 3D.
UInt16 __thiscall ActorProcessManager_SaveTempEffects(ActorProcessManager *self)
{
  TESSaveLoadGame_SerializationView *v2; // ecx
  unsigned __int8 *bufferCursor; // eax
  int *p_activeTempEffects; // edi
  int v5; // ebx
  int v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // ebp
  char v8; // al
  TESSaveLoadGame_SerializationView *v9; // ecx
  int *p_extendedTempEffects; // ebp
  int v11; // ebx
  int v12; // esi
  ActorProcessManager *v13; // edi
  UInt16 result; // ax
  char v15; // al
  TESSaveLoadGame_SerializationView *v16; // ecx
  char source_2; // [esp+12h] [ebp-16h]
  char source_3; // [esp+13h] [ebp-15h] BYREF
  int v19; // [esp+14h] [ebp-14h]
  int Src; // [esp+18h] [ebp-10h] BYREF
  unsigned __int8 *v21; // [esp+1Ch] [ebp-Ch]
  int v22; // [esp+20h] [ebp-8h] BYREF
  ActorProcessManager *v23; // [esp+24h] [ebp-4h] BYREF

  v2 = g_TESSaveLoadGame; /*0x679639*/
  Src = 0; /*0x679641*/
  bufferCursor = v2->bufferCursor; /*0x679645*/
  v23 = self; /*0x67964f*/
  v19 = 0; /*0x679653*/
  v21 = bufferCursor; /*0x679657*/
  SaveLoad_SaveData(v2, &Src, 2u); /*0x67965b*/
  p_activeTempEffects = (int *)&self->activeTempEffects; /*0x679660*/
  if ( p_activeTempEffects ) /*0x679665*/
  {
    v5 = (int)v23; /*0x67966b*/
    do /*0x67972e*/
    {
      if ( p_activeTempEffects[1] || (v19 |= 1u, v5 = 0, source_2 = 1, *p_activeTempEffects) ) /*0x67967d*/
        source_2 = 0; /*0x679686*/
      if ( (v19 & 1) != 0 ) /*0x679690*/
      {
        v19 &= ~1u; /*0x679692*/
        if ( v5 ) /*0x679699*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x67969f*/
            (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6796b1*/
        }
      }
      if ( source_2 ) /*0x6796b8*/
        break; /*0x6796b8*/
      v6 = *NodeVoid_GetDataAddRef(p_activeTempEffects, &v22); /*0x6796c6*/
      if ( v22 ) /*0x6796ce*/
      {
        v7 = (void (__thiscall ***)(_DWORD, int))v22; /*0x6796d0*/
        if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x6796d6*/
          (**v7)(v7, 1); /*0x6796ed*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 0x58))(v6) )// BloodOnDeath decode 2026-05-30: save pass only serializes effects whose virtual +0x58 saveability predicate returns true; invalid trail decals vanish at save time. /*0x6796f6*/
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x54))(v6); /*0x679703*/
        v9 = g_TESSaveLoadGame; /*0x67970c*/
        source_3 = v8; /*0x679712*/
        SaveLoad_SaveData(v9, &source_3, 1u); /*0x679716*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x60))(v6); /*0x679722*/
        ++Src; /*0x679724*/
      }
      p_activeTempEffects = (int *)p_activeTempEffects[1]; /*0x679729*/
    }
    while ( p_activeTempEffects ); /*0x67972e*/
  }
  p_extendedTempEffects = (int *)&v23->extendedTempEffects; /*0x679738*/
  if ( v23 == (ActorProcessManager *)0xFFFFFFB8 ) /*0x67973b*/
  {
    result = Src; /*0x679821*/
    *(_WORD *)v21 = Src; /*0x67982d*/
  }
  else
  {
    v11 = (int)v23; /*0x679741*/
    while ( 1 ) /*0x679745*/
    {
      if ( p_extendedTempEffects[1] || (v19 |= 2u, v11 = 0, source_2 = 1, *p_extendedTempEffects) ) /*0x679752*/
        source_2 = 0; /*0x67975c*/
      if ( (v19 & 2) != 0 ) /*0x679766*/
      {
        v19 &= ~2u; /*0x679768*/
        if ( v11 ) /*0x67976f*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x679775*/
            (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x679787*/
        }
      }
      if ( source_2 ) /*0x67978e*/
        break; /*0x67978e*/
      v12 = *NodeVoid_GetDataAddRef(p_extendedTempEffects, (int *)&v23); /*0x6797a0*/
      if ( v23 ) /*0x6797a8*/
      {
        v13 = v23; /*0x6797aa*/
        if ( !InterlockedDecrement((volatile LONG *)&v23->middleHighActors.head.node.next) ) /*0x6797b0*/
          ((void (__thiscall *)(ActorProcessManager *, int))v13->middleHighActors.head.node.data->vtbl)(v13, 1); /*0x6797c6*/
      }
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x58))(v12); /*0x6797cf*/
      if ( (_BYTE)result ) /*0x6797d3*/
      {
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x54))(v12); /*0x6797dc*/
        v16 = g_TESSaveLoadGame; /*0x6797e5*/
        source_3 = v15; /*0x6797eb*/
        SaveLoad_SaveData(v16, &source_3, 1u); /*0x6797ef*/
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x60))(v12); /*0x6797fb*/
        ++Src; /*0x6797fd*/
      }
      p_extendedTempEffects = (int *)p_extendedTempEffects[1]; /*0x679802*/
      if ( !p_extendedTempEffects ) /*0x679807*/
      {
        *(_WORD *)v21 = Src; /*0x679819*/
        return result; /*0x679820*/
      }
    }
    result = (unsigned __int16)v21; /*0x67983a*/
    *(_WORD *)v21 = Src; /*0x679841*/
  }
  return result; /*0x679816*/
}
