char __usercall sub_4E1580@<al>(TESObjectREFR *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  TESForm *baseForm; // ebx
  ActorSkinInfo *(__thiscall *GetActiveSkinInfo)(TESObjectREFR *); // edx
  int v7; // esi
  ActorAnimData *v8; // eax
  int v9; // eax
  NiNode *niNode; // ecx
  bool (__thiscall *IsActor)(TESObjectREFR *); // eax
  TESPackage *CurrentPackage; // eax
  UInt32 packageFlags; // eax
  char *Head; // edi
  char *v15; // eax
  char *v16; // edx
  char v17; // cl
  char *v18; // eax
  char *v19; // ecx
  _BYTE *v20; // edx
  char v21; // al
  _DWORD *ModelData; // esi
  Ni2DBuffer *v23; // eax
  NiAVObject *v24; // esi
  char v25; // bl
  int v26; // eax
  int v27; // edi
  _DWORD *v28; // eax
  int v29; // edx
  _DWORD *v30; // ecx
  _DWORD *v31; // edi
  void (__thiscall ***v32)(_DWORD, int); // esi
  char v33; // bl
  NiAVObject *v35; // [esp+0h] [ebp-154h]
  int v36; // [esp+4h] [ebp-150h]
  UInt32 v37; // [esp+14h] [ebp-140h] BYREF
  char *v38; // [esp+18h] [ebp-13Ch]
  NiNode *skeletonRoot; // [esp+1Ch] [ebp-138h]
  TESForm *v40; // [esp+20h] [ebp-134h]
  void (__stdcall ***v41)(signed int); // [esp+24h] [ebp-130h] BYREF
  void (__thiscall ***v42)(_DWORD, int); // [esp+28h] [ebp-12Ch]
  UInt32 v43; // [esp+34h] [ebp-120h]
  UInt32 v44; // [esp+38h] [ebp-11Ch]
  UInt32 v45; // [esp+3Ch] [ebp-118h]
  char Str[260]; // [esp+40h] [ebp-114h] BYREF
  int v47; // [esp+150h] [ebp-4h]

  baseForm = a1->member.baseForm; /*0x4e15c0*/
  GetActiveSkinInfo = a1->vtbl->GetActiveSkinInfo; /*0x4e15c3*/
  v40 = baseForm; /*0x4e15c9*/
  v7 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))GetActiveSkinInfo)( /*0x4e15d4*/
         a1,
         a4,
         a3,
         a2);
  OsGlobalsTime::UpdatetimeInfo(MEMORY[0xB33E90]); /*0x4e15d6*/
  v8 = a1->vtbl->GetAnimData(a1); /*0x4e15e6*/
  if ( v8 ) /*0x4e15ea*/
    ActorAnimData_ResetRootMotion((int)v8); /*0x4e15ee*/
  v9 = (unsigned __int8)a1->member.baseForm->member.type - 0x23; /*0x4e15fa*/
  niNode = (NiNode *)a1->member.niNode; /*0x4e15fd*/
  skeletonRoot = niNode; /*0x4e1600*/
  if ( v9 ) /*0x4e1604*/
  {
    if ( v9 == 1 ) /*0x4e160d*/
    {
      if ( niNode ) /*0x4e1615*/
      {
        IsActor = a1->vtbl->IsActor; /*0x4e161e*/
        LOBYTE(v38) = 1; /*0x4e1626*/
        LOBYTE(v37) = 1; /*0x4e162b*/
        if ( IsActor(a1) ) /*0x4e1630*/
        {
          CurrentPackage = Actor::GetCurrentPackage((Actor *)a1); /*0x4e1638*/
          if ( CurrentPackage ) /*0x4e163f*/
          {
            packageFlags = CurrentPackage->members.packageFlags; /*0x4e1641*/
            LOBYTE(v38) = (packageFlags & 0x100000) == 0; /*0x4e164e*/
            LOBYTE(v37) = (packageFlags & 0x200000) == 0; /*0x4e165a*/
          }
        }
        if ( (g_TESSaveLoadGame->flags & 2) != 0 && (sub_4533F0(g_TESSaveLoadGame, (int)a1, 1) & 0x8000000) != 0 ) /*0x4e167c*/
          sub_51D460(a1); /*0x4e1681*/
        else
          sub_51E240((BSExtraDataVtbl *)baseForm, (int)baseForm, a2, a3, a4, a1, (char)v38, v37, 0); /*0x4e1697*/
        Head = EmbeddedList_GetHead((char *)&baseForm[9].member.modlist.next); /*0x4e16a7*/
        v38 = Head; /*0x4e16ab*/
        if ( Head ) /*0x4e16af*/
        {
          while ( *((_DWORD *)Head + 1) || *(_DWORD *)Head ) /*0x4e16c4*/
          {
            v15 = (char *)(*(int (__thiscall **)(TESFormMembr *))(*(_DWORD *)&baseForm[7].member.type + 0x14))(&baseForm[7].member); /*0x4e16e2*/
            v16 = Str; /*0x4e16e4*/
            do /*0x4e16f4*/
            {
              v17 = *v15; /*0x4e16e8*/
              *v16++ = *v15++; /*0x4e16ea*/
            }
            while ( v17 ); /*0x4e16f4*/
            v18 = strrchr(Str, 0x5C); /*0x4e16fd*/
            v19 = *(char **)Head; /*0x4e1702*/
            v20 = v18 + 1; /*0x4e1707*/
            do /*0x4e171c*/
            {
              v21 = *v19; /*0x4e1710*/
              *v20++ = *v19++; /*0x4e1712*/
            }
            while ( v21 ); /*0x4e171c*/
            ModelData = (_DWORD *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], Str, 0, (void *)3, 1); /*0x4e1734*/
            if ( ModelData ) /*0x4e1738*/
            {
              *(float *)&v37 = a1->vtbl->GetScale(a1); /*0x4e174b*/
              OB_NiCloningProcess_ctor((NiTPointerMap<NiObject *,NiObject *> **)&v41); /*0x4e1753*/
              v45 = v37; /*0x4e175c*/
              v44 = v37; /*0x4e1760*/
              v43 = v37; /*0x4e1764*/
              v47 = 1; /*0x4e176a*/
              *(float *)&v37 = 0.0; /*0x4e1771*/
              if ( sub_480820(ModelData) ) /*0x4e177e*/
              {
                v23 = (Ni2DBuffer *)sub_4430C0(ModelData, (int)&v41); /*0x4e1796*/
                NiSmartPointer_Set__((Ni2DBuffer **)&v37, v23); /*0x4e17a0*/
                v24 = (NiAVObject *)v37; /*0x4e17a5*/
              }
              else
              {
                v24 = (NiAVObject *)sub_700610(ModelData, (int)&v41); /*0x4e17b7*/
              }
              v25 = sub_471B80((int)v24); /*0x4e17ce*/
              v26 = sub_4D96F0(a1, skeletonRoot, "Bip01"); /*0x4e17d0*/
              v27 = v26; /*0x4e17d7*/
              if ( v25 && v26 ) /*0x4e17dd*/
              {
                v28 = (_DWORD *)(*(int (__thiscall **)(int, const char *, NiAVObject *, int))(*(_DWORD *)v26 + 0x58))( /*0x4e17eb*/
                                  v26,
                                  "SkinAttachment",
                                  v35,
                                  v36);
                v36 = 1; /*0x4e17ef*/
                v35 = v24; /*0x4e17f1*/
                if ( v28 ) /*0x4e17f2*/
                {
                  v29 = *v28; /*0x4e17f4*/
                  v30 = v28; /*0x4e17f6*/
                }
                else
                {
                  v31 = *(_DWORD **)(v27 + 0x1C); /*0x4e17fa*/
                  v29 = *v31; /*0x4e17fd*/
                  v30 = v31; /*0x4e17ff*/
                }
                (*(void (__thiscall **)(_DWORD *))(v29 + 0x84))(v30); /*0x4e1807*/
                sub_478EC0((int)v24, skeletonRoot, (int)v24, 0); /*0x4e1811*/
              }
              else
              {
                AttachModelUsingPrnExtraData(skeletonRoot, v24, 0, 0, 0xFFFFFFFF, 0); /*0x4e1829*/
              }
              v32 = (void (__thiscall ***)(_DWORD, int))v37; /*0x4e1831*/
              LOBYTE(v47) = 0; /*0x4e1837*/
              if ( *(float *)&v37 != 0.0 && !InterlockedDecrement((volatile LONG *)(v37 + 4)) ) /*0x4e1845*/
                (**v32)(v32, 1); /*0x4e1857*/
              v47 = 0xFFFFFFFF; /*0x4e185f*/
              if ( v41 ) /*0x4e186a*/
                ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v41)(v41, 1); /*0x4e1872*/
              if ( v42 ) /*0x4e187a*/
                (**v42)(v42, 1); /*0x4e1882*/
              baseForm = v40; /*0x4e1884*/
              Head = v38; /*0x4e1888*/
            }
            v38 = *((char **)Head + 1); /*0x4e1891*/
            if ( !v38 ) /*0x4e1895*/
              break; /*0x4e1895*/
            Head = v38; /*0x4e16c0*/
          }
        }
      }
      v33 = 1; /*0x4e189b*/
    }
    else
    {
      v33 = ((int (__thiscall *)(TESForm *))a1->member.baseForm->vtbl[1].Unk_08)(a1->member.baseForm); /*0x4e18bf*/
    }
  }
  else
  {
    if ( v7 ) /*0x4e18a1*/
      sub_526DB0((BSExtraDataVtbl *)baseForm, a2, a3, a4, (PlayerCharacter *)a1); /*0x4e18a6*/
    v33 = 1; /*0x4e18ab*/
  }
  sub_47D0F0(MEMORY[0xB33E90]); /*0x4e18c6*/
  return v33; /*0x4e18cd*/
}
