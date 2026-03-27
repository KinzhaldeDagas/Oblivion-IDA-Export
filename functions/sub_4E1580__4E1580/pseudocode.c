char __usercall sub_4E1580@<al>(TESObjectREFR *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  TESForm *baseForm; // ebx
  void (__thiscall *Unk_5A)(TESObjectREFR *); // edx
  int v7; // esi
  ActorAnimData *v8; // eax
  int v9; // eax
  _DWORD *niNode; // ecx
  bool (__thiscall *IsActor)(TESObjectREFR *); // eax
  TESPackage *v12; // eax
  UInt32 packageFlags; // eax
  int v14; // edi
  char *v15; // eax
  char *v16; // edx
  char v17; // cl
  char *v18; // eax
  char *v19; // ecx
  _BYTE *v20; // edx
  char v21; // al
  _DWORD *v22; // esi
  Ni2DBuffer *v23; // eax
  _DWORD *v24; // esi
  char v25; // bl
  int v26; // eax
  int v27; // edi
  _DWORD *v28; // eax
  int v29; // edx
  _DWORD *v30; // ecx
  _DWORD *v31; // edi
  void (__thiscall ***v32)(_DWORD, int); // esi
  char v33; // bl
  _DWORD *v35; // [esp+0h] [ebp-154h]
  int v36; // [esp+4h] [ebp-150h]
  UInt32 v37; // [esp+14h] [ebp-140h] BYREF
  int v38; // [esp+18h] [ebp-13Ch]
  _DWORD *v39; // [esp+1Ch] [ebp-138h]
  TESForm *v40; // [esp+20h] [ebp-134h]
  void (__stdcall ***v41)(signed int); // [esp+24h] [ebp-130h] BYREF
  void (__thiscall ***v42)(_DWORD, int); // [esp+28h] [ebp-12Ch]
  UInt32 v43; // [esp+34h] [ebp-120h]
  UInt32 v44; // [esp+38h] [ebp-11Ch]
  UInt32 v45; // [esp+3Ch] [ebp-118h]
  char Str[260]; // [esp+40h] [ebp-114h] BYREF
  int v47; // [esp+150h] [ebp-4h]

  baseForm = a1->member.baseForm;
  Unk_5A = a1->vtbl->Unk_5A;
  v40 = baseForm;
  v7 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))Unk_5A)(
         a1,
         a4,
         a3,
         a2);
  OsGlobalsTime::UpdatetimeInfo(&TimeInfo);
  v8 = a1->vtbl->GetAnimData(a1);
  if ( v8 )
    sub_4728C0((int)v8);
  v9 = (unsigned __int8)a1->member.baseForm->member.type - 0x23;
  niNode = a1->member.niNode;
  v39 = niNode;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      if ( niNode )
      {
        IsActor = a1->vtbl->IsActor;
        LOBYTE(v38) = 1;
        LOBYTE(v37) = 1;
        if ( IsActor(a1) )
        {
          v12 = sub_5E0380((Actor *)a1);
          if ( v12 )
          {
            packageFlags = v12->members.packageFlags;
            LOBYTE(v38) = (packageFlags & 0x100000) == 0;
            LOBYTE(v37) = (packageFlags & 0x200000) == 0;
          }
        }
        if ( (SaveLoad_CurrentSavegame->flags & 2) != 0
          && (sub_4533F0(SaveLoad_CurrentSavegame, (int)a1, 1) & 0x8000000) != 0 )
        {
          sub_51D460(a1);
        }
        else
        {
          sub_51E240(a1, v38, v37, 0);
        }
        v14 = sub_6899C0((char *)&baseForm[9].member.modlist.next);
        v38 = v14;
        if ( v14 )
        {
          while ( *(_DWORD *)(v14 + 4) || *(_DWORD *)v14 )
          {
            v15 = (char *)(*(int (__thiscall **)(TESFormMembr *))(*(_DWORD *)&baseForm[7].member.type + 0x14))(&baseForm[7].member);
            v16 = Str;
            do
            {
              v17 = *v15;
              *v16++ = *v15++;
            }
            while ( v17 );
            v18 = strrchr(Str, 0x5C);
            v19 = *(char **)v14;
            v20 = v18 + 1;
            do
            {
              v21 = *v19;
              *v20++ = *v19++;
            }
            while ( v21 );
            v22 = (_DWORD *)sub_439EB0((int *)ModelLoaderPtr, Str, 0, (void *)3, 1);
            if ( v22 )
            {
              *(float *)&v37 = a1->vtbl->GetScale(a1);
              sub_478B90((NiTPointerMap<NiObject *,NiObject *> **)&v41);
              v45 = v37;
              v44 = v37;
              v43 = v37;
              v47 = 1;
              *(float *)&v37 = 0.0;
              if ( sub_480820(v22) )
              {
                v23 = (Ni2DBuffer *)sub_4430C0(v22, (int)&v41);
                NiSmartPointer_Set__((Ni2DBuffer **)&v37, v23);
                v24 = (_DWORD *)v37;
              }
              else
              {
                v24 = (_DWORD *)sub_700610(v22, (int)&v41);
              }
              v25 = sub_471B80((int)v24);
              v26 = sub_4D96F0(a1, v39, "Bip01");
              v27 = v26;
              if ( v25 && v26 )
              {
                v28 = (_DWORD *)(*(int (__thiscall **)(int, const char *, _DWORD *, int))(*(_DWORD *)v26 + 0x58))(
                                  v26,
                                  "SkinAttachment",
                                  v35,
                                  v36);
                v36 = 1;
                v35 = v24;
                if ( v28 )
                {
                  v29 = *v28;
                  v30 = v28;
                }
                else
                {
                  v31 = *(_DWORD **)(v27 + 0x1C);
                  v29 = *v31;
                  v30 = v31;
                }
                (*(void (__thiscall **)(_DWORD *))(v29 + 0x84))(v30);
                sub_478EC0((int)v24, v39, (int)v24, 0);
              }
              else
              {
                sub_479140(v39, v24, 0, 0, 0xFFFFFFFF);
              }
              v32 = (void (__thiscall ***)(_DWORD, int))v37;
              LOBYTE(v47) = 0;
              if ( *(float *)&v37 != 0.0 && !InterlockedDecrement((volatile LONG *)(v37 + 4)) )
                (**v32)(v32, 1);
              v47 = 0xFFFFFFFF;
              if ( v41 )
                ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v41)(v41, 1);
              if ( v42 )
                (**v42)(v42, 1);
              baseForm = v40;
              v14 = v38;
            }
            v38 = *(_DWORD *)(v14 + 4);
            if ( !v38 )
              break;
            v14 = v38;
          }
        }
      }
      v33 = 1;
    }
    else
    {
      v33 = ((int (__thiscall *)(TESForm *))a1->member.baseForm->vtbl[1].Unk_08)(a1->member.baseForm);
    }
  }
  else
  {
    if ( v7 )
      sub_526DB0((int)baseForm, a2, a3, a4, (int)a1);
    v33 = 1;
  }
  sub_47D0F0(&TimeInfo);
  return v33;
}
