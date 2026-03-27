void __thiscall sub_69D140(TESObjectREFR *this)
{
  bhkCharacterProxy *CharProxy; // edi
  TESObjectCELL *ParentCell; // eax
  ExtraDataList *v5; // ebx
  UInt32 (__thiscall *GetSaveSize)(TESForm *, UInt32); // eax
  NiNode *v7; // eax
  TESObjectREFRVtbl *vtbl; // edx
  float *v9; // eax
  double v10; // st6
  double v11; // st7
  double v12; // st7
  TESObjectREFRVtbl *v13; // eax
  bhkRefObject *v14; // eax
  int v15; // ecx
  MobileObject *v16; // edi
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // ecx
  NiNode *v20; // eax
  int v21; // eax
  FreeEntry *v22; // eax
  unsigned __int8 v23; // cl
  TESObjectREFRVtbl *v24; // eax
  bhkCharacterController *v25; // eax
  double v26; // st6
  _DWORD *v27; // ecx
  int v28; // eax
  int v29; // eax
  NiNode *v30; // eax
  _DWORD *v31; // ecx
  NiNode *v32; // ebx
  int v33; // eax
  _DWORD *v34; // ecx
  float *v35; // eax
  int v36; // ecx
  TESForm::FormFlags v37; // edx
  int *v38; // esi
  _DWORD v39[8]; // [esp+4h] [ebp-108h] BYREF
  int *v40; // [esp+24h] [ebp-E8h]
  TESObjectCELL *v41; // [esp+28h] [ebp-E4h] BYREF
  TESObjectREFR v42; // [esp+2Ch] [ebp-E0h] BYREF
  NiNode *v43; // [esp+ACh] [ebp-60h]
  int v44; // [esp+B0h] [ebp-5Ch]
  int *v45; // [esp+B4h] [ebp-58h]
  float v46; // [esp+B8h] [ebp-54h]
  float v47; // [esp+BCh] [ebp-50h]
  char v48; // [esp+C0h] [ebp-4Ch]
  int v49; // [esp+C4h] [ebp-48h]
  unsigned int v50; // [esp+108h] [ebp-4h]
  int savedregs; // [esp+10Ch] [ebp+0h] BYREF

  if ( *((_DWORD *)this + 0x16)
    && !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 8))(*((_DWORD *)this + 0x16)) )
  {
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
    ParentCell = TESObjectREFR_GetParentCell(this);
    v5 = (ExtraDataList *)ParentCell;
    v41 = ParentCell;
    if ( ParentCell )
    {
      if ( TESObjectCELL_IsInterior(ParentCell) )
        v40 = (int *)sub_424180(v5 + 2);
      else
        v40 = (int *)bhkWorldM;
    }
    else
    {
      v40 = 0;
    }
    if ( CharProxy )
      goto LABEL_29;
    sub_890C00((float *)&v42.member.super.modlist, 1);
    GetSaveSize = this->vtbl[1].super.GetSaveSize;
    v50 = 0;
    v46 = ((double (__thiscall *)(TESObjectREFR *))GetSaveSize)(this);
    v7 = this->vtbl->GetNiNode(this);
    vtbl = this->vtbl;
    v43 = v7;
    v9 = vtbl->GetPos(this);
    v10 = hkFactor;
    v11 = *v9 * v10;
    v39[0] = 0x14;
    *(float *)&v42.member.super.modlist.data = v11;
    *(float *)&v42.member.super.modlist.next = v9[1] * v10;
    v12 = v10 * v9[2];
    v45 = v40;
    *(float *)&v42.member.childCell.GetChildCell = v12;
    v47 = 0.0;
    v13 = (TESObjectREFRVtbl *)FormHeapAlloc(0x14u);
    v42.vtbl = v13;
    LOBYTE(v50) = 1;
    if ( v13 )
      v14 = sub_532090((bhkRefObject *)v13, 1.0, COERCE_FLOAT(1));
    else
      v14 = 0;
    LOBYTE(v50) = 0;
    sub_608AE0(&v42.member.super.modlist.data, (int)v14);
    v15 = *((_DWORD *)this + 0x1A);
    v16 = 0;
    v48 = 0;
    if ( v15 )
      v16 = (MobileObject *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x20))(v15);
    if ( sub_45A500(SaveLoad_CurrentSavegame) )
    {
      v44 = 7;
      goto LABEL_25;
    }
    if ( v16 )
    {
      if ( v16->vtbl->super.IsActor((TESObjectREFR *)v16) )
      {
        v44 = (HIWORD(sub_65ABE0(v16, &v42)->vtbl) << 0x10) | 7;
LABEL_25:
        v49 = 6;
        v22 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x1000003F0uLL, v39[1]);
        v23 = 0x10 - ((unsigned __int8)v22 & 0xF);
        v24 = (TESObjectREFRVtbl *)((char *)v22 + v23);
        HIBYTE(v24[0xFFFFFFFF].IsParalyzed) = v23;
        v42.vtbl = v24;
        LOBYTE(v50) = 2;
        v25 = sub_68F400((bhkCharacterController *)v24, (int)&v42.member.super.modlist, (int)this);
        CharProxy = v25;
        *((float *)v25 + 0xC9) = 1.0;
        LOBYTE(v50) = 0;
        if ( byte_B333B8 )
          *((_DWORD *)v25 + 0x7D) |= 0x100000u;
        else
          *((_DWORD *)v25 + 0x7D) &= ~0x100000u;
        *((_DWORD *)v25 + 0x7D) |= 0x80000u;
        v42.vtbl = (TESObjectREFRVtbl *)v39;
        v39[0] = v25;
        InterlockedIncrement((volatile LONG *)v25 + 1);
        (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x16) + 0x190))(*((_DWORD *)this + 0x16), v39[0]);
        sub_8910F0(CharProxy, 0x3E8, (int)this);
        v50 = 0xFFFFFFFF;
        sub_890F70(&v42.member.super.modlist.data);
        v5 = (ExtraDataList *)v41;
LABEL_29:
        if ( v5 && v40 )
          v26 = TESObjectCELL_GetWaterHeight(v5) * hkFactor;
        else
          v26 = flt_A6F374;
        v27 = *((_DWORD **)CharProxy + 2);
        *((float *)CharProxy + 0xC6) = v26;
        if ( v27 )
          v28 = sub_8AC0C0(v27);
        else
          v28 = 0;
        v29 = *(_DWORD *)(v28 + 8);
        if ( v29 )
          v41 = *(TESObjectCELL **)(v29 + 0x2B0);
        else
          v41 = 0;
        sub_895060(CharProxy, v40);
        v30 = this->vtbl->GetNiNode(this);
        v31 = *((_DWORD **)CharProxy + 0xD9);
        v32 = v30;
        if ( v31 )
          v33 = sub_89F6B0(v31, 0);
        else
          v33 = 0;
        if ( (NiNode *)v33 != v32 )
        {
          v34 = *((_DWORD **)CharProxy + 0xD9);
          if ( v34 )
            sub_89F650(v34, (int)v32, 0);
          if ( v40 )
          {
            if ( *((_BYTE *)v40 + 0x1A) )
            {
              (*(void (__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)CharProxy + 0x88))(CharProxy, 0);
              this->vtbl[1].super.DoPostFixup((TESForm *)this);
            }
          }
          sub_88EE20((int)v32);
          sub_88D070(v32, 6, 1, 0);
        }
        v35 = this->vtbl->GetPos(this);
        v36 = *(_DWORD *)v35;
        v37 = *((_DWORD *)v35 + 1);
        v38 = v40;
        v42.member.super.refID = (UInt32)v35[2];
        *(_DWORD *)&v42.member.super.type = v36;
        v42.member.super.flags = v37;
        if ( v41 != (TESObjectCELL *)v40 )
        {
          if ( v41 )
            sub_88CD50(v32, 1, 0);
          *(float *)&v42.member.super.refID = *(float *)&v42.member.super.refID + dbl_A49310;
        }
        if ( v38 )
        {
          sub_452A10(CharProxy, (NiPoint3 *)&v42.member);
          sub_57E270(CharProxy, &v41);
          (*(void (__thiscall **)(int *, NiNode *, int, _DWORD, unsigned int, _DWORD))(*v38 + 0x90))(
            v38,
            v32,
            1,
            0,
            (unsigned int)v41 >> 0x10,
            0);
        }
        return;
      }
      v17 = (int)v16->vtbl->super.GetNiNode((TESObjectREFR *)v16);
      v18 = sub_480340(v17);
      if ( v18 )
      {
        v19 = *(_DWORD **)(v18 + 0x10);
        if ( v19 )
        {
LABEL_20:
          v44 = (*((unsigned __int16 *)sub_497340(v19, &v42) + 1) << 0x10) | 7;
          goto LABEL_25;
        }
      }
    }
    else
    {
      v20 = this->vtbl->GetNiNode(this);
      v21 = sub_480340((int)v20);
      if ( v21 )
      {
        v19 = *(_DWORD **)(v21 + 0x10);
        if ( v19 )
          goto LABEL_20;
      }
    }
    v44 = (sub_531D80() << 0x10) | 7;
    goto LABEL_25;
  }
}
