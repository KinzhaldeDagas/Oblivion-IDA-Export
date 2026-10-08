// 3DTheft decode: Actor flee entry point. Builds/updates a FleePackage for source ref, records previous package state when needed, resolves flee destination, calls Actor_AddPackage_, then asks process to move toward the computed flee point.
void __userpurge sub_5F5320(Actor *a1@<ecx>, double a2@<st0>, int a3, float a4, char a5, int a6, int a7)
{
  TESForm *v8; // eax
  TESPackage *v9; // eax
  FleePackage *v10; // eax
  FleePackage *v11; // edi
  LowProcess *process; // ecx
  void (__thiscall *Unk_08)(BaseProcess *__hidden); // edx
  TESPackage *editorPackage; // ecx
  LowProcess *v15; // ebx
  BSExtraData *v16; // eax
  char *v17; // eax
  _DWORD *v18; // eax
  TESPackage *v19; // ebx
  TESObjectCELL *v20; // eax
  TESObjectREFR *v21; // ebp
  int v22; // ecx
  int v23; // edx
  int *v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  LowProcess *v28; // ecx
  LowProcess *v29; // ebx
  BSExtraData *v30; // eax
  int v31; // ebx
  double v32; // st7
  int v33; // [esp-10h] [ebp-54h]
  char v34; // [esp-4h] [ebp-48h]
  char v35; // [esp-4h] [ebp-48h]
  char v36; // [esp+0h] [ebp-44h]
  char v37; // [esp+0h] [ebp-44h]
  int v38; // [esp+4h] [ebp-40h]
  int v39; // [esp+4h] [ebp-40h]
  TESWorldSpace *WorldSpace; // [esp+18h] [ebp-2Ch]
  UInt32 DwordAtOffset40; // [esp+1Ch] [ebp-28h]
  int v42; // [esp+20h] [ebp-24h] BYREF
  int v43; // [esp+24h] [ebp-20h]
  int v44; // [esp+28h] [ebp-1Ch]
  int v45[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v46; // [esp+40h] [ebp-4h]
  bool v47; // [esp+58h] [ebp+14h]

  if ( *(_BYTE *)(((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>))a1->vtbl->super.super.GetBaseForm)(a1, a2) + 4) != 0x24 /*0x5f537c*/
    || (v8 = a1->vtbl->super.super.GetBaseForm(a1)) == 0
    || LOBYTE(v8[0xA].member.modlist.next) != 4
    || !((int (__thiscall *)(Actor *))a1->vtbl->Unk_E2)(a1) )
  {
    if ( a1->members.super.process /*0x5f53a1*/
      && (v9 = a1->members.super.process->GetCurrentPackage(a1->members.super.process)) != 0
      && v9->members.type == kPackageType_Flee )
    {
      sub_626C90(v9, a3); /*0x5f53aa*/
    }
    else
    {
      v10 = (FleePackage *)FormHeapAlloc(0x68u); /*0x5f53b6*/
      v46 = 0; /*0x5f53c4*/
      if ( v10 ) /*0x5f53cc*/
        v11 = FleePackage::FleePackage(v10, a3, 0, 0);// 3DTheft decode: Actor flee path allocates FleePackage(0x68) with flee source ref and no explicit cell/ref override. /*0x5f53de*/
      else
        v11 = 0; /*0x5f53e2*/
      process = a1->members.super.process; /*0x5f53e4*/
      Unk_08 = process->Unk_08; /*0x5f53e9*/
      v46 = 0xFFFFFFFF; /*0x5f53ec*/
      Unk_08(process); /*0x5f53f4*/
      editorPackage = a1->members.super.process->editorPackage; /*0x5f53f9*/
      if ( editorPackage ) /*0x5f53fe*/
      {
        if ( !TESPackage_IsRuntimePackage(editorPackage) ) /*0x5f5400*/
        {
          v15 = a1->members.super.process; /*0x5f5414*/
          v36 = ((int (*)(void))v15->GetUnk01C)(); /*0x5f541c*/
          v34 = v15->Unk_2F(v15); /*0x5f5429*/
          v16 = (BSExtraData *)v15->GetUnk02C(v15); /*0x5f5433*/
          sub_4268B0( /*0x5f5443*/
            &a1->members.super.super.baseExtraList,
            v15->editorPackage,
            v15->editorPackProcedure,
            v16,
            v34,
            v36);
        }
      }
      a1->members.super.process->Unk_08(a1->members.super.process); /*0x5f5450*/
      if ( !a1->members.super.process->Unk_14(a1->members.super.process) ) /*0x5f545a*/
      {
        sub_5E91E0(a1, 0x1D, 0x49564E49, 1, v38); /*0x5f546b*/
        if ( !a1->members.super.process->Unk_14(a1->members.super.process) ) /*0x5f5478*/
          sub_5E91E0(a1, 0x1D, 0x4C4D4843, 1, v39); /*0x5f5489*/
        if ( a1->members.super.process->Unk_14(a1->members.super.process) ) /*0x5f5496*/
        {
          v17 = (char *)a1->members.super.process->Unk_14(a1->members.super.process); /*0x5f54a6*/
          MagicItem_LoadVFXModels(v17, 0); /*0x5f54aa*/
        }
      }
      v18 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f54b1*/
      v46 = 1; /*0x5f54bf*/
      if ( v18 ) /*0x5f54c7*/
        v19 = (TESPackage *)TESPackage_LocationData_constr(v18); /*0x5f54d0*/
      else
        v19 = 0; /*0x5f54d4*/
      v46 = 0xFFFFFFFF; /*0x5f54d8*/
      DwordAtOffset40 = Shared_GetDwordAtOffset40(a1); /*0x5f54e7*/
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1); /*0x5f54f6*/
      if ( a7 ) /*0x5f54fa*/
      {
        TESPackage_LocationData_SetType(v19, 0); /*0x5f5500*/
        TESPackage_LocationData_SetReference(v19, a7); /*0x5f5508*/
        *((_BYTE *)v11 + 0x3C) = 0; /*0x5f5510*/
        TESPackage_SetLocation(v11, (char *)v19); /*0x5f5514*/
      }
      else if ( a6 ) /*0x5f5524*/
      {
        TESPackage_LocationData_SetType(v19, 1); /*0x5f552a*/
        sub_569810(v19, a6); /*0x5f5532*/
        *((_BYTE *)v11 + 0x3C) = 0; /*0x5f553a*/
        TESPackage_SetLocation(v11, (char *)v19); /*0x5f553e*/
      }
      else
      {
        v47 = 0; /*0x5f554a*/
        if ( Shared_GetDwordAtOffset40(a1) ) /*0x5f554f*/
        {
          v20 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x5f555a*/
          v47 = TESObjectCELL_IsInterior(v20) != 0; /*0x5f556a*/
        }
        if ( ((double (__thiscall *)(Actor *))a1->vtbl->Unk_94)(a1) == *(float *)&SrcStr ) /*0x5f5586*/
          sub_627FF0(v11, a1); /*0x5f558b*/
        v21 = *((TESObjectREFR **)v11 + 0x18); /*0x5f5590*/
        if ( v21 ) /*0x5f5595*/
        {
          v24 = (int *)v21->vtbl->GetPos(*((_DWORD *)v11 + 0x18)); /*0x5f561e*/
          v25 = *v24; /*0x5f5620*/
          v26 = v24[1]; /*0x5f5622*/
          v27 = v24[2]; /*0x5f5625*/
          v42 = v25; /*0x5f5628*/
          v43 = v26; /*0x5f562e*/
          v44 = v27; /*0x5f5632*/
          DwordAtOffset40 = Shared_GetDwordAtOffset40(v21); /*0x5f563d*/
          WorldSpace = TESObjectREFR_GetWorldSpace(v21); /*0x5f5646*/
        }
        else
        {
          LOBYTE(a6) = 0; /*0x5f55a2*/
          if ( ((double (__thiscall *)(LowProcess *))a1->members.super.process->GetUnk088)(a1->members.super.process) <= *(float *)&SrcStr ) /*0x5f55b4*/
          {
            LOBYTE(a6) = 1; /*0x5f55cb*/
            ((void (__stdcall *)(_DWORD))a1->members.super.process->SetUnk088)(flt_A417B4); /*0x5f55d0*/
          }
          if ( v47 ) /*0x5f55e4*/
            sub_627680((TESPackage *)v11, (int)&v42, (TESChildCELL *)a1, a3, *(float *)&a6); /*0x5f55eb*/
          else
            sub_6279A0((TESPackage *)v11, (int)v45, (TESChildCELL *)a1, a3, *(float *)&a6); /*0x5f55f7*/
          v22 = *((_DWORD *)v11 + 0x11); /*0x5f55ff*/
          v23 = *((_DWORD *)v11 + 0x12); /*0x5f5602*/
          v42 = *((_DWORD *)v11 + 0x10); /*0x5f5605*/
          v43 = v22; /*0x5f5609*/
          v44 = v23; /*0x5f560d*/
        }
      }
      if ( v19 ) /*0x5f564c*/
      {
        TESPackage_LocationData_destr(v19); /*0x5f5650*/
        FormHeapFree((unsigned int)v19); /*0x5f5656*/
      }
      v28 = a1->members.super.process; /*0x5f565e*/
      if ( v28->editorPackage ) /*0x5f5661*/
      {
        v29 = a1->members.super.process; /*0x5f566f*/
        v37 = ((int (*)(void))v28->GetUnk01C)(); /*0x5f5677*/
        v35 = v29->Unk_2F(v29); /*0x5f5684*/
        v30 = (BSExtraData *)v29->GetUnk02C(v29); /*0x5f568e*/
        sub_4268B0(&a1->members.super.super.baseExtraList, v29->editorPackage, v29->editorPackProcedure, v30, v35, v37); /*0x5f569e*/
      }
      if ( a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) ) /*0x5f56ad*/
        LOBYTE(a4) = 0; /*0x5f56b3*/
      Actor_AddPackage_(a1, (TESPackage *)v11, SLOBYTE(a4), 1);// 3DTheft decode: Actor flee path attaches the generated FleePackage through Actor_AddPackage_(actor, package, setCurrent, 1). Prefer this entry point over manually constructing a getaway flee package. /*0x5f56c2*/
      v33 = v42; /*0x5f56de*/
      v31 = v43; /*0x5f56e0*/
      *((_BYTE *)v11 + 0x64) = a5; /*0x5f56e4*/
      *((_DWORD *)v11 + 6) = 0x13;              // 3DTheft decode: Actor flee path forces procedureArrayIndex=0x13 after attaching the flee package. /*0x5f56e7*/
      if ( ((unsigned __int8 (__thiscall *)(LowProcess *, Actor *, int, int, int, UInt32, TESWorldSpace *))a1->members.super.process->Unk_F6)( /*0x5f5704*/
             a1->members.super.process,
             a1,
             v33,
             v31,
             v44,
             DwordAtOffset40,
             WorldSpace) )                      // 3DTheft decode: after package attachment, Actor flee hands computed flee coordinates/cell/worldspace to the process movement function.
      {
        v32 = *((float *)v11 + 0x13); /*0x5f570a*/
        *((_BYTE *)v11 + 0x50) = 0; /*0x5f570d*/
        *((float *)v11 + 0x13) = v32 - *((float *)v11 + 0x13); /*0x5f5714*/
      }
    }
  }
}
