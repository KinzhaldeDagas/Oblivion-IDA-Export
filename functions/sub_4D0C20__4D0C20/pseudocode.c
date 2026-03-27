_DWORD *__thiscall sub_4D0C20(TESObjectCELL *this, _DWORD *arg0, int a3, int a4)
{
  NiAVObject *v5; // ebp
  int ShadowSceneNode; // eax
  double v7; // st7
  float v8; // edx
  volatile LONG *v9; // edi
  float v10; // eax
  double v11; // st5
  double v12; // st6
  NiNode *niNode; // eax
  float y; // edx
  NiCamera *v15; // eax
  NiCamera *v16; // esi
  NiNode *v17; // eax
  void (__thiscall *Destructor)(NiRefObject *, bool); // edx
  TESObjectREFR *v19; // eax
  double v20; // st7
  NiNode *v21; // eax
  NiAVObjectVtbl *v22; // eax
  char v23; // cl
  NiNode *v24; // eax
  UInt32 m_uiRefCount; // edi
  char v26; // al
  int v27; // eax
  int v28; // esi
  char v29; // al
  LONG (__stdcall *v30)(volatile LONG *); // edi
  volatile LONG *v31; // esi
  int v32; // eax
  bool v33; // zf
  void (__thiscall ***v34)(_DWORD, int); // esi
  float v36; // [esp+14h] [ebp-E8h]
  float v37; // [esp+2Ch] [ebp-D0h]
  NiAVObjectVtbl *vtbl; // [esp+2Ch] [ebp-D0h]
  char v39; // [esp+31h] [ebp-CBh]
  char v40; // [esp+32h] [ebp-CAh]
  char v41; // [esp+33h] [ebp-C9h]
  float v42; // [esp+34h] [ebp-C8h]
  NiCamera *v43; // [esp+34h] [ebp-C8h]
  char v44; // [esp+3Bh] [ebp-C1h]
  volatile LONG *v45; // [esp+3Ch] [ebp-C0h] BYREF
  __int64 v46; // [esp+40h] [ebp-BCh] BYREF
  float v47; // [esp+48h] [ebp-B4h]
  float x; // [esp+4Ch] [ebp-B0h]
  float v49; // [esp+50h] [ebp-ACh]
  float z; // [esp+54h] [ebp-A8h]
  float Radius; // [esp+58h] [ebp-A4h]
  int v52; // [esp+5Ch] [ebp-A0h] BYREF
  void *v53; // [esp+60h] [ebp-9Ch]
  int v54; // [esp+64h] [ebp-98h]
  NiFrustum a2; // [esp+68h] [ebp-94h] BYREF
  float v56[9]; // [esp+84h] [ebp-78h] BYREF
  float v57[9]; // [esp+A8h] [ebp-54h] BYREF
  float v58[9]; // [esp+CCh] [ebp-30h] BYREF
  int v59; // [esp+F8h] [ebp-4h]

  v5 = 0;
  v54 = 0;
  if ( (this->members.flags0 & 1) != 0 && this->members.niNode )
  {
    ShadowSceneNode = GetShadowSceneNode(0);
    v7 = flt_B3F9A4;
    v8 = dword_B3F9B0;
    v9 = (volatile LONG *)ShadowSceneNode;
    v10 = Vector3_InitValue_;
    v11 = -v7 * dbl_A2FAA0;
    v12 = dbl_A2FAA0;
    *((float *)&v46 + 1) = *(&Vector3_InitValue_ + 1);
    v42 = v11;
    v45 = v9;
    *(float *)&v46 = v10;
    v47 = v8;
    v37 = v7 * v12;
    sub_711580(v56, v42, v42, v37);
    NiFrustum::SetOrtho(&a2, 0);
    niNode = this->members.niNode;
    a2.Near = flt_A2FE7C;
    a2.Ortho = 1;
    y = niNode->members.super.m_kWorldBound.Center.y;
    x = niNode->members.super.m_kWorldBound.Center.x;
    z = niNode->members.super.m_kWorldBound.Center.z;
    v49 = y;
    Radius = niNode->members.super.m_kWorldBound.Radius;
    x = z - Radius;
    v49 = z + Radius;
    *(float *)&v46 = (float)((a3 << 0xC) + 0x1080);
    *((float *)&v46 + 1) = (float)((a4 << 0xC) + 0x1080);
    v47 = v49 + dbl_A46968;
    sub_4CCE20((ExtraDataList *)this, (float *)&v46, &v46, 0.0);
    a2.Left = flt_A46964;
    a2.Right = flt_A46960;
    a2.Top = a2.Right;
    a2.Bottom = a2.Left;
    a2.Far = v47 - x + dbl_A3F3E8;
    *(float *)&v15 = COERCE_FLOAT(FormHeapAlloc(0x124u));
    x = *(float *)&v15;
    v59 = 1;
    if ( *(float *)&v15 == 0.0 )
    {
      v43 = 0;
      *(float *)&v16 = 0.0;
    }
    else
    {
      *(float *)&v16 = COERCE_FLOAT(sub_70D590(v15));
      v43 = v16;
    }
    x = *(float *)&v16;
    if ( *(float *)&v16 != 0.0 )
      InterlockedIncrement((volatile LONG *)&v16->members);
    v59 = 2;
    v17 = (NiNode *)FormHeapAlloc(0xDCu);
    v53 = v17;
    LOBYTE(v59) = 3;
    if ( v17 )
      v5 = (NiAVObject *)NiNode::NiNode(v17, 0);
    v53 = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)&v5->members);
    Destructor = v5->vtbl[1].super.super.Destructor;
    LOBYTE(v59) = 4;
    ((void (__thiscall *)(NiAVObject *, NiCamera *, int))Destructor)(v5, v16, 1);
    *(_QWORD *)&v5->members.m_localTransform.pos.x = v46;
    v5->members.m_localTransform.pos.z = v47;
    (*(void (__thiscall **)(volatile LONG *, NiAVObject *, int))(*v9 + 0x84))(v9, v5, 1);
    v19 = sub_4CBA80(this, (TESForm *)TESDataHandler_g_NorthMarker, 1);
    if ( v19 )
    {
      v20 = v19->member.rot.z;
      if ( v20 != 0.0 )
      {
        qmemcpy(v57, &stru_B26AF0[0xA].unk2C, sizeof(v57));
        v36 = v20;
        NiMatrix33_InitRotationTransform(v57, v36);
        qmemcpy(v56, NiMAtrix33_Multiply(v57, v58, v56), sizeof(v56));
        v16 = v43;
      }
    }
    qmemcpy(&v16->members.super.m_localTransform, v56, 0x24u);
    Camera_SetFrustum(v43, (int)&a2);
    NiAVObject_UpdateNiAVObject(v5, 0.0, 1);
    NiAVObject_UpdateNiAVObject((NiAVObject *)v43, 0.0, 1);
    v21 = this->members.niNode;
    v41 = 0;
    v39 = 0;
    if ( v21 )
    {
      if ( v21->members.children.end )
      {
        vtbl = v21->members.children.data->vtbl;
        v22 = vtbl;
      }
      else
      {
        v22 = 0;
        vtbl = 0;
      }
    }
    else
    {
      vtbl = 0;
      v22 = 0;
    }
    if ( v22 )
    {
      v23 = (int)v22->super.Copy & 1;
      LOWORD(v22->super.Copy) |= 1u;
      v41 = v23;
    }
    v24 = this->members.niNode;
    if ( v24 && v24->members.children.end > 1u )
      m_uiRefCount = v24->members.children.data->members.super.super.m_uiRefCount;
    else
      m_uiRefCount = 0;
    if ( m_uiRefCount )
    {
      v26 = *(_BYTE *)(m_uiRefCount + 0x18) & 1;
      *(_WORD *)(m_uiRefCount + 0x18) |= 1u;
      v39 = v26;
    }
    v27 = sub_49A140();
    v28 = v27;
    v40 = 0;
    if ( v27 )
    {
      v29 = *(_BYTE *)(v27 + 0x18) & 1;
      *(_WORD *)(v28 + 0x18) |= 1u;
      v40 = v29;
    }
    v44 = byte_B0727C;
    byte_B0727C = 0;
    sub_4D0190(&v52, v43);
    byte_B0727C = v44;
    LOBYTE(v59) = 5;
    if ( v28 )
    {
      if ( v40 )
        *(_WORD *)(v28 + 0x18) |= 1u;
      else
        *(_WORD *)(v28 + 0x18) &= ~1u;
    }
    if ( vtbl )
    {
      if ( v41 )
        LOWORD(vtbl->super.Copy) |= 1u;
      else
        LOWORD(vtbl->super.Copy) &= ~1u;
    }
    if ( m_uiRefCount )
    {
      if ( v39 )
        *(_WORD *)(m_uiRefCount + 0x18) |= 1u;
      else
        *(_WORD *)(m_uiRefCount + 0x18) &= ~1u;
    }
    (*(void (__thiscall **)(volatile LONG *, volatile LONG **, NiAVObject *))(*v45 + 0x88))(v45, &v45, v5);
    v30 = InterlockedDecrement;
    if ( v45 )
    {
      v31 = v45;
      if ( !v30(v45 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v31)(v31, 1);
    }
    if ( !v30((volatile LONG *)&v5->members) )
      v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1);
    v53 = 0;
    if ( !v30((volatile LONG *)&v43->members) )
      v43->vtbl->super.super.Destructor((NiRefObject *)v43, 1);
    v32 = v52;
    v33 = v52 == 0;
    x = 0.0;
    *arg0 = v52;
    if ( !v33 )
    {
      InterlockedIncrement((volatile LONG *)(v32 + 4));
      v32 = v52;
    }
    v54 = 1;
    LOBYTE(v59) = 4;
    if ( v32 )
    {
      v34 = (void (__thiscall ***)(_DWORD, int))v32;
      if ( !v30((volatile LONG *)(v32 + 4)) )
        (**v34)(v34, 1);
    }
    return arg0;
  }
  else
  {
    *arg0 = 0;
    return arg0;
  }
}
