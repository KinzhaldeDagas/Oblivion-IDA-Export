signed int __thiscall sub_6762B0(char *this, TESObjectREFR *a2, char a3)
{
  Actor *v3; // eax
  ActorVtbl *vtbl; // esi
  ActorVtbl **v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  PlayerCharacter *v8; // eax
  int v9; // eax
  Actor *v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+14h] [ebp-14h]
  float Distance; // [esp+1Ch] [ebp-Ch]
  _DWORD v15[2]; // [esp+20h] [ebp-8h] BYREF

  v12 = 0;
  LOBYTE(TESDataHandler_g_PlayerRef->unk5A8) = 0;
  v3 = sub_7616D0((ActorList *)(this + 0x68));
  v11 = v3;
  if ( v3 )
  {
    while ( v3->vtbl )
    {
      vtbl = 0;
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v3->vtbl->super.super.super.super.InitializeComponent + 0x64))(v3->vtbl) )
        vtbl = v11->vtbl;
      if ( a3 )
      {
LABEL_12:
        if ( vtbl
          && !(*((unsigned __int8 (__thiscall **)(ActorVtbl *, _DWORD))vtbl->super.super.super.super.InitializeComponent
               + 0x66))(
                vtbl,
                0)
          && ((int)vtbl->super.super.super.super.CopyFromBase & 0x800) == 0 )
        {
          if ( a2 == (TESObjectREFR *)TESDataHandler_g_PlayerRef && !LOBYTE(TESDataHandler_g_PlayerRef->unk5A8) )
          {
            Distance = TesObjectREF_GetDistance(a2, (TESObjectREFR *)vtbl, 0);
            if ( (double)dword_B36790 >= Distance )
              LOBYTE(TESDataHandler_g_PlayerRef->unk5A8) = 1;
          }
          if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *, int))vtbl->super.super.super.super.InitializeComponent
                + 0xCD))(
                 vtbl,
                 1)
            || sub_5E6BA0((Actor *)vtbl) )
          {
            if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *, int))vtbl->super.super.super.super.InitializeComponent
                  + 0xCD))(
                   vtbl,
                   1) )
            {
              if ( (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl) )
              {
                v6 = (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl);
                if ( (TESObjectREFR *)sub_6135F0(v6) == a2 )
                {
                  v7 = (_DWORD *)(*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent
                                  + 0xCC))(vtbl);
                  if ( !sub_612A10(v7) )
                    return 3;
                }
              }
            }
            if ( sub_5E6BA0((Actor *)vtbl) )
            {
              sub_5E2E00((Actor *)vtbl);
              if ( v8 == TESDataHandler_g_PlayerRef )
                return 3;
            }
          }
          v9 = sub_5E10A0(vtbl, (int)a2);
          if ( v9 > v12 )
            v12 = v9;
        }
      }
      else if ( vtbl )
      {
        v15[0] = 0;
        v15[1] = 0;
        sub_6761A0(this, a2, v15);
        v5 = (ActorVtbl **)v15;
        while ( *v5 != vtbl )
        {
          v5 = (ActorVtbl **)v5[1];
          if ( !v5 )
            goto LABEL_12;
        }
      }
      v11 = *(Actor **)&v11->members.super.super.super.type;
      if ( !v11 )
        return v12;
      v3 = v11;
    }
  }
  return v12;
}
