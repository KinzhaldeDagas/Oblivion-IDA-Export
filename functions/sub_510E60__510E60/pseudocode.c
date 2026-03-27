void __usercall sub_510E60(
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
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // edx
  float v15; // eax
  PlayerCharacter *v16; // ecx
  float *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  TESObjectCELL **v21; // ecx
  int v22; // eax
  int v23; // edi
  int v24; // eax
  UInt32 v25; // esi
  TESObjectCELL **v26; // eax
  int v27; // eax
  BSExtraData *v29; // eax
  _BYTE *v30; // eax
  BSExtraDataVtbl *v31; // eax
  _BYTE *v32; // eax
  char v33; // al
  int v34; // eax
  int v35; // eax
  int v36; // edx
  const char *v37; // eax
  const char *v38; // eax
  int *v39; // eax
  int v40; // ecx
  int v41; // edx
  int v42; // eax
  int v43; // eax
  char v45; // al
  int v46; // eax
  TESForm *v50; // eax
  int *v51; // ecx
  PlayerCharacter *v53; // ecx
  float *v54; // eax
  NiAVObject *v55; // esi
  BSShaderProperty *v56; // eax
  double v57; // [esp+0h] [ebp-51Ch]
  float *v58; // [esp+4h] [ebp-518h]
  size_t v59; // [esp+4h] [ebp-518h]
  size_t v60; // [esp+4h] [ebp-518h]
  int v61; // [esp+8h] [ebp-514h]
  double v62; // [esp+8h] [ebp-514h]
  int v63; // [esp+Ch] [ebp-510h]
  double v64; // [esp+Ch] [ebp-510h]
  double v65; // [esp+Ch] [ebp-510h]
  size_t v66; // [esp+10h] [ebp-50Ch]
  size_t v67; // [esp+10h] [ebp-50Ch]
  int v68; // [esp+10h] [ebp-50Ch]
  size_t v69; // [esp+10h] [ebp-50Ch]
  size_t v70; // [esp+10h] [ebp-50Ch]
  double v71; // [esp+10h] [ebp-50Ch]
  double v72; // [esp+10h] [ebp-50Ch]
  double v73; // [esp+10h] [ebp-50Ch]
  double v74; // [esp+10h] [ebp-50Ch]
  PlayerCharacter *v75; // [esp+14h] [ebp-508h]
  const char *v76; // [esp+14h] [ebp-508h]
  int v77; // [esp+14h] [ebp-508h]
  float v78; // [esp+14h] [ebp-508h]
  const char *v79; // [esp+18h] [ebp-504h]
  int v87; // [esp+38h] [ebp-4E4h]
  UInt32 *a3; // [esp+40h] [ebp-4DCh]
  double v94; // [esp+44h] [ebp-4D8h] BYREF
  int v96; // [esp+54h] [ebp-4C8h]
  int v97; // [esp+58h] [ebp-4C4h]
  int v98; // [esp+5Ch] [ebp-4C0h]
  ExtraTeleport *TeleportExtraData; // [esp+60h] [ebp-4BCh]
  int v100; // [esp+64h] [ebp-4B8h] BYREF
  int v101; // [esp+68h] [ebp-4B4h]
  __int64 v102; // [esp+6Ch] [ebp-4B0h] BYREF
  float v103; // [esp+74h] [ebp-4A8h]
  int v104; // [esp+78h] [ebp-4A4h] BYREF
  int v105; // [esp+7Ch] [ebp-4A0h] BYREF
  UInt16 v106[2]; // [esp+80h] [ebp-49Ch] BYREF
  int v107; // [esp+84h] [ebp-498h]
  int v108; // [esp+88h] [ebp-494h]
  int v110; // [esp+90h] [ebp-48Ch]
  _DWORD v111[4]; // [esp+94h] [ebp-488h] BYREF
  _DWORD v112[4]; // [esp+A4h] [ebp-478h] BYREF
  char Format[264]; // [esp+B4h] [ebp-468h] BYREF
  char Dest[264]; // [esp+1BCh] [ebp-360h] BYREF
  char v115[264]; // [esp+2C4h] [ebp-258h] BYREF
  char v116[268]; // [esp+3CCh] [ebp-150h] BYREF
  unsigned int v117; // [esp+518h] [ebp-4h]

  *(_DWORD *)v106 = 0;
  v105 = 0;
  v104 = 0;
  if ( Script_ExtractArgs(
         a1,
         a5,
         a10,
         (TESObjectREFR *)a4,
         (TESObjectREFR *)a7,
         (Script *)HIDWORD(a7),
         a8,
         v106,
         &v105,
         &v104) )
  {
    LOBYTE(v110) = sub_67F0A0();
    LOBYTE(v107) = sub_67F0E0();
    LOBYTE(v108) = sub_67F0C0();
    sub_67F0B0(*(_DWORD *)v106 != 0);
    sub_67F0F0(v105 != 0);
    sub_67F0D0(v104 != 0);
    if ( a4 )
    {
      if ( TESDataHandler_g_PlayerRef )
      {
        v75 = TESDataHandler_g_PlayerRef;
        next = (*a4)[4].members.super.modlist.next;
        v100 = 0;
        v101 = 0;
        v63 = ((int (__thiscall *)(TESObjectCELL **))next)(a4);
        sub_4D8AF0(a4);
        v61 = v11;
        v58 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
        sub_4D8AF0((TESObjectCELL **)TESDataHandler_g_PlayerRef);
        if ( sub_680110(v13, v12, (int)v58, v61, v63, &v100, (int)v75) )
        {
          __asm { fldz }
          v14 = *((_DWORD *)&Vector3_InitValue_ + 1);
          __asm { fstp    [esp+504h+var_4E0] }
          v15 = dword_B3F9B0;
          *(float *)&v102 = Vector3_InitValue_;
          v16 = TESDataHandler_g_PlayerRef;
          v103 = v15;
          HIDWORD(v102) = v14;
          v17 = v16->vtbl->super.super.super.GetPos((TESObjectREFR *)v16);
          v18 = *(_DWORD *)v17;
          v19 = *((_DWORD *)v17 + 1);
          v20 = *((_DWORD *)v17 + 2);
          v96 = v18;
          v21 = (TESObjectCELL **)TESDataHandler_g_PlayerRef;
          v97 = v19;
          v98 = v20;
          sub_4D8AF0(v21);
          v23 = v22;
          if ( v101 || v100 )
          {
            v24 = (*(int (**)(void))(*(_DWORD *)v100 + 0x174))();
            v102 = *(_QWORD *)v24;
            v103 = *(float *)(v24 + 8);
            a3 = (UInt32 *)&v100;
            do
            {
              v25 = *a3;
              if ( *a3 )
              {
                TeleportExtraData = GetTeleportExtraData((_BYTE *)*a3);
                v26 = (TESObjectCELL **)sub_42B410(&TeleportExtraData->super);
                sub_4D8AF0(v26);
                v87 = v27;
                _EAX = (*(int (__thiscall **)(UInt32))(*(_DWORD *)v25 + 0x174))(v25);
                __asm
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
                st7_0 = _CIsqrt(st7_0);
                __asm
                {
                  fstp    [esp+504h+var_4E8]
                  fld     [esp+504h+var_4E8]
                }
                __asm { fstp    [esp+504h+l] }
                v94 = 0.0;
                __asm { fld     [esp+504h+l] }
                __asm { fadd    [esp+504h+var_4E0] }
                __asm { fstp    [esp+504h+var_4E0] }
                v117 = 0;
                if ( sub_4D7740((TESObjectREFR *)v25) )
                {
                  v29 = sub_4D7740((TESObjectREFR *)v25);
                  if ( sub_428E70(v29) )
                    BSStringT_Append((BSStringT *)&v94, "-Locked");
                }
                if ( (*(_DWORD *)(v25 + 8) & 0x800) != 0
                  || ((int)sub_42B410(&TeleportExtraData->super)[1].Destructor & 0x800) != 0 )
                {
                  BSStringT_Append((BSStringT *)&v94, "-Disabled");
                }
                v30 = (_BYTE *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v25 + 0x170))(v25);
                if ( sub_4B6D10(v30)
                  || (v31 = sub_42B410(&TeleportExtraData->super),
                      v32 = (_BYTE *)(*((int (__thiscall **)(BSExtraDataVtbl *))v31->Destructor + 0x5C))(v31),
                      sub_4B6D10(v32)) )
                {
                  BSStringT_Append((BSStringT *)&v94, "-MinUse");
                }
                v33 = *(_BYTE *)(v23 + 4);
                if ( v33 == 0x35 )
                {
                  HIDWORD(v66) = "worldspace";
                  LODWORD(v66) = 0x104;
                  _snprintf(Dest, v66, v79);
                }
                else
                {
                  if ( v33 == 0x30 )
                    HIDWORD(v67) = "interior cell";
                  else
                    HIDWORD(v67) = "UNKNOWN";
                  LODWORD(v67) = 0x104;
                  _snprintf(Dest, v67, v79);
                }
                v34 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 0xD4))(v23, *(_DWORD *)(v23 + 0xC));
                HIDWORD(v59) = "%s '%s' (%08X)";
                LODWORD(v59) = 0x104;
                _snprintf(v115, v59, Dest, v34);
                __asm { fld     [esp+51Ch+l] }
                __asm { fstp    [esp+510h+var_510] }
                Interface_ConsolePrint("- Travel %.0f units in %s.", v64, v115);
                v35 = *(_DWORD *)(v25 + 0xC);
                v36 = *(_DWORD *)v25;
                if ( LODWORD(v94) )
                {
                  v37 = (const char *)(*(int (__thiscall **)(UInt32, int, char *))(v36 + 0xD4))(
                                        v25,
                                        v35,
                                        (char *)LODWORD(v94));
                  Interface_ConsolePrint("- Activate Door '%s' (%08X). (%s)", v37, v68, v76);
                }
                else
                {
                  v38 = (const char *)(*(int (__thiscall **)(UInt32, int))(v36 + 0xD4))(v25, v35);
                  Interface_ConsolePrint("- Activate Door '%s' (%08X).", v38, v77);
                }
                v23 = v87;
                v39 = (int *)sub_6899C0((char *)TeleportExtraData);
                v40 = *v39;
                v41 = v39[1];
                v42 = v39[2];
                v96 = v40;
                v97 = v41;
                v98 = v42;
                v117 = 0xFFFFFFFF;
                FormHeapFree(LODWORD(v94));
                v94 = 0.0;
              }
              a3 = (UInt32 *)a3[1];
            }
            while ( a3 );
          }
          else
          {
            v43 = ((int (__thiscall *)(TESObjectCELL **))(*a4)[4].members.super.modlist.next)(a4);
            v102 = *(_QWORD *)v43;
            v103 = *(float *)(v43 + 8);
          }
          _EAX = ((int (__thiscall *)(TESObjectCELL **))(*a4)[4].members.super.modlist.next)(a4);
          __asm
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
          sub_404C90((float *)&v94);
          v45 = *(_BYTE *)(v23 + 4);
          __asm { fstp    [esp+504h+l] }
          if ( v45 == 0x35 )
          {
            HIDWORD(v69) = "worldspace";
            LODWORD(v69) = 0x104;
            _snprintf(Format, v69, v79);
          }
          else
          {
            if ( v45 == 0x30 )
              HIDWORD(v70) = "interior cell";
            else
              HIDWORD(v70) = "UNKNOWN";
            LODWORD(v70) = 0x104;
            _snprintf(Format, v70, v79);
          }
          v46 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 0xD4))(v23, *(_DWORD *)(v23 + 0xC));
          HIDWORD(v60) = "%s '%s' (%08X)";
          LODWORD(v60) = 0x104;
          _snprintf(v116, v60, Format, v46);
          __asm { fld     [esp+51Ch+l] }
          __asm { fstp    [esp+510h+var_510] }
          Interface_ConsolePrint("- Travel %.0f units in %s.", v65, v116);
          _ESI = ((int (__thiscall *)(TESObjectCELL **))(*a4)[4].members.super.modlist.next)(a4);
          _EAX = ((int (__thiscall *)(TESObjectCELL **))(*a4)[4].members.super.modlist.next)(a4);
          __asm { fld     dword ptr [eax+8] }
          __asm { fstp    [esp+50Ch+var_510+4] }
          _EAX = ((int (__thiscall *)(TESObjectCELL **, _DWORD, _DWORD))(*a4)[4].members.super.modlist.next)(
                   a4,
                   LODWORD(v71),
                   HIDWORD(v71));
          __asm { fld     dword ptr [eax+4] }
          __asm
          {
            fstp    qword ptr [esp+8]
            fld     dword ptr [esi]
            fstp    [esp+51Ch+var_51C]
          }
          Interface_ConsolePrint("- Walk to coord (%.0f, %.0f, %.0f).", v57, v62, v72);
          __asm
          {
            fld     [esp+520h+l]
            fadd    [esp+520h+var_4E0]
          }
          __asm { fstp    [esp+524h+var_4E0] }
          v50 = TESForm_LookupByFormID(0x3Au);
          __asm { fld     [esp+524h+var_4E0] }
          v51 = (int *)TESDataHandler_g_PlayerRef;
          __asm { fstp    [esp+504h+var_4D8] }
          _ESI = v50;
          sub_5E65B0(v51);
          __asm { fdivr   [esp+504h+var_4D8] }
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
          Interface_ConsolePrint("--Total distance: %.0f units.", v73);
          __asm
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
          Interface_ConsolePrint("--Estimated Travel Time: %.2f game hours.", v74);
          __asm { fld1 }
          __asm { fst     [esp+504h+var_478] }
          __asm { fldz }
          v53 = TESDataHandler_g_PlayerRef;
          __asm
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
          v54 = v53->vtbl->super.super.super.GetPos((TESObjectREFR *)v53);
          v55 = sub_47F070(v54, v111, &v102, v112);
          v56 = (BSShaderProperty *)sub_4E70B0();
          sub_405680((NiNode *)v55, v56);
          __asm { fld     dword ptr ds:0A37CC8h }
          __asm { fstp    [esp+508h+var_508]; float }
          sub_440E60(TES, (int)v55, v78);
        }
        else
        {
          Interface_ConsolePrint("No Path found.");
        }
        BSSimpleList_Clear(&v100);
      }
    }
    sub_67F0B0(v110);
    sub_67F0F0(v107);
    sub_67F0D0(v108);
  }
}
