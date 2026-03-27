void __thiscall sub_60BAC0(Actor *this, int a2, void (__thiscall **a3)(MagicCaster *this, MagicCaster *this))
{
  MagicCasterVtbl *v4; // eax
  AVNode *next; // ecx
  AVEntry *magicka; // edx
  double v7; // st7
  double v8; // st6
  double v9; // rt0
  double v10; // st6
  MagicCasterVtbl *vtbl; // eax
  void (__thiscall *v12)(MagicCaster *, MagicCaster *); // edx
  double v13; // st7
  void (__thiscall **p_AddDisease)(MagicCaster *, MagicItemForm *, MagicTarget *, bool); // eax
  float y; // ecx
  double v16; // st7
  double v17; // st7
  float *p_IsMagicItemUsable; // eax
  bhkCharacterProxy *CharProxy; // eax
  char *v20; // eax
  float *v21; // eax
  __m128 v22; // xmm0
  double v23; // st6
  ActorVtbl *v24; // edx
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // eax
  int v26; // eax
  NiTransform *v27; // eax
  bool (__thiscall **v28)(MagicCaster *, MagicItem *, float *, UInt32 *, bool); // ecx
  int v29; // edi
  float *v30; // eax
  double v31; // st5
  double v32; // st6
  double v33; // st7
  UInt32 v34; // ecx
  int v35; // eax
  UInt32 v36; // ecx
  Actor *unk07C; // eax
  TESForm *v38; // eax
  UInt32 v39; // edx
  TESForm *v40; // eax
  UInt32 v41; // edx
  TESForm *v42; // eax
  float v43; // [esp+30h] [ebp-38h]
  float v44; // [esp+30h] [ebp-38h]
  NiPoint3 v45; // [esp+34h] [ebp-34h] BYREF
  float v46; // [esp+44h] [ebp-24h]
  __m128 v47; // [esp+48h] [ebp-20h] BYREF

  v4 = (MagicCasterVtbl *)FormHeapAlloc(0x54u);
  next = this->members.avModifiers.avList.next;
  magicka = this->members.avModifiers.magicka;
  this->members.magicCaster.vtbl = v4;
  v47.m128_i32[0] = (__int32)this->members.avModifiers.avList.entry;
  *(unsigned __int64 *)((char *)v47.m128_u64 + 4) = __PAIR64__((unsigned int)magicka, (unsigned int)next);
  sub_4BFAA0(v47.m128_f32);
  v7 = v47.m128_f32[0];
  v8 = dbl_A2F920;
  this->members.magicCaster.vtbl->AddAbility = (void (__thiscall *)(MagicCaster *, MagicItemForm *, bool))2;
  v9 = v8;
  this->members.magicCaster.vtbl->GetSpellEffectiveness = 0;
  v47.m128_f32[0] = v7 * v8;
  v10 = v47.m128_f32[1];
  this->members.magicCaster.vtbl->AddEffectToSelf = 0;
  vtbl = this->members.magicCaster.vtbl;
  v12 = *a3;
  v47.m128_f32[1] = v10 * v9;
  vtbl->PlayTargettedCastAnim = v12;
  v13 = v9 * v47.m128_f32[2];
  vtbl->PlayCastingAnim = a3[1];
  vtbl->ApplyMagicItemCost = (void (__thiscall *)(MagicCaster *, MagicItem *, bool))a3[2];
  v47.m128_f32[2] = v13;
  p_AddDisease = &this->members.magicCaster.vtbl->AddDisease;
  v45.x = *(float *)a2 + v47.m128_f32[0];
  v45.y = *(float *)(a2 + 4) + v47.m128_f32[1];
  y = v45.y;
  v16 = *(float *)(a2 + 8);
  *p_AddDisease = (void (__thiscall *)(MagicCaster *, MagicItemForm *, MagicTarget *, bool))LODWORD(v45.x);
  v17 = v16 + v47.m128_f32[2];
  *((float *)p_AddDisease + 1) = y;
  v45.z = v17;
  p_AddDisease[2] = (void (__thiscall *)(MagicCaster *, MagicItemForm *, MagicTarget *, bool))LODWORD(v45.z);
  qmemcpy(&this->members.magicCaster.vtbl->GetActiveMagicItem, &stru_B26AF0[0xA].unk2C, 0x24u);
  p_IsMagicItemUsable = (float *)&this->members.magicCaster.vtbl->IsMagicItemUsable;
  *p_IsMagicItemUsable = Vector3_InitValue_;
  p_IsMagicItemUsable[1] = *(&Vector3_InitValue_ + 1);
  p_IsMagicItemUsable[2] = dword_B3F9B0;
  if ( MobileObject_GetCharProxy((MobileObject *)this) )
  {
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
    if ( CharProxy && (v20 = *((char **)CharProxy + 2)) != 0 )
      v21 = (float *)sub_8AC0A0(v20);
    else
      v21 = (float *)&stru_BA7A40;
    v22 = *(__m128 *)v21;
    v45.x = *v21;
    v23 = flt_A7DEB4;
    v47 = v22;
    if ( -v23 == v45.x )
    {
      if ( this->vtbl->super.super.GetNiNode(this) )
      {
        v24 = this->vtbl;
        v46 = *(float *)&this->members.magicTarget.unk04;
        GetNiNode = v24->super.super.GetNiNode;
        v45.x = *(float *)&dword_B258DC * v46;
        v45.y = *(float *)&qword_B258E0 * v46;
        v45.z = v46 * *((float *)&qword_B258E0 + 1);
        v26 = (int)GetNiNode((TESObjectREFR *)this);
        v27 = sub_7101F0((NiTransform *)(v26 + 0x64), (NiTransform *)&v47, &v45);
        v28 = &this->members.magicCaster.vtbl->IsMagicItemUsable;
        *v28 = (bool (__thiscall *)(MagicCaster *, MagicItem *, float *, UInt32 *, bool))LODWORD(v27->rot.data[0][0]);
        v28[1] = (bool (__thiscall *)(MagicCaster *, MagicItem *, float *, UInt32 *, bool))LODWORD(v27->rot.data[0][1]);
        v28[2] = (bool (__thiscall *)(MagicCaster *, MagicItem *, float *, UInt32 *, bool))LODWORD(v27->rot.data[0][2]);
      }
    }
    else
    {
      sub_43F3E0((float *)&this->members.magicCaster.vtbl->IsMagicItemUsable, &v47);
    }
  }
  v29 = sub_440AC0(TES, (float *)a2);
  switch ( v29 )
  {
    case 0:
    case 3:
    case 5:
    case 0xA:
    case 0xB:
    case 0xD:
    case 0xF:
    case 0x12:
    case 0x14:
    case 0x19:
    case 0x1A:
    case 0x1C:
    case 0x1E:
      sub_608DA0((MobileObject *)this, a2, (int)a3);
      break;
    default:
      break;
  }
  v30 = (float *)this->members.magicCaster.vtbl;
  this->members.magicCaster.magicNode = (NiNode *)1;
  v31 = v30[7] * v30[7];
  v32 = v30[9] * v30[9];
  v43 = v30[8] * v30[8] + v31 + v32;
  v44 = sqrt(v43);
  v33 = v44;
  sub_609D50(this, v31, v44, v44, *(_DWORD *)a2, *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), 0, v29);
  v34 = this->members.unk070[2];
  if ( v34 )
  {
    if ( (*(int (__thiscall **)(UInt32))(*(_DWORD *)v34 + 0x330))(v34) )
    {
      v35 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)this->members.unk070[2] + 0x330))(this->members.unk070[2]);
      sub_618120(v35, v29, a2, 0.0);
    }
  }
  v36 = this->members.unk070[2];
  if ( v36 )
  {
    unk07C = this->members.unk07C;
    if ( unk07C )
    {
      (*(void (__thiscall **)(UInt32, TESChildCELLVtbl *))(*(_DWORD *)(v36 + 0x5C) + 0x34))(
        v36 + 0x5C,
        &unk07C->members.super.super.childCell);
      (*(void (__thiscall **)(UInt32, _DWORD))(*(_DWORD *)(this->members.unk070[2] + 0x5C) + 0x3C))(
        this->members.unk070[2] + 0x5C,
        0);
      v38 = this->vtbl->super.super.GetBaseForm(this);
      MagicCaster_UseActiveMagicItem((_DWORD *)(this->members.unk070[2] + 0x5C), v31, v33, v32, (int)v38);
    }
    v39 = this->members.unk080[1];
    if ( v39 )
    {
      (*(void (__thiscall **)(UInt32, UInt32))(*(_DWORD *)(this->members.unk070[2] + 0x5C) + 0x34))(
        this->members.unk070[2] + 0x5C,
        v39 + 0x24);
      (*(void (__thiscall **)(UInt32, _DWORD))(*(_DWORD *)(this->members.unk070[2] + 0x5C) + 0x3C))(
        this->members.unk070[2] + 0x5C,
        0);
      v40 = this->vtbl->super.super.GetBaseForm(this);
      MagicCaster_UseActiveMagicItem((_DWORD *)(this->members.unk070[2] + 0x5C), v31, v33, v32, (int)v40);
    }
    v41 = this->members.unk080[0];
    if ( v41 )
    {
      (*(void (__thiscall **)(UInt32, UInt32))(*(_DWORD *)(this->members.unk070[2] + 0x5C) + 0x34))(
        this->members.unk070[2] + 0x5C,
        v41 + 0x18);
      (*(void (__thiscall **)(UInt32, _DWORD))(*(_DWORD *)(this->members.unk070[2] + 0x5C) + 0x3C))(
        this->members.unk070[2] + 0x5C,
        0);
      v42 = this->vtbl->super.super.GetBaseForm(this);
      MagicCaster_UseActiveMagicItem((_DWORD *)(this->members.unk070[2] + 0x5C), v31, v33, v32, (int)v42);
    }
  }
  if ( this->members.unk07C )
    this->members.magicCaster.magicNode = (NiNode *)3;
}
