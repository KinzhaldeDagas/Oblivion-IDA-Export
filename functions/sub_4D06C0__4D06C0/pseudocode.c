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

  v3 = 0;
  v60 = 0;
  if ( (this->members.flags0 & 1) != 0 )
  {
    *arg0 = 0;
    return arg0;
  }
  else
  {
    ShadowSceneNode = GetShadowSceneNode(0);
    v43 = flt_A3F3E0;
    v6 = flt_A3721C;
    v7 = dword_B3F9B0;
    v8 = (volatile LONG *)ShadowSceneNode;
    v9 = Vector3_InitValue_;
    v57 = *(&Vector3_InitValue_ + 1);
    v42 = v6;
    v41 = v6;
    v53 = v8;
    v56 = v9;
    v58 = v7;
    sub_711580(v64, v41, v42, v43);
    NiFrustum::SetOrtho(&a2, 0);
    a2.Near = flt_A2FE7C;
    a2.Ortho = 1;
    v10 = sub_4CE3C0(this);
    v11 = sub_4C46B0(v10, (float *)&v61);
    v12 = v11[1];
    v54 = *v11;
    v13 = this->members.flags0 & 1;
    v55 = v12;
    if ( v13 || (coords = this->members.coordOrLight.coords) == 0 )
      x = 0;
    else
      x = coords->x;
    v56 = (float)((x << 0xC) + 0x880);
    if ( v13 || (v16.coords = (CellCoordinates *)this->members.coordOrLight) == 0 )
      y = 0;
    else
      y = v16.coords->y;
    v57 = (double)((y << 0xC) + 0x880) - dbl_A46970;
    v58 = v55 + dbl_A46968;
    a2.Left = flt_A46964;
    a2.Right = flt_A46960;
    a2.Top = a2.Right;
    a2.Bottom = a2.Left;
    a2.Far = v58 - v54 + dbl_A3F3E8;
    *(float *)&v18 = COERCE_FLOAT(FormHeapAlloc(0x124u));
    v54 = *(float *)&v18;
    v65 = 1;
    if ( *(float *)&v18 == 0.0 )
      *(float *)&v19 = 0.0;
    else
      *(float *)&v19 = COERCE_FLOAT(sub_70D590(v18));
    v54 = *(float *)&v19;
    if ( *(float *)&v19 != 0.0 )
      InterlockedIncrement((volatile LONG *)&v19->members);
    v65 = 2;
    v20 = (NiNode *)FormHeapAlloc(0xDCu);
    v61 = v20;
    LOBYTE(v65) = 3;
    if ( v20 )
      v3 = (NiAVObject *)NiNode::NiNode(v20, 0);
    v61 = v3;
    if ( v3 )
      InterlockedIncrement((volatile LONG *)&v3->members);
    Destructor = v3->vtbl[1].super.super.Destructor;
    LOBYTE(v65) = 4;
    ((void (__thiscall *)(NiAVObject *, NiCamera *, int))Destructor)(v3, v19, 1);
    v22 = v57;
    v23 = v58;
    v3->members.m_localTransform.pos.x = v56;
    v3->members.m_localTransform.pos.y = v22;
    v3->members.m_localTransform.pos.z = v23;
    (*(void (__thiscall **)(volatile LONG *, NiAVObject *, int))(*v8 + 0x84))(v8, v3, 1);
    qmemcpy(&v19->members.super.m_localTransform, v64, 0x24u);
    Camera_SetFrustum(v19, (int)&a2);
    NiAVObject_UpdateNiAVObject(v3, 0.0, 1);
    NiAVObject_UpdateNiAVObject((NiAVObject *)v19, 0.0, 1);
    *(_BYTE *)(sub_55F7E0(1) + 0x23) = 1;
    sub_55FA50((float *)v19, 1);
    sub_4CD000(this);
    niNode = this->members.niNode;
    v44 = 0;
    v45 = 0;
    if ( niNode )
    {
      if ( niNode->members.children.end )
      {
        vtbl = niNode->members.children.data->vtbl;
        v51 = vtbl;
      }
      else
      {
        vtbl = 0;
        v51 = 0;
      }
    }
    else
    {
      v51 = 0;
      vtbl = 0;
    }
    if ( vtbl )
    {
      v26 = (int)vtbl->super.Copy & 1;
      LOWORD(vtbl->super.Copy) |= 1u;
      v44 = v26;
    }
    v27 = this->members.niNode;
    if ( v27 )
    {
      if ( v27->members.children.end > 1u )
      {
        m_uiRefCount = v27->members.children.data->members.super.super.m_uiRefCount;
        v49 = m_uiRefCount;
      }
      else
      {
        m_uiRefCount = 0;
        v49 = 0;
      }
    }
    else
    {
      v49 = 0;
      m_uiRefCount = 0;
    }
    if ( m_uiRefCount )
    {
      v29 = *(_BYTE *)(m_uiRefCount + 0x18) & 1;
      *(_WORD *)(m_uiRefCount + 0x18) |= 1u;
      v45 = v29;
    }
    nodeSkyRoot = Sky_CreateOrGetGlobalObject()->nodeSkyRoot;
    v47 = 0;
    if ( nodeSkyRoot )
    {
      v31 = nodeSkyRoot->members.super.m_flags & 1;
      nodeSkyRoot->members.super.m_flags |= 1u;
      v47 = v31;
    }
    v32 = dword_B333DC;
    v62 = dword_B333DC;
    v46 = 0;
    if ( nodeSkyRoot )
    {
      v33 = v32->members.super.m_flags & 1;
      v32->members.super.m_flags |= 1u;
      v46 = v33;
    }
    v34 = dword_B36094;
    v48 = 0;
    if ( byte_B42D40 )
    {
      if ( ImageSpaceEffectEnabled )
      {
        if ( ShaderPackage >= 2 )
        {
          if ( v34 )
          {
            v35 = *(_BYTE *)(v34 + 0x18) & 1;
            *(_WORD *)(v34 + 0x18) |= 1u;
            v48 = v35;
          }
        }
      }
    }
    v50 = byte_B0727C;
    byte_B0727C = 0;
    sub_4D0190(&v59, v19);
    v36 = byte_B42D40 == 0;
    LOBYTE(v65) = 5;
    byte_B0727C = v50;
    if ( !v36 )
    {
      if ( ImageSpaceEffectEnabled )
      {
        if ( ShaderPackage >= 2 )
        {
          if ( v34 )
          {
            if ( v48 )
              *(_WORD *)(v34 + 0x18) |= 1u;
            else
              *(_WORD *)(v34 + 0x18) &= ~1u;
          }
        }
      }
    }
    if ( v62 )
    {
      if ( v46 )
        v62->members.super.m_flags |= 1u;
      else
        v62->members.super.m_flags &= ~1u;
    }
    if ( nodeSkyRoot )
    {
      if ( v47 )
        nodeSkyRoot->members.super.m_flags |= 1u;
      else
        nodeSkyRoot->members.super.m_flags &= ~1u;
    }
    if ( v51 )
    {
      if ( v44 )
        LOWORD(v51->super.Copy) |= 1u;
      else
        LOWORD(v51->super.Copy) &= ~1u;
    }
    if ( v49 )
    {
      if ( v45 )
        *(_WORD *)(v49 + 0x18) |= 1u;
      else
        *(_WORD *)(v49 + 0x18) &= ~1u;
    }
    sub_55FA50((float *)g_worldScenegraph->camera, 1);
    *(_BYTE *)(sub_55F7E0(1) + 0x23) = 0;
    sub_4CD000(this);
    (*(void (__thiscall **)(volatile LONG *, volatile LONG **, NiAVObject *))(*v53 + 0x88))(v53, &v53, v3);
    v37 = InterlockedDecrement;
    if ( v53 )
    {
      v38 = v53;
      if ( !v37(v53 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v38)(v38, 1);
    }
    if ( !v37((volatile LONG *)&v3->members) )
      v3->vtbl->super.super.Destructor((NiRefObject *)v3, 1);
    v61 = 0;
    if ( !v37((volatile LONG *)&v19->members) )
      v19->vtbl->super.super.Destructor((NiRefObject *)v19, 1);
    v39 = v59;
    v36 = v59 == 0;
    v54 = 0.0;
    *arg0 = v59;
    if ( !v36 )
    {
      InterlockedIncrement((volatile LONG *)(v39 + 4));
      v39 = v59;
    }
    v60 = 1;
    LOBYTE(v65) = 4;
    if ( v39 )
    {
      v40 = (void (__thiscall ***)(_DWORD, int))v39;
      if ( !v37((volatile LONG *)(v39 + 4)) )
        (**v40)(v40, 1);
    }
    return arg0;
  }
}
