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

  v55 = a1;
  v7 = (Actor *)OblivionDynamicCast(
                  arg0,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  v8 = (_DWORD *)a1[2];
  v9 = v7;
  if ( v7 && !v8 || (v8[7] & 4) == 0 && !sub_5660B0(v8) && (v8[7] & 2) == 0 )
  {
    v10 = (int *)FormHeapAlloc(8u);
    if ( v10 )
    {
      v11 = v10;
      *v10 = 0;
      v10[1] = 0;
      LODWORD(a3) = v10;
    }
    else
    {
      a3 = 0.0;
      v11 = 0;
    }
    v61 = (void *)(*(int (__thiscall **)(_DWORD *))(*a1 + 0x2C))(a1);
    __asm { fild    [esp+5Ch+arg_0] }
    if ( (int)v61 < 0 )
      __asm { fadd    dword ptr ds:0A2FC78h }
    __asm { fstp    [esp+60h+var_60]; float }
    sub_5E0340(v9, (int)v11, v50);
    ParentCell = 0;
    v13 = v11;
    if ( v11[1] || *v11 )
    {
      while ( v13[1] || *v13 )
      {
        v14 = *v13;
        v15 = *(TargetData **)(*v13 + 0x28);
        form = 0;
        if ( v15 )
          form = sub_569E60(v15).form;
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v55 + 0x144))(v55, 0);
        if ( sub_56A950((unsigned __int8 **)(v14 + 0x34), v9, form) )
        {
          v17 = a3;
          *(_DWORD *)(LODWORD(a3) + 8) = v14;
          sub_5E6E00(v9, v14, st6_0);
          (*(void (__thiscall **)(float, Actor *))(*(_DWORD *)LODWORD(v17) + 0x55C))(COERCE_FLOAT(LODWORD(v17)), v9);
          switch ( *(_BYTE *)(v14 + 0x20) )
          {
            case 0:
              v21 = *(TargetData **)(v14 + 0x28);
              if ( !v21 )
              {
                v22 = (float *)sub_566B30((TESPackage *)v14, (int)v56, v9);
LABEL_24:
                TESObjectREFR_SetPosition((TESObjectREFR *)v9, *v22, v22[1], v22[2]);
                ParentCell = sub_566A40((char **)v14, v9);
                v23 = sub_566940((TESPackage *)v14, v9);
                goto LABEL_47;
              }
              v24.form = sub_569E60(v21).form;
              objectCode = (TESObjectREFR *)v24.objectCode;
              if ( !v24.objectCode || (*(_DWORD *)(v24.objectCode + 8) & 0x20) != 0 )
              {
                v22 = (float *)sub_566B30((TESPackage *)v14, (int)v57, v9);
                goto LABEL_24;
              }
              v26 = v24.form->vtbl->GetPos(v24.objectCode);
              TESObjectREFR_SetPosition((TESObjectREFR *)v9, *v26, v26[1], v26[2]);
              IsActor = objectCode->vtbl->IsActor;
              v60 = 1;
              if ( !IsActor(objectCode) )
              {
                flags = objectCode->member.super.flags;
                if ( (flags & 0x800) == 0 && (flags & 0x20) == 0 )
                  ActivateRef(objectCode, a2, st6_0, GameDay, (TESObjectREFR *)v9, 0, 0, 1);
              }
              ParentCell = TESObjectREFR_GetParentCell(objectCode);
              WorldSpace = TESObjectREFR_GetWorldSpace(objectCode);
LABEL_49:
              sub_5E6E00(v9, v14, st6_0);
              if ( sub_565DF0((_DWORD *)v14) )
              {
                GameDay = TimeGlobals_GetGameDay(&TimeGlobals);
                sub_41FFC0(&v9->members.super.super.baseExtraList, v14, v39);
              }
              if ( sub_565DB0((_BYTE *)v14) )
              {
                v48 = (int)v9;
                v47 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30;
              }
              else
              {
                if ( !sub_565DC0((_BYTE *)v14) )
                  break;
                v48 = (int)v9;
                v47 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0;
              }
              __asm { fld     dword ptr ds:0A5B6C0h }
              __asm { fstp    [esp+70h+a5]; a5 }
              v40 = (int)v9->vtbl->super.super.GetPos((TESObjectREFR *)v9);
              __asm { fld     dword ptr ds:0A5B6C0h }
              v45 = (float *)v40;
              __asm { fstp    [esp+78h+var_78]; a3 }
              v43 = v9->vtbl->super.super.GetPos((TESObjectREFR *)v9);
              v41 = TESObjectREFR_GetParentCell((TESObjectREFR *)v9);
              sub_446B90(v41, v43, v44, v45, a5, v47, v48);
              break;
            case 1:
              v35 = *(TargetData **)(v14 + 0x28);
              if ( !v35 )
                goto LABEL_49;
              if ( !sub_569E60(v35).form
                && !sub_569E70(*(TargetData **)(v14 + 0x28)).form
                && !sub_569E80(*(TargetData **)(v14 + 0x28)).form )
              {
                goto LABEL_49;
              }
              v36.form = sub_569E60(*(TargetData **)(v14 + 0x28)).form;
              v37 = (TESObjectREFR *)v36.objectCode;
              if ( !v36.objectCode
                || (*(_DWORD *)(v36.objectCode + 8) & 0x20) != 0
                || (PlayerCharacter *)v36.form == TESDataHandler_g_PlayerRef )
              {
                goto LABEL_49;
              }
              v38 = v36.form->vtbl->GetPos(v36.objectCode);
              TESObjectREFR_SetPosition((TESObjectREFR *)v9, *v38, v38[1], v38[2]);
              ParentCell = TESObjectREFR_GetParentCell(v37);
              v23 = TESObjectREFR_GetWorldSpace(v37);
LABEL_47:
              WorldSpace = v23;
LABEL_48:
              v60 = 0;
              goto LABEL_49;
            case 3:
              v29 = (float *)sub_566B30((TESPackage *)v14, (int)v58, v9);
              TESObjectREFR_SetPosition((TESObjectREFR *)v9, *v29, v29[1], v29[2]);
              ParentCell = sub_566A40((char **)v14, v9);
              v30 = sub_566940((TESPackage *)v14, v9);
              v31 = *(_DWORD **)(v14 + 0x24);
              WorldSpace = v30;
              if ( !v31 || !sub_5697E0(v31) )
                goto LABEL_48;
              v60 = 1;
              goto LABEL_49;
            case 4:
              v32 = (float *)sub_566B30((TESPackage *)v14, (int)v59, v9);
              TESObjectREFR_SetPosition((TESObjectREFR *)v9, *v32, v32[1], v32[2]);
              ParentCell = sub_566A40((char **)v14, v9);
              v33 = sub_566940((TESPackage *)v14, v9);
              v34 = *(_DWORD **)(v14 + 0x24);
              WorldSpace = v33;
              if ( !v34 || !sub_5697E0(v34) )
                goto LABEL_48;
              v60 = 1;
              goto LABEL_49;
            case 5:
            case 6:
              v18 = (float *)sub_566B30((TESPackage *)v14, (int)&a3, v9);
              TESObjectREFR_SetPosition((TESObjectREFR *)v9, *v18, v18[1], v18[2]);
              ParentCell = sub_566A40((char **)v14, v9);
              v19 = sub_566940((TESPackage *)v14, v9);
              v20 = *(char **)(v14 + 0x24);
              WorldSpace = v19;
              if ( !v20 || sub_569740(v20) != 1 )
                goto LABEL_48;
              v60 = 1;
              goto LABEL_49;
            default:
              goto LABEL_49;
          }
        }
        v11 = 0;
        v53 = (int *)v53[1];
        v13 = v53;
        if ( !v53 )
          break;
      }
      BSSimpleList_Clear(v11);
      FormHeapFree((unsigned int)v11);
      if ( ParentCell || WorldSpace )
      {
        if ( v60 )
        {
          __asm { fld     dword ptr ds:0A32048h }
          __asm { fstp    [esp+68h+var_68]; float }
          sub_4D89D0(v49);
        }
        sub_4DD4B0((int)ParentCell, a2, st6_0, GameDay, v9, ParentCell, v51);
        *(_DWORD *)8 = 0;
      }
    }
    FormHeapFree((unsigned int)v13);
  }
  return ((int (__thiscall *)(LowProcess *, _DWORD))v9->members.super.process->SetUnk084)(v9->members.super.process, 0);
}
