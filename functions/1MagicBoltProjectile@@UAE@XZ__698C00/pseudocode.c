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
  int *unk084; // eax
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

  v44 = this;
  this->super.super.vtbl = (MobileObjectVtbl *)&MagicBoltProjectile::`vftable'{for `MagicBoltProjectile'};
  this->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicBoltProjectile::`vftable'{for `TESChildCell'};
  v5 = TESDataHandler_g_PlayerRef;
  v6 = TESDataHandler_g_PlayerRef == 0;
  v45 = 5;
  if ( v6 )
    p_magicCaster = 0;
  else
    p_magicCaster = &v5->super.super.magicCaster;
  if ( this->super.caster != p_magicCaster )
  {
    v8 = fMagicTrackingMultBolt;
    if ( v8 < dbl_A2FC68 )
      v8 = 0.0;
    v42 = v8;
    fNumberOfWeightedProjectileExisting = fNumberOfWeightedProjectileExisting - v42;
  }
  BSSimpleList_Remove((int *)ActorProcessManager_ptr.unk4C, (int)this);
  sub_7F4420((int)this->niNode088, (int)this->boltShaderProperty);
  boltShaderProperty = this->boltShaderProperty;
  v10 = InterlockedDecrement;
  if ( boltShaderProperty )
  {
    if ( !v10((volatile LONG *)boltShaderProperty + 1) )
      (**(void (__thiscall ***)(BoltShaderProperty *, int))boltShaderProperty)(boltShaderProperty, 1);
    this->boltShaderProperty = 0;
  }
  niNode088 = this->niNode088;
  if ( niNode088 )
  {
    m_parent = niNode088->members.super.m_parent;
    if ( m_parent )
    {
      m_parent->vtbl->RemoveObject(m_parent, (NiAVObject **)&v42, (NiAVObject *)this->niNode088);
      if ( v42 != 0.0 )
      {
        v13 = v42;
        if ( !v10((volatile LONG *)(LODWORD(v42) + 4)) )
          (**(void (__thiscall ***)(float, int))LODWORD(v13))(COERCE_FLOAT(LODWORD(v13)), 1);
      }
    }
  }
  niNode094 = this->niNode094;
  if ( niNode094 )
  {
    if ( !v10((volatile LONG *)&niNode094->members) )
      niNode094->vtbl->super.super.super.Destructor((NiRefObject *)niNode094, 1);
    this->niNode094 = 0;
  }
  v15 = this->niNode088;
  if ( v15 )
  {
    if ( !v10((volatile LONG *)&v15->members) )
      v15->vtbl->super.super.super.Destructor((NiRefObject *)v15, 1);
    this->niNode088 = 0;
  }
  unk08C = this->unk08C;
  if ( unk08C )
  {
    if ( !v10((volatile LONG *)(unk08C + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk08C)(unk08C, 1);
    this->unk08C = 0;
  }
  unk090 = this->unk090;
  if ( unk090 )
  {
    if ( !v10((volatile LONG *)(unk090 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk090)(unk090, 1);
    this->unk090 = 0;
  }
  if ( this->unk084 )
  {
    do
    {
      unk084 = (int *)this->unk084;
      v43 = unk084[7];
      sub_7F4420(unk084[1], *unk084);
      v19 = (int *)this->unk084;
      v20 = *v19;
      if ( *v19 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
        {
          if ( v20 )
            (**(void (__thiscall ***)(int, int))v20)(v20, 1);
        }
        *v19 = 0;
      }
      v21 = this->unk084;
      v22 = *(_DWORD *)(v21 + 4);
      if ( v22 )
      {
        v23 = *(_DWORD *)(v22 + 0x1C);
        if ( v23 )
        {
          (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v23 + 0x88))(v23, &v42, *(_DWORD *)(v21 + 4));
          if ( v42 != 0.0 )
          {
            v24 = v42;
            if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v42) + 4)) )
              (**(void (__thiscall ***)(float, int))LODWORD(v24))(COERCE_FLOAT(LODWORD(v24)), 1);
          }
        }
      }
      v25 = this->unk084;
      v26 = *(_DWORD *)(v25 + 4);
      v27 = (_DWORD *)(v25 + 4);
      if ( v26 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) )
          (**(void (__thiscall ***)(int, int))v26)(v26, 1);
        *v27 = 0;
      }
      v28 = this->unk084;
      v29 = *(_DWORD *)(v28 + 0x14);
      v30 = (_DWORD *)(v28 + 0x14);
      if ( v29 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) )
          (**(void (__thiscall ***)(int, int))v29)(v29, 1);
        *v30 = 0;
      }
      v31 = this->unk084;
      v32 = *(_DWORD *)(v31 + 0x18);
      v33 = (_DWORD *)(v31 + 0x18);
      if ( v32 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v32 + 4)) )
          (**(void (__thiscall ***)(int, int))v32)(v32, 1);
        *v33 = 0;
      }
      v34 = this->unk084;
      if ( v34 )
      {
        sub_696C00((int *)this->unk084);
        FormHeapFree(v34);
      }
      v6 = v43 == 0;
      this->unk084 = v43;
    }
    while ( !v6 );
    v10 = InterlockedDecrement;
  }
  unk09C = (int *)this->unk09C;
  if ( unk09C )
  {
    sub_6B7240(unk09C);
    v36 = this->unk09C;
    if ( v36 )
    {
      sub_6B73E0((_DWORD *)this->unk09C);
      FormHeapFree(v36);
      this->unk09C = 0;
    }
  }
  v37 = this->niNode094;
  LOBYTE(v45) = 4;
  if ( v37 )
  {
    if ( !v10((volatile LONG *)&v37->members) )
      v37->vtbl->super.super.super.Destructor((NiRefObject *)v37, 1);
  }
  v38 = this->unk090;
  LOBYTE(v45) = 3;
  if ( v38 )
  {
    if ( !v10((volatile LONG *)(v38 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v38)(v38, 1);
  }
  v39 = this->unk08C;
  LOBYTE(v45) = 2;
  if ( v39 )
  {
    if ( !v10((volatile LONG *)(v39 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v39)(v39, 1);
  }
  v40 = this->niNode088;
  LOBYTE(v45) = 1;
  if ( v40 )
  {
    if ( !v10((volatile LONG *)&v40->members) )
      v40->vtbl->super.super.super.Destructor((NiRefObject *)v40, 1);
  }
  v41 = this->boltShaderProperty;
  LOBYTE(v45) = 0;
  if ( v41 )
  {
    if ( !v10((volatile LONG *)v41 + 1) )
      a4 = ((double (__thiscall *)(BoltShaderProperty *, int))**(_DWORD **)v41)(v41, 1);
  }
  v45 = 0xFFFFFFFF;
  sub_69FA60((TESForm *)this, (char)v10, a2, a3, a4);
}
