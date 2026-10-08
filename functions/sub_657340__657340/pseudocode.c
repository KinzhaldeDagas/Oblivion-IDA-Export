unsigned int __thiscall MobileObject_LoadCharacterProxyState(void *this, MobileObject *Dst)
{
  _DWORD *v3; // esi
  unsigned int result; // eax
  int (__thiscall ***v5)(_DWORD, int); // ebx
  MobileObject *v6; // ebx
  int v7; // eax
  TESSaveLoadGame_SerializationView *v8; // ecx
  void *v9; // edx
  unsigned int v10; // [esp+Ch] [ebp-20h] BYREF
  int destination; // [esp+10h] [ebp-1Ch] BYREF
  NiPoint3 a2; // [esp+14h] [ebp-18h] BYREF
  float v13[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = *(_DWORD **)(*(int (__thiscall **)(void *, unsigned int *))(*(_DWORD *)this + 0x18C))(this, &v10); /*0x657359*/
  result = v10; /*0x65735b*/
  if ( v10 ) /*0x657361*/
  {
    v5 = (int (__thiscall ***)(_DWORD, int))v10; /*0x657363*/
    result = InterlockedDecrement((volatile LONG *)(v10 + 4)); /*0x657369*/
    if ( !result ) /*0x657371*/
      result = (**v5)(v5, 1); /*0x65737f*/
  }
  if ( v3 ) /*0x657383*/
  {
    v6 = Dst; /*0x657389*/
    result = ((int (__thiscall *)(MobileObject *, _DWORD))Dst->vtbl->super.IsDead)(Dst, 0); /*0x657399*/
    if ( !(_BYTE)result ) /*0x65739d*/
    {
      SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x6573b0*/
      v3[0x7B] = Dst; /*0x6573c1*/
      SaveLoad_LoadData(g_TESSaveLoadGame, v3 + 0xA8, 4u); /*0x6573ce*/
      SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 4u); /*0x6573e0*/
      v7 = destination; /*0x6573e5*/
      v3[0x7D] = 0; /*0x6573e9*/
      v3[0x7D] |= v7; /*0x6573f3*/
      if ( (v7 & 0x800) != 0 && g_TESSaveLoadGame->currentVersion >= 0x23u ) /*0x65740e*/
      {
        SaveLoad_LoadData(g_TESSaveLoadGame, &a2, 0xCu); /*0x657417*/
        if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x36C))(this) ) /*0x657426*/
        {
          if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x380))(this) ) /*0x657436*/
          {
            if ( !v6->vtbl->super.IsActor((TESObjectREFR *)v6) /*0x657456*/
              || !((int (__thiscall *)(MobileObject *))v6->vtbl[1].super.SetProcedureCompleted)(v6) )
            {
              a2 = *(NiPoint3 *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x380))(this); /*0x65746a*/
            }
          }
        }
        sub_452A10((bhkCharacterProxy *)v3, &a2); /*0x657483*/
      }
      if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x36C))(this) ) /*0x657492*/
        sub_65AC20(v6, 0); /*0x65749b*/
      SaveLoad_LoadData(g_TESSaveLoadGame, v3 + 0xB8, 0x10u); /*0x6574af*/
      SaveLoad_LoadData(g_TESSaveLoadGame, v3 + 0xBC, 0x10u); /*0x6574c3*/
      SaveLoad_LoadData(g_TESSaveLoadGame, v13, 0xCu); /*0x6574d5*/
      bhkCharacterController_SetObjectVelocityFromWorldVector(v3, v13);// Loads saved world-space velocity vector and restores it to the proxy collision object through 0x64B3A0. /*0x6574e1*/
      result = ((int (__thiscall *)(MobileObject *))v6->vtbl->super.IsActor)(v6); /*0x6574f0*/
      if ( (_BYTE)result ) /*0x6574f4*/
      {
        SaveLoad_LoadData(g_TESSaveLoadGame, v3 + 0xC7, 4u); /*0x657505*/
        v8 = g_TESSaveLoadGame; /*0x65750a*/
        v9 = v3 + 0xC8; /*0x657510*/
      }
      else
      {
        v8 = g_TESSaveLoadGame; /*0x657518*/
        if ( g_TESSaveLoadGame->currentVersion < 0x20u ) /*0x657522*/
        {
LABEL_21:
          if ( Dst == (MobileObject *)2 ) /*0x65754b*/
          {
            result = v3[0x7D]; /*0x65754d*/
            if ( (result & 0x100) != 0 || (result >>= 9, (result & 1) != 0) ) /*0x657562*/
              *((float *)v3 + 0xC8) = 0.0; /*0x657566*/
          }
          if ( g_TESSaveLoadGame->currentVersion >= 0x77u ) /*0x657576*/
          {
            SaveLoad_LoadData(g_TESSaveLoadGame, v3 + 0xCB, 4u); /*0x657581*/
            return (unsigned int)SaveLoad_LoadData(g_TESSaveLoadGame, v3 + 0xCC, 4u); /*0x657595*/
          }
          return result; /*0x657595*/
        }
        v9 = v3 + 0xCA; /*0x657524*/
      }
      SaveLoad_LoadData(v8, v9, 4u); /*0x65752d*/
      result = (unsigned int)SaveLoad_LoadData(g_TESSaveLoadGame, v3 + 0xC9, 4u); /*0x657541*/
      goto LABEL_21; /*0x657541*/
    }
  }
  return result; /*0x65759a*/
}
