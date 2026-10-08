_DWORD *__thiscall sub_4D0C20(TESObjectCELL *this, _DWORD *arg0, int a3, int a4)
{
  NiAVObject *v5; // ebp
  int ShadowSceneNode; // eax
  double v7; // st7
  float z; // edx
  volatile LONG *v9; // edi
  float x; // eax
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
  NiAVObject *v22; // eax
  char v23; // cl
  NiNode *v24; // eax
  int v25; // edi
  char v26; // al
  int v27; // eax
  int v28; // esi
  char v29; // al
  LONG (__stdcall *v30)(volatile LONG *); // edi
  volatile LONG *v31; // esi
  int v32; // eax
  bool v33; // zf
  void (__thiscall ***v34)(_DWORD, int); // esi
  float angleZ; // [esp+14h] [ebp-E8h]
  float v37; // [esp+2Ch] [ebp-D0h]
  NiAVObject *v38; // [esp+2Ch] [ebp-D0h]
  char v39; // [esp+31h] [ebp-CBh]
  char v40; // [esp+32h] [ebp-CAh]
  char v41; // [esp+33h] [ebp-C9h]
  float v42; // [esp+34h] [ebp-C8h]
  NiCamera *v43; // [esp+34h] [ebp-C8h]
  char v44; // [esp+3Bh] [ebp-C1h]
  volatile LONG *v45; // [esp+3Ch] [ebp-C0h] BYREF
  __int64 v46; // [esp+40h] [ebp-BCh] BYREF
  float v47; // [esp+48h] [ebp-B4h]
  float v48; // [esp+4Ch] [ebp-B0h]
  float v49; // [esp+50h] [ebp-ACh]
  float v50; // [esp+54h] [ebp-A8h]
  float Radius; // [esp+58h] [ebp-A4h]
  int v52; // [esp+5Ch] [ebp-A0h] BYREF
  void *v53; // [esp+60h] [ebp-9Ch]
  int v54; // [esp+64h] [ebp-98h]
  NiFrustum a2; // [esp+68h] [ebp-94h] BYREF
  NiMatrix33 right; // [esp+84h] [ebp-78h] BYREF
  NiMatrix33 v57; // [esp+A8h] [ebp-54h] BYREF
  NiMatrix33 out; // [esp+CCh] [ebp-30h] BYREF
  int v59; // [esp+F8h] [ebp-4h]

  v5 = 0; /*0x4d0c4f*/
  v54 = 0; /*0x4d0c51*/
  if ( (this->members.flags0 & 1) != 0 && this->members.niNode ) /*0x4d0c5f*/
  {
    ShadowSceneNode = GetShadowSceneNode(0); /*0x4d0c69*/
    v7 = unk_B3F9A4; /*0x4d0c6e*/
    z = g_zeroNiPoint3.z; /*0x4d0c7c*/
    v9 = (volatile LONG *)ShadowSceneNode; /*0x4d0c8a*/
    x = g_zeroNiPoint3.x; /*0x4d0c8c*/
    v11 = -v7 * dbl_A2FAA0; /*0x4d0c93*/
    v12 = dbl_A2FAA0; /*0x4d0c93*/
    HIDWORD(v46) = LODWORD(g_zeroNiPoint3.y); /*0x4d0c98*/
    v42 = v11; /*0x4d0c9c*/
    v45 = v9; /*0x4d0ca4*/
    *(float *)&v46 = x; /*0x4d0caa*/
    v47 = z; /*0x4d0cae*/
    v37 = v7 * v12; /*0x4d0cb2*/
    sub_711580((float *)&right, v42, v42, v37); /*0x4d0cc9*/
    NiFrustum::SetOrtho(&a2, 0); /*0x4d0cd3*/
    niNode = this->members.niNode; /*0x4d0cde*/
    a2.Near = flt_A2FE7C; /*0x4d0ce1*/
    a2.Ortho = 1; /*0x4d0ce5*/
    y = niNode->members.super.m_kWorldBound.Center.y; /*0x4d0ced*/
    v48 = niNode->members.super.m_kWorldBound.Center.x; /*0x4d0cf0*/
    v50 = niNode->members.super.m_kWorldBound.Center.z; /*0x4d0cf7*/
    v49 = y; /*0x4d0d08*/
    Radius = niNode->members.super.m_kWorldBound.Radius; /*0x4d0d16*/
    v48 = v50 - Radius; /*0x4d0d33*/
    v49 = v50 + Radius; /*0x4d0d47*/
    *(float *)&v46 = (float)((a3 << 0xC) + 0x1080); /*0x4d0d56*/
    *((float *)&v46 + 1) = (float)((a4 << 0xC) + 0x1080); /*0x4d0d5e*/
    v47 = v49 + dbl_A46968; /*0x4d0d6c*/
    sub_4CCE20((ExtraDataList *)this, (float *)&v46, &v46, 0.0); /*0x4d0d70*/
    a2.Left = flt_A46964; /*0x4d0d7b*/
    a2.Right = flt_A46960; /*0x4d0d85*/
    a2.Top = a2.Right; /*0x4d0d89*/
    a2.Bottom = a2.Left; /*0x4d0d8d*/
    a2.Far = v47 - v48 + dbl_A3F3E8; /*0x4d0da4*/
    *(float *)&v15 = COERCE_FLOAT(FormHeapAlloc(0x124u)); /*0x4d0da8*/
    v48 = *(float *)&v15; /*0x4d0db0*/
    v59 = 1; /*0x4d0db6*/
    if ( *(float *)&v15 == 0.0 ) /*0x4d0dc1*/
    {
      v43 = 0; /*0x4d0dd2*/
      *(float *)&v16 = 0.0; /*0x4d0dd6*/
    }
    else
    {
      *(float *)&v16 = COERCE_FLOAT(sub_70D590(v15)); /*0x4d0dca*/
      v43 = v16; /*0x4d0dcc*/
    }
    v48 = *(float *)&v16; /*0x4d0dda*/
    if ( *(float *)&v16 != 0.0 ) /*0x4d0dde*/
      InterlockedIncrement((volatile LONG *)&v16->members); /*0x4d0de4*/
    v59 = 2; /*0x4d0def*/
    v17 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4d0dfa*/
    v53 = v17; /*0x4d0e02*/
    LOBYTE(v59) = 3; /*0x4d0e08*/
    if ( v17 ) /*0x4d0e10*/
      v5 = (NiAVObject *)NiNode::NiNode(v17, 0); /*0x4d0e1a*/
    v53 = v5; /*0x4d0e1e*/
    if ( v5 ) /*0x4d0e22*/
      InterlockedIncrement((volatile LONG *)&v5->members); /*0x4d0e28*/
    Destructor = v5->vtbl[1].super.super.Destructor; /*0x4d0e31*/
    LOBYTE(v59) = 4; /*0x4d0e3c*/
    ((void (__thiscall *)(NiAVObject *, NiCamera *, int))Destructor)(v5, v16, 1); /*0x4d0e44*/
    *(_QWORD *)&v5->members.m_localTransform.pos.x = v46; /*0x4d0e4a*/
    v5->members.m_localTransform.pos.z = v47; /*0x4d0e58*/
    (*(void (__thiscall **)(volatile LONG *, NiAVObject *, int))(*v9 + 0x84))(v9, v5, 1); /*0x4d0e68*/
    v19 = sub_4CBA80(this, (TESForm *)MEMORY[0xB35EB8], 1); /*0x4d0e74*/
    if ( v19 ) /*0x4d0e7b*/
    {
      v20 = v19->member.rot.z; /*0x4d0e8e*/
      if ( v20 != 0.0 ) /*0x4d0e93*/
      {
        qmemcpy(&v57, &stru_B26AF0[0xA].unk2C, sizeof(v57)); /*0x4d0ea6*/
        angleZ = v20; /*0x4d0eb0*/
        NiMatrix33_InitRotationZ(&v57, angleZ); /*0x4d0eb3*/
        qmemcpy(&right, NiMAtrix33_Multiply(&v57, &out, &right), sizeof(right)); /*0x4d0edc*/
        v16 = v43; /*0x4d0ede*/
      }
    }
    qmemcpy(&v16->members.super.m_localTransform, &right, 0x24u); /*0x4d0ef2*/
    Camera_SetFrustum(v43, (int)&a2); /*0x4d0eff*/
    NiAVObject_UpdateNiAVObject(v5, 0.0, 1); /*0x4d0f12*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)v43, 0.0, 1); /*0x4d0f20*/
    v21 = this->members.niNode; /*0x4d0f25*/
    v41 = 0; /*0x4d0f2a*/
    v39 = 0; /*0x4d0f2f*/
    if ( v21 ) /*0x4d0f34*/
    {
      if ( v21->members.children.end ) /*0x4d0f36*/
      {
        v38 = *v21->members.children.data; /*0x4d0f50*/
        v22 = v38; /*0x4d0f54*/
      }
      else
      {
        v22 = 0; /*0x4d0f40*/
        v38 = 0; /*0x4d0f42*/
      }
    }
    else
    {
      v38 = 0; /*0x4d0f58*/
      v22 = 0; /*0x4d0f60*/
    }
    if ( v22 ) /*0x4d0f66*/
    {
      v23 = v22->members.m_flags & 1; /*0x4d0f6b*/
      v22->members.m_flags |= 1u; /*0x4d0f6e*/
      v41 = v23; /*0x4d0f72*/
    }
    v24 = this->members.niNode; /*0x4d0f76*/
    if ( v24 && v24->members.children.end > 1u ) /*0x4d0f84*/
      v25 = *((_DWORD *)v24->members.children.data + 1); /*0x4d0f8c*/
    else
      v25 = 0; /*0x4d0f91*/
    if ( v25 ) /*0x4d0f95*/
    {
      v26 = *(_BYTE *)(v25 + 0x18) & 1; /*0x4d0f9a*/
      *(_WORD *)(v25 + 0x18) |= 1u; /*0x4d0f9c*/
      v39 = v26; /*0x4d0fa0*/
    }
    v27 = sub_49A140(); /*0x4d0fa4*/
    v28 = v27; /*0x4d0fa9*/
    v40 = 0; /*0x4d0fad*/
    if ( v27 ) /*0x4d0fb2*/
    {
      v29 = *(_BYTE *)(v27 + 0x18) & 1; /*0x4d0fb7*/
      *(_WORD *)(v28 + 0x18) |= 1u; /*0x4d0fb9*/
      v40 = v29; /*0x4d0fbe*/
    }
    v44 = byte_B0727C; /*0x4d0fd2*/
    byte_B0727C = 0; /*0x4d0fd9*/
    sub_4D0190(&v52, v43); /*0x4d0fe0*/
    byte_B0727C = v44; /*0x4d0fee*/
    LOBYTE(v59) = 5; /*0x4d0ff4*/
    if ( v28 ) /*0x4d1001*/
    {
      if ( v40 ) /*0x4d1007*/
        *(_WORD *)(v28 + 0x18) |= 1u; /*0x4d1009*/
      else
        *(_WORD *)(v28 + 0x18) &= ~1u; /*0x4d1010*/
    }
    if ( v38 ) /*0x4d101a*/
    {
      if ( v41 ) /*0x4d1020*/
        v38->members.m_flags |= 1u; /*0x4d1022*/
      else
        v38->members.m_flags &= ~1u; /*0x4d1029*/
    }
    if ( v25 ) /*0x4d102f*/
    {
      if ( v39 ) /*0x4d1035*/
        *(_WORD *)(v25 + 0x18) |= 1u; /*0x4d1037*/
      else
        *(_WORD *)(v25 + 0x18) &= ~1u; /*0x4d103e*/
    }
    (*(void (__thiscall **)(volatile LONG *, volatile LONG **, NiAVObject *))(*v45 + 0x88))(v45, &v45, v5); /*0x4d1054*/
    v30 = InterlockedDecrement; /*0x4d105c*/
    if ( v45 ) /*0x4d1062*/
    {
      v31 = v45; /*0x4d1064*/
      if ( !v30(v45 + 1) ) /*0x4d106a*/
        (**(void (__thiscall ***)(volatile LONG *, int))v31)(v31, 1); /*0x4d107c*/
    }
    if ( !v30((volatile LONG *)&v5->members) ) /*0x4d1082*/
      v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1); /*0x4d1091*/
    v53 = 0; /*0x4d109b*/
    if ( !v30((volatile LONG *)&v43->members) ) /*0x4d109f*/
      v43->vtbl->super.super.Destructor((NiRefObject *)v43, 1); /*0x4d10ad*/
    v32 = v52; /*0x4d10af*/
    v33 = v52 == 0; /*0x4d10b3*/
    v48 = 0.0; /*0x4d10bc*/
    *arg0 = v52; /*0x4d10c0*/
    if ( !v33 ) /*0x4d10c3*/
    {
      InterlockedIncrement((volatile LONG *)(v32 + 4)); /*0x4d10c9*/
      v32 = v52; /*0x4d10cf*/
    }
    v54 = 1; /*0x4d10d5*/
    LOBYTE(v59) = 4; /*0x4d10dd*/
    if ( v32 ) /*0x4d10e5*/
    {
      v34 = (void (__thiscall ***)(_DWORD, int))v32; /*0x4d10e7*/
      if ( !v30((volatile LONG *)(v32 + 4)) ) /*0x4d10ed*/
        (**v34)(v34, 1); /*0x4d10ff*/
    }
    return arg0; /*0x4d1101*/
  }
  else
  {
    *arg0 = 0; /*0x4d110c*/
    return arg0; /*0x4d1105*/
  }
}
