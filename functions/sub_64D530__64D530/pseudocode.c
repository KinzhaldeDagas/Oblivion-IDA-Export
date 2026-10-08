void __userpurge sub_64D530(
        TESObjectREFR **this@<ecx>,
        double a2@<st1>,
        double a3@<st2>,
        double a4@<st0>,
        TESObjectREFR *a5)
{
  TESPackage *v7; // ebx
  Atmosphere *target; // ecx
  double PointerAtOffset08; // st7
  int v10; // eax
  TESObjectREFR *v11; // eax
  void *v12; // eax
  _DWORD *v13; // edi
  void *v14; // eax
  char v15; // al
  BSExtraDataVtbl *v16; // ebp
  int v17; // ebx
  TESWorldSpace *WorldSpace; // eax
  int v19; // ebx
  TESWorldSpace *v20; // eax
  float v21[3]; // [esp+24h] [ebp-Ch] BYREF
  float v22; // [esp+34h] [ebp+4h]

  v7 = (TESPackage *)((int (__usercall *)@<eax>(TESObjectREFR **@<ecx>, double@<st0>))LODWORD((*this)[4].member.rot.y))( /*0x64d54b*/
                       this,
                       a4);
  if ( !*(this + 0xB) ) /*0x64d543*/
    ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*this)[0xF].member.pos[1]))(this, a5); /*0x64d55a*/
  ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*this)[0xF].member.pos[2]))(this, a5); /*0x64d567*/
  target = (Atmosphere *)v7->members.target; /*0x64d569*/
  if ( target ) /*0x64d56e*/
  {
    PointerAtOffset08 = (double)(int)Shared_GetPointerAtOffset08(target); /*0x64d579*/
  }
  else
  {
    sub_566DB0(v7); /*0x64d581*/
    PointerAtOffset08 = (double)v10; /*0x64d58c*/
    if ( v10 < 0 ) /*0x64d590*/
      PointerAtOffset08 = PointerAtOffset08 + flt_A2FC78; /*0x64d592*/
  }
  v11 = *(this + 0xB); /*0x64d598*/
  v22 = PointerAtOffset08; /*0x64d59b*/
  if ( v11 && (a2 = v22, v22 < TesObjectREF_GetDistance(a5, v11, 0)) ) /*0x64d5bc*/
  {
    ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int, int, _DWORD, _DWORD))a5->vtbl[1].GetBaseForm)( /*0x64d5d1*/
      a5,
      a5,
      1,
      1,
      0,
      0);
    v12 = (void *)((int (__thiscall *)(TESObjectREFR **))LODWORD((*this)[4].member.rot.y))(this); /*0x64d5eb*/
    v13 = OblivionDynamicCast( /*0x64d5ff*/
            v12,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
            &FleePackage `RTTI Type Descriptor',
            0);
    v14 = OblivionDynamicCast( /*0x64d607*/
            *(this + 0xB),
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0);
    if ( v13 ) /*0x64d611*/
    {
      if ( v14 ) /*0x64d619*/
        sub_626C90(v13, (int)v14); /*0x64d622*/
    }
  }
  else if ( *(this + 0xB) /*0x64d651*/
         || (sub_566DC0(v7, kTerrainLODQuadRayDirectionZ, a2, a3, (Actor *)a5, 0, kTerrainLODQuadRayDirectionZ), v15) )
  {
    if ( !*((_BYTE *)this + 0xD0) ) /*0x64d6ef*/
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*this)[4].member.pos[2]))(this, a5); /*0x64d703*/
  }
  else
  {
    v16 = sub_566A40((char **)v7, (Actor *)a5); /*0x64d667*/
    sub_566B30(v7, v21, (Actor *)a5); /*0x64d669*/
    if ( *((_BYTE *)this + 0xD0) ) /*0x64d66e*/
    {
      v17 = (int)*this; /*0x64d677*/
      WorldSpace = TESObjectREFR_GetWorldSpace(a5); /*0x64d67b*/
      (*(void (__thiscall **)(TESObjectREFR **, TESObjectREFR *, _DWORD, _DWORD, _DWORD, BSExtraDataVtbl *, TESWorldSpace *))(v17 + 0x3DC))( /*0x64d6a4*/
        this,
        a5,
        LODWORD(v21[0]),
        LODWORD(v21[1]),
        LODWORD(v21[2]),
        v16,
        WorldSpace);
    }
    else
    {
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int))LODWORD((*this)[6].member.rot.z))(this, a5, 0x201); /*0x64d6c0*/
      v19 = (int)*this; /*0x64d6c6*/
      v20 = TESObjectREFR_GetWorldSpace(a5); /*0x64d6ce*/
      (*(void (__thiscall **)(TESObjectREFR **, TESObjectREFR *, float *, BSExtraDataVtbl *, TESWorldSpace *, float))(v19 + 0x414))( /*0x64d6e3*/
        this,
        a5,
        v21,
        v16,
        v20,
        COERCE_FLOAT(LODWORD(v22)));
    }
  }
}
