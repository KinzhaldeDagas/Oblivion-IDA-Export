void __usercall MagicBoltProjectile::~MagicBoltProjectile(
        MagicBoltProjectile *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>)
{
  PlayerCharacter *v5; // eax
  bool v6; // zf
  MagicCaster *p_magicCaster; // eax
  double v8; // st4
  BoltShaderProperty *boltShaderProperty; // edi
  LONG (__stdcall *v10)(volatile LONG *); // ebp
  NiNode *niNode088; // eax
  NiNode *m_parent; // ecx
  float v13; // edi
  NiNode *niNode094; // edi
  NiNode *v15; // edi
  UInt32 unk08C; // edi
  UInt32 unk090; // edi
  UInt32 unk084; // eax
  int *v19; // ebp
  int v20; // edi
  UInt32 v21; // eax
  int v22; // ecx
  int v23; // ecx
  float v24; // edi
  UInt32 v25; // edi
  int v26; // ebp
  _DWORD *v27; // edi
  UInt32 v28; // edi
  int v29; // ebp
  _DWORD *v30; // edi
  UInt32 v31; // edi
  int v32; // ebp
  _DWORD *v33; // edi
  UInt32 v34; // edi
  int *unk09C; // ecx
  UInt32 v36; // edi
  NiNode *v37; // edi
  UInt32 v38; // edi
  UInt32 v39; // edi
  NiNode *v40; // edi
  BoltShaderProperty *v41; // edi
  float v42; // [esp+48h] [ebp-18h] BYREF
  UInt32 v43; // [esp+4Ch] [ebp-14h]
  MagicBoltProjectile *v44; // [esp+50h] [ebp-10h]
  int v45; // [esp+5Ch] [ebp-4h]

  v44 = this; /*0x698c29*/
  this->super.super.vtbl = (MobileObjectVtbl *)&MagicBoltProjectile::`vftable'{for `MagicBoltProjectile'}; /*0x698c2d*/
  this->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicBoltProjectile::`vftable'{for `TESChildCell'}; /*0x698c33*/
  v5 = reference; /*0x698c3a*/
  v6 = reference == 0; /*0x698c41*/
  v45 = 5; /*0x698c43*/
  if ( v6 ) /*0x698c4b*/
    p_magicCaster = 0; /*0x698c52*/
  else
    p_magicCaster = &v5->super.super.magicCaster; /*0x698c4d*/
  if ( this->super.caster != p_magicCaster ) /*0x698c57*/
  {
    v8 = flt_B37ED0[0x90]; /*0x698c59*/
    if ( v8 < dbl_A2FC68 ) /*0x698c6a*/
      v8 = 0.0; /*0x698c6e*/
    v42 = v8; /*0x698c70*/
    MEMORY[0xB3C0D0] = MEMORY[0xB3C0D0] - v42; /*0x698c7e*/
  }
  BSSimpleList_Remove((int *)&qword_B3BB2C[0x89], (int)this); /*0x698c8a*/
  sub_7F4420((int)this->niNode088, (NiProperty *)this->boltShaderProperty); /*0x698c9a*/
  boltShaderProperty = this->boltShaderProperty; /*0x698c9f*/
  v10 = InterlockedDecrement; /*0x698ca2*/
  if ( boltShaderProperty ) /*0x698cad*/
  {
    if ( !v10((volatile LONG *)boltShaderProperty + 1) ) /*0x698cb3*/
      (**(void (__thiscall ***)(BoltShaderProperty *, int))boltShaderProperty)(boltShaderProperty, 1); /*0x698cc5*/
    this->boltShaderProperty = 0; /*0x698cc7*/
  }
  niNode088 = this->niNode088; /*0x698cca*/
  if ( niNode088 ) /*0x698cd2*/
  {
    m_parent = niNode088->members.super.m_parent; /*0x698cd4*/
    if ( m_parent ) /*0x698cd9*/
    {
      m_parent->vtbl->RemoveObject(m_parent, (NiAVObject **)&v42, (NiAVObject *)this->niNode088); /*0x698ce9*/
      if ( v42 != 0.0 ) /*0x698cf1*/
      {
        v13 = v42; /*0x698cf3*/
        if ( !v10((volatile LONG *)(LODWORD(v42) + 4)) ) /*0x698cf9*/
          (**(void (__thiscall ***)(float, int))LODWORD(v13))(COERCE_FLOAT(LODWORD(v13)), 1); /*0x698d0b*/
      }
    }
  }
  niNode094 = this->niNode094; /*0x698d0d*/
  if ( niNode094 ) /*0x698d15*/
  {
    if ( !v10((volatile LONG *)&niNode094->members) ) /*0x698d1b*/
      niNode094->vtbl->super.super.super.Destructor((NiRefObject *)niNode094, 1); /*0x698d2d*/
    this->niNode094 = 0; /*0x698d2f*/
  }
  v15 = this->niNode088; /*0x698d35*/
  if ( v15 ) /*0x698d3d*/
  {
    if ( !v10((volatile LONG *)&v15->members) ) /*0x698d43*/
      v15->vtbl->super.super.super.Destructor((NiRefObject *)v15, 1); /*0x698d55*/
    this->niNode088 = 0; /*0x698d57*/
  }
  unk08C = this->unk08C; /*0x698d5d*/
  if ( unk08C ) /*0x698d65*/
  {
    if ( !v10((volatile LONG *)(unk08C + 4)) ) /*0x698d6b*/
      (**(void (__thiscall ***)(UInt32, int))unk08C)(unk08C, 1); /*0x698d7d*/
    this->unk08C = 0; /*0x698d7f*/
  }
  unk090 = this->unk090; /*0x698d85*/
  if ( unk090 ) /*0x698d8d*/
  {
    if ( !v10((volatile LONG *)(unk090 + 4)) ) /*0x698d93*/
      (**(void (__thiscall ***)(UInt32, int))unk090)(unk090, 1); /*0x698da5*/
    this->unk090 = 0; /*0x698da7*/
  }
  if ( this->unk084 ) /*0x698dad*/
  {
    do /*0x698f08*/
    {
      unk084 = this->unk084; /*0x698dc0*/
      v43 = *(_DWORD *)(unk084 + 0x1C); /*0x698dc9*/
      sub_7F4420(*(_DWORD *)(unk084 + 4), *(NiProperty **)unk084); /*0x698dd4*/
      v19 = (int *)this->unk084; /*0x698dd9*/
      v20 = *v19; /*0x698ddf*/
      if ( *v19 ) /*0x698ddf*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x698ded*/
        {
          if ( v20 ) /*0x698df9*/
            (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x698e03*/
        }
        *v19 = 0; /*0x698e05*/
      }
      v21 = this->unk084; /*0x698e08*/
      v22 = *(_DWORD *)(v21 + 4); /*0x698e0e*/
      if ( v22 ) /*0x698e13*/
      {
        v23 = *(_DWORD *)(v22 + 0x1C); /*0x698e15*/
        if ( v23 ) /*0x698e1a*/
        {
          (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v23 + 0x88))(v23, &v42, *(_DWORD *)(v21 + 4)); /*0x698e2d*/
          if ( v42 != 0.0 ) /*0x698e35*/
          {
            v24 = v42; /*0x698e37*/
            if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v42) + 4)) ) /*0x698e3d*/
              (**(void (__thiscall ***)(float, int))LODWORD(v24))(COERCE_FLOAT(LODWORD(v24)), 1); /*0x698e53*/
          }
        }
      }
      v25 = this->unk084; /*0x698e55*/
      v26 = *(_DWORD *)(v25 + 4); /*0x698e5b*/
      v27 = (_DWORD *)(v25 + 4); /*0x698e5e*/
      if ( v26 ) /*0x698e63*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x698e69*/
          (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x698e80*/
        *v27 = 0; /*0x698e82*/
      }
      v28 = this->unk084; /*0x698e84*/
      v29 = *(_DWORD *)(v28 + 0x14); /*0x698e8a*/
      v30 = (_DWORD *)(v28 + 0x14); /*0x698e8d*/
      if ( v29 ) /*0x698e92*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) ) /*0x698e98*/
          (**(void (__thiscall ***)(int, int))v29)(v29, 1); /*0x698eaf*/
        *v30 = 0; /*0x698eb1*/
      }
      v31 = this->unk084; /*0x698eb3*/
      v32 = *(_DWORD *)(v31 + 0x18); /*0x698eb9*/
      v33 = (_DWORD *)(v31 + 0x18); /*0x698ebc*/
      if ( v32 ) /*0x698ec1*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v32 + 4)) ) /*0x698ec7*/
          (**(void (__thiscall ***)(int, int))v32)(v32, 1); /*0x698ede*/
        *v33 = 0; /*0x698ee0*/
      }
      v34 = this->unk084; /*0x698ee2*/
      if ( v34 ) /*0x698eea*/
      {
        sub_696C00((int *)this->unk084); /*0x698eee*/
        FormHeapFree(v34); /*0x698ef4*/
      }
      v6 = v43 == 0; /*0x698f00*/
      this->unk084 = v43; /*0x698f02*/
    }
    while ( !v6 ); /*0x698f08*/
    v10 = InterlockedDecrement; /*0x698f0e*/
  }
  unk09C = (int *)this->unk09C; /*0x698f14*/
  if ( unk09C ) /*0x698f1c*/
  {
    sub_6B7240(unk09C); /*0x698f1e*/
    v36 = this->unk09C; /*0x698f23*/
    if ( v36 ) /*0x698f2b*/
    {
      sub_6B73E0((_DWORD *)this->unk09C); /*0x698f2f*/
      FormHeapFree(v36); /*0x698f35*/
      this->unk09C = 0; /*0x698f3d*/
    }
  }
  v37 = this->niNode094; /*0x698f43*/
  LOBYTE(v45) = 4; /*0x698f4b*/
  if ( v37 ) /*0x698f50*/
  {
    if ( !v10((volatile LONG *)&v37->members) ) /*0x698f56*/
      v37->vtbl->super.super.super.Destructor((NiRefObject *)v37, 1); /*0x698f68*/
  }
  v38 = this->unk090; /*0x698f6a*/
  LOBYTE(v45) = 3; /*0x698f72*/
  if ( v38 ) /*0x698f77*/
  {
    if ( !v10((volatile LONG *)(v38 + 4)) ) /*0x698f7d*/
      (**(void (__thiscall ***)(UInt32, int))v38)(v38, 1); /*0x698f8f*/
  }
  v39 = this->unk08C; /*0x698f91*/
  LOBYTE(v45) = 2; /*0x698f99*/
  if ( v39 ) /*0x698f9e*/
  {
    if ( !v10((volatile LONG *)(v39 + 4)) ) /*0x698fa4*/
      (**(void (__thiscall ***)(UInt32, int))v39)(v39, 1); /*0x698fb6*/
  }
  v40 = this->niNode088; /*0x698fb8*/
  LOBYTE(v45) = 1; /*0x698fc0*/
  if ( v40 ) /*0x698fc5*/
  {
    if ( !v10((volatile LONG *)&v40->members) ) /*0x698fcb*/
      v40->vtbl->super.super.super.Destructor((NiRefObject *)v40, 1); /*0x698fdd*/
  }
  v41 = this->boltShaderProperty; /*0x698fdf*/
  LOBYTE(v45) = 0; /*0x698fe4*/
  if ( v41 ) /*0x698fe8*/
  {
    if ( !v10((volatile LONG *)v41 + 1) ) /*0x698fee*/
      a4 = ((double (__thiscall *)(BoltShaderProperty *, int))**(_DWORD **)v41)(v41, 1); /*0x699000*/
  }
  v45 = 0xFFFFFFFF; /*0x699004*/
  sub_69FA60((ActorVtbl *)this, (char)v10, a2, a3, a4); /*0x69900c*/
}
