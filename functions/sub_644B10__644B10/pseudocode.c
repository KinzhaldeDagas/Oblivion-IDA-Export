void __userpurge sub_644B10(void *this@<ecx>, double st6_0@<st1>, TESChildCELL *a2, int a3, int a4, int a5)
{
  int v7; // eax
  TESPackage *v9; // ecx
  char v10; // al
  int v11; // ecx
  TESForm *v12; // ebx
  double v13; // st7
  TESObjectREFR *v14; // eax
  TESObjectREFR *v15; // ebx
  int v16; // ebp
  TESObjectCELL *ParentCell; // eax
  int v18; // eax
  TESWorldSpace *WorldSpace; // [esp+0h] [ebp-28h]
  float v20; // [esp+8h] [ebp-20h]
  float v21; // [esp+1Ch] [ebp-Ch]
  float v22; // [esp+20h] [ebp-8h]
  float GameHour; // [esp+2Ch] [ebp+4h]
  float v24; // [esp+2Ch] [ebp+4h]
  float v25; // [esp+2Ch] [ebp+4h]

  v7 = *((_DWORD *)this + 2);
  if ( !v7 || (*(_BYTE *)(v7 + 0x1E) & 1) == 0 )
    goto LABEL_6;
  if ( !sub_663A60((int)a2) && sub_663A00() < dword_B36A80 )
  {
    sub_5668E0(*((_DWORD **)this + 2), 0);
LABEL_6:
    if ( (!*((_DWORD *)this + 0xB)
       && ((*(void (__thiscall **)(void *, TESChildCELL *))(*(_DWORD *)this + 0x558))(this, a2), !*((_DWORD *)this + 0xB))
       || (v9 = *((TESPackage **)this + 2), v9->members.location)
       && (sub_566DC0(v9, flt_A30634, st6_0, (Actor *)a2, 0, flt_A30634), v10)
       && *(_BYTE *)(*((_DWORD *)this + 2) + 0x20) == 1)
      && ((*(void (__thiscall **)(void *, TESChildCELL *, int))(*(_DWORD *)this + 0x188))(this, a2, 1),
          sub_5660A0(*((TESPackage **)this + 2))) )
    {
      v11 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 2) = 0;
      if ( v11 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x10))(v11, 1);
      (*(void (__thiscall **)(void *, TESChildCELL *, _DWORD))(*(_DWORD *)this + 0x18))(this, a2, 0);
    }
    else
    {
      v12 = TESForm_LookupByFormID(0x3Au);
      GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
      if ( sub_6599B0(a2) > GameHour )
        GameHour = GameHour + dbl_A2F920;
      v22 = GameHour - sub_6599B0(a2);
      v21 = *(float *)&v12[1].member.refID;
      v13 = sub_5677B0((TESPackage *)*((_DWORD *)this + 2), v21, (TESObjectREFR *)a2, 2);
      v14 = *((TESObjectREFR **)this + 0xB);
      v24 = v13;
      if ( v14 )
      {
        if ( v24 < TesObjectREF_GetDistance((TESObjectREFR *)a2, v14, 0) )
        {
          v20 = v24;
          v15 = *((TESObjectREFR **)this + 0xB);
          v16 = *(_DWORD *)this;
          v25 = dbl_A2F938 / v21 * v22;
          WorldSpace = TESObjectREFR_GetWorldSpace(v15);
          ParentCell = TESObjectREFR_GetParentCell(*((TESObjectREFR **)this + 0xB));
          v18 = ((int (__thiscall *)(TESObjectREFR *, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))v15->vtbl->GetPos)(
                  v15,
                  ParentCell,
                  WorldSpace,
                  LODWORD(v25),
                  LODWORD(v20));
          (*(void (__thiscall **)(void *, TESChildCELL *, int))(v16 + 0x418))(this, a2, v18);
        }
      }
    }
  }
}
