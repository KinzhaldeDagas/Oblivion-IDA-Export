void __usercall TESObjectREFR_Move_(
        double a1@<st7>,
        double st3_0@<st4>,
        double a3@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        double a7@<st6>,
        double a8@<st5>,
        TESObjectREFR *a9,
        float a10,
        float a11,
        float a12)
{
  TESObjectCELL *ParentCell; // edi
  TESWorldSpace *WorldSpace; // eax
  float y; // ecx
  float z; // edx
  int **v16; // ebx
  TESObjectREFRVtbl *vtbl; // eax
  float *v18; // eax
  bool v19; // zf
  float v20; // ecx
  int v21; // edx
  float v22; // eax
  double v23; // st7
  signed int v24; // esi
  int v25; // ebx
  _BYTE *GlobalScriptStateObj; // eax
  InterfaceManager *Singleton; // eax
  double v28; // st7
  int v29; // edx
  bhkCharacterProxy *CharProxy; // eax
  TESObjectREFR *v31; // eax
  TESObjectREFR *v32; // esi
  TESObjectREFRVtbl *v33; // ecx
  double v34; // st7
  double v35; // st7
  int v36; // edx
  float v37; // [esp+0h] [ebp-3Ch]
  NiPoint3 a2; // [esp+1Ch] [ebp-20h] BYREF
  float v39; // [esp+28h] [ebp-14h]
  float x; // [esp+2Ch] [ebp-10h]
  float v41; // [esp+30h] [ebp-Ch]
  int v42; // [esp+34h] [ebp-8h]
  TESWorldSpace *retaddr; // [esp+3Ch] [ebp+0h]

  if ( (a9 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
     || !TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0))
    && a9 )
  {
    if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))a9->vtbl->IsActor)(
           a9,
           a6,
           a5,
           a4,
           a3,
           st3_0,
           a8) )
    {
      sub_675D50(a9, 0);
    }
    ParentCell = TESObjectREFR_GetParentCell(a9);
    WorldSpace = TESObjectREFR_GetWorldSpace(a9);
    y = a9->member.rot.y;
    z = a9->member.rot.z;
    v16 = (int **)WorldSpace;
    x = a9->member.rot.x;
    vtbl = a9->vtbl;
    v41 = y;
    v42 = LODWORD(z);
    retaddr = (TESWorldSpace *)v16;
    v18 = vtbl->GetPos(a9);
    v19 = a9 == (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    v20 = *v18;
    v21 = *((int *)v18 + 1);
    v22 = v18[2];
    a2.y = v20 + a10;
    a2.z = *(float *)&v21 + a11;
    v23 = v22 + a12;
    v39 = v23;
    if ( v19 )
    {
      if ( dword_B35B90 )
        sub_4BE5A0((_DWORD *)dword_B35B90);
      if ( dword_B35B8C )
        sub_4BD980((_DWORD *)dword_B35B8C);
      if ( ParentCell )
        goto LABEL_17;
      if ( v16 )
      {
        v24 = (int)a2.y >> 0xC;
        v23 = a2.z;
        LODWORD(a2.x) = (int)a2.z;
        v25 = SLODWORD(a2.x) >> 0xC;
        ParentCell = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(retaddr, v24, SLODWORD(a2.x) >> 0xC);
        if ( !ParentCell )
        {
          ParentCell = (TESObjectCELL *)sub_4F1630(retaddr, a4, a5, v23, v24, v25);
          if ( !ParentCell )
            ParentCell = (TESObjectCELL *)sub_4471D0(0, v24, v25, (int **)retaddr);
        }
        v21 = (int)TESDataHandler_g_PlayerRef;
        TESDataHandler_g_PlayerRef->unk117 = 1;
        if ( ParentCell )
        {
LABEL_17:
          GlobalScriptStateObj = (_BYTE *)GetGlobalScriptStateObj__(1);
          if ( (char)GlobalScriptStateObj[0x31] > 0 )
          {
            sub_5859C0(GlobalScriptStateObj, (char)a9, a4, a5, v23);
            Singleton = InterfaceManager_GetSingleton(0, 1);
            sub_57CFE0((int)Singleton, a4, a5, v23, 3, 0);
          }
          x = 0.0;
          v41 = 0.0;
          sub_66EAF0(
            (int *)TESDataHandler_g_PlayerRef,
            0.0,
            a3,
            a4,
            a5,
            a1,
            st3_0,
            a7,
            a8,
            (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))LODWORD(a2.y),
            (NiAVObject *(__thiscall *)(NiAVObject *, const char *))LODWORD(a2.z),
            (void *(__thiscall *)(NiAVObject *))LODWORD(v39),
            COERCE_INT(0.0),
            COERCE_INT(0.0),
            v42,
            ParentCell,
            1);
          v28 = ((double (__thiscall *)(TESObjectREFR *, _DWORD))a9->vtbl->Unk_5E)(a9, 0);
          TESDataHandler_g_PlayerRef->unk117 = 1;
          sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, v28, v29, (PlayerCharacter *)a9);
          return;
        }
      }
LABEL_33:
      sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, v23, v21, (PlayerCharacter *)a9);
      return;
    }
    TESObjectREFR_SetPosition(a9, a2.y, a2.z, v39);
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))a9->vtbl->Unk_5E)(a9, 0);
    if ( a9->vtbl->IsMobileObject(a9) )
    {
      CharProxy = MobileObject_GetCharProxy((MobileObject *)a9);
      if ( CharProxy )
        sub_452A10(CharProxy, &a2);
    }
    if ( ParentCell && TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) )
    {
      sub_4D8A10(v41);
      v23 = 0.0;
    }
    else
    {
      if ( a9 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        goto LABEL_29;
      v23 = flt_A32048;
    }
    v37 = v23;
    sub_4D89D0(v37);
LABEL_29:
    sub_4DD4B0((int)v16, a4, a5, v23, (Actor *)a9, ParentCell, (TESWorldSpace *)v16);
    v31 = (TESObjectREFR *)OblivionDynamicCast(
                             a9,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
    v32 = v31;
    if ( v31 )
    {
      v33 = v31[1].vtbl;
      if ( v33 )
      {
        v34 = ((double (__thiscall *)(TESObjectREFRVtbl *))*((_DWORD *)v33->super.super.InitializeComponent + 8))(v33);
        EvaluatePackage(v32, (int)v16, (int)a9, (int)ParentCell, v34, a4, a5);
        v35 = ((double (__thiscall *)(TESObjectREFRVtbl *, TESObjectREFR *))*((_DWORD *)v32[1].vtbl->super.super.InitializeComponent
                                                                            + 0x2E))(
                v32[1].vtbl,
                v32);
        sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, v35, v36, (PlayerCharacter *)a9);
        return;
      }
      PrintError("Actor being moved is Disabled he has no process");
    }
    goto LABEL_33;
  }
}
