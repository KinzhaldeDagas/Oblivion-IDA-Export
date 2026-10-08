void __thiscall sub_66CF80(TESObjectREFR *this, int a2)
{
  UInt32 v3; // eax
  unsigned int v4; // eax
  int i; // eax
  _DWORD *v6; // ecx
  unsigned int v7; // eax
  float v8; // edi
  _DWORD *v9; // ecx
  int v10; // edi
  TESClass *v11; // eax

  sub_612110(this, a2, a2); /*0x66cf89*/
  v3 = g_TESSaveLoadGame->unk030[5]; /*0x66cf93*/
  if ( v3 == 0x1FFFF000 || v3 == 0x7FFFF000 ) /*0x66cfa2*/
  {
    sub_424770(&this->member.baseExtraList); /*0x66cfac*/
    unk_B3BB08 = 0.0; /*0x66cfb5*/
    MEMORY[0xB3BAD4] = 0; /*0x66cfbb*/
    *((float *)this + 0x1C0) = 0.0; /*0x66cfc1*/
    v4 = *((_DWORD *)this + 0x16C); /*0x66cfc7*/
    MEMORY[0xB3BAD0] = 0; /*0x66cfcf*/
    *((_DWORD *)this + 0x1E8) = 0xFFFFFFFF; /*0x66cfd5*/
    unk_B3BB05 = 0; /*0x66cfdf*/
    MEMORY[0xB3BB04] = 0; /*0x66cfe5*/
    *((_BYTE *)this + 0x116) = 0; /*0x66cfeb*/
    if ( v4 ) /*0x66cff1*/
    {
      FormHeapFree(v4); /*0x66cff4*/
      *((_DWORD *)this + 0x16C) = 0; /*0x66cffb*/
      *((_DWORD *)this + 0x16C) = FormHeapAlloc(0x54u); /*0x66d00b*/
      for ( i = 0; i < 0x54; i += 4 ) /*0x66d011*/
        *(float *)(i + *((_DWORD *)this + 0x16C)) = 0.0; /*0x66d019*/
    }
    v6 = *((_DWORD **)this + 0x16B); /*0x66d026*/
    if ( v6 ) /*0x66d02e*/
    {
      BSSimpleList_Clear(v6); /*0x66d030*/
      FormHeapFree(*((_DWORD *)this + 0x16B)); /*0x66d03c*/
      *((_DWORD *)this + 0x16B) = 0; /*0x66d044*/
    }
    v7 = LODWORD(qword_B3BB2C[7]); /*0x66d04a*/
    if ( LODWORD(qword_B3BB2C[7]) ) /*0x66d04a*/
    {
      do /*0x66d069*/
      {
        v8 = *(float *)(v7 + 4); /*0x66d054*/
        FormHeapFree(v7); /*0x66d058*/
        v7 = LODWORD(v8); /*0x66d062*/
        qword_B3BB2C[7] = v8; /*0x66d064*/
      }
      while ( v8 != 0.0 ); /*0x66d069*/
    }
    qword_B3BB2C[6] = 0.0; /*0x66d06b*/
    ActiveEffect_Base_PreLoadAEList(*((_DWORD **)this + 0x79), (int)this); /*0x66d079*/
    if ( (a2 & 0x2000000) != 0 ) /*0x66d087*/
    {
      v9 = *((_DWORD **)this + 0x173); /*0x66d089*/
      if ( v9 ) /*0x66d091*/
        ActorAnimData_ResetAllSequences(v9, (int)this); /*0x66d094*/
    }
    *((_DWORD *)this + 0x1C4) = GetTickCount(); /*0x66d0a1*/
    sub_66A670(this); /*0x66d0a7*/
    if ( *((_DWORD *)this + 0x1E1) ) /*0x66d0ac*/
    {
      do /*0x66d0ce*/
      {
        v10 = *(_DWORD *)(*((_DWORD *)this + 0x1E1) + 4); /*0x66d0ba*/
        FormHeapFree(*((_DWORD *)this + 0x1E1)); /*0x66d0be*/
        *((_DWORD *)this + 0x1E1) = v10; /*0x66d0c8*/
      }
      while ( v10 ); /*0x66d0ce*/
    }
    *((_DWORD *)this + 0x1E0) = 0; /*0x66d0d3*/
    InterfaceManager_GetSingleton(0, 1)->unk0C0[0x13] = 0; /*0x66d0e1*/
    InterfaceManager_GetSingleton(0, 1)->unk0C0[0x14] = 0; /*0x66d0ec*/
    v11 = (TESClass *)TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x8C])); /*0x66d102*/
    if ( v11 ) /*0x66d10a*/
      TESClass_SetPlayable(v11, 0); /*0x66d10f*/
  }
}
