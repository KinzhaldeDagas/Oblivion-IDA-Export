int __thiscall sub_474530(_DWORD *this, int a2, float a3, int a4)
{
  int v7; // ecx
  int v8; // edi
  int v9; // ebx
  int v10; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  float v15; // ebx
  char v16; // bl
  int v17; // ebx
  unsigned __int8 v18; // al
  int v19; // edx
  NiNode *v20; // edi
  float v21; // [esp+8h] [ebp-38h]
  int v22; // [esp+28h] [ebp-18h]
  int v23; // [esp+2Ch] [ebp-14h]
  int v24; // [esp+30h] [ebp-10h]

  v7 = sub_51AA00(LOBYTE(a3));
  v24 = v7;
  v22 = a4;
  if ( a4 == 0xFFFFFFFF )
    v22 = *(_DWORD *)(0x24 * v7 + 0xB102E8);
  v23 = v22;
  if ( v22 == 5 )
  {
    v22 = 0;
  }
  else if ( v22 == 6 )
  {
    v22 = 3;
  }
  v8 = *(this + v22 + 0x28);
  v9 = 0;
  LOBYTE(a4) = 0;
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 0x44);
  v10 = a2;
  if ( !a2 || LOWORD(a3) == 0xFF )
    return 0;
  if ( *(_DWORD *)(a2 + 0x44) == 3 )
    sub_6C9CB0(a2, 0.0, 0);
  if ( !*(_DWORD *)(v10 + 0x44)
    || *(_DWORD *)(v10 + 0x24)
    || InterfaceManager_IsMenuMode()
    && (NiNode *)*(this + 1) == PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0) )
  {
    if ( InterfaceManager_IsMenuMode()
      && (NiNode *)*(this + 1) == PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0)
      && !sub_45A500(SaveLoad_CurrentSavegame) )
    {
      sub_470FC0(this, 4, 0.0);
      sub_470FC0(this, 0, 0.0);
      sub_470FC0(this, 1, 0.0);
      sub_470FC0(this, 2, 0.0);
      if ( *(this + 0x26) )
      {
        v12 = *(this + 0x2B);
        if ( v12 )
        {
          if ( *(_DWORD *)(v12 + 0x44) )
          {
            v13 = *(_DWORD *)(v12 + 0x58);
            if ( v13 )
              sub_470B50(v13, 0.0);
            if ( *(_DWORD *)(*(this + 0x2B) + 0x44) == 5 )
              sub_6C4480((_DWORD *)*(this + 0x26), 0.0);
            sub_6C9CB0(*(this + 0x2B), 0.0, 0);
          }
        }
      }
      *(this + 0x2B) = 0;
      *((_WORD *)this + 0x21) = 0xFF;
      *((_WORD *)this + 0x3B) = 0xFF;
      *(this + 0x15) = 0xFFFFFFFF;
      HighPRocess_DoAction_____(TESDataHandler_g_PlayerRef, 0xFFFFFFFF, 0);
      sub_4728C0((int)this);
      v14 = v22;
    }
    else if ( v9 == 1 )
    {
      v14 = v22;
      if ( v23 != v22 || *((_BYTE *)this + 0xC4) || *(_DWORD *)(v10 + 0x44) )
        sub_470FC0(this, v23, 0.0);
    }
    else
    {
      sub_470FC0(this, v23, 0.0);
      v14 = v22;
      v8 = 0;
    }
    *((_WORD *)this + v14 + 0x1E) = LOWORD(a3);
    *(this + v14 + 0x28) = v10;
    if ( !InterfaceManager_IsMenuMode()
      || (NiNode *)*(this + 1) != PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0) )
    {
      if ( v8 )
      {
        sub_405070(&a2, *(_DWORD *)(v10 + 0x68));
        sub_405070(&a3, *(_DWORD *)(v8 + 0x68));
        v15 = a3;
        if ( sub_51AAD0((_BYTE *)LODWORD(a3)) )
        {
          v16 = sub_51AAD0((_BYTE *)LODWORD(v15));
          if ( v16 == sub_51AAD0((_BYTE *)a2) )
          {
            v17 = *(_DWORD *)(v8 + 0xC);
            if ( v17 == *(_DWORD *)(v10 + 0xC) )
            {
              LOBYTE(a4) = 1;
              if ( v10 == v8 )
              {
                PrintError(
                  "Morph Error: Trying to morph from sequence to itself.\r\n'%s' on '%s'.",
                  *(const char **)(v8 + 8),
                  *(const char **)(*(this + 1) + 8));
                LOBYTE(a4) = 0;
              }
            }
            else
            {
              PrintError(
                "Morph Error: Controller count not the same.\r\n'%s' has %d controllers and\r\n'%s' has %d on '%s'.",
                *(const char **)(v8 + 8),
                v17,
                *(const char **)(v10 + 8),
                *(_DWORD *)(v10 + 0xC),
                *(const char **)(*(this + 1) + 8));
            }
          }
        }
        sub_7016A0((NiD3DVertexShader *)&a3);
        sub_7016A0((NiD3DVertexShader *)&a2);
        v14 = v22;
      }
    }
    v18 = 0;
    a3 = flt_B06538;
    if ( v8 )
      v18 = *(_BYTE *)(*(_DWORD *)(v8 + 0x68) + 0x21);
    v19 = *(_DWORD *)(v10 + 0x68);
    if ( *(_BYTE *)(v19 + 0x21) > v18 )
      v18 = *(_BYTE *)(v19 + 0x21);
    if ( v18 )
    {
      LODWORD(a3) = v18;
      a3 = (double)v18 / dbl_A3AA50;
    }
    if ( InterfaceManager_IsMenuMode() && (NiNode *)*(this + 1) == TESDataHandler_g_PlayerRef->inventoryPC
      || sub_5790E0(0x40C, 0) )
    {
      a3 = flt_B06540;
    }
    if ( *((_BYTE *)this + 0xC4) )
      a3 = 0.0;
    a3 = a3 / flt_B06530;
    *(float *)(v10 + 0x48) = *(float *)(v10 + 0x2C) + dbl_A2FC68;
    if ( a3 >= (double)flt_A34BA0 )
    {
      if ( (_BYTE)a4 )
      {
        sub_6C4060(v8, v10, a3, 0, 1.0, 1.0);
      }
      else if ( !v8 || !*(_DWORD *)(v8 + 0x44) || !sub_6C4000(v8, v10, a3, 0, 1, 1.0, 0) )
      {
        if ( (NiNode *)*(this + 1) == PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1)
          || (v20 = (NiNode *)*(this + 1), v20 == PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0))
          || sub_47F7B0(v20, (int)g_worldScenegraph->camera) && !byte_B333B8 )
        {
          sub_6C5C70((_DWORD *)*(this + 0x26), v10, 0.0, a3, 0, 0);
        }
        else
        {
          sub_470B20((_DWORD *)v10, 0, 1, 1.0, 0.0, 0);
        }
      }
    }
    else
    {
      sub_6C9BA0((_DWORD *)v10, 0, 1, 1.0, 0.0, 0, 0);
    }
    if ( *(_DWORD *)(0x24 * v24 + 0xB102EC) <= 7u )
      *(this + v14 + 0x12) = 0;
    if ( *((_BYTE *)this + 0xC4) )
    {
      v21 = *((float *)this + 0x25);
      *((_BYTE *)this + 0xC4) = 0;
      sub_471230((int)this, v21, 0, 1);
    }
    return v10;
  }
  else
  {
    *(this + v22 + 0x12) = 0;
    return v10;
  }
}
