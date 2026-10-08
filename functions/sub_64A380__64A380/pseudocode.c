int __userpurge sub_64A380@<eax>(
        _DWORD *a1@<ecx>,
        double a2@<st2>,
        double st6_0@<st1>,
        double GameDay@<st0>,
        void *arg0,
        int a6)
{
  Actor *v7; // eax
  _DWORD *v8; // edi
  Actor *v9; // esi
  int *v10; // eax
  int *v11; // edi
  TESObjectCELL *ParentCell; // ebx
  int *v13; // ebp
  int v14; // edi
  TargetData *v15; // ecx
  TESObjectREFR *form; // ebp
  float v17; // ebp
  float *v18; // eax
  TESWorldSpace *v19; // eax
  char *v20; // ecx
  TargetData *v21; // ecx
  float *v22; // eax
  TESWorldSpace *v23; // eax
  ObjectType v24; // eax
  TESObjectREFR *objectCode; // ebp
  float *v26; // eax
  bool (__thiscall *IsActor)(TESObjectREFR *); // eax
  TESForm::FormFlags flags; // eax
  float *v29; // eax
  TESWorldSpace *v30; // eax
  _DWORD *v31; // ecx
  float *v32; // eax
  TESWorldSpace *v33; // eax
  _DWORD *v34; // ecx
  TargetData *v35; // ecx
  ObjectType v36; // eax
  TESObjectREFR *v37; // ebp
  float *v38; // eax
  char v39; // al
  int v40; // eax
  TESObjectCELL *v41; // eax
  float *v43; // [esp-4h] [ebp-7Ch]
  float v44; // [esp+0h] [ebp-78h]
  float *v45; // [esp+4h] [ebp-74h]
  float a5; // [esp+8h] [ebp-70h]
  unsigned __int8 (__cdecl *v47)(TESObjectREFR *, int); // [esp+Ch] [ebp-6Ch]
  int v48; // [esp+10h] [ebp-68h]
  float v49; // [esp+10h] [ebp-68h]
  int v50; // [esp+18h] [ebp-60h]
  TESWorldSpace *v51; // [esp+20h] [ebp-58h]
  TESWorldSpace *WorldSpace; // [esp+24h] [ebp-54h]
  int *v53; // [esp+28h] [ebp-50h]
  float a3; // [esp+34h] [ebp-44h] BYREF
  _DWORD *v55; // [esp+38h] [ebp-40h]
  char v56[12]; // [esp+40h] [ebp-38h] BYREF
  char v57[12]; // [esp+4Ch] [ebp-2Ch] BYREF
  char v58[12]; // [esp+58h] [ebp-20h] BYREF
  char v59[16]; // [esp+64h] [ebp-14h] BYREF
  char v60; // [esp+74h] [ebp-4h]
  void *v61; // [esp+7Ch] [ebp+4h]

  v55 = a1; /*0x64a39c*/
  v7 = (Actor *)OblivionDynamicCast( /*0x64a3a0*/
                  arg0,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  v8 = (_DWORD *)a1[2]; /*0x64a3a5*/
  v9 = v7; /*0x64a3a8*/
  if ( v7 && !v8 || (v8[7] & 4) == 0 && !sub_5660B0(v8) && (v8[7] & 2) == 0 ) /*0x64a3db*/
  {
    v10 = (int *)FormHeapAlloc(8u); /*0x64a3e3*/
    if ( v10 ) /*0x64a3ed*/
    {
      v11 = v10; /*0x64a3ef*/
      *v10 = 0; /*0x64a3f1*/
      v10[1] = 0; /*0x64a3f3*/
      LODWORD(a3) = v10; /*0x64a3f6*/
    }
    else
    {
      a3 = 0.0; /*0x64a3fc*/
      v11 = 0; /*0x64a400*/
    }
    v61 = (void *)(*(int (__thiscall **)(_DWORD *))(*a1 + 0x2C))(a1); /*0x64a40d*/
    __asm { fild    [esp+5Ch+arg_0] } /*0x64a411*/
    if ( (int)v61 < 0 ) /*0x64a415*/
      __asm { fadd    dword ptr ds:0A2FC78h } /*0x64a417*/
    __asm { fstp    [esp+60h+var_60]; float } /*0x64a41e*/
    sub_5E0340(v9, (int)v11, v50); /*0x64a424*/
    ParentCell = 0; /*0x64a429*/
    v13 = v11; /*0x64a42e*/
    if ( v11[1] || *v11 ) /*0x64a43e*/
    {
      while ( v13[1] || *v13 ) /*0x64a450*/
      {
        v14 = *v13; /*0x64a456*/
        v15 = *(TargetData **)(*v13 + 0x28); /*0x64a459*/
        form = 0; /*0x64a45c*/
        if ( v15 ) /*0x64a460*/
          form = sub_569E60(v15).form; /*0x64a467*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v55 + 0x144))(v55, 0); /*0x64a477*/
        if ( ConditionList_EvaluateForActor((unsigned __int8 **)(v14 + 0x34), v9, form) ) /*0x64a47e*/
        {
          v17 = a3; /*0x64a4b7*/
          *(_DWORD *)(LODWORD(a3) + 8) = v14; /*0x64a4bd*/
          sub_5E6E00(v9, v14, st6_0); /*0x64a4c0*/
          (*(void (__thiscall **)(float, Actor *))(*(_DWORD *)LODWORD(v17) + 0x55C))(COERCE_FLOAT(LODWORD(v17)), v9); /*0x64a4d1*/
          switch ( *(_BYTE *)(v14 + 0x20) ) /*0x64a4e0*/
          {
            case 0: /*0x64a4e0*/
              v21 = *(TargetData **)(v14 + 0x28); /*0x64a548*/
              if ( !v21 ) /*0x64a54d*/
              {
                v22 = (float *)sub_566B30((TESPackage *)v14, (int)v56, v9); /*0x64a557*/
LABEL_24:
                TESObjectREFR_SetPosition((TESObjectREFR *)v9, *v22, v22[1], v22[2]); /*0x64a55c*/
                ParentCell = sub_566A40((char **)v14, v9); /*0x64a583*/
                v23 = sub_566940((TESPackage *)v14, v9); /*0x64a585*/
                goto LABEL_47; /*0x64a58a*/
              }
              v24.form = sub_569E60(v21).form; /*0x64a58f*/
              objectCode = (TESObjectREFR *)v24.objectCode; /*0x64a594*/
              if ( !v24.objectCode || (*(_DWORD *)(v24.objectCode + 8) & 0x20) != 0 ) /*0x64a5a7*/
              {
                v22 = (float *)sub_566B30((TESPackage *)v14, (int)v57, v9); /*0x64a629*/
                goto LABEL_24; /*0x64a629*/
              }
              v26 = v24.form->vtbl->GetPos(v24.objectCode); /*0x64a5b4*/
              TESObjectREFR_SetPosition((TESObjectREFR *)v9, *v26, v26[1], v26[2]); /*0x64a5cd*/
              IsActor = objectCode->vtbl->IsActor; /*0x64a5d5*/
              v60 = 1; /*0x64a5dd*/
              if ( !IsActor(objectCode) ) /*0x64a5e2*/
              {
                flags = objectCode->member.super.flags; /*0x64a5e8*/
                if ( (flags & 0x800) == 0 && (flags & 0x20) == 0 ) /*0x64a5fa*/
                  ActivateRef(objectCode, a2, st6_0, GameDay, (TESObjectREFR *)v9, 0, 0, 1); /*0x64a605*/
              }
              ParentCell = Shared_GetDwordAtOffset40(objectCode); /*0x64a613*/
              WorldSpace = TESObjectREFR_GetWorldSpace(objectCode); /*0x64a61a*/
LABEL_49:
              sub_5E6E00(v9, v14, st6_0); /*0x64a77f*/
              if ( sub_565DF0((_DWORD *)v14) ) /*0x64a788*/
              {
                GameDay = TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x64a796*/
                ExtraDataList_SetRunOnceExtraPackage(&v9->members.super.super.baseExtraList, v14, v39); /*0x64a7a0*/
              }
              if ( sub_565DB0((_BYTE *)v14) ) /*0x64a7a7*/
              {
                v48 = (int)v9; /*0x64a7b0*/
                v47 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_SetOwnedDoorLockedForActor; /*0x64a7b1*/
              }
              else
              {
                if ( !sub_565DC0((_BYTE *)v14) ) /*0x64a7c1*/
                  break; /*0x64a7c1*/
                v48 = (int)v9; /*0x64a7c3*/
                v47 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_ClearOwnedDoorLockForActor; /*0x64a7c4*/
              }
              __asm { fld     dword ptr ds:0A5B6C0h } /*0x64a7cb*/
              __asm { fstp    [esp+70h+a5]; a5 }
              v40 = (int)v9->vtbl->super.super.GetPos((TESObjectREFR *)v9); /*0x64a7dd*/
              __asm { fld     dword ptr ds:0A5B6C0h } /*0x64a7df*/
              v45 = (float *)v40; /*0x64a7e7*/
              __asm { fstp    [esp+78h+var_78]; a3 } /*0x64a7f1*/
              v43 = v9->vtbl->super.super.GetPos((TESObjectREFR *)v9); /*0x64a7f6*/
              v41 = Shared_GetDwordAtOffset40((TESObjectREFR *)v9); /*0x64a7f9*/
              sub_446B90(v41, v43, v44, v45, a5, v47, v48); /*0x64a805*/
              break; /*0x64a805*/
            case 1: /*0x64a4e0*/
              v35 = *(TargetData **)(v14 + 0x28); /*0x64a6f0*/
              if ( !v35 ) /*0x64a6f5*/
                goto LABEL_49; /*0x64a6f5*/
              if ( !sub_569E60(v35).form /*0x64a713*/
                && !sub_569E70(*(TargetData **)(v14 + 0x28)).form
                && !sub_569E80(*(TargetData **)(v14 + 0x28)).form )
              {
                goto LABEL_49; /*0x64a713*/
              }
              v36.form = sub_569E60(*(TargetData **)(v14 + 0x28)).form; /*0x64a71f*/
              v37 = (TESObjectREFR *)v36.objectCode; /*0x64a724*/
              if ( !v36.objectCode /*0x64a73b*/
                || (*(_DWORD *)(v36.objectCode + 8) & 0x20) != 0
                || (PlayerCharacter *)v36.form == reference )
              {
                goto LABEL_49; /*0x64a73b*/
              }
              v38 = v36.form->vtbl->GetPos(v36.objectCode); /*0x64a748*/
              TESObjectREFR_SetPosition((TESObjectREFR *)v9, *v38, v38[1], v38[2]); /*0x64a761*/
              ParentCell = Shared_GetDwordAtOffset40(v37); /*0x64a76f*/
              v23 = TESObjectREFR_GetWorldSpace(v37); /*0x64a771*/
LABEL_47:
              WorldSpace = v23; /*0x64a776*/
LABEL_48:
              v60 = 0; /*0x64a77a*/
              goto LABEL_49; /*0x64a77a*/
            case 3: /*0x64a4e0*/
              v29 = (float *)sub_566B30((TESPackage *)v14, (int)v58, v9); /*0x64a636*/
              TESObjectREFR_SetPosition((TESObjectREFR *)v9, *v29, v29[1], v29[2]); /*0x64a652*/
              ParentCell = sub_566A40((char **)v14, v9); /*0x64a662*/
              v30 = sub_566940((TESPackage *)v14, v9); /*0x64a664*/
              v31 = *(_DWORD **)(v14 + 0x24); /*0x64a669*/
              WorldSpace = v30; /*0x64a66e*/
              if ( !v31 || !sub_5697E0(v31) ) /*0x64a678*/
                goto LABEL_48; /*0x64a67f*/
              v60 = 1; /*0x64a685*/
              goto LABEL_49; /*0x64a68a*/
            case 4: /*0x64a4e0*/
              v32 = (float *)sub_566B30((TESPackage *)v14, (int)v59, v9); /*0x64a697*/
              TESObjectREFR_SetPosition((TESObjectREFR *)v9, *v32, v32[1], v32[2]); /*0x64a6b3*/
              ParentCell = sub_566A40((char **)v14, v9); /*0x64a6c3*/
              v33 = sub_566940((TESPackage *)v14, v9); /*0x64a6c5*/
              v34 = *(_DWORD **)(v14 + 0x24); /*0x64a6ca*/
              WorldSpace = v33; /*0x64a6cf*/
              if ( !v34 || !sub_5697E0(v34) ) /*0x64a6d9*/
                goto LABEL_48; /*0x64a6e0*/
              v60 = 1; /*0x64a6e6*/
              goto LABEL_49; /*0x64a6eb*/
            case 5: /*0x64a4e0*/
            case 6: /*0x64a4e0*/
              v18 = (float *)sub_566B30((TESPackage *)v14, (int)&a3, v9); /*0x64a4ef*/
              TESObjectREFR_SetPosition((TESObjectREFR *)v9, *v18, v18[1], v18[2]); /*0x64a50b*/
              ParentCell = sub_566A40((char **)v14, v9); /*0x64a51b*/
              v19 = sub_566940((TESPackage *)v14, v9); /*0x64a51d*/
              v20 = *(char **)(v14 + 0x24); /*0x64a522*/
              WorldSpace = v19; /*0x64a527*/
              if ( !v20 || sub_569740(v20) != 1 ) /*0x64a539*/
                goto LABEL_48; /*0x64a539*/
              v60 = 1; /*0x64a53f*/
              goto LABEL_49; /*0x64a543*/
            default:
              goto LABEL_49;
          }
        }
        v11 = 0; /*0x64a80a*/
        v53 = (int *)v53[1]; /*0x64a817*/
        v13 = v53; /*0x64a81b*/
        if ( !v53 ) /*0x64a81d*/
          break; /*0x64a81d*/
      }
      BSSimpleList_Clear(v11); /*0x64a823*/
      FormHeapFree((unsigned int)v11); /*0x64a82b*/
      if ( ParentCell || WorldSpace ) /*0x64a83b*/
      {
        if ( v60 ) /*0x64a842*/
        {
          __asm { fld     dword ptr ds:0A32048h } /*0x64a844*/
          __asm { fstp    [esp+68h+radians]; radians }
          TESObjectREFR_SetRotationX(v49); /*0x64a850*/
        }
        sub_4DD4B0((int)ParentCell, a2, st6_0, GameDay, v9, ParentCell, v51); /*0x64a85c*/
        *(_DWORD *)8 = 0; /*0x64a868*/
      }
    }
    FormHeapFree((unsigned int)v13); /*0x64a870*/
  }
  return ((int (__thiscall *)(LowProcess *, _DWORD))v9->members.super.process->SetUnk084)(v9->members.super.process, 0); /*0x64a889*/
}
