// Ensures a high-process ArrowProjectile owns a sphere-based bhk character proxy. Builds projectile collision layer 6 independently of the visible NIF, derives gravity/collision metadata from shooter and attack strength, attaches the projectile NiNode, and initializes water-height/filter state.
void __thiscall ArrowProjectile_EnsureCharacterProxy(ArrowProjectile *this, Actor *shooter, float attackStrength)
{
  bool v4; // zf
  bhkCharacterProxy *CharProxy; // esi
  TESObjectCELL *DwordAtOffset40; // eax
  ExtraDataList *v7; // ebx
  BSExtraDataVtbl *v8; // ebx
  MobileObject *vtbl; // esi
  int v10; // eax
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // edx
  NiNode *v12; // eax
  MobileObjectVtbl *v13; // edx
  float *v14; // eax
  double v15; // st7
  double v16; // st6
  double v17; // st7
  TESObjectREFRVtbl *v18; // eax
  bhkRefObject *v19; // eax
  signed int vtbl_high; // eax
  FreeEntry *v21; // eax
  unsigned __int8 v22; // cl
  TESObjectREFRVtbl *v23; // eax
  bhkCharacterController *v24; // eax
  double v25; // st7
  _DWORD *v26; // ecx
  int HavokObject; // eax
  int v28; // eax
  NiNode *v29; // eax
  int **v30; // ecx
  NiObject *v31; // eax
  _DWORD *v32; // ecx
  float *v33; // eax
  UInt32 v34; // ecx
  Data *v35; // edx
  float v36; // [esp+Ch] [ebp-10Ch]
  int v37; // [esp+10h] [ebp-108h] BYREF
  int v38; // [esp+14h] [ebp-104h]
  TESObjectREFR v39; // [esp+30h] [ebp-E8h] BYREF
  NiNode *v40; // [esp+B8h] [ebp-60h]
  int v41; // [esp+BCh] [ebp-5Ch]
  BSExtraDataVtbl *v42; // [esp+C0h] [ebp-58h]
  float v43; // [esp+C4h] [ebp-54h]
  float v44; // [esp+C8h] [ebp-50h]
  char v45; // [esp+CCh] [ebp-4Ch]
  int v46; // [esp+D0h] [ebp-48h]
  unsigned int v47; // [esp+114h] [ebp-4h]
  int savedregs; // [esp+118h] [ebp+0h] BYREF

  v4 = this->super.process == 0; /*0x60a275*/
  v39.vtbl = (TESObjectREFRVtbl *)shooter; /*0x60a279*/
  if ( !v4 && !this->super.process->GetProcessLevel(this->super.process) ) /*0x60a28b*/
  {
    CharProxy = MobileObject_GetCharProxy(&this->super); /*0x60a29e*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x60a2a0*/
    v7 = (ExtraDataList *)DwordAtOffset40; /*0x60a2a5*/
    v39.member.super.flags = (TESForm::FormFlags)DwordAtOffset40; /*0x60a2a9*/
    if ( DwordAtOffset40 ) /*0x60a2ad*/
    {
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x60a2b1*/
      {
        v8 = sub_424180(v7 + 2); /*0x60a2c2*/
        *(_DWORD *)&v39.member.super.type = v8; /*0x60a2c4*/
LABEL_9:
        if ( !CharProxy ) /*0x60a2da*/
        {
          sub_890C00((hkVector4 *)&v39.member.childCell, 1); /*0x60a2e6*/
          v47 = 0; /*0x60a2ed*/
          v43 = 0.0; /*0x60a2f4*/
          vtbl = (MobileObject *)v39.vtbl; /*0x60a2fb*/
          if ( v39.vtbl ) /*0x60a301*/
          {
            v10 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int, int))v39.vtbl->super.super.InitializeComponent + 0xA1))( /*0x60a30f*/
                    v39.vtbl,
                    7,
                    v38);
            InitializeComponent = v39.vtbl->super.super.InitializeComponent; /*0x60a311*/
            v38 = v10; /*0x60a313*/
            v39.vtbl = (TESObjectREFRVtbl *)(*((int (__thiscall **)(TESObjectREFRVtbl *))InitializeComponent + 0xA1))(v39.vtbl); /*0x60a320*/
            v36 = (float)(int)v39.vtbl; /*0x60a32b*/
            v44 = Combat_CalculateArrowGravitySkillScale(attackStrength, v36, 0x1C); /*0x60a33a*/
          }
          v12 = this->super.vtbl->super.GetNiNode(this); /*0x60a34e*/
          v13 = this->super.vtbl; /*0x60a350*/
          v40 = v12; /*0x60a352*/
          v14 = v13->super.GetPos((TESObjectREFR *)this); /*0x60a361*/
          v15 = *v14; /*0x60a363*/
          v16 = hkFactor; /*0x60a365*/
          v37 = 0x14; /*0x60a36b*/
          *(float *)&v39.member.childCell.GetChildCell = v15 * v16; /*0x60a371*/
          *(float *)&v39.member.baseForm = v14[1] * v16; /*0x60a37a*/
          v17 = v16 * v14[2]; /*0x60a37e*/
          v42 = v8; /*0x60a381*/
          v39.member.rot.x = v17; /*0x60a388*/
          v18 = (TESObjectREFRVtbl *)FormHeapAlloc(0x14u); /*0x60a38c*/
          v39.vtbl = v18; /*0x60a394*/
          LOBYTE(v47) = 1; /*0x60a39a*/
          if ( v18 ) /*0x60a3a2*/
            v19 = bhkSphereShape_CtorRadius((bhkRefObject *)v18, kFaceEarNormalMatchRadius, COERCE_FLOAT(1)); /*0x60a3b2*/
          else
            v19 = 0; /*0x60a3b9*/
          LOBYTE(v47) = 0; /*0x60a3c0*/
          sub_608AE0(&v39.member.childCell.GetChildCell, (int)v19); /*0x60a3c8*/
          v45 = 0; /*0x60a3cf*/
          if ( vtbl ) /*0x60a3d7*/
            vtbl_high = HIWORD(MobileObject_GetCollisionFilterInfo(vtbl, &v39)->vtbl); /*0x60a3e5*/
          else
            vtbl_high = sub_607B60(); /*0x60a3eb*/
          v41 = (vtbl_high << 0x10) | 6; /*0x60a402*/
          v46 = 6; /*0x60a409*/
          v21 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x1000003F0uLL, v38); /*0x60a414*/
          v22 = 0x10 - ((unsigned __int8)v21 & 0xF); /*0x60a420*/
          v23 = (TESObjectREFRVtbl *)((char *)v21 + v22); /*0x60a425*/
          HIBYTE(v23[0xFFFFFFFF].MoveToHigh) = v22; /*0x60a427*/
          v39.vtbl = v23; /*0x60a42a*/
          LOBYTE(v47) = 2; /*0x60a436*/
          v24 = sub_60D8B0((bhkCharacterController *)v23, (int)&v39.member.childCell, (int)this); /*0x60a43e*/
          CharProxy = v24; /*0x60a445*/
          *((float *)v24 + 0xC9) = 1.0; /*0x60a447*/
          LOBYTE(v47) = 0; /*0x60a44d*/
          if ( unk_B333B8 ) /*0x60a455*/
            *((_DWORD *)v24 + 0x7D) |= 0x100000u; /*0x60a45e*/
          else
            *((_DWORD *)v24 + 0x7D) &= ~0x100000u; /*0x60a46a*/
          *((_DWORD *)v24 + 0x7D) |= 0x80000u;  // Observed creation-time setter for controller flag 0x80000 in ArrowProjectile character-proxy setup. /*0x60a474*/
          v39.vtbl = (TESObjectREFRVtbl *)&v37; /*0x60a484*/
          v37 = (int)v24; /*0x60a489*/
          InterlockedIncrement((volatile LONG *)v24 + 1); /*0x60a48b*/
          this->super.process->Unk_63(this->super.process, (void *)v37); /*0x60a49c*/
          sub_8910F0(CharProxy, 0x3E8, (int)this);// Arrow/projectile path also stores owner/object pointer under proxy metadata key 0x3E8. Do not treat this key alone as an actor proof. /*0x60a4a6*/
          v47 = 0xFFFFFFFF; /*0x60a4af*/
          sub_890F70(&v39.member.childCell.GetChildCell); /*0x60a4ba*/
          v8 = *(BSExtraDataVtbl **)&v39.member.super.type; /*0x60a4bf*/
        }
        if ( v39.member.super.flags && v8 ) /*0x60a4cd*/
          v25 = TESObjectCELL_GetWaterHeight((ExtraDataList *)v39.member.super.flags) * hkFactor; /*0x60a4d4*/
        else
          v25 = flt_A6F374; /*0x60a4dc*/
        v26 = *((_DWORD **)CharProxy + 2); /*0x60a4e2*/
        *((float *)CharProxy + 0xC6) = v25;     // Projectile/mobile setup also writes proxy+0x318 from current cell water height; field is water/surface height, not ground or ledge distance. /*0x60a4e5*/
        if ( v26 ) /*0x60a4ed*/
          HavokObject = bhkCollisionWrapper_GetHavokObject(v26); /*0x60a4ef*/
        else
          HavokObject = 0; /*0x60a4f6*/
        v28 = *(_DWORD *)(HavokObject + 8); /*0x60a4f8*/
        if ( v28 ) /*0x60a4fd*/
          v39.vtbl = *(TESObjectREFRVtbl **)(v28 + 0x2B0); /*0x60a505*/
        else
          v39.vtbl = 0; /*0x60a50b*/
        sub_895060(CharProxy, (int *)v8); /*0x60a516*/
        v29 = this->super.vtbl->super.GetNiNode(this); /*0x60a525*/
        v30 = *((int ***)CharProxy + 0xD9); /*0x60a527*/
        *(_DWORD *)&v39.member.super.type = v29; /*0x60a52f*/
        if ( v30 ) /*0x60a533*/
          v31 = sub_89F6B0(v30, 0); /*0x60a537*/
        else
          v31 = 0; /*0x60a53e*/
        if ( v31 != *(NiObject **)&v39.member.super.type ) /*0x60a546*/
        {
          v32 = *((_DWORD **)CharProxy + 0xD9); /*0x60a548*/
          if ( v32 ) /*0x60a550*/
            sub_89F650(v32, *(int *)&v39.member.super.type, 0); /*0x60a555*/
          if ( v8 ) /*0x60a55c*/
          {
            if ( BYTE2(v8[3].Destructor) ) /*0x60a55e*/
              (*(void (__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)CharProxy + 0x88))(CharProxy, 0); /*0x60a570*/
          }
          sub_88D070(*(NiNode **)&v39.member.super.type, 6, 1, 0); /*0x60a57d*/
        }
        v33 = this->super.vtbl->super.GetPos(this); /*0x60a58f*/
        v34 = *(_DWORD *)v33; /*0x60a591*/
        v35 = *((Data **)v33 + 1); /*0x60a593*/
        v39.member.super.modlist.next = (TESForm::ModReferenceList *)v33[2]; /*0x60a599*/
        v39.member.super.refID = v34; /*0x60a5a3*/
        v39.member.super.modlist.data = v35; /*0x60a5a7*/
        if ( (BSExtraDataVtbl *)v39.vtbl != v8 ) /*0x60a5ab*/
        {
          if ( v39.vtbl ) /*0x60a5af*/
            sub_88CD50(*(NiObjectNET **)&v39.member.super.type, 1, 0); /*0x60a5ba*/
          *(float *)&v39.member.super.modlist.next = *(float *)&v39.member.super.modlist.next + dbl_A49310; /*0x60a5cc*/
        }
        if ( v8 ) /*0x60a5d2*/
        {
          sub_452A10(CharProxy, (NiPoint3 *)&v39.member.super.refID); /*0x60a5db*/
          bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &v39.member.super.flags); /*0x60a5e7*/
          (*((void (__thiscall **)(BSExtraDataVtbl *, _DWORD, int, _DWORD, unsigned int, _DWORD))v8->Destructor + 0x24))( /*0x60a609*/
            v8,
            *(_DWORD *)&v39.member.super.type,
            1,
            0,
            (unsigned int)v39.member.super.flags >> 0x10,
            0);
        }
        return; /*0x60a609*/
      }
      v8 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x60a2ca*/
    }
    else
    {
      v8 = 0; /*0x60a2d2*/
    }
    *(_DWORD *)&v39.member.super.type = v8; /*0x60a2d4*/
    goto LABEL_9; /*0x60a2d4*/
  }
}
