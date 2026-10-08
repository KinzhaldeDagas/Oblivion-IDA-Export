int __thiscall BoundItemEffect_Clone(int *this)
{
  IOTask *v2; // eax
  IOTask *v3; // edi
  IOTask *v4; // eax
  unsigned __int8 ***v5; // eax
  int *v6; // esi
  int v7; // edi
  int v8; // ebp
  IOTask *v9; // eax
  unsigned __int8 ***v10; // eax
  int *v11; // edi
  int v12; // eax
  void *v13; // eax
  unsigned int v14; // ecx
  int v15; // ebx
  const char *v16; // eax
  void (__thiscall ***v17)(_DWORD, int); // esi
  int IsFemale; // ebp
  int v19; // eax
  void *v20; // eax
  _BYTE *v21; // eax
  int *v22; // edi
  void *v23; // eax
  const char **v24; // eax
  const char *ModelPath; // eax
  IOTask *v26; // esi
  int v28; // [esp+14h] [ebp-18h] BYREF
  int *v29; // [esp+18h] [ebp-14h]
  IOTask *v30; // [esp+1Ch] [ebp-10h] BYREF
  int v31; // [esp+28h] [ebp-4h]

  v29 = this; /*0x690759*/
  v2 = (IOTask *)FormHeapAlloc(0x8Cu); /*0x690762*/
  v30 = v2; /*0x69076a*/
  v31 = 0; /*0x690772*/
  if ( v2 ) /*0x690776*/
  {
    v3 = (IOTask *)BoundItemEffect::BoundItemEffect( /*0x69078b*/
                     (BoundItemEffect *)v2,
                     (MagicCaster *)*(this + 9),
                     (MagicItem *)*(this + 2),
                     (EffectItem *)*(this + 3));
    v28 = (int)v3; /*0x69078d*/
  }
  else
  {
    v28 = 0; /*0x690793*/
    v3 = 0; /*0x690797*/
  }
  v31 = 0xFFFFFFFF; /*0x69079f*/
  AssociatedItemEffect_CopyTo(this, v3); /*0x6907a3*/
  if ( *(this + 0xF) ) /*0x6907a8*/
  {
    v4 = (IOTask *)FormHeapAlloc(0xCu); /*0x6907af*/
    v30 = v4; /*0x6907b7*/
    v31 = 1; /*0x6907bd*/
    if ( v4 ) /*0x6907c5*/
      v5 = sub_4844A0((unsigned __int8 ***)v4, *(this + 0xF)); /*0x6907cd*/
    else
      v5 = 0; /*0x6907d4*/
    v31 = 0xFFFFFFFF; /*0x6907d6*/
    v3[2].members.unk0C = (UInt32)v5; /*0x6907da*/
  }
  v6 = this + 0x10; /*0x6907dd*/
  v7 = (char *)v3 - (char *)this; /*0x6907e0*/
  v8 = 0x10; /*0x6907e2*/
  do /*0x69082a*/
  {
    if ( *v6 ) /*0x6907f0*/
    {
      v9 = (IOTask *)FormHeapAlloc(0xCu); /*0x6907f7*/
      v30 = v9; /*0x6907ff*/
      v31 = 2; /*0x690805*/
      if ( v9 ) /*0x690809*/
        v10 = sub_4844A0((unsigned __int8 ***)v9, *v6); /*0x690810*/
      else
        v10 = 0; /*0x690817*/
      v31 = 0xFFFFFFFF; /*0x690819*/
      *(int *)((char *)v6 + v7) = (int)v10; /*0x690821*/
    }
    ++v6; /*0x690824*/
    --v8; /*0x690827*/
  }
  while ( v8 ); /*0x69082a*/
  v11 = v29; /*0x69082c*/
  v12 = v29[0xF]; /*0x690830*/
  if ( v12
    && *((_BYTE *)v29 + 0x86)
    && (v13 = OblivionDynamicCast(
                *(void **)(v12 + 8),
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESObjectWEAP `RTTI Type Descriptor',
                0)) != 0
    && ((LOWORD(v14) = *((_WORD *)v13 + 0x1C), (_WORD)v14 != 0xFFFF)
      ? (v14 = (unsigned __int16)v14)
      : (v14 = strlen(*((const char **)v13 + 0xD))),
        v14) )
  {
    v15 = v28; /*0x690894*/
    *(_BYTE *)(v28 + 0x86) = 1; /*0x6908a3*/
    v16 = (const char *)(*(int (__thiscall **)(int))(*((_DWORD *)v13 + 0xC) + 0x14))((int)v13 + 0x30); /*0x6908b3*/
    sub_43B420((int *)MEMORY[0xB33A1C], (IOTask **)&v28, v16, 0, 0, 0, 0, 1, 1); /*0x6908c1*/
    if ( v28 ) /*0x6908cc*/
    {
      v17 = (void (__thiscall ***)(_DWORD, int))v28; /*0x6908ce*/
      if ( !InterlockedDecrement((volatile LONG *)(v28 + 8)) ) /*0x6908d4*/
        (**v17)(v17, 1); /*0x6908ea*/
    }
  }
  else
  {
    v15 = v28; /*0x6908ee*/
  }
  if ( *((_BYTE *)v11 + 0x87) ) /*0x6908f2*/
  {
    IsFemale = 0; /*0x690907*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11[8] + 4))(v11[8]) ) /*0x690909*/
    {
      v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v11[8] + 4))(v11[8]); /*0x690917*/
      v20 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x170))(v19); /*0x69092f*/
      v21 = OblivionDynamicCast( /*0x690932*/
              v20,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESNPC `RTTI Type Descriptor',
              0);
      if ( v21 ) /*0x69093c*/
        IsFemale = TESActorBase_IsFemale(v21); /*0x690945*/
    }
    v22 = v11 + 0x10; /*0x690947*/
    v28 = 0x10; /*0x69094a*/
    do /*0x6909d4*/
    {
      if ( *v22 ) /*0x690952*/
      {
        v23 = *(void **)(*v22 + 8); /*0x690958*/
        if ( v23 ) /*0x69095d*/
        {
          v24 = (const char **)OblivionDynamicCast( /*0x69096e*/
                                 v23,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESBipedModelForm `RTTI Type Descriptor',
                                 0);
          if ( v24 ) /*0x690978*/
          {
            *(_BYTE *)(v15 + 0x87) = 1; /*0x690989*/
            ModelPath = (const char *)TESBipedModelForm_GetModelPath(v24, IsFemale); /*0x690990*/
            sub_43B420((int *)MEMORY[0xB33A1C], &v30, ModelPath, 0, 0, 0, 0, 1, 1); /*0x6909a1*/
            if ( v30 ) /*0x6909ac*/
            {
              v26 = v30; /*0x6909ae*/
              if ( !InterlockedDecrement((volatile LONG *)&v30->members.unk08) ) /*0x6909b4*/
                (*(void (__thiscall **)(IOTask *, int))v26->vtbl)(v26, 1); /*0x6909ca*/
            }
          }
        }
      }
      ++v22; /*0x6909cc*/
      --v28; /*0x6909cf*/
    }
    while ( v28 ); /*0x6909d4*/
    v11 = v29; /*0x6909da*/
  }
  *(_BYTE *)(v15 + 0x84) = *((_BYTE *)v11 + 0x84); /*0x6909e4*/
  return v15; /*0x6909ec*/
}
