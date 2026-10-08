void __stdcall sub_633F10(_DWORD *a1, float a2)
{
  int FollowerExtra; // esi
  int *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  int *v6; // ebp
  Actor *ListHead; // eax
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // esi
  bool v11; // zf
  _DWORD *v12; // eax
  Actor *v13; // esi
  char v14; // bl
  int v15; // edi
  BSExtraDataVtbl *ExtraPackage; // ebp
  int v17; // edi
  BSExtraDataVtbl *v18; // ebp
  char v19; // al
  int ProcessLevel; // ecx
  _DWORD *v21; // ebp
  void (__thiscall **v22)(_DWORD *, _DWORD); // edi
  double v23; // st7
  int *j; // esi
  _DWORD *v25; // eax
  _DWORD *v26; // [esp+1Ch] [ebp-24h]
  float v27; // [esp+20h] [ebp-20h]
  Actor **v28; // [esp+24h] [ebp-1Ch]
  int *v29; // [esp+28h] [ebp-18h]
  ExtraDataList *v30; // [esp+2Ch] [ebp-14h]
  float v31; // [esp+30h] [ebp-10h]
  Actor *i; // [esp+34h] [ebp-Ch]
  int v33; // [esp+38h] [ebp-8h]
  float v34; // [esp+38h] [ebp-8h]
  int v35; // [esp+3Ch] [ebp-4h]

  v30 = (ExtraDataList *)(a1 + 0x11); /*0x633f1f*/
  if ( a1 != (_DWORD *)0xFFFFFFBC ) /*0x633f23*/
  {
    FollowerExtra = ExtraDataList_GetFollowerExtra(); /*0x633f2f*/
    v35 = FollowerExtra; /*0x633f33*/
    if ( FollowerExtra ) /*0x633f37*/
    {
      v3 = (int *)FormHeapAlloc(8u); /*0x633f3f*/
      if ( v3 ) /*0x633f49*/
      {
        *v3 = 0; /*0x633f4b*/
        v3[1] = 0; /*0x633f4d*/
        v29 = v3; /*0x633f50*/
      }
      else
      {
        v29 = 0; /*0x633f56*/
      }
      v4 = (_DWORD *)FormHeapAlloc(8u); /*0x633f5c*/
      if ( v4 ) /*0x633f66*/
      {
        *v4 = 0; /*0x633f68*/
        v4[1] = 0; /*0x633f6a*/
        v26 = v4; /*0x633f6d*/
      }
      else
      {
        v26 = 0; /*0x633f73*/
      }
      v5 = v26; /*0x633f78*/
      v6 = *(int **)(FollowerExtra + 0xC); /*0x633f7d*/
      v28 = (Actor **)v26; /*0x633f86*/
      ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x633f8a*/
      v27 = 0.0; /*0x633f9a*/
      for ( i = ActorList_ReturnHead((ActorList *)ListHead); v6; v6 = (int *)v6[1] ) /*0x633fa2*/
      {
        v8 = *v6; /*0x633fa4*/
        if ( !*v6 ) /*0x633fa4*/
          break; /*0x633fa9*/
        v9 = (int)(v26 + 1); /*0x633faf*/
        v10 = v26; /*0x633fb2*/
        if ( v26[1] ) /*0x633fab*/
        {
          do /*0x633fbf*/
          {
            v10 = *(_DWORD **)v9; /*0x633fb6*/
            v11 = *(_DWORD *)(*(_DWORD *)v9 + 4) == 0; /*0x633fb8*/
            v9 = *(_DWORD *)v9 + 4; /*0x633fbc*/
          }
          while ( !v11 ); /*0x633fbf*/
        }
        if ( *v10 ) /*0x633fc1*/
        {
          v12 = (_DWORD *)FormHeapAlloc(8u); /*0x633fc8*/
          if ( v12 ) /*0x633fd2*/
          {
            *v12 = v8; /*0x633fd4*/
            v12[1] = 0; /*0x633fd6*/
            v10[1] = v12; /*0x633fdd*/
          }
          else
          {
            v10[1] = 0; /*0x633fe4*/
          }
        }
        else
        {
          *v10 = v8; /*0x633fe9*/
        }
      }
      if ( v26 ) /*0x633ff6*/
      {
        do /*0x6341fe*/
        {
          v13 = *v28; /*0x634004*/
          if ( !*v28 ) /*0x634004*/
            break; /*0x634008*/
          v33 = BSSimpleList_Count(i); /*0x63401d*/
          if ( v13 != (Actor *)reference ) /*0x634021*/
          {
            v14 = 0; /*0x63402b*/
            v15 = sub_5E03A0(a1); /*0x634036*/
            ExtraPackage = ExtraDataList::GetExtraPackage(v30); /*0x63403f*/
            if ( !v15 || TESPackage::IsTemporaryOverrideType((TESPackage *)v15) ) /*0x634045*/
            {
              if ( ExtraPackage ) /*0x634050*/
                v15 = (int)ExtraPackage; /*0x634052*/
            }
            if ( v15 ) /*0x634056*/
            {
              if ( *(_BYTE *)(v15 + 0x20) == 2 ) /*0x63405c*/
                v14 = 1; /*0x63405e*/
            }
            v17 = sub_5E03A0(v13); /*0x63406a*/
            v18 = ExtraDataList::GetExtraPackage(&v13->members.super.super.baseExtraList); /*0x634073*/
            if ( v17 ) /*0x634075*/
            {
              if ( TESPackage::IsTemporaryOverrideType((TESPackage *)v17) ) /*0x634079*/
              {
                if ( v18 ) /*0x634084*/
                  v17 = (int)v18; /*0x634086*/
              }
            }
            if ( v14 || v17 && ((v19 = *(_BYTE *)(v17 + 0x20), v19 == 1) || v19 == 7) ) /*0x634099*/
            {
              ProcessLevel = Actor::GetProcessLevel(v13); /*0x6340b1*/
              if ( ProcessLevel ) /*0x6340b5*/
              {
                v31 = a2; /*0x6340bb*/
                if ( a2 <= 0.0 ) /*0x6340c8*/
                  v31 = flt_A71E4C; /*0x6340d0*/
                if ( ProcessLevel == 3 ) /*0x6340d7*/
                {
                  v21 = &v13->members.super.process->__vftable; /*0x6340d9*/
                  v22 = (void (__thiscall **)(_DWORD *, _DWORD))(*v21 + 0x1C); /*0x6340e4*/
                  v34 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A2F928; /*0x6340f5*/
                  (*v22)(v21, LODWORD(v34)); /*0x634102*/
                }
                ((void (__thiscall *)(Actor *, float))v13->vtbl->super.Unk_70)(v13, COERCE_FLOAT(LODWORD(v31))); /*0x634116*/
              }
              else
              {
                ((void (__thiscall *)(Actor *, _DWORD))v13->vtbl->super.Unk_70)(v13, 0.0); /*0x63412d*/
                if ( v13->vtbl->super.super.IsActor((TESObjectREFR *)v13) && !Actor::GetProcessLevel(v13) ) /*0x634145*/
                {
                  if ( ((double (__thiscall *)(Actor *))v13->vtbl->super.Unk_76)(v13) >= *(float *)&SrcStr /*0x6341a3*/
                    || Actor::GetDeadState(v13) == 3
                    || v13->vtbl->super.super.IsDead((TESObjectREFR *)v13, 0)
                    || TesObjectREF_GetDistance((TESObjectREFR *)v13, (TESObjectREFR *)reference, 0) >= dbl_A2F938 )
                  {
                    v13->vtbl->super.Unk_77((MobileObject *)v13); /*0x6341eb*/
                  }
                  else
                  {
                    ((void (__thiscall *)(Actor *, float))v13->vtbl->super.Unk_75)(v13, COERCE_FLOAT(LODWORD(v27))); /*0x6341b7*/
                    v23 = (double)v33; /*0x6341b9*/
                    if ( v33 < 0 ) /*0x6341c3*/
                      v23 = v23 + flt_A2FC78; /*0x6341c5*/
                    v27 = v23 * dbl_A3C770 * *(float *)&MEMORY[0xB33E90][0xC] + v27; /*0x6341db*/
                  }
                }
              }
            }
            else
            {
              BSSimpleList_PushFront(v29, (int)v13); /*0x6340a0*/
            }
          }
          v5 = v26; /*0x6341f6*/
          v28 = (Actor **)v28[1]; /*0x6341fa*/
        }
        while ( v28 ); /*0x6341fe*/
      }
      for ( j = v29; j; j = (int *)j[1] ) /*0x63420c*/
      {
        if ( !*j ) /*0x634210*/
          break; /*0x634214*/
        sub_424D00(v30, *j); /*0x63421b*/
      }
      BSSimpleList_Clear(v29); /*0x634229*/
      FormHeapFree((unsigned int)v29); /*0x63422f*/
      BSSimpleList_Clear(v5); /*0x634239*/
      FormHeapFree((unsigned int)v5); /*0x63423f*/
      v25 = *(_DWORD **)(v35 + 0xC); /*0x634248*/
      if ( !v25[1] && !*v25 ) /*0x634256*/
        ExtraDataList_RemoveFollowerExtra(v30); /*0x63425f*/
    }
  }
}
