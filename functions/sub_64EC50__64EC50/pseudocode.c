char __userpurge sub_64EC50@<al>(
        TESObjectREFR **this@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        Actor *a4,
        int a5,
        char a6)
{
  int v8; // eax
  int v9; // eax
  TESPackage *v10; // ebx
  char *y_low; // ecx
  char v12; // al
  int v13; // ecx
  double v15; // st7
  TESObjectREFR *v16; // eax
  int v17; // ebx
  TESObjectREFR *v18; // ebp
  TESObjectCELL *ParentCell; // eax
  int v20; // eax
  TESWorldSpace *WorldSpace; // [esp+4h] [ebp-1Ch]
  float v22; // [esp+8h] [ebp-18h]
  float v23; // [esp+Ch] [ebp-14h]
  TESPackage *v24; // [esp+24h] [ebp+4h]
  int v25; // [esp+2Ch] [ebp+Ch]

  if ( !*(this + 0xB) )
    ((void (__thiscall *)(TESObjectREFR **, Actor *))LODWORD((*this)[0xF].member.pos[1]))(this, a4);
  v8 = (int)*(this + 0xB);
  if ( !v8 || (*(_DWORD *)(v8 + 8) & 0x20) != 0 )
  {
    if ( !a6 )
      return 0;
    ((void (__thiscall *)(TESObjectREFR **, Actor *, int))LODWORD((*this)[4].member.rot.z))(this, a4, 1);
    return 0;
  }
  else
  {
    v9 = ((int (__thiscall *)(TESObjectREFR **))LODWORD((*this)[4].member.rot.y))(this);
    v10 = (TESPackage *)v9;
    v24 = (TESPackage *)v9;
    if ( v9 && (*(_BYTE *)(v9 + 0x1E) & 1) != 0 )
    {
      if ( sub_663A60((int)a4) || sub_663A00() >= dword_B36A80 )
        return 0;
      sub_5668E0(v10, 0);
    }
    if ( !a4->vtbl->IsInCombat(a4, 1) )
    {
      if ( !*(this + 0xB)
        || (y_low = (char *)LODWORD((*(this + 2))->member.rot.y)) != 0
        && sub_569740(y_low) < 2
        && (a3 = sub_566DC0((TESPackage *)*(this + 2), flt_A30634, a2, a4, 0, flt_A30634), v12) )
      {
        if ( a6 )
          ((void (__thiscall *)(TESObjectREFR **, Actor *, int))LODWORD((*this)[4].member.rot.z))(this, a4, 1);
        if ( sub_5660A0((TESPackage *)*(this + 2)) )
        {
          v13 = (int)*(this + 2);
          if ( v13 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 0x10))(v13, 1);
          *(this + 2) = 0;
          a4->vtbl->super.super.super.ClearModified((TESForm *)a4, 0x30000);
          ((void (__thiscall *)(TESObjectREFR **, Actor *, _DWORD))(*this)->member.childCell.GetChildCell)(this, a4, 0);
          return 0;
        }
      }
    }
    v15 = sub_5677B0(v10, a3, (TESObjectREFR *)a4, 2);
    v25 = Double_To_SInt32(v15);
    v16 = *(this + 0xB);
    if ( !v16 || (double)v25 >= TesObjectREF_GetDistance((TESObjectREFR *)a4, v16, 0) )
      return 0;
    v17 = (int)*(this + 0xB);
    v18 = *this;
    v23 = flt_A30634;
    v22 = sub_5677B0(v24, v23, (TESObjectREFR *)a4, 1);
    WorldSpace = TESObjectREFR_GetWorldSpace(*(this + 0xB));
    ParentCell = TESObjectREFR_GetParentCell(*(this + 0xB));
    v20 = (*(int (__thiscall **)(int, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(*(_DWORD *)v17 + 0x174))(
            v17,
            ParentCell,
            WorldSpace,
            LODWORD(v22),
            LODWORD(v23));
    (*(void (__thiscall **)(TESObjectREFR **, Actor *, int))&v18[0xB].member.baseExtraList.members.m_presenceBitfield[4])(
      this,
      a4,
      v20);
    return 0;
  }
}
