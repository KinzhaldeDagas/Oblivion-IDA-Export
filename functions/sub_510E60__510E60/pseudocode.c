// Verified script registration: CalcLowPathToPoint, alias LP2P, ID 289, callback 0x510E60; description: 'ignore locks, allow disabled doors, ignore min use'. Argument flow is verified: first boolean -> policy byte 0/ignore locks; second -> policy byte 2/allow disabled; third -> policy byte 1/ignore min use. The command saves prior policy bytes, applies these values for route evaluation, then restores them.
void __usercall ScriptCommand_CalcLowPathToPoint(
        double st5_0@<st2>,
        double a2@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectCELL **a4,
        __int64 a7,
        ScriptEventList *a8,
        int a9,
        UInt32 *a10)
{
  TESForm::ModReferenceList *next; // eax
  TESForm *v11; // eax
  float y; // edx
  float z; // eax
  PlayerCharacter *v14; // ecx
  float *v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  TESObjectREFR *v19; // ecx
  TESForm *v20; // edi
  TESObjectREFR *v21; // esi
  TESObjectREFR *LinkedDoor; // eax
  BSExtraData *v24; // eax
  TESForm *v25; // eax
  TESObjectREFR *v26; // eax
  TESForm *v27; // eax
  TESForm::FormType type; // al
  int v29; // eax
  UInt32 refID; // eax
  TESObjectREFRVtbl *vtbl; // edx
  const char *v32; // eax
  const char *v33; // eax
  char *Head; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  TESForm::FormType v39; // al
  int v40; // eax
  TESForm *v44; // eax
  TESObjectREFR *v45; // ecx
  PlayerCharacter *v47; // ecx
  const NiPoint3 *v48; // eax
  NiAVObject *v49; // esi
  BSShaderProperty *VertexColorProperty; // eax
  double v51; // [esp+0h] [ebp-51Ch]
  const NiPoint3 *v52; // [esp+4h] [ebp-518h]
  size_t v53; // [esp+4h] [ebp-518h]
  size_t v54; // [esp+4h] [ebp-518h]
  TESForm *SpatialContainerAtPosition; // [esp+8h] [ebp-514h]
  double v56; // [esp+8h] [ebp-514h]
  const NiPoint3 *v57; // [esp+Ch] [ebp-510h]
  double v58; // [esp+Ch] [ebp-510h]
  double v59; // [esp+Ch] [ebp-510h]
  size_t v60; // [esp+10h] [ebp-50Ch]
  size_t v61; // [esp+10h] [ebp-50Ch]
  int v62; // [esp+10h] [ebp-50Ch]
  size_t v63; // [esp+10h] [ebp-50Ch]
  size_t v64; // [esp+10h] [ebp-50Ch]
  double v65; // [esp+10h] [ebp-50Ch]
  double v66; // [esp+10h] [ebp-50Ch]
  double v67; // [esp+10h] [ebp-50Ch]
  double v68; // [esp+10h] [ebp-50Ch]
  TESObjectREFR *v69; // [esp+14h] [ebp-508h]
  const char *v70; // [esp+14h] [ebp-508h]
  int v71; // [esp+14h] [ebp-508h]
  float v72; // [esp+14h] [ebp-508h]
  const char *v73; // [esp+18h] [ebp-504h]
  TESForm *v81; // [esp+38h] [ebp-4E4h]
  UInt32 *a3; // [esp+40h] [ebp-4DCh]
  double v88; // [esp+44h] [ebp-4D8h] BYREF
  int v90; // [esp+54h] [ebp-4C8h]
  int v91; // [esp+58h] [ebp-4C4h]
  int v92; // [esp+5Ch] [ebp-4C0h]
  TeleportData *TeleportData; // [esp+60h] [ebp-4BCh]
  BSSimpleList_VoidPtr outRouteNodes; // [esp+64h] [ebp-4B8h] BYREF
  NiPoint3 end; // [esp+6Ch] [ebp-4B0h] BYREF
  int v96; // [esp+78h] [ebp-4A4h] BYREF
  int v97; // [esp+7Ch] [ebp-4A0h] BYREF
  UInt16 v98[2]; // [esp+80h] [ebp-49Ch] BYREF
  int v99; // [esp+84h] [ebp-498h]
  int v100; // [esp+88h] [ebp-494h]
  int v102; // [esp+90h] [ebp-48Ch]
  float v103[4]; // [esp+94h] [ebp-488h] BYREF
  float v104[4]; // [esp+A4h] [ebp-478h] BYREF
  char Format[264]; // [esp+B4h] [ebp-468h] BYREF
  char Dest[264]; // [esp+1BCh] [ebp-360h] BYREF
  char v107[264]; // [esp+2C4h] [ebp-258h] BYREF
  char v108[268]; // [esp+3CCh] [ebp-150h] BYREF
  unsigned int v109; // [esp+518h] [ebp-4h]

  *(_DWORD *)v98 = 0; /*0x510ebf*/
  v97 = 0; /*0x510ec3*/
  v96 = 0; /*0x510ec7*/
  if ( Script_ExtractArgs(
         a1,
         a5,
         a10,
         (TESObjectREFR *)a4,
         (TESObjectREFR *)a7,
         (Script *)HIDWORD(a7),
         a8,
         v98,
         &v97,
         &v96) )
  {
    LOBYTE(v102) = TravelPath_GetIgnoreLocks(); /*0x510efe*/
    LOBYTE(v99) = TravelPath_GetAllowDisabledDoors(); /*0x510f07*/
    LOBYTE(v100) = TravelPath_GetIgnoreMinUse(); /*0x510f16*/
    TravelPath_SetIgnoreLocks(*(_DWORD *)v98 != 0); /*0x510f1e*/
    TravelPath_SetAllowDisabledDoors(v97 != 0); /*0x510f2b*/
    TravelPath_SetIgnoreMinUse(v96 != 0); /*0x510f38*/
    if ( a4 )
    {
      if ( reference )
      {
        v69 = (TESObjectREFR *)reference; /*0x510f57*/
        next = (*a4)[4].members.super.modlist.next; /*0x510f5d*/
        outRouteNodes.firstNode.data = 0; /*0x510f65*/
        outRouteNodes.firstNode.next = 0; /*0x510f69*/
        v57 = (const NiPoint3 *)((int (__thiscall *)(TESObjectCELL **))next)(a4); /*0x510f6f*/
        SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition((TESObjectREFR *)a4); /*0x510f7f*/
        v52 = (const NiPoint3 *)reference->vtbl->super.super.super.GetPos(reference); /*0x510f8e*/
        v11 = TESObjectREFR_GetSpatialContainerAtPosition((TESObjectREFR *)reference); /*0x510f8f*/
        if ( TravelPath_FindLowLevelRoute(v11, v52, SpatialContainerAtPosition, v57, &outRouteNodes, v69) )
        {
          __asm { fldz } /*0x510fab*/
          y = g_zeroNiPoint3.y; /*0x510fad*/
          __asm { fstp    [esp+504h+var_4E0] } /*0x510fb3*/
          z = g_zeroNiPoint3.z; /*0x510fb7*/
          end.x = g_zeroNiPoint3.x; /*0x510fbc*/
          v14 = reference; /*0x510fc0*/
          end.z = z; /*0x510fc6*/
          end.y = y; /*0x510fca*/
          v15 = v14->vtbl->super.super.super.GetPos((TESObjectREFR *)v14); /*0x510fd6*/
          v16 = *(_DWORD *)v15; /*0x510fd8*/
          v17 = *((_DWORD *)v15 + 1); /*0x510fda*/
          v18 = *((_DWORD *)v15 + 2); /*0x510fdd*/
          v90 = v16; /*0x510fe0*/
          v19 = (TESObjectREFR *)reference; /*0x510fe4*/
          v91 = v17; /*0x510fea*/
          v92 = v18; /*0x510fee*/
          v20 = TESObjectREFR_GetSpatialContainerAtPosition(v19); /*0x510fff*/
          if ( outRouteNodes.firstNode.next || outRouteNodes.firstNode.data ) /*0x511005*/
          {
            end = *(NiPoint3 *)(*(int (**)(void))(*(_DWORD *)outRouteNodes.firstNode.data + 0x174))(); /*0x511017*/
            a3 = (UInt32 *)&outRouteNodes; /*0x51102d*/
            do /*0x5112b3*/
            {
              v21 = (TESObjectREFR *)*a3; /*0x511035*/
              if ( *a3 ) /*0x511035*/
              {
                TeleportData = TESObjectREFR_GetTeleportData((TESObjectREFR *)*a3); /*0x511048*/
                LinkedDoor = TeleportData_GetLinkedDoor(TeleportData); /*0x51104c*/
                v81 = TESObjectREFR_GetSpatialContainerAtPosition(LinkedDoor); /*0x511058*/
                _EAX = (int)v21->vtbl->GetPos(v21); /*0x511066*/
                __asm /*0x511068*/
                {
                  fld     dword ptr [eax]
                  fsub    [esp+504h+var_4C8]
                  fstp    [esp+504h+var_490]
                  fld     dword ptr [eax+4]
                  fsub    [esp+504h+var_4C4]
                  fstp    [esp+504h+l]
                  fld     dword ptr [eax+8]
                  fsub    [esp+504h+var_4C0]
                  fstp    [esp+504h+var_4E8]
                  fld     [esp+504h+l]
                  fld     [esp+504h+var_490]
                  fld     [esp+504h+var_4E8]
                  fld     st(1)
                  fmulp   st(2), st
                  fld     st(2)
                  fmulp   st(3), st
                  fxch    st(1)
                  faddp   st(2), st
                  fmul    st, st
                  faddp   st(1), st
                  fstp    [esp+504h+var_4E8]
                  fld     [esp+504h+var_4E8]
                }
                st7_0 = _CIsqrt(*(unsigned __int64 *)&st7_0); /*0x5110ac*/
                __asm /*0x5110b1*/
                {
                  fstp    [esp+504h+var_4E8]
                  fld     [esp+504h+var_4E8]
                }
                __asm { fstp    [esp+504h+l] }
                v88 = 0.0; /*0x5110bf*/
                __asm { fld     [esp+504h+l] } /*0x5110c3*/
                __asm { fadd    [esp+504h+var_4E0] }
                __asm { fstp    [esp+504h+var_4E0] }
                v109 = 0; /*0x5110db*/
                if ( sub_4D7740(v21) ) /*0x5110e2*/
                {
                  v24 = sub_4D7740(v21); /*0x5110ed*/
                  if ( ExtraLock_IsLocked(v24) ) /*0x5110f4*/
                    BSStringT_Append((BSStringT *)&v88, "-Locked"); /*0x511106*/
                }
                if ( (v21->member.super.flags & 0x800) != 0 /*0x511127*/
                  || (TeleportData_GetLinkedDoor(TeleportData)->member.super.flags & 0x800) != 0 )
                {
                  BSStringT_Append((BSStringT *)&v88, "-Disabled"); /*0x511132*/
                }
                v25 = v21->vtbl->GetBaseForm(v21); /*0x511141*/
                if ( TESObjectDOOR_HasMinUseFlag(v25) /*0x511165*/
                  || (v26 = TeleportData_GetLinkedDoor(TeleportData),
                      v27 = v26->vtbl->GetBaseForm(v26),
                      TESObjectDOOR_HasMinUseFlag(v27)) )
                {
                  BSStringT_Append((BSStringT *)&v88, "-MinUse"); /*0x511177*/
                }
                type = v20->member.type; /*0x51117c*/
                if ( type == kFormType_WorldSpace ) /*0x511181*/
                {
                  HIDWORD(v60) = "worldspace"; /*0x511183*/
                  LODWORD(v60) = 0x104; /*0x511188*/
                  _snprintf(Dest, v60, v73); /*0x511195*/
                }
                else
                {
                  if ( type == kFormType_Cell ) /*0x511199*/
                    HIDWORD(v61) = "interior cell"; /*0x51119b*/
                  else
                    HIDWORD(v61) = "UNKNOWN"; /*0x5111af*/
                  LODWORD(v61) = 0x104; /*0x5111a0*/
                  _snprintf(Dest, v61, v73); /*0x5111c1*/
                }
                v29 = ((int (__thiscall *)(TESForm *, UInt32))v20->vtbl->GetEditorName)(v20, v20->member.refID); /*0x5111d7*/
                HIDWORD(v53) = "%s '%s' (%08X)"; /*0x5111e2*/
                LODWORD(v53) = 0x104; /*0x5111ee*/
                _snprintf(v107, v53, Dest, v29); /*0x5111f4*/
                __asm { fld     [esp+51Ch+l] } /*0x5111f9*/
                __asm { fstp    [esp+510h+var_510] }
                Interface_ConsolePrint("- Travel %.0f units in %s.", v58, v107); /*0x511213*/
                refID = v21->member.super.refID; /*0x51121c*/
                vtbl = v21->vtbl; /*0x51121f*/
                if ( LODWORD(v88) ) /*0x511226*/
                {
                  v32 = (const char *)((int (__thiscall *)(TESObjectREFR *, UInt32, char *))vtbl->super.GetEditorName)( /*0x511232*/
                                        v21,
                                        refID,
                                        (char *)LODWORD(v88));
                  Interface_ConsolePrint("- Activate Door '%s' (%08X). (%s)", v32, v62, v70); /*0x51123a*/
                }
                else
                {
                  v33 = (const char *)((int (__thiscall *)(TESObjectREFR *, UInt32))vtbl->super.GetEditorName)( /*0x51124d*/
                                        v21,
                                        refID);
                  Interface_ConsolePrint("- Activate Door '%s' (%08X).", v33, v71); /*0x511255*/
                }
                v20 = v81; /*0x511261*/
                Head = EmbeddedList_GetHead((char *)TeleportData); /*0x511265*/
                v35 = *(_DWORD *)Head; /*0x51126a*/
                v36 = *((_DWORD *)Head + 1); /*0x51126c*/
                v37 = *((_DWORD *)Head + 2); /*0x51126f*/
                v90 = v35; /*0x511272*/
                v91 = v36; /*0x51127b*/
                v92 = v37; /*0x51127f*/
                v109 = 0xFFFFFFFF; /*0x511283*/
                FormHeapFree(LODWORD(v88)); /*0x51128e*/
                v88 = 0.0; /*0x511298*/
              }
              a3 = (UInt32 *)a3[1]; /*0x5112af*/
            }
            while ( a3 ); /*0x5112b3*/
          }
          else
          {
            end = *(NiPoint3 *)((int (__thiscall *)(TESObjectCELL **))(*a4)[4].members.super.modlist.next)(a4); /*0x5112c9*/
          }
          _EAX = ((int (__thiscall *)(TESObjectCELL **))(*a4)[4].members.super.modlist.next)(a4); /*0x5112e5*/
          __asm /*0x5112e7*/
          {
            fld     dword ptr [eax]
            fsub    [esp+504h+var_4C8]
          }
          __asm
          {
            fstp    dword ptr [esp+504h+var_4D8]
            fld     dword ptr [eax+4]
            fsub    [esp+504h+var_4C4]
            fstp    dword ptr [esp+504h+var_4D8+4]
            fld     dword ptr [eax+8]
            fsub    [esp+504h+var_4C0]
            fstp    [esp+504h+var_4D0]
          }
          NiPoint3_Length((float *)&v88); /*0x51130b*/
          v39 = v20->member.type; /*0x511310*/
          __asm { fstp    [esp+504h+l] } /*0x511313*/
          if ( v39 == kFormType_WorldSpace ) /*0x511319*/
          {
            HIDWORD(v63) = "worldspace"; /*0x51131b*/
            LODWORD(v63) = 0x104; /*0x511320*/
            _snprintf(Format, v63, v73); /*0x51132d*/
          }
          else
          {
            if ( v39 == kFormType_Cell ) /*0x511331*/
              HIDWORD(v64) = "interior cell"; /*0x511333*/
            else
              HIDWORD(v64) = "UNKNOWN"; /*0x511347*/
            LODWORD(v64) = 0x104; /*0x511338*/
            _snprintf(Format, v64, v73); /*0x511359*/
          }
          v40 = ((int (__thiscall *)(TESForm *, UInt32))v20->vtbl->GetEditorName)(v20, v20->member.refID); /*0x51136f*/
          HIDWORD(v54) = "%s '%s' (%08X)"; /*0x51137a*/
          LODWORD(v54) = 0x104; /*0x511386*/
          _snprintf(v108, v54, Format, v40); /*0x51138c*/
          __asm { fld     [esp+51Ch+l] } /*0x511391*/
          __asm { fstp    [esp+510h+var_510] }
          Interface_ConsolePrint("- Travel %.0f units in %s.", v59, v108); /*0x5113ab*/
          _ESI = ((int (__thiscall *)(TESObjectCELL **))(*a4)[4].members.super.modlist.next)(a4); /*0x5113c1*/
          _EAX = ((int (__thiscall *)(TESObjectCELL **))(*a4)[4].members.super.modlist.next)(a4); /*0x5113cb*/
          __asm { fld     dword ptr [eax+8] } /*0x5113cd*/
          __asm { fstp    [esp+50Ch+var_510+4] }
          _EAX = ((int (__thiscall *)(TESObjectCELL **, _DWORD, _DWORD))(*a4)[4].members.super.modlist.next)( /*0x5113e0*/
                   a4,
                   LODWORD(v65),
                   HIDWORD(v65));
          __asm { fld     dword ptr [eax+4] } /*0x5113e2*/
          __asm
          {
            fstp    qword ptr [esp+8]
            fld     dword ptr [esi]
            fstp    [esp+51Ch+var_51C]
          }
          Interface_ConsolePrint("- Walk to coord (%.0f, %.0f, %.0f).", v51, v56, v66); /*0x5113f6*/
          __asm /*0x5113fb*/
          {
            fld     [esp+520h+l]
            fadd    [esp+520h+var_4E0]
          }
          __asm { fstp    [esp+524h+var_4E0] }
          v44 = TESForm_LookupByFormID(0x3Au); /*0x511409*/
          __asm { fld     [esp+524h+var_4E0] } /*0x51140e*/
          v45 = (TESObjectREFR *)reference; /*0x511412*/
          __asm { fstp    [esp+504h+var_4D8] } /*0x51141b*/
          _ESI = v44; /*0x51141f*/
          sub_5E65B0(v45); /*0x511421*/
          __asm { fdivr   [esp+504h+var_4D8] } /*0x511426*/
          __asm
          {
            fstp    [esp+50Ch+var_4E4]
            fld     [esp+50Ch+var_4E4]
            fdiv    qword ptr ds:0A2F938h
            fstp    [esp+50Ch+var_4E8]
            fld     dword ptr [esi+24h]
            fstp    [esp+50Ch+var_4E4]
            fld     [esp+50Ch+var_4E0]
            fstp    [esp+50Ch+var_510+4]
          }
          Interface_ConsolePrint("--Total distance: %.0f units.", v67);
          __asm /*0x511457*/
          {
            fld     [esp+510h+var_4E4]
            fmul    [esp+510h+var_4E8]
          }
          __asm
          {
            fstp    [esp+50Ch+var_4E4]
            fld     [esp+50Ch+var_4E4]
            fstp    [esp+50Ch+var_510+4]
          }
          Interface_ConsolePrint("--Estimated Travel Time: %.2f game hours.", v68);
          __asm { fld1 } /*0x511477*/
          __asm { fst     [esp+504h+var_478] }
          __asm { fldz }
          v47 = reference; /*0x51148d*/
          __asm /*0x511493*/
          {
            fst     [esp+508h+var_474]
            fst     [esp+508h+var_46C]
          }
          __asm { fst     [esp+508h+var_484] }
          __asm { fstp    [esp+50Ch+var_47C] }
          __asm
          {
            fst     [esp+510h+var_470]
            fst     [esp+510h+var_488]
            fstp    [esp+510h+var_480]
          }
          v48 = (const NiPoint3 *)v47->vtbl->super.super.super.GetPos((TESObjectREFR *)v47); /*0x5114d9*/
          v49 = NiLines_CreateSegment(v48, (const NiColorAlpha *)v103, &end, (const NiColorAlpha *)v104); /*0x5114e4*/
          VertexColorProperty = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty(); /*0x5114e6*/
          sub_405680((NiNode *)v49, VertexColorProperty); /*0x5114ee*/
          __asm { fld     dword ptr ds:0A37CC8h } /*0x5114f3*/
          __asm { fstp    [esp+508h+var_508]; float }
          sub_440E60(MEMORY[0xB333A0], (int)v49, v72); /*0x511504*/
        }
        else
        {
          Interface_ConsolePrint("No Path found."); /*0x511510*/
        }
        BSSimpleList_Clear(&outRouteNodes); /*0x51151c*/
      }
    }
    TravelPath_SetIgnoreLocks(v102); /*0x511526*/
    TravelPath_SetAllowDisabledDoors(v99); /*0x511530*/
    TravelPath_SetIgnoreMinUse(v100); /*0x51153a*/
  }
}
