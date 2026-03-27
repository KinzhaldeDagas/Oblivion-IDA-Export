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

  v29 = this;
  v2 = (IOTask *)FormHeapAlloc(0x8Cu);
  v30 = v2;
  v31 = 0;
  if ( v2 )
  {
    v3 = (IOTask *)BoundItemEffect::BoundItemEffect(
                     (BoundItemEffect *)v2,
                     (MagicCaster *)*(this + 9),
                     (MagicItem *)*(this + 2),
                     (EffectItem *)*(this + 3));
    v28 = (int)v3;
  }
  else
  {
    v28 = 0;
    v3 = 0;
  }
  v31 = 0xFFFFFFFF;
  AssociatedItemEffect_CopyTo(this, v3);
  if ( *(this + 0xF) )
  {
    v4 = (IOTask *)FormHeapAlloc(0xCu);
    v30 = v4;
    v31 = 1;
    if ( v4 )
      v5 = sub_4844A0((unsigned __int8 ***)v4, *(this + 0xF));
    else
      v5 = 0;
    v31 = 0xFFFFFFFF;
    v3[2].members.unk0C = (UInt32)v5;
  }
  v6 = this + 0x10;
  v7 = (char *)v3 - (char *)this;
  v8 = 0x10;
  do
  {
    if ( *v6 )
    {
      v9 = (IOTask *)FormHeapAlloc(0xCu);
      v30 = v9;
      v31 = 2;
      if ( v9 )
        v10 = sub_4844A0((unsigned __int8 ***)v9, *v6);
      else
        v10 = 0;
      v31 = 0xFFFFFFFF;
      *(int *)((char *)v6 + v7) = (int)v10;
    }
    ++v6;
    --v8;
  }
  while ( v8 );
  v11 = v29;
  v12 = v29[0xF];
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
    v15 = v28;
    *(_BYTE *)(v28 + 0x86) = 1;
    v16 = (const char *)(*(int (__thiscall **)(int))(*((_DWORD *)v13 + 0xC) + 0x14))((int)v13 + 0x30);
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v28, v16, 0, 0, 0, 0, 1, 1);
    if ( v28 )
    {
      v17 = (void (__thiscall ***)(_DWORD, int))v28;
      if ( !InterlockedDecrement((volatile LONG *)(v28 + 8)) )
        (**v17)(v17, 1);
    }
  }
  else
  {
    v15 = v28;
  }
  if ( *((_BYTE *)v11 + 0x87) )
  {
    IsFemale = 0;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11[8] + 4))(v11[8]) )
    {
      v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v11[8] + 4))(v11[8]);
      v20 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x170))(v19);
      v21 = OblivionDynamicCast(
              v20,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESNPC `RTTI Type Descriptor',
              0);
      if ( v21 )
        IsFemale = TESActorBase_IsFemale(v21);
    }
    v22 = v11 + 0x10;
    v28 = 0x10;
    do
    {
      if ( *v22 )
      {
        v23 = *(void **)(*v22 + 8);
        if ( v23 )
        {
          v24 = (const char **)OblivionDynamicCast(
                                 v23,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESBipedModelForm `RTTI Type Descriptor',
                                 0);
          if ( v24 )
          {
            *(_BYTE *)(v15 + 0x87) = 1;
            ModelPath = (const char *)TESBipedModelForm_GetModelPath(v24, IsFemale);
            sub_43B420((int *)ModelLoaderPtr, &v30, ModelPath, 0, 0, 0, 0, 1, 1);
            if ( v30 )
            {
              v26 = v30;
              if ( !InterlockedDecrement((volatile LONG *)&v30->members.unk08) )
                (*(void (__thiscall **)(IOTask *, int))v26->vtbl)(v26, 1);
            }
          }
        }
      }
      ++v22;
      --v28;
    }
    while ( v28 );
    v11 = v29;
  }
  *(_BYTE *)(v15 + 0x84) = *((_BYTE *)v11 + 0x84);
  return v15;
}
