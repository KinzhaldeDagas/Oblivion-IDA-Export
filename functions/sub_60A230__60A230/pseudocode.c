char __thiscall sub_60A230(ArrowProjectile *this, TESObjectREFRVtbl *a2, float a3)
{
  float *v3; // eax
  bool v5; // zf
  bhkCharacterProxy *CharProxy; // esi
  TESObjectCELL *ParentCell; // eax
  ExtraDataList *v8; // ebx
  BSExtraDataVtbl *v9; // ebx
  TESObjectREFRVtbl *vtbl; // esi
  int v11; // eax
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // edx
  NiNode *v13; // eax
  MobileObjectVtbl *v14; // edx
  float *v15; // eax
  double v16; // st7
  double v17; // st6
  double v18; // st7
  TESObjectREFRVtbl *v19; // eax
  bhkRefObject *v20; // eax
  signed int vtbl_high; // eax
  FreeEntry *v22; // eax
  unsigned __int8 v23; // cl
  TESObjectREFRVtbl *v24; // eax
  bhkCharacterController *v25; // eax
  double v26; // st7
  _DWORD *v27; // ecx
  int v28; // eax
  int v29; // eax
  NiNode *v30; // eax
  _DWORD *v31; // ecx
  int v32; // eax
  _DWORD *v33; // ecx
  UInt32 v34; // ecx
  Data *v35; // edx
  float v37; // [esp+Ch] [ebp-10Ch]
  int v38; // [esp+10h] [ebp-108h] BYREF
  int v39; // [esp+14h] [ebp-104h]
  TESObjectREFR v40; // [esp+30h] [ebp-E8h] BYREF
  NiNode *v41; // [esp+B8h] [ebp-60h]
  int v42; // [esp+BCh] [ebp-5Ch]
  BSExtraDataVtbl *v43; // [esp+C0h] [ebp-58h]
  float v44; // [esp+C4h] [ebp-54h]
  float v45; // [esp+C8h] [ebp-50h]
  char v46; // [esp+CCh] [ebp-4Ch]
  int v47; // [esp+D0h] [ebp-48h]
  unsigned int v48; // [esp+114h] [ebp-4h]
  int savedregs; // [esp+118h] [ebp+0h] BYREF

  LOBYTE(v3) = (_BYTE)a2;
  v5 = this->super.process == 0;
  v40.vtbl = a2;
  if ( !v5 )
  {
    v3 = (float *)this->super.process->GetProcessLevel(this->super.process);
    if ( !v3 )
    {
      CharProxy = MobileObject_GetCharProxy(&this->super);
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
      v8 = (ExtraDataList *)ParentCell;
      v40.member.super.flags = (TESForm::FormFlags)ParentCell;
      if ( ParentCell )
      {
        if ( TESObjectCELL_IsInterior(ParentCell) )
        {
          v9 = sub_424180(v8 + 2);
          *(_DWORD *)&v40.member.super.type = v9;
LABEL_9:
          if ( !CharProxy )
          {
            sub_890C00((float *)&v40.member.childCell, 1);
            v48 = 0;
            v44 = 0.0;
            vtbl = v40.vtbl;
            if ( v40.vtbl )
            {
              v11 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int, int))v40.vtbl->super.super.InitializeComponent
                     + 0xA1))(
                      v40.vtbl,
                      7,
                      v39);
              InitializeComponent = v40.vtbl->super.super.InitializeComponent;
              v39 = v11;
              v40.vtbl = (TESObjectREFRVtbl *)(*((int (__thiscall **)(TESObjectREFRVtbl *))InitializeComponent + 0xA1))(v40.vtbl);
              v37 = (float)(int)v40.vtbl;
              v45 = sub_547700(a3, v37, 0x1C);
            }
            v13 = this->super.vtbl->super.GetNiNode(this);
            v14 = this->super.vtbl;
            v41 = v13;
            v15 = v14->super.GetPos((TESObjectREFR *)this);
            v16 = *v15;
            v17 = hkFactor;
            v38 = 0x14;
            *(float *)&v40.member.childCell.GetChildCell = v16 * v17;
            *(float *)&v40.member.baseForm = v15[1] * v17;
            v18 = v17 * v15[2];
            v43 = v9;
            v40.member.rot.x = v18;
            v19 = (TESObjectREFRVtbl *)FormHeapAlloc(0x14u);
            v40.vtbl = v19;
            LOBYTE(v48) = 1;
            if ( v19 )
              v20 = sub_532090((bhkRefObject *)v19, flt_A2FAAC, COERCE_FLOAT(1));
            else
              v20 = 0;
            LOBYTE(v48) = 0;
            sub_608AE0(&v40.member.childCell.GetChildCell, (int)v20);
            v46 = 0;
            if ( vtbl )
              vtbl_high = HIWORD(sub_65ABE0(vtbl, &v40)->vtbl);
            else
              vtbl_high = sub_607B60();
            v42 = (vtbl_high << 0x10) | 6;
            v47 = 6;
            v22 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x1000003F0uLL, v39);
            v23 = 0x10 - ((unsigned __int8)v22 & 0xF);
            v24 = (TESObjectREFRVtbl *)((char *)v22 + v23);
            HIBYTE(v24[0xFFFFFFFF].IsParalyzed) = v23;
            v40.vtbl = v24;
            LOBYTE(v48) = 2;
            v25 = sub_60D8B0((bhkCharacterController *)v24, (int)&v40.member.childCell, (int)this);
            CharProxy = v25;
            *((float *)v25 + 0xC9) = 1.0;
            LOBYTE(v48) = 0;
            if ( byte_B333B8 )
              *((_DWORD *)v25 + 0x7D) |= 0x100000u;
            else
              *((_DWORD *)v25 + 0x7D) &= ~0x100000u;
            *((_DWORD *)v25 + 0x7D) |= 0x80000u;
            v40.vtbl = (TESObjectREFRVtbl *)&v38;
            v38 = (int)v25;
            InterlockedIncrement((volatile LONG *)v25 + 1);
            this->super.process->Unk_63(this->super.process, (void *)v38);
            sub_8910F0(CharProxy, 0x3E8, (int)this);
            v48 = 0xFFFFFFFF;
            sub_890F70(&v40.member.childCell.GetChildCell);
            v9 = *(BSExtraDataVtbl **)&v40.member.super.type;
          }
          if ( v40.member.super.flags && v9 )
            v26 = TESObjectCELL_GetWaterHeight((ExtraDataList *)v40.member.super.flags) * hkFactor;
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
            v40.vtbl = *(TESObjectREFRVtbl **)(v29 + 0x2B0);
          else
            v40.vtbl = 0;
          sub_895060(CharProxy, (int *)v9);
          v30 = this->super.vtbl->super.GetNiNode(this);
          v31 = *((_DWORD **)CharProxy + 0xD9);
          *(_DWORD *)&v40.member.super.type = v30;
          if ( v31 )
            v32 = sub_89F6B0(v31, 0);
          else
            v32 = 0;
          if ( v32 != *(_DWORD *)&v40.member.super.type )
          {
            v33 = *((_DWORD **)CharProxy + 0xD9);
            if ( v33 )
              sub_89F650(v33, *(int *)&v40.member.super.type, 0);
            if ( v9 )
            {
              if ( BYTE2(v9[3].Destructor) )
                (*(void (__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)CharProxy + 0x88))(CharProxy, 0);
            }
            sub_88D070(*(NiNode **)&v40.member.super.type, 6, 1, 0);
          }
          v3 = this->super.vtbl->super.GetPos(this);
          v34 = *(_DWORD *)v3;
          v35 = *((Data **)v3 + 1);
          v40.member.super.modlist.next = (TESForm::ModReferenceList *)v3[2];
          LOBYTE(v3) = v40.vtbl;
          v40.member.super.refID = v34;
          v40.member.super.modlist.data = v35;
          if ( (BSExtraDataVtbl *)v40.vtbl != v9 )
          {
            if ( v40.vtbl )
              LOBYTE(v3) = sub_88CD50(*(_WORD **)&v40.member.super.type, 1, 0);
            *(float *)&v40.member.super.modlist.next = *(float *)&v40.member.super.modlist.next + dbl_A49310;
          }
          if ( v9 )
          {
            sub_452A10(CharProxy, (NiPoint3 *)&v40.member.super.refID);
            sub_57E270(CharProxy, &v40.member.super.flags);
            LOBYTE(v3) = (*((char (__thiscall **)(BSExtraDataVtbl *, _DWORD, int, _DWORD, unsigned int, _DWORD))v9->Destructor
                          + 0x24))(
                           v9,
                           *(_DWORD *)&v40.member.super.type,
                           1,
                           0,
                           (unsigned int)v40.member.super.flags >> 0x10,
                           0);
          }
          return (char)v3;
        }
        v9 = (BSExtraDataVtbl *)bhkWorldM;
      }
      else
      {
        v9 = 0;
      }
      *(_DWORD *)&v40.member.super.type = v9;
      goto LABEL_9;
    }
  }
  return (char)v3;
}
