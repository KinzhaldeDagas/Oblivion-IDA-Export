//
// GPU static-world lifecycle audit 2026-09-27: a null reference argument exits without publication. The supplied node argument may be null and GenerateNiNode supplies it inside the function. Before-write invalidation can therefore target the CELL argument even when no node identity is supplied; completion also encloses attachment and later native updates.
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
  int *ExtraSound; // eax
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
  double v36; // st7
  TESForm *v37; // eax
  _DWORD *v38; // eax
  _DWORD *v39; // ebx
  float *v42; // edi
  float v43; // ecx
  int v44; // [esp+0h] [ebp-1Ch]
  int v46; // [esp+14h] [ebp-8h]
  __int64 v48; // [esp+14h] [ebp-8h]
  int v49; // [esp+18h] [ebp-4h]
  TESForm::FormType a1a; // [esp+20h] [ebp+4h]
  __int16 a1b; // [esp+20h] [ebp+4h]

  if ( a1 ) /*0x441f01*/
  {
    sub_43FBA0((MobileObject *)a1); /*0x441f08*/
    type = a1->vtbl->GetBaseForm(a1)->member.type; /*0x441f19*/
    flags = a1->member.super.flags; /*0x441f1c*/
    a1a = type; /*0x441f27*/
    if ( (a1->member.super.flags & 0x20) == 0 && (flags & 0x800) == 0 && type == kFormType_Sound ) /*0x441f37*/
    {
      sound = (float *)MEMORY[0xB33398]->sound; /*0x441f3e*/
      if ( sound ) /*0x441f43*/
      {
        refID = a1->member.super.refID; /*0x441f4d*/
        v13 = a1->vtbl->GetPos(a1); /*0x441f5a*/
        v14 = a1->vtbl->GetBaseForm(a1); /*0x441f65*/
        sub_6AE4B0(sound, *v13, v13[1], v13[2], (int)v14, refID, 0.0, (_DWORD *)1); /*0x441f7f*/
      }
    }
    if ( (a1->member.super.flags & 0x20) == 0 && (a1->member.super.flags & 0x800) == 0 && a1a == kFormType_Activator ) /*0x441f9d*/
    {
      v15 = (float *)MEMORY[0xB33398]->sound; /*0x441fa4*/
      ExtraSound = (int *)ExtraDataList_GetExtraSound(&a1->member.baseExtraList); /*0x441fac*/
      if ( ExtraSound ) /*0x441fb3*/
      {
        sub_6B7190(ExtraSound, 1); /*0x441fb9*/
      }
      else if ( v15 ) /*0x441fc2*/
      {
        v17 = a1->vtbl->GetBaseForm(a1)[3].member.refID; /*0x441fd2*/
        v18 = a1->vtbl->GetPos(a1); /*0x441fdd*/
        v19 = (BSExtraDataVtbl *)sub_6AE4B0(v15, *v18, v18[1], v18[2], v17, 0, COERCE_FLOAT(1), (_DWORD *)1); /*0x441ffd*/
        sub_423B10(&a1->member.baseExtraList, v19); /*0x442005*/
      }
    }
    v20 = a1->member.super.flags; /*0x44200a*/
    if ( (v20 & 0x20) == 0 && (v20 & 0x800) == 0 && a1a == kFormType_Door && (v20 & 0x2000) == 0 ) /*0x442039*/
    {
      if ( a1->vtbl->GetBaseForm(a1)[4].vtbl ) /*0x442047*/
      {
        v21 = (float *)MEMORY[0xB33398]->sound; /*0x442052*/
        v22 = (int *)ExtraDataList_GetExtraSound(&a1->member.baseExtraList); /*0x44205a*/
        if ( v22 ) /*0x442061*/
        {
          sub_6B7190(v22, 1); /*0x442067*/
        }
        else if ( v21 ) /*0x442070*/
        {
          vtbl = a1->vtbl->GetBaseForm(a1)[4].vtbl; /*0x442080*/
          v24 = a1->vtbl->GetPos(a1); /*0x44208b*/
          v25 = (BSExtraDataVtbl *)sub_6AE4B0(v21, *v24, v24[1], v24[2], (int)vtbl, 0, COERCE_FLOAT(1), 0); /*0x4420ab*/
          sub_423B10(&a1->member.baseExtraList, v25); /*0x4420b3*/
        }
      }
    }
    v26 = a1->member.super.flags; /*0x4420b8*/
    if ( (v26 & 0x20) == 0 && (v26 & 0x800) == 0 && a1a == kFormType_Light && (v26 & 0x2000) == 0 ) /*0x4420e7*/
    {
      if ( a1->vtbl->GetBaseForm(a1)[5].member.modlist.next ) /*0x4420f9*/
      {
        v27 = (float *)MEMORY[0xB33398]->sound; /*0x442107*/
        v28 = (int *)ExtraDataList_GetExtraSound(&a1->member.baseExtraList); /*0x44210f*/
        if ( v28 ) /*0x442116*/
        {
          sub_6B7190(v28, 1); /*0x44211c*/
        }
        else if ( v27 ) /*0x442125*/
        {
          next = a1->vtbl->GetBaseForm(a1)[5].member.modlist.next; /*0x442135*/
          v30 = a1->vtbl->GetPos(a1); /*0x442143*/
          v31 = (BSExtraDataVtbl *)sub_6AE4B0(v27, *v30, v30[1], v30[2], (int)next, 0, COERCE_FLOAT(1), (_DWORD *)1); /*0x442163*/
          sub_423B10(&a1->member.baseExtraList, v31); /*0x44216b*/
        }
      }
    }
    if ( sub_441E90(a1) ) /*0x442177*/
    {
      if ( !(_BYTE)a8 ) /*0x442189*/
        sub_43F240((TESForm *)a1); /*0x44218e*/
      v32 = a7; /*0x442193*/
      if ( a7 ) /*0x442199*/
      {
        if ( !a1->member.niNode ) /*0x44219b*/
          sub_4D7D10((MobileObject *)a1, a7); /*0x4421a4*/
      }
      else
      {
        v32 = (volatile LONG *)a1->vtbl->GenerateNiNode(a1); /*0x4421b7*/
      }
      if ( v32 ) /*0x4421bf*/
      {
        if ( a1a == kFormType_LeveledCreature ) /*0x4421ca*/
        {
          v33 = *((_DWORD *)v32 + 7); /*0x4421cc*/
          if ( v33 ) /*0x4421d1*/
          {
            (*(void (__thiscall **)(int, __int16 *, volatile LONG *))(*(_DWORD *)v33 + 0x88))(v33, &a8, v32); /*0x4421e5*/
            sub_7016A0((NiD3DVertexShader *)&a8); /*0x4421eb*/
          }
        }
        else
        {
          sub_4D58B0((TESObjectCELL *)a6); /*0x4421f7*/
          ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x4421ff*/
          sub_7C5D00(ShadowSceneNode, v32); /*0x442209*/
          TESObjectCELL::AttachReference3DToQuad((TESObjectCELL *)a6, a1); /*0x442211*/
          sub_4DC100((int)a1, v7, v5, v6, (char)a6); /*0x442218*/
          if ( !*(_DWORD *)(ecx0 + 0x34) /*0x442239*/
            && !sub_45A500(g_TESSaveLoadGame)
            && !InterfaceManager_IsMenuVisibleByID(0x3EF, 0) )
          {
            sub_667420((TESObjectREFR *)reference, (int)a1); /*0x44224c*/
          }
          if ( a1->vtbl->IsActor(a1) ) /*0x44225b*/
            sub_5EB370(a1); /*0x442263*/
          if ( a1a == kFormType_Light ) /*0x44226d*/
          {
            a1->vtbl->GetBaseForm(a1); /*0x44227d*/
            nullsub_returnvVoid_1arg((int)&a1->member.rot); /*0x442281*/
          }
          else
          {
            v35 = 0; /*0x442288*/
            if ( unk_B43384 ) /*0x44228a*/
            {
              sub_43F2E0(&unk_B43400); /*0x442297*/
              v35 = 1; /*0x44229c*/
            }
            GetShadowSceneNode(0); /*0x4422a0*/
            sub_7C7050((int)v32, 0); /*0x4422a8*/
            if ( v35 ) /*0x4422b2*/
              sub_43F300(&unk_B43400); /*0x4422b9*/
          }
        }
      }
      v36 = sub_4D70E0(a1, v6, v7); /*0x4422c0*/
      if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x4422cb*/
      {
        sub_4F9EC0(v36, v5, v6, (int)a1, &a1->member.baseExtraList); /*0x4422d9*/
        v36 = Script_AddEventToExtraScript(a1, &a1->member.baseExtraList, 0x1000); /*0x4422e5*/
      }
      if ( a1a == kFormType_Tree ) /*0x4422f2*/
      {
        v37 = a1->vtbl->GetBaseForm(a1); /*0x442310*/
        v38 = OblivionDynamicCast( /*0x442313*/
                v37,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESObjectTREE `RTTI Type Descriptor',
                0);
        v39 = v38; /*0x442318*/
        if ( v38 ) /*0x44231f*/
        {
          v46 = v38[0x1E]; /*0x44232b*/
          __asm /*0x44232f*/
          {
            fld     dword ptr [esp+18h+var_8]
            fld     qword ptr ds:0A37478h
          }
          v49 = v38[0x1F]; /*0x442339*/
          __asm /*0x44233d*/
          {
            fcom    st(1)
            fnstsw  ax
            fstp    st(1)
          }
          if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x442346*/
          {
            __asm { fstp    st } /*0x4423ce*/
          }
          else
          {
            __asm /*0x44234c*/
            {
              fld     dword ptr [esp+18h+var_8+4]
              fcompp
              fnstsw  ax
            }
            if ( (_AX & 0x4100) == 0 ) /*0x442357*/
            {
              a1->vtbl->GetScale(a1); /*0x442363*/
              __asm { fstp    [esp+18h+var_8] } /*0x442365*/
              __asm { fld1 }
              v42 = a1->vtbl->GetPos(a1); /*0x442377*/
              __asm { fstp    [esp+1Ch+var_1C] } /*0x442384*/
              (*(void (__thiscall **)(_DWORD *))(*v39 + 0x15C))(v39); /*0x442387*/
              __asm { fmul    [esp+1Ch+var_8] } /*0x442389*/
              v43 = *v42; /*0x44238d*/
              __asm { fnstcw  [esp+1Ch+a8] } /*0x44238f*/
              a1b = a8 | 0xC00; /*0x4423a0*/
              __asm /*0x4423a4*/
              {
                fldcw   word ptr [esp+1Ch+a1]
                fistp   [esp+1Ch+var_8]
              }
              __asm { fldcw   [esp+2Ch+a8] }
              sub_4CE610((TESObjectCELL *)a6, v43, *((_DWORD *)v42 + 1), *((_DWORD *)v42 + 2), v48, v44); /*0x4423c7*/
            }
          }
        }
      }
      if ( a1->vtbl->IsActor(a1) ) /*0x4423da*/
      {
        sub_5EE1B0((Actor *)a1, v36); /*0x4423e2*/
        if ( a1 != (TESObjectREFR *)reference ) /*0x4423ed*/
          sub_481410((NiNode *)a1->member.niNode, (const char *)a1->member.super.refID); /*0x4423f7*/
      }
    }
  }
}
