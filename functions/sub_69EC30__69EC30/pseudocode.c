void __thiscall sub_69EC30(_DWORD *this)
{
  PlayerCharacter *v2; // ecx
  NiNode *PlayerNode; // eax
  NiNode *v4; // esi
  bool v5; // bl
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float x; // ecx
  float y; // edx
  float *v13; // eax
  float z; // [esp+10h] [ebp-4h]

  v2 = (PlayerCharacter *)*(this + 7);
  if ( v2 == TESDataHandler_g_PlayerRef )
  {
    *((_BYTE *)this + 0x29) = TESDataHandler_g_PlayerRef->isThirdPerson;
    PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
  }
  else
  {
    PlayerNode = v2->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v2);
  }
  v4 = PlayerNode;
  sub_69DC90((TESObjectREFR **)this, *(this + 0xC));
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 7) + 0x190))(*(this + 7))
      && (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 7) + 0x198))(*(this + 7), 0)
      || (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 7) + 0x19C))(*(this + 7)) )
    {
      v5 = 1;
      v6 = (int)v4->vtbl->super.super.Unk_02((NiObject *)v4);
      if ( v6 )
      {
        if ( *(_WORD *)(v6 + 0xB6) )
        {
          v7 = **(_DWORD **)(v6 + 0xB0);
          if ( v7 )
          {
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
            if ( v8 )
            {
              if ( *(_WORD *)(v8 + 0xB6) )
              {
                v9 = sub_405790(v8, 0);
                if ( v9 )
                {
                  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
                  if ( v10 )
                    v5 = !sub_8AA390((float *)(v10 + 0x54), &Vector3_InitValue_);
                }
              }
            }
          }
        }
      }
      x = v4->members.super.m_worldTransform.pos.x;
      y = v4->members.super.m_worldTransform.pos.y;
      z = v4->members.super.m_worldTransform.pos.z;
      if ( v5 )
        z = z - dbl_A4D910;
    }
    else if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 7) + 0x170))(*(this + 7))
           && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 7) + 0x170))(*(this + 7)) + 4) == 0x18 )
    {
      x = v4->members.super.m_kWorldBound.Center.x;
      y = v4->members.super.m_kWorldBound.Center.y;
      z = v4->members.super.m_worldTransform.pos.z;
    }
    else
    {
      x = v4->members.super.m_worldTransform.pos.x;
      y = v4->members.super.m_worldTransform.pos.y;
      z = v4->members.super.m_worldTransform.pos.z;
    }
    v13 = (float *)*(this + 0xC);
    if ( v13 )
    {
      v13[0x15] = x;
      v13[0x16] = y;
      v13[0x17] = z;
      qmemcpy((void *)(*(this + 0xC) + 0x30), &v4->members.super.m_localTransform, 0x24u);
    }
  }
}
