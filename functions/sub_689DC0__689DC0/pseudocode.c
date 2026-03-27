void __thiscall sub_689DC0(char *this, TESObjectCELL **a2)
{
  void *v3; // eax
  TESObjectCELL *v4; // esi
  int v5; // eax
  char *v6; // edi
  char *v7; // ebx
  _BYTE *v8; // ebp
  _BYTE *v9; // eax
  TESObjectREFR **TeleportExtraData; // eax
  char *v11; // ebx
  char *v12; // eax
  int **v13; // eax
  int *NiNode; // eax
  int **v15; // [esp-Ch] [ebp-24h]
  char *v16; // [esp+8h] [ebp-10h]
  int *v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]
  float **v20; // [esp+1Ch] [ebp+4h]

  if ( a2 )
  {
    if ( !Actor_IsCreature((Actor *)a2) )
    {
      sub_4D8AF0(a2);
      v4 = (TESObjectCELL *)OblivionDynamicCast(
                              v3,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESWorldSpace `RTTI Type Descriptor',
                              0);
      v5 = ((int (__thiscall *)(TESObjectCELL **))(*a2)[4].members.super.modlist.next)(a2);
      v17 = *(int **)v5;
      v6 = this + 4;
      v18 = *(_DWORD *)(v5 + 4);
      v7 = 0;
      v19 = *(_DWORD *)(v5 + 8);
      v16 = v6;
      while ( v6 )
      {
        if ( !*((_DWORD *)v6 + 1) && !*(_DWORD *)v6 )
          break;
        v20 = *(float ***)v6;
        v8 = v7 ? *(_BYTE **)v7 : 0;
        if ( v8 )
        {
          v9 = (_BYTE *)sub_68B0F0(v8);
          if ( v9 )
          {
            TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(v9);
            v11 = (char *)TeleportExtraData;
            if ( TeleportExtraData )
            {
              v4 = (TESObjectCELL *)sub_42B470(TeleportExtraData);
              v12 = sub_6899C0(v11);
              v17 = *(int **)v12;
              v18 = *((_DWORD *)v12 + 1);
              v19 = *((_DWORD *)v12 + 2);
              if ( v4 )
              {
                if ( sub_4F0600(v4, (float *)&v17) )
                  v4 = 0;
              }
            }
          }
        }
        v7 = v6;
        v6 = *((char **)v6 + 1);
        if ( v4 )
        {
          if ( TESObjectCELL_GetNiNode_(v4) )
          {
            sub_68B110(v20);
            v15 = v13;
            NiNode = (int *)TESObjectCELL_GetNiNode_(v4);
            sub_4E97F0(NiNode, v16, (int)v8, &v17, v15);
            v4 = 0;
          }
        }
      }
    }
  }
}
