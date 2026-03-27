void __thiscall sub_698410(TESObjectREFR *this)
{
  bhkCharacterProxy *CharProxy; // esi
  TESObjectCELL *ParentCell; // eax
  ExtraDataList *v4; // ebx
  TESObjectREFRVtbl *vtbl; // edx
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // eax
  int v7; // eax
  TESObjectREFRVtbl *v8; // edx
  float *v9; // eax
  double v10; // st6
  double v11; // st7
  double v12; // st7
  TESObjectREFRVtbl *v13; // eax
  bhkRefObject *v14; // eax
  TESSaveLoad *v15; // ecx
  int v16; // ecx
  int v17; // eax
  MobileObject *v18; // esi
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // ecx
  NiNode *v22; // eax
  int v23; // eax
  FreeEntry *v24; // eax
  unsigned __int8 v25; // cl
  TESObjectREFRVtbl *v26; // eax
  bhkCharacterController *v27; // eax
  double v28; // st7
  _DWORD *v29; // ecx
  int v30; // eax
  int v31; // eax
  NiNode *v32; // eax
  _DWORD *v33; // ecx
  NiNode *v34; // ebx
  int v35; // eax
  _DWORD *v36; // ecx
  float *v37; // eax
  int v38; // ecx
  TESForm::FormFlags v39; // edx
  int *v40; // edi
  _DWORD v41[8]; // [esp+4h] [ebp-108h] BYREF
  int *v42; // [esp+24h] [ebp-E8h]
  TESObjectCELL *v43; // [esp+28h] [ebp-E4h] BYREF
  TESObjectREFR v44; // [esp+2Ch] [ebp-E0h] BYREF
  int v45; // [esp+ACh] [ebp-60h]
  int v46; // [esp+B0h] [ebp-5Ch]
  int *v47; // [esp+B4h] [ebp-58h]
  float v48; // [esp+B8h] [ebp-54h]
  float v49; // [esp+BCh] [ebp-50h]
  char v50; // [esp+C0h] [ebp-4Ch]
  int v51; // [esp+C4h] [ebp-48h]
  unsigned int v52; // [esp+108h] [ebp-4h]
  int savedregs; // [esp+10Ch] [ebp+0h] BYREF

  if ( *((_DWORD *)this + 0x16)
    && !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 8))(*((_DWORD *)this + 0x16)) )
  {
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
    ParentCell = TESObjectREFR_GetParentCell(this);
    v4 = (ExtraDataList *)ParentCell;
    v43 = ParentCell;
    if ( ParentCell )
    {
      if ( TESObjectCELL_IsInterior(ParentCell) )
        v42 = (int *)sub_424180(v4 + 2);
      else
        v42 = (int *)bhkWorldM;
    }
    else
    {
      v42 = 0;
    }
    if ( CharProxy )
      goto LABEL_28;
    sub_890C00((float *)&v44.member.super.modlist, 1);
    vtbl = this->vtbl;
    v48 = 1.0;
    GetNiNode = vtbl->GetNiNode;
    v52 = 0;
    v7 = (int)GetNiNode(this);
    v8 = this->vtbl;
    v45 = v7;
    v9 = v8->GetPos(this);
    v10 = hkFactor;
    v11 = *v9 * v10;
    v41[0] = 0x14;
    *(float *)&v44.member.super.modlist.data = v11;
    *(float *)&v44.member.super.modlist.next = v9[1] * v10;
    v12 = v10 * v9[2];
    v47 = v42;
    *(float *)&v44.member.childCell.GetChildCell = v12;
    v49 = 0.0;
    v13 = (TESObjectREFRVtbl *)FormHeapAlloc(0x14u);
    v44.vtbl = v13;
    LOBYTE(v52) = 1;
    if ( v13 )
      v14 = sub_532090((bhkRefObject *)v13, 1.0, COERCE_FLOAT(1));
    else
      v14 = 0;
    LOBYTE(v52) = 0;
    sub_608AE0(&v44.member.super.modlist.data, (int)v14);
    v15 = SaveLoad_CurrentSavegame;
    v50 = 0;
    if ( sub_45A500(v15) )
    {
      v46 = 7;
      goto LABEL_24;
    }
    v16 = *((_DWORD *)this + 0x1A);
    if ( v16 && (v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x20))(v16), (v18 = (MobileObject *)v17) != 0) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x190))(v17) )
      {
        v46 = (HIWORD(sub_65ABE0(v18, &v44)->vtbl) << 0x10) | 7;
LABEL_24:
        v51 = 6;
        v24 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x1000003F0uLL, v41[1]);
        v25 = 0x10 - ((unsigned __int8)v24 & 0xF);
        v26 = (TESObjectREFRVtbl *)((char *)v24 + v25);
        HIBYTE(v26[0xFFFFFFFF].IsParalyzed) = v25;
        v44.vtbl = v26;
        LOBYTE(v52) = 2;
        v27 = sub_68F400((bhkCharacterController *)v26, (int)&v44.member.super.modlist, (int)this);
        CharProxy = v27;
        *((float *)v27 + 0xC9) = 1.0;
        LOBYTE(v52) = 0;
        *((_DWORD *)v27 + 0x7D) |= 0x80000u;
        if ( byte_B333B8 )
          *((_DWORD *)v27 + 0x7D) |= 0x100000u;
        else
          *((_DWORD *)v27 + 0x7D) &= ~0x100000u;
        v44.vtbl = (TESObjectREFRVtbl *)v41;
        v41[0] = v27;
        InterlockedIncrement((volatile LONG *)v27 + 1);
        (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x16) + 0x190))(*((_DWORD *)this + 0x16), v41[0]);
        sub_8910F0(CharProxy, 0x3E8, (int)this);
        v52 = 0xFFFFFFFF;
        sub_890F70(&v44.member.super.modlist.data);
        v4 = (ExtraDataList *)v43;
LABEL_28:
        if ( v4 && v42 )
          v28 = TESObjectCELL_GetWaterHeight(v4) * hkFactor;
        else
          v28 = flt_A6F374;
        v29 = *((_DWORD **)CharProxy + 2);
        *((float *)CharProxy + 0xC6) = v28;
        if ( v29 )
          v30 = sub_8AC0C0(v29);
        else
          v30 = 0;
        v31 = *(_DWORD *)(v30 + 8);
        if ( v31 )
          v43 = *(TESObjectCELL **)(v31 + 0x2B0);
        else
          v43 = 0;
        sub_895060(CharProxy, v42);
        v32 = this->vtbl->GetNiNode(this);
        v33 = *((_DWORD **)CharProxy + 0xD9);
        v34 = v32;
        if ( v33 )
          v35 = sub_89F6B0(v33, 0);
        else
          v35 = 0;
        if ( (NiNode *)v35 != v34 )
        {
          v36 = *((_DWORD **)CharProxy + 0xD9);
          if ( v36 )
            sub_89F650(v36, (int)v34, 0);
          if ( v42 )
          {
            if ( *((_BYTE *)v42 + 0x1A) )
              (*(void (__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)CharProxy + 0x88))(CharProxy, 0);
          }
          sub_88EE20((int)v34);
          sub_88D070(v34, 6, 1, 0);
        }
        v37 = this->vtbl->GetPos(this);
        v38 = *(_DWORD *)v37;
        v39 = *((_DWORD *)v37 + 1);
        v40 = v42;
        v44.member.super.refID = (UInt32)v37[2];
        *(_DWORD *)&v44.member.super.type = v38;
        v44.member.super.flags = v39;
        if ( v43 != (TESObjectCELL *)v42 )
        {
          if ( v43 )
            sub_88CD50(v34, 1, 0);
          *(float *)&v44.member.super.refID = *(float *)&v44.member.super.refID + dbl_A49310;
        }
        if ( v40 )
        {
          sub_452A10(CharProxy, (NiPoint3 *)&v44.member);
          sub_57E270(CharProxy, &v43);
          (*(void (__thiscall **)(int *, NiNode *, int, _DWORD, unsigned int, _DWORD))(*v40 + 0x90))(
            v40,
            v34,
            1,
            0,
            (unsigned int)v43 >> 0x10,
            0);
        }
        return;
      }
      v19 = (int)v18->vtbl->super.GetNiNode((TESObjectREFR *)v18);
      v20 = sub_480340(v19);
      if ( v20 )
      {
        v21 = *(_DWORD **)(v20 + 0x10);
        if ( v21 )
        {
LABEL_19:
          v46 = (*((unsigned __int16 *)sub_497340(v21, &v44) + 1) << 0x10) | 7;
          goto LABEL_24;
        }
      }
    }
    else
    {
      v22 = this->vtbl->GetNiNode(this);
      v23 = sub_480340((int)v22);
      if ( v23 )
      {
        v21 = *(_DWORD **)(v23 + 0x10);
        if ( v21 )
          goto LABEL_19;
      }
    }
    v46 = (sub_531D80() << 0x10) | 7;
    goto LABEL_24;
  }
}
