void __thiscall sub_69D140(TESObjectREFR *this)
{
  bhkCharacterProxy *CharProxy; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  ExtraDataList *v4; // ebx
  UInt32 (__thiscall *GetSaveSize)(TESForm *, UInt32); // eax
  NiNode *v6; // eax
  TESObjectREFRVtbl *vtbl; // edx
  float *v8; // eax
  double v9; // st6
  double v10; // st7
  double v11; // st7
  TESObjectREFRVtbl *v12; // eax
  bhkRefObject *v13; // eax
  int v14; // ecx
  MobileObject *v15; // edi
  NiAVObject *v16; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
  _DWORD *v18; // ecx
  NiAVObject *v19; // eax
  _DWORD *v20; // eax
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
  NiNode *v31; // ebx
  NiObject *v32; // eax
  _DWORD *v33; // ecx
  float *v34; // eax
  int v35; // ecx
  TESForm::FormFlags v36; // edx
  int *v37; // esi
  _DWORD v38[8]; // [esp+4h] [ebp-108h] BYREF
  int *v39; // [esp+24h] [ebp-E8h]
  TESObjectCELL *v40; // [esp+28h] [ebp-E4h] BYREF
  TESObjectREFR v41; // [esp+2Ch] [ebp-E0h] BYREF
  NiNode *v42; // [esp+ACh] [ebp-60h]
  int v43; // [esp+B0h] [ebp-5Ch]
  int *v44; // [esp+B4h] [ebp-58h]
  float v45; // [esp+B8h] [ebp-54h]
  float v46; // [esp+BCh] [ebp-50h]
  char v47; // [esp+C0h] [ebp-4Ch]
  int v48; // [esp+C4h] [ebp-48h]
  unsigned int v49; // [esp+108h] [ebp-4h]
  int savedregs; // [esp+10Ch] [ebp+0h] BYREF

  if ( *((_DWORD *)this + 0x16) /*0x69d194*/
    && !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 8))(*((_DWORD *)this + 0x16)) )
  {
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x69d1a7*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x69d1a9*/
    v4 = (ExtraDataList *)DwordAtOffset40; /*0x69d1ae*/
    v40 = DwordAtOffset40; /*0x69d1b2*/
    if ( DwordAtOffset40 ) /*0x69d1b6*/
    {
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x69d1ba*/
        v39 = (int *)sub_424180(v4 + 2); /*0x69d1cb*/
      else
        v39 = (int *)MEMORY[0xB35C24]; /*0x69d1d6*/
    }
    else
    {
      v39 = 0; /*0x69d1dc*/
    }
    if ( CharProxy ) /*0x69d1e6*/
      goto LABEL_29; /*0x69d1e6*/
    sub_890C00((hkVector4 *)&v41.member.super.modlist, 1); /*0x69d1f2*/
    GetSaveSize = this->vtbl[1].super.GetSaveSize; /*0x69d1f9*/
    v49 = 0; /*0x69d201*/
    v45 = ((double (__thiscall *)(TESObjectREFR *))GetSaveSize)(this); /*0x69d20a*/
    v6 = this->vtbl->GetNiNode(this); /*0x69d21b*/
    vtbl = this->vtbl; /*0x69d21d*/
    v42 = v6; /*0x69d21f*/
    v8 = vtbl->GetPos(this); /*0x69d22e*/
    v9 = hkFactor; /*0x69d232*/
    v10 = *v8 * v9; /*0x69d23c*/
    v38[0] = 0x14; /*0x69d23e*/
    *(float *)&v41.member.super.modlist.data = v10; /*0x69d242*/
    *(float *)&v41.member.super.modlist.next = v8[1] * v9; /*0x69d24b*/
    v11 = v9 * v8[2]; /*0x69d24f*/
    v44 = v39; /*0x69d252*/
    *(float *)&v41.member.childCell.GetChildCell = v11; /*0x69d259*/
    v46 = 0.0; /*0x69d25f*/
    v12 = (TESObjectREFRVtbl *)FormHeapAlloc(0x14u); /*0x69d266*/
    v41.vtbl = v12; /*0x69d26e*/
    LOBYTE(v49) = 1; /*0x69d274*/
    if ( v12 ) /*0x69d27c*/
      v13 = bhkSphereShape_CtorRadius((bhkRefObject *)v12, 1.0, COERCE_FLOAT(1)); /*0x69d288*/
    else
      v13 = 0; /*0x69d28f*/
    LOBYTE(v49) = 0; /*0x69d296*/
    sub_608AE0(&v41.member.super.modlist.data, (int)v13); /*0x69d29e*/
    v14 = *((_DWORD *)this + 0x1A); /*0x69d2a3*/
    v15 = 0; /*0x69d2a6*/
    v47 = 0; /*0x69d2aa*/
    if ( v14 ) /*0x69d2b2*/
      v15 = (MobileObject *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x20))(v14); /*0x69d2bb*/
    if ( sub_45A500(g_TESSaveLoadGame) ) /*0x69d2c3*/
    {
      v43 = 7; /*0x69d394*/
      goto LABEL_25; /*0x69d394*/
    }
    if ( v15 ) /*0x69d2d2*/
    {
      if ( v15->vtbl->super.IsActor((TESObjectREFR *)v15) ) /*0x69d2de*/
      {
        v43 = (HIWORD(MobileObject_GetCollisionFilterInfo(v15, &v41)->vtbl) << 0x10) | 7; /*0x69d2fa*/
LABEL_25:
        v48 = 6; /*0x69d39f*/
        v21 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x1000003F0uLL, v38[1]); /*0x69d3b6*/
        v22 = 0x10 - ((unsigned __int8)v21 & 0xF); /*0x69d3c2*/
        v23 = (TESObjectREFRVtbl *)((char *)v21 + v22); /*0x69d3c7*/
        HIBYTE(v23[0xFFFFFFFF].MoveToHigh) = v22; /*0x69d3c9*/
        v41.vtbl = v23; /*0x69d3cc*/
        LOBYTE(v49) = 2; /*0x69d3d8*/
        v24 = sub_68F400((bhkCharacterController *)v23, (int)&v41.member.super.modlist, (int)this); /*0x69d3e0*/
        CharProxy = v24; /*0x69d3e7*/
        *((float *)v24 + 0xC9) = 1.0; /*0x69d3e9*/
        LOBYTE(v49) = 0; /*0x69d3ef*/
        if ( unk_B333B8 ) /*0x69d3f7*/
          *((_DWORD *)v24 + 0x7D) |= 0x100000u; /*0x69d400*/
        else
          *((_DWORD *)v24 + 0x7D) &= ~0x100000u; /*0x69d40c*/
        *((_DWORD *)v24 + 0x7D) |= 0x80000u; /*0x69d416*/
        v41.vtbl = (TESObjectREFRVtbl *)v38; /*0x69d426*/
        v38[0] = v24; /*0x69d42b*/
        InterlockedIncrement((volatile LONG *)v24 + 1); /*0x69d42d*/
        (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x16) + 0x190))(*((_DWORD *)this + 0x16), v38[0]); /*0x69d43e*/
        sub_8910F0(CharProxy, 0x3E8, (int)this); /*0x69d448*/
        v49 = 0xFFFFFFFF; /*0x69d451*/
        sub_890F70(&v41.member.super.modlist.data); /*0x69d45c*/
        v4 = (ExtraDataList *)v40; /*0x69d461*/
LABEL_29:
        if ( v4 && v39 ) /*0x69d46e*/
          v25 = TESObjectCELL_GetWaterHeight(v4) * hkFactor; /*0x69d477*/
        else
          v25 = flt_A6F374; /*0x69d47f*/
        v26 = *((_DWORD **)CharProxy + 2); /*0x69d485*/
        *((float *)CharProxy + 0xC6) = v25; /*0x69d488*/
        if ( v26 ) /*0x69d490*/
          HavokObject = bhkCollisionWrapper_GetHavokObject(v26); /*0x69d492*/
        else
          HavokObject = 0; /*0x69d499*/
        v28 = *(_DWORD *)(HavokObject + 8); /*0x69d49b*/
        if ( v28 ) /*0x69d4a0*/
          v40 = *(TESObjectCELL **)(v28 + 0x2B0); /*0x69d4a8*/
        else
          v40 = 0; /*0x69d4ae*/
        sub_895060(CharProxy, v39); /*0x69d4bd*/
        v29 = this->vtbl->GetNiNode(this); /*0x69d4cc*/
        v30 = *((int ***)CharProxy + 0xD9); /*0x69d4ce*/
        v31 = v29; /*0x69d4d6*/
        if ( v30 ) /*0x69d4d8*/
          v32 = sub_89F6B0(v30, 0); /*0x69d4dc*/
        else
          v32 = 0; /*0x69d4e3*/
        if ( v32 != (NiObject *)v31 ) /*0x69d4e7*/
        {
          v33 = *((_DWORD **)CharProxy + 0xD9); /*0x69d4e9*/
          if ( v33 ) /*0x69d4f1*/
            sub_89F650(v33, (int)v31, 0); /*0x69d4f6*/
          if ( v39 ) /*0x69d501*/
          {
            if ( *((_BYTE *)v39 + 0x1A) ) /*0x69d503*/
            {
              (*(void (__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)CharProxy + 0x88))(CharProxy, 0); /*0x69d515*/
              this->vtbl[1].super.DoPostFixup((TESForm *)this); /*0x69d521*/
            }
          }
          sub_88EE20((int)v31); /*0x69d524*/
          sub_88D070(v31, 6, 1, 0); /*0x69d530*/
        }
        v34 = this->vtbl->GetPos(this); /*0x69d542*/
        v35 = *(_DWORD *)v34; /*0x69d544*/
        v36 = *((_DWORD *)v34 + 1); /*0x69d546*/
        v37 = v39; /*0x69d54c*/
        v41.member.super.refID = (UInt32)v34[2]; /*0x69d550*/
        *(_DWORD *)&v41.member.super.type = v35; /*0x69d55a*/
        v41.member.super.flags = v36; /*0x69d55e*/
        if ( v40 != (TESObjectCELL *)v39 ) /*0x69d562*/
        {
          if ( v40 ) /*0x69d566*/
            sub_88CD50((NiObjectNET *)v31, 1, 0); /*0x69d56d*/
          *(float *)&v41.member.super.refID = *(float *)&v41.member.super.refID + dbl_A49310; /*0x69d57f*/
        }
        if ( v37 ) /*0x69d585*/
        {
          sub_452A10(CharProxy, (NiPoint3 *)&v41.member); /*0x69d58e*/
          bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &v40); /*0x69d59a*/
          (*(void (__thiscall **)(int *, NiNode *, int, _DWORD, unsigned int, _DWORD))(*v37 + 0x90))( /*0x69d5b8*/
            v37,
            v31,
            1,
            0,
            (unsigned int)v40 >> 0x10,
            0);
        }
        return; /*0x69d5b8*/
      }
      v16 = (NiAVObject *)v15->vtbl->super.GetNiNode((TESObjectREFR *)v15); /*0x69d310*/
      BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive(v16); /*0x69d313*/
      if ( BhkCollisionObjectRecursive ) /*0x69d31d*/
      {
        v18 = (_DWORD *)BhkCollisionObjectRecursive[4]; /*0x69d31f*/
        if ( v18 ) /*0x69d324*/
        {
LABEL_20:
          v43 = (*((unsigned __int16 *)sub_497340(v18, &v41) + 1) << 0x10) | 7; /*0x69d326*/
          goto LABEL_25; /*0x69d341*/
        }
      }
    }
    else
    {
      v19 = (NiAVObject *)this->vtbl->GetNiNode(this); /*0x69d34d*/
      v20 = NiAVObject_FindBhkCollisionObjectRecursive(v19); /*0x69d350*/
      if ( v20 ) /*0x69d35a*/
      {
        v18 = (_DWORD *)v20[4]; /*0x69d35c*/
        if ( v18 ) /*0x69d361*/
          goto LABEL_20; /*0x69d361*/
      }
    }
    v43 = (sub_531D80() << 0x10) | 7; /*0x69d38b*/
    goto LABEL_25; /*0x69d392*/
  }
}
