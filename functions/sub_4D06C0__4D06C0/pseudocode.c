// Cell canopy shadow capture path; sets SpeedTree singleton +0x23, updates wind/time via 0x55FA50, renders shadow texture, then restores state.
_DWORD *__thiscall sub_4D06C0(TESObjectCELL *this, _DWORD *arg0)
{
  NiAVObject *v3; // ebp
  int ShadowSceneNode; // eax
  double v6; // st7
  float v7; // edx
  volatile LONG *v8; // edi
  float v9; // eax
  TESObjectLAND *v10; // eax
  float *v11; // eax
  float v12; // edx
  char v13; // cl
  CellCoordinates *coords; // eax
  SInt32 x; // eax
  TESCELL_CoordOrLight v16; // esi
  SInt32 y; // eax
  NiCamera *v18; // eax
  NiCamera *v19; // ebx
  NiNode *v20; // eax
  void (__thiscall *Destructor)(NiRefObject *, bool); // eax
  float v22; // edx
  float v23; // eax
  NiNode *niNode; // eax
  NiAVObjectVtbl *vtbl; // eax
  char v26; // cl
  NiNode *v27; // edi
  UInt32 m_uiRefCount; // eax
  char v29; // cl
  NiNode *nodeSkyRoot; // edi
  char v31; // al
  NiNode *v32; // eax
  char v33; // cl
  int v34; // esi
  char v35; // al
  bool v36; // zf
  LONG (__stdcall *v37)(volatile LONG *); // edi
  volatile LONG *v38; // esi
  int v39; // eax
  void (__thiscall ***v40)(_DWORD, int); // esi
  float v41; // [esp+Ch] [ebp-B0h]
  float v42; // [esp+10h] [ebp-ACh]
  float v43; // [esp+14h] [ebp-A8h]
  char v44; // [esp+2Fh] [ebp-8Dh]
  char v45; // [esp+30h] [ebp-8Ch]
  char v46; // [esp+31h] [ebp-8Bh]
  char v47; // [esp+32h] [ebp-8Ah]
  char v48; // [esp+33h] [ebp-89h]
  UInt32 v49; // [esp+34h] [ebp-88h]
  char v50; // [esp+3Bh] [ebp-81h]
  NiAVObjectVtbl *v51; // [esp+3Ch] [ebp-80h]
  volatile LONG *v53; // [esp+44h] [ebp-78h] BYREF
  float v54; // [esp+48h] [ebp-74h]
  float v55; // [esp+4Ch] [ebp-70h]
  float v56; // [esp+50h] [ebp-6Ch]
  float v57; // [esp+54h] [ebp-68h]
  float v58; // [esp+58h] [ebp-64h]
  int v59; // [esp+5Ch] [ebp-60h] BYREF
  int v60; // [esp+60h] [ebp-5Ch]
  void *v61; // [esp+64h] [ebp-58h] BYREF
  NiNode *v62; // [esp+6Ch] [ebp-50h]
  NiFrustum a2; // [esp+70h] [ebp-4Ch] BYREF
  float v64[9]; // [esp+8Ch] [ebp-30h] BYREF
  int v65; // [esp+B8h] [ebp-4h]

  v3 = 0; /*0x4d06f3*/
  v60 = 0; /*0x4d06f5*/
  if ( (this->members.flags0 & 1) != 0 ) /*0x4d06fd*/
  {
    *arg0 = 0; /*0x4d0706*/
    return arg0; /*0x4d06ff*/
  }
  else
  {
    ShadowSceneNode = GetShadowSceneNode(0); /*0x4d070e*/
    v43 = flt_A3F3E0; /*0x4d071f*/
    v6 = flt_A3721C; /*0x4d0722*/
    v7 = MEMORY[0xB3F9B0]; /*0x4d0728*/
    v8 = (volatile LONG *)ShadowSceneNode; /*0x4d072e*/
    v9 = g_zeroNiPoint3; /*0x4d0730*/
    v57 = *(&g_zeroNiPoint3 + 1); /*0x4d0738*/
    v42 = v6; /*0x4d073c*/
    v41 = v6; /*0x4d0747*/
    v53 = v8; /*0x4d074a*/
    v56 = v9; /*0x4d074e*/
    v58 = v7; /*0x4d0752*/
    sub_711580(v64, v41, v42, v43); /*0x4d0756*/
    NiFrustum::SetOrtho(&a2, 0); /*0x4d0760*/
    a2.Near = flt_A2FE7C; /*0x4d076f*/
    a2.Ortho = 1; /*0x4d0776*/
    v10 = sub_4CE3C0(this); /*0x4d077b*/
    v11 = sub_4C46B0(v10, (float *)&v61); /*0x4d0782*/
    v12 = v11[1]; /*0x4d0789*/
    v54 = *v11; /*0x4d078c*/
    v13 = this->members.flags0 & 1; /*0x4d0793*/
    v55 = v12; /*0x4d0796*/
    if ( v13 || (coords = this->members.coordOrLight.coords) == 0 ) /*0x4d07a1*/
      x = 0; /*0x4d07a7*/
    else
      x = coords->x; /*0x4d07a3*/
    v56 = (float)((x << 0xC) + 0x880); /*0x4d07bb*/
    if ( v13 || (v16.coords = (CellCoordinates *)this->members.coordOrLight) == 0 ) /*0x4d07c6*/
      y = 0; /*0x4d07cd*/
    else
      y = v16.coords->y; /*0x4d07c8*/
    v57 = (double)((y << 0xC) + 0x880) - dbl_A46970; /*0x4d07ea*/
    v58 = v55 + dbl_A46968; /*0x4d07f8*/
    a2.Left = flt_A46964; /*0x4d0802*/
    a2.Right = flt_A46960; /*0x4d080c*/
    a2.Top = a2.Right; /*0x4d0810*/
    a2.Bottom = a2.Left; /*0x4d0814*/
    a2.Far = v58 - v54 + dbl_A3F3E8; /*0x4d0826*/
    *(float *)&v18 = COERCE_FLOAT(FormHeapAlloc(0x124u)); /*0x4d082a*/
    v54 = *(float *)&v18; /*0x4d0832*/
    v65 = 1; /*0x4d0838*/
    if ( *(float *)&v18 == 0.0 ) /*0x4d0843*/
      *(float *)&v19 = 0.0; /*0x4d0850*/
    else
      *(float *)&v19 = COERCE_FLOAT(sub_70D590(v18)); /*0x4d084c*/
    v54 = *(float *)&v19; /*0x4d0854*/
    if ( *(float *)&v19 != 0.0 ) /*0x4d0858*/
      InterlockedIncrement((volatile LONG *)&v19->members); /*0x4d085e*/
    v65 = 2; /*0x4d0869*/
    v20 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4d0874*/
    v61 = v20; /*0x4d087c*/
    LOBYTE(v65) = 3; /*0x4d0882*/
    if ( v20 ) /*0x4d088a*/
      v3 = (NiAVObject *)NiNode::NiNode(v20, 0); /*0x4d0894*/
    v61 = v3; /*0x4d0898*/
    if ( v3 ) /*0x4d089c*/
      InterlockedIncrement((volatile LONG *)&v3->members); /*0x4d08a2*/
    Destructor = v3->vtbl[1].super.super.Destructor; /*0x4d08ab*/
    LOBYTE(v65) = 4; /*0x4d08b6*/
    ((void (__thiscall *)(NiAVObject *, NiCamera *, int))Destructor)(v3, v19, 1); /*0x4d08be*/
    v22 = v57; /*0x4d08c4*/
    v23 = v58; /*0x4d08c8*/
    v3->members.m_localTransform.pos.x = v56; /*0x4d08cc*/
    v3->members.m_localTransform.pos.y = v22; /*0x4d08cf*/
    v3->members.m_localTransform.pos.z = v23; /*0x4d08d2*/
    (*(void (__thiscall **)(volatile LONG *, NiAVObject *, int))(*v8 + 0x84))(v8, v3, 1); /*0x4d08e2*/
    qmemcpy(&v19->members.super.m_localTransform, v64, 0x24u); /*0x4d08f0*/
    Camera_SetFrustum(v19, (int)&a2); /*0x4d08f9*/
    NiAVObject_UpdateNiAVObject(v3, 0.0, 1); /*0x4d0908*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)v19, 0.0, 1); /*0x4d0917*/
    *(_BYTE *)(BSTreeManager_GetInstance(1) + 0x23) = 1; /*0x4d0926*/
    BSTreeManager_Update((float *)v19, 1); /*0x4d092a*/
    sub_4CD000(this); /*0x4d0938*/
    niNode = this->members.niNode; /*0x4d093d*/
    v44 = 0; /*0x4d0944*/
    v45 = 0; /*0x4d0949*/
    if ( niNode ) /*0x4d094e*/
    {
      if ( niNode->members.children.end ) /*0x4d0950*/
      {
        vtbl = niNode->members.children.data->vtbl; /*0x4d0967*/
        v51 = vtbl; /*0x4d0969*/
      }
      else
      {
        vtbl = 0; /*0x4d0959*/
        v51 = 0; /*0x4d095b*/
      }
    }
    else
    {
      v51 = 0; /*0x4d096f*/
      vtbl = 0; /*0x4d0973*/
    }
    if ( vtbl ) /*0x4d097c*/
    {
      v26 = (int)vtbl->super.Copy & 1; /*0x4d0981*/
      LOWORD(vtbl->super.Copy) |= 1u; /*0x4d0983*/
      v44 = v26; /*0x4d0987*/
    }
    v27 = this->members.niNode; /*0x4d098b*/
    if ( v27 ) /*0x4d0990*/
    {
      if ( v27->members.children.end > 1u ) /*0x4d0999*/
      {
        m_uiRefCount = v27->members.children.data->members.super.super.m_uiRefCount; /*0x4d09a9*/
        v49 = m_uiRefCount; /*0x4d09ac*/
      }
      else
      {
        m_uiRefCount = 0; /*0x4d099b*/
        v49 = 0; /*0x4d099d*/
      }
    }
    else
    {
      v49 = 0; /*0x4d09b2*/
      m_uiRefCount = 0; /*0x4d09b6*/
    }
    if ( m_uiRefCount ) /*0x4d09ba*/
    {
      v29 = *(_BYTE *)(m_uiRefCount + 0x18) & 1; /*0x4d09bf*/
      *(_WORD *)(m_uiRefCount + 0x18) |= 1u; /*0x4d09c2*/
      v45 = v29; /*0x4d09c6*/
    }
    nodeSkyRoot = Sky_CreateOrGetGlobalObject()->nodeSkyRoot; /*0x4d09cf*/
    v47 = 0; /*0x4d09d4*/
    if ( nodeSkyRoot ) /*0x4d09d9*/
    {
      v31 = nodeSkyRoot->members.super.m_flags & 1; /*0x4d09de*/
      nodeSkyRoot->members.super.m_flags |= 1u; /*0x4d09e0*/
      v47 = v31; /*0x4d09e5*/
    }
    v32 = unk_B333DC; /*0x4d09eb*/
    v62 = unk_B333DC; /*0x4d09f0*/
    v46 = 0; /*0x4d09f4*/
    if ( nodeSkyRoot ) /*0x4d09f9*/
    {
      v33 = v32->members.super.m_flags & 1; /*0x4d09fe*/
      v32->members.super.m_flags |= 1u; /*0x4d0a01*/
      v46 = v33; /*0x4d0a06*/
    }
    v34 = unk_B36094; /*0x4d0a11*/
    v48 = 0; /*0x4d0a17*/
    if ( unk_B42D40 ) /*0x4d0a0a*/
    {
      if ( MEMORY[0xB42F3E] ) /*0x4d0a1e*/
      {
        if ( MEMORY[0xB42F48] >= 2 ) /*0x4d0a2e*/
        {
          if ( v34 ) /*0x4d0a32*/
          {
            v35 = *(_BYTE *)(v34 + 0x18) & 1; /*0x4d0a37*/
            *(_WORD *)(v34 + 0x18) |= 1u; /*0x4d0a39*/
            v48 = v35; /*0x4d0a3e*/
          }
        }
      }
    }
    v50 = byte_B0727C; /*0x4d0a4d*/
    byte_B0727C = 0; /*0x4d0a56*/
    sub_4D0190(&v59, v19); /*0x4d0a5d*/
    v36 = unk_B42D40 == 0; /*0x4d0a62*/
    LOBYTE(v65) = 5; /*0x4d0a6d*/
    byte_B0727C = v50; /*0x4d0a75*/
    if ( !v36 ) /*0x4d0a7f*/
    {
      if ( MEMORY[0xB42F3E] ) /*0x4d0a81*/
      {
        if ( MEMORY[0xB42F48] >= 2 ) /*0x4d0a91*/
        {
          if ( v34 ) /*0x4d0a9a*/
          {
            if ( v48 ) /*0x4d0aa1*/
              *(_WORD *)(v34 + 0x18) |= 1u; /*0x4d0aa3*/
            else
              *(_WORD *)(v34 + 0x18) &= ~1u; /*0x4d0aa9*/
          }
        }
      }
    }
    if ( v62 ) /*0x4d0aba*/
    {
      if ( v46 ) /*0x4d0ac1*/
        v62->members.super.m_flags |= 1u; /*0x4d0ac3*/
      else
        v62->members.super.m_flags &= ~1u; /*0x4d0ac9*/
    }
    if ( nodeSkyRoot ) /*0x4d0acf*/
    {
      if ( v47 ) /*0x4d0ad6*/
        nodeSkyRoot->members.super.m_flags |= 1u; /*0x4d0ad8*/
      else
        nodeSkyRoot->members.super.m_flags &= ~1u; /*0x4d0ade*/
    }
    if ( v51 ) /*0x4d0ae8*/
    {
      if ( v44 ) /*0x4d0aef*/
        LOWORD(v51->super.Copy) |= 1u; /*0x4d0af1*/
      else
        LOWORD(v51->super.Copy) &= ~1u; /*0x4d0af7*/
    }
    if ( v49 ) /*0x4d0b01*/
    {
      if ( v45 ) /*0x4d0b08*/
        *(_WORD *)(v49 + 0x18) |= 1u; /*0x4d0b0a*/
      else
        *(_WORD *)(v49 + 0x18) &= ~1u; /*0x4d0b10*/
    }
    BSTreeManager_Update((float *)g_WorldSceneReceiverRoot->camera, 1); /*0x4d0b22*/
    *(_BYTE *)(BSTreeManager_GetInstance(1) + 0x23) = 0; /*0x4d0b35*/
    sub_4CD000(this); /*0x4d0b39*/
    (*(void (__thiscall **)(volatile LONG *, volatile LONG **, NiAVObject *))(*v53 + 0x88))(v53, &v53, v3); /*0x4d0b50*/
    v37 = InterlockedDecrement; /*0x4d0b58*/
    if ( v53 ) /*0x4d0b5e*/
    {
      v38 = v53; /*0x4d0b60*/
      if ( !v37(v53 + 1) ) /*0x4d0b66*/
        (**(void (__thiscall ***)(volatile LONG *, int))v38)(v38, 1); /*0x4d0b78*/
    }
    if ( !v37((volatile LONG *)&v3->members) ) /*0x4d0b7e*/
      v3->vtbl->super.super.Destructor((NiRefObject *)v3, 1); /*0x4d0b8d*/
    v61 = 0; /*0x4d0b95*/
    if ( !v37((volatile LONG *)&v19->members) ) /*0x4d0b99*/
      v19->vtbl->super.super.Destructor((NiRefObject *)v19, 1); /*0x4d0ba7*/
    v39 = v59; /*0x4d0ba9*/
    v36 = v59 == 0; /*0x4d0bad*/
    v54 = 0.0; /*0x4d0bb6*/
    *arg0 = v59; /*0x4d0bba*/
    if ( !v36 ) /*0x4d0bbc*/
    {
      InterlockedIncrement((volatile LONG *)(v39 + 4)); /*0x4d0bc2*/
      v39 = v59; /*0x4d0bc8*/
    }
    v60 = 1; /*0x4d0bce*/
    LOBYTE(v65) = 4; /*0x4d0bd6*/
    if ( v39 ) /*0x4d0bde*/
    {
      v40 = (void (__thiscall ***)(_DWORD, int))v39; /*0x4d0be0*/
      if ( !v37((volatile LONG *)(v39 + 4)) ) /*0x4d0be6*/
        (**v40)(v40, 1); /*0x4d0bf8*/
    }
    return arg0; /*0x4d0bfa*/
  }
}
