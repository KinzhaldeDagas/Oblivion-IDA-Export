void __thiscall sub_698410(TESObjectREFR *this)
{
  bhkCharacterProxy *CharProxy; // esi
  TESObjectCELL *DwordAtOffset40; // eax
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

  if ( *((_DWORD *)this + 0x16) /*0x698464*/
    && !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 8))(*((_DWORD *)this + 0x16)) )
  {
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x698477*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x698479*/
    v4 = (ExtraDataList *)DwordAtOffset40; /*0x69847e*/
    v43 = DwordAtOffset40; /*0x698482*/
    if ( DwordAtOffset40 ) /*0x698486*/
    {
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x69848a*/
        v42 = (int *)sub_424180(v4 + 2); /*0x69849b*/
      else
        v42 = (int *)MEMORY[0xB35C24]; /*0x6984a6*/
    }
    else
    {
      v42 = 0; /*0x6984ac*/
    }
    if ( CharProxy ) /*0x6984b6*/
      goto LABEL_28; /*0x6984b6*/
    sub_890C00((hkVector4 *)&v44.member.super.modlist, 1); /*0x6984c2*/
    vtbl = this->vtbl; /*0x6984c9*/
    v48 = 1.0; /*0x6984cb*/
    GetNiNode = vtbl->GetNiNode; /*0x6984d2*/
    v52 = 0; /*0x6984da*/
    v7 = (int)GetNiNode(this); /*0x6984e1*/
    v8 = this->vtbl; /*0x6984e3*/
    v45 = v7; /*0x6984e5*/
    v9 = v8->GetPos(this); /*0x6984f4*/
    v10 = hkFactor; /*0x6984f8*/
    v11 = *v9 * v10; /*0x698502*/
    v41[0] = 0x14; /*0x698504*/
    *(float *)&v44.member.super.modlist.data = v11; /*0x698508*/
    *(float *)&v44.member.super.modlist.next = v9[1] * v10; /*0x698511*/
    v12 = v10 * v9[2]; /*0x698515*/
    v47 = v42; /*0x698518*/
    *(float *)&v44.member.childCell.GetChildCell = v12; /*0x69851f*/
    v49 = 0.0; /*0x698525*/
    v13 = (TESObjectREFRVtbl *)FormHeapAlloc(0x14u); /*0x69852c*/
    v44.vtbl = v13; /*0x698534*/
    LOBYTE(v52) = 1; /*0x69853a*/
    if ( v13 ) /*0x698542*/
      v14 = bhkSphereShape_CtorRadius((bhkRefObject *)v13, 1.0, COERCE_FLOAT(1)); /*0x69854e*/
    else
      v14 = 0; /*0x698555*/
    LOBYTE(v52) = 0; /*0x69855c*/
    sub_608AE0(&v44.member.super.modlist.data, (int)v14); /*0x698564*/
    v15 = g_TESSaveLoadGame; /*0x698569*/
    v50 = 0; /*0x69856f*/
    if ( sub_45A500(v15) ) /*0x698577*/
    {
      v46 = 7; /*0x698658*/
      goto LABEL_24; /*0x698658*/
    }
    v16 = *((_DWORD *)this + 0x1A); /*0x698584*/
    if ( v16 && (v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x20))(v16), (v18 = (MobileObject *)v17) != 0) ) /*0x698596*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x190))(v17) ) /*0x6985a2*/
      {
        v46 = (HIWORD(MobileObject_GetCollisionFilterInfo(v18, &v44)->vtbl) << 0x10) | 7; /*0x6985be*/
LABEL_24:
        v51 = 6; /*0x698663*/
        v24 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x1000003F0uLL, v41[1]); /*0x69867a*/
        v25 = 0x10 - ((unsigned __int8)v24 & 0xF); /*0x698686*/
        v26 = (TESObjectREFRVtbl *)((char *)v24 + v25); /*0x69868b*/
        HIBYTE(v26[0xFFFFFFFF].MoveToHigh) = v25; /*0x69868d*/
        v44.vtbl = v26; /*0x698690*/
        LOBYTE(v52) = 2; /*0x69869c*/
        v27 = sub_68F400((bhkCharacterController *)v26, (int)&v44.member.super.modlist, (int)this); /*0x6986a4*/
        CharProxy = v27; /*0x6986ab*/
        *((float *)v27 + 0xC9) = 1.0; /*0x6986ad*/
        LOBYTE(v52) = 0; /*0x6986b3*/
        *((_DWORD *)v27 + 0x7D) |= 0x80000u;    // Observed creation-time setter for controller flag 0x80000 in spell/projectile TESObjectREFR character-proxy setup. /*0x6986bb*/
        if ( unk_B333B8 ) /*0x6986c5*/
          *((_DWORD *)v27 + 0x7D) |= 0x100000u; /*0x6986ce*/
        else
          *((_DWORD *)v27 + 0x7D) &= ~0x100000u; /*0x6986da*/
        v44.vtbl = (TESObjectREFRVtbl *)v41; /*0x6986ea*/
        v41[0] = v27; /*0x6986ef*/
        InterlockedIncrement((volatile LONG *)v27 + 1); /*0x6986f1*/
        (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x16) + 0x190))(*((_DWORD *)this + 0x16), v41[0]); /*0x698702*/
        sub_8910F0(CharProxy, 0x3E8, (int)this);// Spell/projectile path also stores owner/object pointer under proxy metadata key 0x3E8. Movement discipline hooks must reject non-actors after lookup. /*0x69870c*/
        v52 = 0xFFFFFFFF; /*0x698715*/
        sub_890F70(&v44.member.super.modlist.data); /*0x698720*/
        v4 = (ExtraDataList *)v43; /*0x698725*/
LABEL_28:
        if ( v4 && v42 ) /*0x698732*/
          v28 = TESObjectCELL_GetWaterHeight(v4) * hkFactor; /*0x69873b*/
        else
          v28 = flt_A6F374; /*0x698743*/
        v29 = *((_DWORD **)CharProxy + 2); /*0x698749*/
        *((float *)CharProxy + 0xC6) = v28;     // Spell/projectile proxy setup writes proxy+0x318 from current cell water height; movement discipline hooks must reject non-actors. /*0x69874c*/
        if ( v29 ) /*0x698754*/
          HavokObject = bhkCollisionWrapper_GetHavokObject(v29); /*0x698756*/
        else
          HavokObject = 0; /*0x69875d*/
        v31 = *(_DWORD *)(HavokObject + 8); /*0x69875f*/
        if ( v31 ) /*0x698764*/
          v43 = *(TESObjectCELL **)(v31 + 0x2B0); /*0x69876c*/
        else
          v43 = 0; /*0x698772*/
        sub_895060(CharProxy, v42); /*0x698781*/
        v32 = this->vtbl->GetNiNode(this); /*0x698790*/
        v33 = *((int ***)CharProxy + 0xD9); /*0x698792*/
        v34 = v32; /*0x69879a*/
        if ( v33 ) /*0x69879c*/
          v35 = sub_89F6B0(v33, 0); /*0x6987a0*/
        else
          v35 = 0; /*0x6987a7*/
        if ( v35 != (NiObject *)v34 ) /*0x6987ab*/
        {
          v36 = *((_DWORD **)CharProxy + 0xD9); /*0x6987ad*/
          if ( v36 ) /*0x6987b5*/
            sub_89F650(v36, (int)v34, 0); /*0x6987ba*/
          if ( v42 ) /*0x6987c5*/
          {
            if ( *((_BYTE *)v42 + 0x1A) ) /*0x6987c7*/
              (*(void (__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)CharProxy + 0x88))(CharProxy, 0); /*0x6987d9*/
          }
          sub_88EE20((int)v34); /*0x6987dc*/
          sub_88D070(v34, 6, 1, 0); /*0x6987e8*/
        }
        v37 = this->vtbl->GetPos(this); /*0x6987fa*/
        v38 = *(_DWORD *)v37; /*0x6987fc*/
        v39 = *((_DWORD *)v37 + 1); /*0x6987fe*/
        v40 = v42; /*0x698804*/
        v44.member.super.refID = (UInt32)v37[2]; /*0x698808*/
        *(_DWORD *)&v44.member.super.type = v38; /*0x698812*/
        v44.member.super.flags = v39; /*0x698816*/
        if ( v43 != (TESObjectCELL *)v42 ) /*0x69881a*/
        {
          if ( v43 ) /*0x69881e*/
            sub_88CD50((NiObjectNET *)v34, 1, 0); /*0x698825*/
          *(float *)&v44.member.super.refID = *(float *)&v44.member.super.refID + dbl_A49310; /*0x698837*/
        }
        if ( v40 ) /*0x69883d*/
        {
          sub_452A10(CharProxy, (NiPoint3 *)&v44.member); /*0x698846*/
          bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &v43); /*0x698852*/
          (*(void (__thiscall **)(int *, NiNode *, int, _DWORD, unsigned int, _DWORD))(*v40 + 0x90))( /*0x698870*/
            v40,
            v34,
            1,
            0,
            (unsigned int)v43 >> 0x10,
            0);
        }
        return; /*0x698870*/
      }
      v19 = (NiAVObject *)v18->vtbl->super.GetNiNode((TESObjectREFR *)v18); /*0x6985d4*/
      BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive(v19); /*0x6985d7*/
      if ( BhkCollisionObjectRecursive ) /*0x6985e1*/
      {
        v21 = (_DWORD *)BhkCollisionObjectRecursive[4]; /*0x6985e3*/
        if ( v21 ) /*0x6985e8*/
        {
LABEL_19:
          v46 = (*((unsigned __int16 *)sub_497340(v21, &v44) + 1) << 0x10) | 7; /*0x6985ea*/
          goto LABEL_24; /*0x698605*/
        }
      }
    }
    else
    {
      v22 = (NiAVObject *)this->vtbl->GetNiNode(this); /*0x698611*/
      v23 = NiAVObject_FindBhkCollisionObjectRecursive(v22); /*0x698614*/
      if ( v23 ) /*0x69861e*/
      {
        v21 = (_DWORD *)v23[4]; /*0x698620*/
        if ( v21 ) /*0x698625*/
          goto LABEL_19; /*0x698625*/
      }
    }
    v46 = (sub_531D80() << 0x10) | 7; /*0x69864f*/
    goto LABEL_24; /*0x698656*/
  }
}
