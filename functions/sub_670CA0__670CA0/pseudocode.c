void __userpurge sub_670CA0(
        int *a1@<ecx>,
        double a2@<st0>,
        double st4_0@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st7>,
        double a7@<st4>,
        char a8@<bpl>,
        double a9@<st6>,
        double a10@<st5>,
        float a11)
{
  float *ContainerChanges; // ebx
  double v13; // st7
  signed int v14; // eax
  int v15; // edi
  int v16; // ebp
  bool v17; // zf
  int v18; // edi
  TESObjectCELL *ParentCell; // ebx
  TESWorldSpace *WorldSpace; // ebx
  ExtraTeleport *TeleportExtraData; // eax
  BSExtraDataVtbl *v24; // eax
  TESObjectREFR **v25; // eax
  TESObjectREFR **v26; // esi
  TESObjectCELL *v29; // eax
  int *v30; // edi
  int v31; // eax
  float v32; // [esp+0h] [ebp-20h]
  TESWorldSpace *v33; // [esp+14h] [ebp-Ch]
  int ArgList; // [esp+1Ch] [ebp-4h]
  int v40; // [esp+24h] [ebp+4h]
  int v41; // [esp+24h] [ebp+4h]
  int v42; // [esp+24h] [ebp+4h]
  int v43; // [esp+24h] [ebp+4h]

  if ( !LOBYTE(a11) )
  {
    ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x11));
    v13 = ((double (__thiscall *)(int *))*(_DWORD *)(*a1 + 0x250))(a1);
    v14 = Double_To_SInt32(v13);
    sub_491700(ContainerChanges, a4, a5, v13, (TESObjectREFR *)a1, v14, 0);
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 0x354))(a1) )
      sub_4246F0((ExtraDataList *)(a1 + 0x11));
    v15 = *a1;
    (*(void (__thiscall **)(int *))(*a1 + 0x250))(a1);
    __asm { fmul    qword ptr ds:0A3D360h }
    __asm { fstp    [esp+20h+arg_0] }
    __asm
    {
      fld     [esp+20h+arg_0]
      fstp    [esp+20h+var_20]
    }
    (*(void (__thiscall **)(int *, _DWORD))(v15 + 0x254))(a1, LODWORD(v32));
    sub_675D50((TESObjectREFR *)a1, 0);
    *((_BYTE *)a1 + 0x12C) = 1;
    sub_65FDA0(a1);
    if ( ObjectRef )
    {
      sub_4919E0((int ***)ContainerChanges, a4, v13, a5, (TESObjectREFR *)a1, (TESForm *)ObjectRef, 0);
      sub_57A3B0(a4, a5, 0);
    }
    sub_675E90(&ActorProcessManager_ptr, (int)a1);
    return;
  }
  v16 = 0;
  v17 = FormID == 0;
  *((_BYTE *)a1 + 0x12C) = 0;
  if ( !v17 )
  {
    if ( dword_B35B90 )
      sub_4BE5A0((_DWORD *)dword_B35B90);
    if ( dword_B35B8C )
      sub_4BD980((_DWORD *)dword_B35B8C);
    v33 = 0;
    v18 = 0;
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)FormID);
    if ( ParentCell )
      goto LABEL_28;
    WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)FormID);
    v33 = WorldSpace;
    if ( WorldSpace )
    {
      _EAX = (*((int (__thiscall **)(TESChildCELL *))FormID->vtbl + 0x5D))(FormID);
      __asm
      {
        fld     dword ptr [eax]
        fstp    [esp+1Ch+var_8]
        fld     [esp+1Ch+var_8]
        fistp   [esp+1Ch+arg_0]
      }
      v18 = v40 >> 0xC;
      _EAX = (*((int (__thiscall **)(TESChildCELL *))FormID->vtbl + 0x5D))(FormID);
      __asm
      {
        fld     dword ptr [eax+4]
        fstp    [esp+1Ch+var_8]
        fld     [esp+1Ch+var_8]
        fistp   [esp+1Ch+arg_0]
      }
      v16 = v41 >> 0xC;
      ParentCell = (TESObjectCELL *)sub_4F1630(WorldSpace, a4, a5, a2, v18, v41 >> 0xC);
      if ( ParentCell )
      {
LABEL_28:
        if ( (*(int (__thiscall **)(int *))(*a1 + 0x380))(a1) || (*(int (__thiscall **)(int *))(*a1 + 0x388))(a1) )
          sub_5F0410((TESObjectREFR *)a1, v16);
        sub_5E4140((TESObjectREFR *)a1);
        TeleportExtraData = GetTeleportExtraData(FormID);
        v24 = sub_42B410(&TeleportExtraData->super);
        v25 = (TESObjectREFR **)GetTeleportExtraData(v24);
        v26 = v25;
        if ( v25 )
        {
          if ( sub_42B460(v25) )
          {
            v29 = sub_42B460(v26);
          }
          else
          {
            _EAX = sub_6899C0((char *)v26);
            __asm
            {
              fld     dword ptr [eax]
              fstp    [esp+1Ch+var_8]
              fld     [esp+1Ch+var_8]
              fistp   [esp+1Ch+arg_0]
            }
            ArgList = v42 >> 0xC;
            _EAX = sub_6899C0((char *)v26);
            __asm
            {
              fld     dword ptr [eax+4]
              fstp    [esp+1Ch+var_8]
              fld     [esp+1Ch+var_8]
              fistp   [esp+1Ch+arg_0]
            }
            if ( ArgList == v18 && v16 == v43 >> 0xC )
              goto LABEL_25;
            v29 = (TESObjectCELL *)sub_4F1630(v33, a4, a5, a2, ArgList, v43 >> 0xC);
          }
          ParentCell = v29;
LABEL_25:
          v30 = (int *)sub_42B430((char *)v26);
          v31 = sub_6899C0((char *)v26);
          sub_66EAF0(
            (TESObjectREFR *)TESDataHandler_g_PlayerRef,
            a2,
            st4_0,
            a4,
            a5,
            a6,
            a7,
            a9,
            a10,
            *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))v31,
            *(NiAVObject *(__thiscall **)(NiAVObject *, const char *))(v31 + 4),
            *(void *(__thiscall **)(NiAVObject *))(v31 + 8),
            *v30,
            v30[1],
            v30[2],
            ParentCell,
            1);
          sub_6765F0((int)ParentCell, (int)v30, a4, a5, a2, (int)FormID, 0, 0);
        }
      }
    }
  }
}
