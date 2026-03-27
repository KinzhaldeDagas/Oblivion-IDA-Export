void __usercall CombatController::~CombatController(
        CombatController *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>)
{
  TESSaveLoad *v5; // ecx
  _DWORD *v6; // ecx
  PlayerCharacter *v7; // edi
  int v8; // edx
  int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // eax
  _DWORD *v13; // edi
  _DWORD *v14; // ecx
  NiTMap_Entry_TESCELL *v15; // eax
  NiTMap_TESCELL *v16; // ecx
  _DWORD *v17; // edi
  void (__thiscall ***v18)(_DWORD, int); // ecx
  TESObjectREFR ***v19; // edi
  TESObjectREFR **i; // eax
  char ***v21; // edi
  char ***v22; // ebp
  char **v23; // eax
  unsigned int v24; // ebx
  _DWORD *v25; // ecx
  _DWORD *v26; // ecx
  char ***v27; // edi
  char ***v28; // ebp
  char **v29; // eax
  unsigned int v30; // ebx
  _DWORD *v31; // ecx
  char ***v32; // edi
  char ***v33; // ebp
  char **v34; // eax
  unsigned int v35; // ebx
  _DWORD *v36; // ecx
  _DWORD *v37; // ecx
  char **v38; // eax
  char **v39; // eax
  char **v40; // eax
  char **v41; // eax
  char **v42; // eax
  int v43; // edi
  _DWORD *v44; // [esp+14h] [ebp-1Ch] BYREF
  NiTMap_Entry_TESCELL *v45[2]; // [esp+18h] [ebp-18h] BYREF
  void *v46; // [esp+20h] [ebp-10h] BYREF
  unsigned int v47; // [esp+2Ch] [ebp-4h]

  v45[1] = (NiTMap_Entry_TESCELL *)this;
  *(_DWORD *)this = &CombatController::`vftable';
  v5 = SaveLoad_CurrentSavegame;
  --dword_B3B914;
  v47 = 0;
  if ( !sub_45A500(v5) )
  {
    v6 = *((_DWORD **)this + 0xF);
    if ( v6 )
    {
      if ( Actor_IsBlocking(v6) )
        sub_5F4AE0(*((Actor **)this + 0xF), a2, a3, a4, 0);
    }
  }
  v7 = TESDataHandler_g_PlayerRef;
  if ( sub_613670(this, (int)TESDataHandler_g_PlayerRef) )
    --v7->unk760[0x10];
  if ( --dword_B3B910 < 0 )
    dword_B3B910 = 0;
  v10 = *((_DWORD *)this + 0x63);
  *((_BYTE *)this + 0x1A4) = 1;
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 4);
    v12 = 0;
    if ( v11 )
    {
      v13 = *(_DWORD **)(v10 + 8);
      v14 = v13;
      while ( !*v14 )
      {
        ++v12;
        ++v14;
        if ( v12 >= v11 )
          goto LABEL_14;
      }
      v15 = (NiTMap_Entry_TESCELL *)v13[v12];
    }
    else
    {
LABEL_14:
      v15 = 0;
    }
    v45[0] = v15;
    while ( v45[0] )
    {
      v16 = *((NiTMap_TESCELL **)this + 0x63);
      v44 = 0;
      sub_452600(v16, v45, &v46, (TESObjectCELL **)&v44);
      v17 = v44;
      if ( v44 )
      {
        sub_6B7240(v44);
        sub_6B73E0(v17);
        FormHeapFree((unsigned int)v17);
      }
    }
    NiTMap_Clear(*((_DWORD **)this + 0x63));
    v18 = *((void (__thiscall ****)(_DWORD, int))this + 0x63);
    if ( v18 )
      (**v18)(v18, 1);
  }
  v19 = *((TESObjectREFR ****)this + 0x10);
  if ( v19 )
  {
    for ( i = *v19; *v19; i = *v19 )
      sub_6162D0((float *)this, *i);
  }
  if ( *((_DWORD *)this + 0x10) )
    FormHeapFree(*((_DWORD *)this + 0x10));
  if ( *((_DWORD *)this + 0x46) )
    sub_612C70((unsigned int *)this);
  v21 = *((char ****)this + 0x18);
  if ( v21 )
  {
    do
    {
      v22 = (char ***)v21[1];
      if ( !v22 && !*v21 )
        break;
      v23 = *v21;
      if ( *v21 )
      {
        if ( v23[1] )
        {
          v24 = (unsigned int)v23[1];
          if ( v24 )
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v23[1], v8);
            FormHeapFree(v24);
          }
        }
        if ( **v21 )
          sub_419F10(**v21, 1);
        FormHeapFree((unsigned int)*v21);
      }
      v21 = v22;
    }
    while ( v22 );
  }
  v25 = *((_DWORD **)this + 0x18);
  if ( v25 )
  {
    BSSimpleList_Clear(v25);
    FormHeapFree(*((_DWORD *)this + 0x18));
  }
  v26 = *((_DWORD **)this + 0x1A);
  if ( v26 )
  {
    BSSimpleList_Clear(v26);
    FormHeapFree(*((_DWORD *)this + 0x1A));
  }
  v27 = *((char ****)this + 0x19);
  if ( v27 )
  {
    do
    {
      v28 = (char ***)v27[1];
      if ( !v28 && !*v27 )
        break;
      v29 = *v27;
      if ( *v27 )
      {
        if ( v29[1] )
        {
          v30 = (unsigned int)v29[1];
          if ( v30 )
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v29[1], v8);
            FormHeapFree(v30);
          }
        }
        if ( **v27 )
          sub_419F10(**v27, 1);
        FormHeapFree((unsigned int)*v27);
      }
      v27 = v28;
    }
    while ( v28 );
  }
  v31 = *((_DWORD **)this + 0x19);
  if ( v31 )
  {
    BSSimpleList_Clear(v31);
    FormHeapFree(*((_DWORD *)this + 0x19));
  }
  v32 = *((char ****)this + 0x17);
  if ( v32 )
  {
    do
    {
      v33 = (char ***)v32[1];
      if ( !v33 && !*v32 )
        break;
      v34 = *v32;
      if ( *v32 )
      {
        if ( v34[1] )
        {
          v35 = (unsigned int)v34[1];
          if ( v35 )
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v34[1], v8);
            FormHeapFree(v35);
          }
        }
        if ( **v32 )
          sub_419F10(**v32, 1);
        FormHeapFree((unsigned int)*v32);
      }
      v32 = v33;
    }
    while ( v33 );
  }
  v36 = *((_DWORD **)this + 0x17);
  if ( v36 )
  {
    BSSimpleList_Clear(v36);
    FormHeapFree(*((_DWORD *)this + 0x17));
  }
  v37 = *((_DWORD **)this + 0x29);
  if ( v37 )
  {
    BSSimpleList_Clear(v37);
    FormHeapFree(*((_DWORD *)this + 0x29));
  }
  v38 = *((char ***)this + 0x25);
  if ( v38 )
  {
    if ( *v38 )
      sub_419F10(*v38, 1);
    FormHeapFree(*((_DWORD *)this + 0x25));
  }
  v39 = *((char ***)this + 0x26);
  if ( v39 )
  {
    if ( *v39 )
      sub_419F10(*v39, 1);
    FormHeapFree(*((_DWORD *)this + 0x26));
  }
  v40 = *((char ***)this + 0x27);
  if ( v40 )
  {
    if ( *v40 )
      sub_419F10(*v40, 1);
    FormHeapFree(*((_DWORD *)this + 0x27));
  }
  v41 = *((char ***)this + 0x24);
  if ( v41 )
  {
    if ( *v41 )
      sub_419F10(*v41, 1);
    FormHeapFree(*((_DWORD *)this + 0x24));
  }
  v42 = *((char ***)this + 0x28);
  if ( v42 )
  {
    if ( *v42 )
      sub_419F10(*v42, 1);
    FormHeapFree(*((_DWORD *)this + 0x28));
  }
  if ( *((_DWORD *)this + 0x58) )
  {
    do
    {
      v43 = *(_DWORD *)(*((_DWORD *)this + 0x58) + 4);
      FormHeapFree(*((_DWORD *)this + 0x58));
      *((_DWORD *)this + 0x58) = v43;
    }
    while ( v43 );
  }
  *((_DWORD *)this + 0x57) = 0;
  v47 = 0xFFFFFFFF;
  TESPackage::~TESPackage((TESPackage *)this);
}
