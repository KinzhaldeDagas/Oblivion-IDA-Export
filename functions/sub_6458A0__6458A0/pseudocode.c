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

  v5 = OblivionDynamicCast( /*0x6458bb*/
         a1[2],
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
         &AlarmPackage `RTTI Type Descriptor',
         0);
  if ( v5 ) /*0x6458c2*/
  {
    BaseClass = (TESClass *)Actor_GetBaseClass((Actor *)a4); /*0x6458cf*/
    if ( TESClass::IsGuardClass(BaseClass) ) /*0x6458d6*/
    {
      (*((void (__thiscall **)(void **, TESObjectREFR *, int))*a1 + 0x62))(a1, a4, 1); /*0x6459bd*/
      (*((void (__thiscall **)(void **, TESObjectREFR *, _DWORD, int, unsigned int))*a1 + 0x67))( /*0x6459d1*/
        a1,
        a4,
        0,
        1,
        0xFFFFFFFF);
      if ( TesObjectREF_GetDistance(a4, (TESObjectREFR *)reference, 0) > dbl_A72610 ) /*0x6459ee*/
      {
        if ( TESObjectREFR_GetWorldSpace((TESObjectREFR *)reference) ) /*0x6459f6*/
        {
          WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)reference); /*0x645a0c*/
          if ( WorldSpace == TESObjectREFR_GetWorldSpace(a4) ) /*0x645a15*/
            sub_5EAE70((Actor *)a4, a2, (int)WorldSpace, a3); /*0x645a1d*/
        }
      }
    }
    else
    {
      v8 = (int *)v5[0xF]; /*0x6458e4*/
      v17 = 0; /*0x6458e9*/
      if ( v8 ) /*0x6458ed*/
      {
        do /*0x645954*/
        {
          v9 = *v8; /*0x6458f3*/
          if ( !*v8 ) /*0x6458f3*/
            break; /*0x6458f7*/
          if ( v17 ) /*0x6458fe*/
            goto LABEL_10; /*0x6458fe*/
          v10 = *(TESObjectREFR **)(v9 + 0xC); /*0x645904*/
          if ( *(int *)(v9 + 4) <= 2 ) /*0x645907*/
          {
            Distance = TesObjectREF_GetDistance(a4, v10, 0); /*0x645924*/
            v15 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *, int, _DWORD))a4->vtbl[1].Unk_37)(a4, 0x21, LODWORD(Distance))); /*0x64592f*/
            v11 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].super.Unk_1F)(a4); /*0x64593b*/
            shouldActorFight(v11, (int)v10, 0, v15, 0, 0, 0, 0x64); /*0x64593e*/
            v17 = v12 > 0; /*0x64594a*/
          }
          v8 = (int *)v8[1]; /*0x64594f*/
        }
        while ( v8 ); /*0x645954*/
        if ( !v17 ) /*0x64595b*/
          goto LABEL_12; /*0x64595b*/
LABEL_10:
        (*((void (__thiscall **)(void **, TESObjectREFR *, _DWORD, unsigned int, _DWORD))*a1 + 0x66))( /*0x64595d*/
          a1,
          a4,
          0,
          0xFFFFFFFF,
          0);
        (*((void (__thiscall **)(void **, TESObjectREFR *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))*a1 /*0x64598f*/
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
        (*((void (__thiscall **)(void **, TESObjectREFR *, int))*a1 + 0x62))(a1, a4, 3); /*0x645998*/
      }
    }
  }
}
