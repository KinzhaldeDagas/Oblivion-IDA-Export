void __thiscall sub_695DC0(MobileObject *this)
{
  bhkCharacterProxy *CharProxy; // esi
  TESObjectCELL *DwordAtOffset40; // eax
  ExtraDataList *v4; // ebx
  MobileObjectVtbl *vtbl; // edx
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // eax
  int v7; // eax
  MobileObjectVtbl *v8; // edx
  float *v9; // eax
  double v10; // st6
  double v11; // st7
  double v12; // st7
  TESObjectREFRVtbl *v13; // eax
  bhkRefObject *v14; // eax
  TESSaveLoadGame_SerializationView *v15; // ecx
  int v16; // ecx
  int v17; // eax
  MobileObject *v18; // esi
  NiAVObject *v19; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
  _DWORD *v21; // ecx
  NiAVObject *v22; // eax
  _DWORD *v23; // eax
  FreeEntry *v24; // eax
  unsigned __int8 v25; // cl
  TESObjectREFRVtbl *v26; // eax
  bhkCharacterController *v27; // eax
  double v28; // st7
  _DWORD *v29; // ecx
  int HavokObject; // eax
  int v31; // eax
  NiNode *v32; // eax
  int **v33; // ecx
  NiNode *v34; // ebx
  NiObject *v35; // eax
  _DWORD *v36; // ecx
  float *v37; // eax
  int v38; // ecx
  TESForm::FormFlags v39; // edx
  int *v40; // edi
  int v41[8]; // [esp+4h] [ebp-108h] BYREF
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

  if ( this->process && !this->process->GetProcessLevel(this->process) ) /*0x695e14*/
  {
    CharProxy = MobileObject_GetCharProxy(this); /*0x695e27*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x695e29*/
    v4 = (ExtraDataList *)DwordAtOffset40; /*0x695e2e*/
    v43 = DwordAtOffset40; /*0x695e32*/
    if ( DwordAtOffset40 ) /*0x695e36*/
    {
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x695e3a*/
        v42 = (int *)sub_424180(v4 + 2); /*0x695e4b*/
      else
        v42 = (int *)MEMORY[0xB35C24]; /*0x695e56*/
    }
    else
    {
      v42 = 0; /*0x695e5c*/
    }
    if ( CharProxy ) /*0x695e66*/
      goto LABEL_28; /*0x695e66*/
    sub_890C00((hkVector4 *)&v44.member.super.modlist, 1); /*0x695e72*/
    vtbl = this->vtbl; /*0x695e79*/
    v48 = 1.0; /*0x695e7b*/
    GetNiNode = vtbl->super.GetNiNode; /*0x695e82*/
    v52 = 0; /*0x695e8a*/
    v7 = (int)GetNiNode((TESObjectREFR *)this); /*0x695e91*/
    v8 = this->vtbl; /*0x695e93*/
    v45 = v7; /*0x695e95*/
    v9 = v8->super.GetPos((TESObjectREFR *)this); /*0x695ea4*/
    v10 = hkFactor; /*0x695ea8*/
    v11 = *v9 * v10; /*0x695eb2*/
    v41[0] = 0x14; /*0x695eb4*/
    *(float *)&v44.member.super.modlist.data = v11; /*0x695eb8*/
    *(float *)&v44.member.super.modlist.next = v9[1] * v10; /*0x695ec1*/
    v12 = v10 * v9[2]; /*0x695ec5*/
    v47 = v42; /*0x695ec8*/
    *(float *)&v44.member.childCell.GetChildCell = v12; /*0x695ecf*/
    v49 = 0.0; /*0x695ed5*/
    v13 = (TESObjectREFRVtbl *)FormHeapAlloc(0x14u); /*0x695edc*/
    v44.vtbl = v13; /*0x695ee4*/
    LOBYTE(v52) = 1; /*0x695eea*/
    if ( v13 ) /*0x695ef2*/
      v14 = bhkSphereShape_CtorRadius((bhkRefObject *)v13, 1.0, COERCE_FLOAT(1)); /*0x695efe*/
    else
      v14 = 0; /*0x695f05*/
    LOBYTE(v52) = 0; /*0x695f0c*/
    sub_608AE0(&v44.member.super.modlist.data, (int)v14); /*0x695f14*/
    v15 = g_TESSaveLoadGame; /*0x695f19*/
    v50 = 0; /*0x695f1f*/
    if ( sub_45A500(v15) ) /*0x695f27*/
    {
      v46 = 7; /*0x696008*/
      goto LABEL_24; /*0x696008*/
    }
    v16 = *((_DWORD *)this + 0x1A); /*0x695f34*/
    if ( v16 && (v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x20))(v16), (v18 = (MobileObject *)v17) != 0) ) /*0x695f46*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x190))(v17) ) /*0x695f52*/
      {
        v46 = (HIWORD(MobileObject_GetCollisionFilterInfo(v18, &v44)->vtbl) << 0x10) | 7; /*0x695f6e*/
LABEL_24:
        v51 = 6; /*0x696013*/
        v24 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x1000003F0uLL, v41[1]); /*0x69602a*/
        v25 = 0x10 - ((unsigned __int8)v24 & 0xF); /*0x696036*/
        v26 = (TESObjectREFRVtbl *)((char *)v24 + v25); /*0x69603b*/
        HIBYTE(v26[0xFFFFFFFF].MoveToHigh) = v25; /*0x69603d*/
        v44.vtbl = v26; /*0x696040*/
        LOBYTE(v52) = 2; /*0x69604c*/
        v27 = sub_68F400((bhkCharacterController *)v26, (int)&v44.member.super.modlist, (int)this); /*0x696054*/
        CharProxy = v27; /*0x69605b*/
        *((float *)v27 + 0xC9) = 1.0; /*0x69605d*/
        LOBYTE(v52) = 0; /*0x696063*/
        if ( unk_B333B8 ) /*0x69606b*/
          *((_DWORD *)v27 + 0x7D) |= 0x100000u; /*0x696074*/
        else
          *((_DWORD *)v27 + 0x7D) &= ~0x100000u; /*0x696080*/
        *((_DWORD *)v27 + 0x7D) |= 0x80000u;    // Observed creation-time setter for controller flag 0x80000 in spell/projectile MobileObject character-proxy setup. /*0x69608a*/
        v44.vtbl = (TESObjectREFRVtbl *)v41; /*0x69609a*/
        v41[0] = (int)v27; /*0x69609f*/
        InterlockedIncrement((volatile LONG *)v27 + 1); /*0x6960a1*/
        this->process->Unk_63(this->process, (void *)v41[0]); /*0x6960b2*/
        sub_8910F0(CharProxy, 0x3E8, (int)this);// Spell/projectile path also stores owner/object pointer under proxy metadata key 0x3E8. Movement discipline hooks must reject non-actors after lookup. /*0x6960bc*/
        v52 = 0xFFFFFFFF; /*0x6960c5*/
        sub_890F70(&v44.member.super.modlist.data); /*0x6960d0*/
        v4 = (ExtraDataList *)v43; /*0x6960d5*/
LABEL_28:
        if ( v4 && v42 ) /*0x6960e2*/
          v28 = TESObjectCELL_GetWaterHeight(v4) * hkFactor; /*0x6960eb*/
        else
          v28 = flt_A6F374; /*0x6960f3*/
        v29 = *((_DWORD **)CharProxy + 2); /*0x6960f9*/
        *((float *)CharProxy + 0xC6) = v28;     // Spell/projectile proxy setup writes proxy+0x318 from current cell water height; owner key 0x3E8 alone is not actor proof. /*0x6960fc*/
        if ( v29 ) /*0x696104*/
          HavokObject = bhkCollisionWrapper_GetHavokObject(v29); /*0x696106*/
        else
          HavokObject = 0; /*0x69610d*/
        v31 = *(_DWORD *)(HavokObject + 8); /*0x69610f*/
        if ( v31 ) /*0x696114*/
          v43 = *(TESObjectCELL **)(v31 + 0x2B0); /*0x69611c*/
        else
          v43 = 0; /*0x696122*/
        sub_895060(CharProxy, v42); /*0x696131*/
        v32 = this->vtbl->super.GetNiNode(this); /*0x696140*/
        v33 = *((int ***)CharProxy + 0xD9); /*0x696142*/
        v34 = v32; /*0x69614a*/
        if ( v33 ) /*0x69614c*/
          v35 = sub_89F6B0(v33, 0); /*0x696150*/
        else
          v35 = 0; /*0x696157*/
        if ( v35 != (NiObject *)v34 ) /*0x69615b*/
        {
          v36 = *((_DWORD **)CharProxy + 0xD9); /*0x69615d*/
          if ( v36 ) /*0x696165*/
            sub_89F650(v36, (int)v34, 0); /*0x69616a*/
          if ( v42 ) /*0x696175*/
          {
            if ( *((_BYTE *)v42 + 0x1A) ) /*0x696177*/
              (*(void (__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)CharProxy + 0x88))(CharProxy, 0); /*0x696189*/
          }
          sub_88EE20((int)v34); /*0x69618c*/
          sub_88D070(v34, 6, 1, 0); /*0x696198*/
        }
        v37 = this->vtbl->super.GetPos(this); /*0x6961aa*/
        v38 = *(_DWORD *)v37; /*0x6961ac*/
        v39 = *((_DWORD *)v37 + 1); /*0x6961ae*/
        v40 = v42; /*0x6961b4*/
        v44.member.super.refID = (UInt32)v37[2]; /*0x6961b8*/
        *(_DWORD *)&v44.member.super.type = v38; /*0x6961c2*/
        v44.member.super.flags = v39; /*0x6961c6*/
        if ( v43 != (TESObjectCELL *)v42 ) /*0x6961ca*/
        {
          if ( v43 ) /*0x6961ce*/
            sub_88CD50((NiObjectNET *)v34, 1, 0); /*0x6961d5*/
          *(float *)&v44.member.super.refID = *(float *)&v44.member.super.refID + dbl_A49310; /*0x6961e7*/
        }
        if ( v40 ) /*0x6961ed*/
        {
          sub_452A10(CharProxy, (NiPoint3 *)&v44.member); /*0x6961f6*/
          bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &v43); /*0x696202*/
          (*(void (__thiscall **)(int *, NiNode *, int, _DWORD, unsigned int, _DWORD))(*v40 + 0x90))( /*0x696220*/
            v40,
            v34,
            1,
            0,
            (unsigned int)v43 >> 0x10,
            0);
        }
        return; /*0x696220*/
      }
      v19 = (NiAVObject *)v18->vtbl->super.GetNiNode((TESObjectREFR *)v18); /*0x695f84*/
      BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive(v19); /*0x695f87*/
      if ( BhkCollisionObjectRecursive ) /*0x695f91*/
      {
        v21 = (_DWORD *)BhkCollisionObjectRecursive[4]; /*0x695f93*/
        if ( v21 ) /*0x695f98*/
        {
LABEL_19:
          v46 = (*((unsigned __int16 *)sub_497340(v21, &v44) + 1) << 0x10) | 7; /*0x695f9a*/
          goto LABEL_24; /*0x695fb5*/
        }
      }
    }
    else
    {
      v22 = (NiAVObject *)this->vtbl->super.GetNiNode(this); /*0x695fc1*/
      v23 = NiAVObject_FindBhkCollisionObjectRecursive(v22); /*0x695fc4*/
      if ( v23 ) /*0x695fce*/
      {
        v21 = (_DWORD *)v23[4]; /*0x695fd0*/
        if ( v21 ) /*0x695fd5*/
          goto LABEL_19; /*0x695fd5*/
      }
    }
    v46 = (sub_531D80() << 0x10) | 7; /*0x695fff*/
    goto LABEL_24; /*0x696006*/
  }
}
