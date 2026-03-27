void __userpurge sub_6458A0(void **a1@<ecx>, int a2@<ebx>, int a3@<esi>, TESObjectREFR *a4)
{
  _DWORD *v5; // edi
  TESClass *BaseClass; // eax
  int *v8; // ebx
  int v9; // eax
  TESObjectREFR *v10; // edi
  int v11; // eax
  int v12; // eax
  TESWorldSpace *WorldSpace; // edi
  float Distance; // [esp+0h] [ebp-24h]
  float v15; // [esp+0h] [ebp-24h]
  bool v17; // [esp+28h] [ebp+4h]

  v5 = OblivionDynamicCast(
         a1[2],
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
         &AlarmPackage `RTTI Type Descriptor',
         0);
  if ( v5 )
  {
    BaseClass = (TESClass *)Actor_GetBaseClass((Actor *)a4);
    if ( TESClass::IsGuardClass(BaseClass) )
    {
      (*((void (__thiscall **)(void **, TESObjectREFR *, int))*a1 + 0x62))(a1, a4, 1);
      (*((void (__thiscall **)(void **, TESObjectREFR *, _DWORD, int, unsigned int))*a1 + 0x67))(
        a1,
        a4,
        0,
        1,
        0xFFFFFFFF);
      if ( TesObjectREF_GetDistance(a4, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) > dbl_A72610 )
      {
        if ( TESObjectREFR_GetWorldSpace((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
        {
          WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)TESDataHandler_g_PlayerRef);
          if ( WorldSpace == TESObjectREFR_GetWorldSpace(a4) )
            sub_5EAE70((Actor *)a4, a2, (int)WorldSpace, a3);
        }
      }
    }
    else
    {
      v8 = (int *)v5[0xF];
      v17 = 0;
      if ( v8 )
      {
        do
        {
          v9 = *v8;
          if ( !*v8 )
            break;
          if ( v17 )
            goto LABEL_10;
          v10 = *(TESObjectREFR **)(v9 + 0xC);
          if ( *(int *)(v9 + 4) <= 2 )
          {
            Distance = TesObjectREF_GetDistance(a4, v10, 0);
            v15 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *, int, _DWORD))a4->vtbl[1].Unk_37)(a4, 0x21, LODWORD(Distance)));
            v11 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].super.Unk_1F)(a4);
            shouldActorFight(v11, (int)v10, 0, v15, 0, 0, 0, 0x64);
            v17 = v12 > 0;
          }
          v8 = (int *)v8[1];
        }
        while ( v8 );
        if ( !v17 )
          goto LABEL_12;
LABEL_10:
        (*((void (__thiscall **)(void **, TESObjectREFR *, _DWORD, unsigned int, _DWORD))*a1 + 0x66))(
          a1,
          a4,
          0,
          0xFFFFFFFF,
          0);
        (*((void (__thiscall **)(void **, TESObjectREFR *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))*a1
         + 0x8A))(
          a1,
          a4,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          1);
      }
      else
      {
LABEL_12:
        (*((void (__thiscall **)(void **, TESObjectREFR *, int))*a1 + 0x62))(a1, a4, 3);
      }
    }
  }
}
