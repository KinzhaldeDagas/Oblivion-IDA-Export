void __thiscall sub_441EF0(int ecx0, TESObjectREFR *a1, _DWORD *a6, volatile LONG *a7, __int16 a8)
{
  double v5; // st5
  double v6; // st6
  double v7; // st7
  TESForm::FormType type; // cl
  TESForm::FormFlags flags; // eax
  float *sound; // ebp
  UInt32 refID; // ebx
  float *v13; // edi
  TESForm *v14; // eax
  float *v15; // ebx
  int *v16; // eax
  UInt32 v17; // ebp
  float *v18; // eax
  BSExtraDataVtbl *v19; // eax
  TESForm::FormFlags v20; // eax
  float *v21; // ebx
  int *v22; // eax
  TESFormVtbl *vtbl; // edi
  float *v24; // eax
  BSExtraDataVtbl *v25; // eax
  TESForm::FormFlags v26; // eax
  float *v27; // ebx
  int *v28; // eax
  TESForm::ModReferenceList *next; // edi
  float *v30; // eax
  BSExtraDataVtbl *v31; // eax
  volatile LONG *v32; // edi
  int v33; // ecx
  _DWORD *ShadowSceneNode; // eax
  char v35; // bl
  TESForm *v36; // eax
  _DWORD *v37; // eax
  _DWORD *v38; // ebx
  float *v41; // edi
  int v42; // ecx
  int v43; // [esp+0h] [ebp-1Ch]
  int v45; // [esp+14h] [ebp-8h]
  __int64 v47; // [esp+14h] [ebp-8h]
  int v48; // [esp+18h] [ebp-4h]
  TESForm::FormType a1a; // [esp+20h] [ebp+4h]
  __int16 a1b; // [esp+20h] [ebp+4h]

  if ( a1 )
  {
    sub_43FBA0((MobileObject *)a1);
    type = a1->vtbl->GetBaseForm(a1)->member.type;
    flags = a1->member.super.flags;
    a1a = type;
    if ( (a1->member.super.flags & 0x20) == 0 && (flags & 0x800) == 0 && type == kFormType_Sound )
    {
      sound = (float *)OSGlobals->sound;
      if ( sound )
      {
        refID = a1->member.super.refID;
        v13 = a1->vtbl->GetPos(a1);
        v14 = a1->vtbl->GetBaseForm(a1);
        sub_6AE4B0(sound, *v13, v13[1], v13[2], (int)v14, refID, 0, 1);
      }
    }
    if ( (a1->member.super.flags & 0x20) == 0 && (a1->member.super.flags & 0x800) == 0 && a1a == kFormType_Activator )
    {
      v15 = (float *)OSGlobals->sound;
      v16 = (int *)sub_41E960(&a1->member.baseExtraList);
      if ( v16 )
      {
        sub_6B7190(v16, 1);
      }
      else if ( v15 )
      {
        v17 = a1->vtbl->GetBaseForm(a1)[3].member.refID;
        v18 = a1->vtbl->GetPos(a1);
        v19 = (BSExtraDataVtbl *)sub_6AE4B0(v15, *v18, v18[1], v18[2], v17, 0, 1, 1);
        sub_423B10(&a1->member.baseExtraList, v19);
      }
    }
    v20 = a1->member.super.flags;
    if ( (v20 & 0x20) == 0 && (v20 & 0x800) == 0 && a1a == kFormType_Door && (v20 & 0x2000) == 0 )
    {
      if ( a1->vtbl->GetBaseForm(a1)[4].vtbl )
      {
        v21 = (float *)OSGlobals->sound;
        v22 = (int *)sub_41E960(&a1->member.baseExtraList);
        if ( v22 )
        {
          sub_6B7190(v22, 1);
        }
        else if ( v21 )
        {
          vtbl = a1->vtbl->GetBaseForm(a1)[4].vtbl;
          v24 = a1->vtbl->GetPos(a1);
          v25 = (BSExtraDataVtbl *)sub_6AE4B0(v21, *v24, v24[1], v24[2], (int)vtbl, 0, 1, 0);
          sub_423B10(&a1->member.baseExtraList, v25);
        }
      }
    }
    v26 = a1->member.super.flags;
    if ( (v26 & 0x20) == 0 && (v26 & 0x800) == 0 && a1a == kFormType_Light && (v26 & 0x2000) == 0 )
    {
      if ( a1->vtbl->GetBaseForm(a1)[5].member.modlist.next )
      {
        v27 = (float *)OSGlobals->sound;
        v28 = (int *)sub_41E960(&a1->member.baseExtraList);
        if ( v28 )
        {
          sub_6B7190(v28, 1);
        }
        else if ( v27 )
        {
          next = a1->vtbl->GetBaseForm(a1)[5].member.modlist.next;
          v30 = a1->vtbl->GetPos(a1);
          v31 = (BSExtraDataVtbl *)sub_6AE4B0(v27, *v30, v30[1], v30[2], (int)next, 0, 1, 1);
          sub_423B10(&a1->member.baseExtraList, v31);
        }
      }
    }
    if ( sub_441E90(a1) )
    {
      if ( !(_BYTE)a8 )
        sub_43F240((TESForm *)a1);
      v32 = a7;
      if ( a7 )
      {
        if ( !a1->member.niNode )
          sub_4D7D10((MobileObject *)a1, a7);
      }
      else
      {
        v32 = (volatile LONG *)a1->vtbl->GenerateNiNode(a1);
      }
      if ( v32 )
      {
        if ( a1a == kFormType_LeveledCreature )
        {
          v33 = *((_DWORD *)v32 + 7);
          if ( v33 )
          {
            (*(void (__thiscall **)(int, __int16 *, volatile LONG *))(*(_DWORD *)v33 + 0x88))(v33, &a8, v32);
            sub_7016A0((NiD3DVertexShader *)&a8);
          }
        }
        else
        {
          sub_4D58B0((int)a6);
          ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
          sub_7C5D00(ShadowSceneNode, v32);
          TESObjectCELL::AttachReference3DToQuad((TESObjectCELL *)a6, a1);
          sub_4DC100((int)a1, v7, v5, v6, (char)a6);
          if ( !*(_DWORD *)(ecx0 + 0x34) && !sub_45A500(SaveLoad_CurrentSavegame) && !sub_5790E0(0x3EF, 0) )
            sub_667420((TESObjectREFR *)TESDataHandler_g_PlayerRef, (int)a1);
          if ( a1->vtbl->IsActor(a1) )
            sub_5EB370(a1);
          if ( a1a == kFormType_Light )
          {
            a1->vtbl->GetBaseForm(a1);
            nullsub_returnvVoid_1arg(&a1->member.rot);
          }
          else
          {
            v35 = 0;
            if ( byte_B43384 )
            {
              sub_43F2E0(&stru_B43400);
              v35 = 1;
            }
            GetShadowSceneNode(0);
            sub_7C7050((int)v32, 0);
            if ( v35 )
              sub_43F300(&stru_B43400);
          }
        }
      }
      sub_4D70E0(a1, v5, v6);
      if ( !sub_45A500(SaveLoad_CurrentSavegame) )
      {
        sub_4F9EC0(v7, v5, v6, (int)a1, &a1->member.baseExtraList);
        v7 = Script_AddEventToExtraScript(a1, &a1->member.baseExtraList, 0x1000);
      }
      if ( a1a == kFormType_Tree )
      {
        v36 = a1->vtbl->GetBaseForm(a1);
        v37 = OblivionDynamicCast(
                v36,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESObjectTREE `RTTI Type Descriptor',
                0);
        v38 = v37;
        if ( v37 )
        {
          v45 = v37[0x1E];
          __asm
          {
            fld     dword ptr [esp+18h+var_8]
            fld     qword ptr ds:0A37478h
          }
          v48 = v37[0x1F];
          __asm
          {
            fcom    st(1)
            fnstsw  ax
            fstp    st(1)
          }
          if ( __SETP__(HIBYTE(_AX) & 5, 0) )
          {
            __asm { fstp    st }
          }
          else
          {
            __asm
            {
              fld     dword ptr [esp+18h+var_8+4]
              fcompp
              fnstsw  ax
            }
            if ( (_AX & 0x4100) == 0 )
            {
              a1->vtbl->GetScale(a1);
              __asm { fstp    [esp+18h+var_8] }
              __asm { fld1 }
              v41 = a1->vtbl->GetPos(a1);
              __asm { fstp    [esp+1Ch+var_1C] }
              (*(void (__thiscall **)(_DWORD *))(*v38 + 0x15C))(v38);
              __asm { fmul    [esp+1Ch+var_8] }
              v42 = *(_DWORD *)v41;
              __asm { fnstcw  [esp+1Ch+a8] }
              a1b = a8 | 0xC00;
              __asm
              {
                fldcw   word ptr [esp+1Ch+a1]
                fistp   [esp+1Ch+var_8]
              }
              __asm { fldcw   [esp+2Ch+a8] }
              sub_4CE610(a6, v42, *((_DWORD *)v41 + 1), *((_DWORD *)v41 + 2), v47, v43);
            }
          }
        }
      }
      if ( a1->vtbl->IsActor(a1) )
      {
        sub_5EE1B0((Actor *)a1, v7);
        if ( a1 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
          sub_481410((NiNode *)a1->member.niNode, (const char *)a1->member.super.refID);
      }
    }
  }
}
