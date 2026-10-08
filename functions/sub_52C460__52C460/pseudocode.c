__int16 __thiscall sub_52C460(TESForm *this, TESForm *a2)
{
  void *v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // eax
  double v7; // st6
  double v8; // st7
  void (__thiscall *v9)(char *, int); // eax
  unsigned int v10; // ebx
  char *v11; // ebp
  unsigned int v12; // eax
  int v13; // eax
  const char *v14; // eax
  unsigned int v15; // ebp
  unsigned int i; // ebx
  const char *v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ebx
  TESFormVtbl **v22; // ebx
  TESFormVtbl **v23; // eax
  int v24; // ebx
  TESForm *v25; // ebx
  TESFormVtbl **v26; // eax
  char *v28; // [esp+10h] [ebp-4h]
  TESFormVtbl *vtbl; // [esp+10h] [ebp-4h]
  TESFormVtbl *v30; // [esp+10h] [ebp-4h]
  float a2e; // [esp+18h] [ebp+4h]
  float a2f; // [esp+18h] [ebp+4h]
  TESForm *a2a; // [esp+18h] [ebp+4h]
  TESForm *a2b; // [esp+18h] [ebp+4h]
  TESForm *a2c; // [esp+18h] [ebp+4h]
  TESForm *a2d; // [esp+18h] [ebp+4h]

  v3 = OblivionDynamicCast( /*0x52c479*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESRace `RTTI Type Descriptor',
         0);
  v4 = (int)v3; /*0x52c47e*/
  if ( v3 ) /*0x52c485*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x52c48e*/
    v5 = *(_DWORD *)(v4 + 0x300); /*0x52c493*/
    if ( !v5 ) /*0x52c49b*/
      v5 = v4; /*0x52c49d*/
    *((_DWORD *)this + 0xC0) = v5; /*0x52c49f*/
    v6 = *(_DWORD *)(v4 + 0x304); /*0x52c4a5*/
    if ( !v6 ) /*0x52c4ad*/
      v6 = v4; /*0x52c4af*/
    *((_DWORD *)this + 0xC1) = v6; /*0x52c4b3*/
    *((_DWORD *)this + 0x25) = *(_DWORD *)(v4 + 0x94); /*0x52c4bf*/
    *((_DWORD *)this + 0x26) = *(_DWORD *)(v4 + 0x98); /*0x52c4cb*/
    *((_BYTE *)this + 0x9C) = *(_BYTE *)(v4 + 0x9C); /*0x52c4d7*/
    if ( *(float *)(v4 + 0xA0) <= 0.0 ) /*0x52c4e8*/
      v7 = flt_A31E2C; /*0x52c4f2*/
    else
      v7 = *(float *)(v4 + 0xA0); /*0x52c4ea*/
    a2e = v7; /*0x52c4f8*/
    *((float *)this + 0x28) = a2e; /*0x52c500*/
    if ( *(float *)(v4 + 0xA4) <= 0.0 ) /*0x52c511*/
      v8 = *(float *)&dword_A46C30; /*0x52c51b*/
    else
      v8 = *(float *)(v4 + 0xA4); /*0x52c513*/
    a2f = v8; /*0x52c524*/
    v9 = *(void (__thiscall **)(char *, int))(*((_DWORD *)this + 0x1D) + 8); /*0x52c52c*/
    *((float *)this + 0x29) = a2f; /*0x52c532*/
    v9((char *)this + 0x74, v4 + 0x74); /*0x52c53d*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 0x20) + 8))((char *)this + 0x80, v4 + 0x80); /*0x52c555*/
    *((_BYTE *)this + 0x50) = *(_BYTE *)(v4 + 0x50); /*0x52c55b*/
    *((_BYTE *)this + 0x51) = *(_BYTE *)(v4 + 0x51); /*0x52c562*/
    *((_BYTE *)this + 0x52) = *(_BYTE *)(v4 + 0x52); /*0x52c569*/
    *((_BYTE *)this + 0x53) = *(_BYTE *)(v4 + 0x53); /*0x52c570*/
    *((_BYTE *)this + 0x54) = *(_BYTE *)(v4 + 0x54); /*0x52c577*/
    *((_BYTE *)this + 0x55) = *(_BYTE *)(v4 + 0x55); /*0x52c57e*/
    *((_BYTE *)this + 0x56) = *(_BYTE *)(v4 + 0x56); /*0x52c585*/
    *((_BYTE *)this + 0x57) = *(_BYTE *)(v4 + 0x57); /*0x52c58c*/
    *((_BYTE *)this + 0x58) = *(_BYTE *)(v4 + 0x58); /*0x52c593*/
    *((_BYTE *)this + 0x59) = *(_BYTE *)(v4 + 0x59); /*0x52c59a*/
    *((_BYTE *)this + 0x5A) = *(_BYTE *)(v4 + 0x5A); /*0x52c5a1*/
    *((_BYTE *)this + 0x5B) = *(_BYTE *)(v4 + 0x5B); /*0x52c5a8*/
    *((_BYTE *)this + 0x5C) = *(_BYTE *)(v4 + 0x5C); /*0x52c5af*/
    *((_BYTE *)this + 0x5D) = *(_BYTE *)(v4 + 0x5D); /*0x52c5b6*/
    v10 = 0; /*0x52c5c2*/
    *((float *)this + 0x18) = *(float *)(v4 + 0x60); /*0x52c5c4*/
    a2a = (TESForm *)((char *)this + 0x1BC); /*0x52c5c7*/
    v11 = (char *)this + 0xE0; /*0x52c5ce*/
    *((float *)this + 0x1A) = *(float *)(v4 + 0x68); /*0x52c5d4*/
    *((float *)this + 0x19) = *(float *)(v4 + 0x64); /*0x52c5da*/
    *((float *)this + 0x1B) = *(float *)(v4 + 0x6C); /*0x52c5e0*/
    *((_DWORD *)this + 0x1C) = *(_DWORD *)(v4 + 0x70); /*0x52c5e6*/
    do /*0x52c644*/
    {
      v12 = sub_52BC50(v4, v10); /*0x52c5f3*/
      v13 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)v12 + 0x14))(v12); /*0x52c5ff*/
      (*(void (__thiscall **)(char *, int))(*(_DWORD *)v11 + 0x18))(v11, v13); /*0x52c60f*/
      v14 = *(const char **)(sub_52BD00(v4, v10) + 4); /*0x52c619*/
      if ( !v14 ) /*0x52c61e*/
        v14 = EmptyString; /*0x52c620*/
      BSStringT_Set((BSStringT *)a2a, v14, 0); /*0x52c631*/
      a2a = (TESForm *)((char *)a2a + 0xC); /*0x52c636*/
      ++v10; /*0x52c63b*/
      v11 += 0x18; /*0x52c63e*/
    }
    while ( v10 < 9 ); /*0x52c644*/
    v15 = 0; /*0x52c646*/
    a2b = 0; /*0x52c64e*/
    v28 = (char *)this + 0xB0; /*0x52c652*/
    do /*0x52c6f2*/
    {
      for ( i = 0; i < 5; ++i ) /*0x52c656*/
      {
        if ( v15 > 5 ) /*0x52c65b*/
        {
          v17 = 0; /*0x52c67d*/
        }
        else
        {
          v17 = *(const char **)(v4 + 0xC * (i + v15) + 0x228); /*0x52c66f*/
          if ( !v17 ) /*0x52c674*/
            v17 = EmptyString; /*0x52c676*/
        }
        if ( v15 <= 5 ) /*0x52c682*/
          BSStringT_Set((BSStringT *)((char *)this + 0xC * i + 0xC * v15 + 0x228), v17, 0); /*0x52c696*/
      }
      if ( sub_52BDB0(v4, (unsigned int)a2b) ) /*0x52c6aa*/
      {
        v19 = sub_52BDB0(v18, (unsigned int)a2b); /*0x52c6b8*/
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x14))(v19); /*0x52c6c4*/
        if ( (unsigned int)a2b <= 1 ) /*0x52c6c9*/
          (*(void (__thiscall **)(char *, int))(*(_DWORD *)v28 + 0x18))(v28, v20); /*0x52c6cc*/
      }
      else if ( (unsigned int)a2b <= 1 ) /*0x52c6d3*/
      {
        (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v28 + 0x18))(v28, 0); /*0x52c6e0*/
      }
      a2b = (TESForm *)((char *)a2b + 1); /*0x52c6e2*/
      v28 += 0x18; /*0x52c6e7*/
      v15 += 5; /*0x52c6ec*/
    }
    while ( v15 < 0xA ); /*0x52c6f2*/
    a2c = (TESForm *)(v4 + 0x8C); /*0x52c70b*/
    if ( *((_DWORD *)this + 0x24) ) /*0x52c6f8*/
    {
      do /*0x52c725*/
      {
        v21 = *(_DWORD *)(*((_DWORD *)this + 0x24) + 4); /*0x52c714*/
        FormHeapFree(*((_DWORD *)this + 0x24)); /*0x52c718*/
        *((_DWORD *)this + 0x24) = v21; /*0x52c722*/
      }
      while ( v21 ); /*0x52c725*/
    }
    *((_DWORD *)this + 0x23) = 0; /*0x52c72c*/
    if ( v4 != 0xFFFFFF74 ) /*0x52c733*/
    {
      do /*0x52c794*/
      {
        vtbl = a2c->vtbl; /*0x52c73d*/
        if ( !a2c->vtbl ) /*0x52c73d*/
          break; /*0x52c741*/
        v22 = (TESFormVtbl **)((char *)this + 0x8C); /*0x52c743*/
        if ( *((_DWORD *)this + 0x24) ) /*0x52c745*/
        {
          do /*0x52c753*/
            v22 = (TESFormVtbl **)v22[1]; /*0x52c750*/
          while ( v22[1] ); /*0x52c753*/
        }
        if ( *v22 ) /*0x52c759*/
        {
          v23 = (TESFormVtbl **)FormHeapAlloc(8u); /*0x52c760*/
          if ( v23 ) /*0x52c76a*/
          {
            *v23 = vtbl; /*0x52c770*/
            v23[1] = 0; /*0x52c772*/
            v22[1] = (TESFormVtbl *)v23; /*0x52c779*/
          }
          else
          {
            v22[1] = 0; /*0x52c780*/
          }
        }
        else
        {
          *v22 = a2c->vtbl; /*0x52c785*/
        }
        a2c = *(TESForm **)&a2c->member.type; /*0x52c790*/
      }
      while ( a2c ); /*0x52c794*/
    }
    a2d = (TESForm *)(v4 + 0xA8); /*0x52c7a9*/
    if ( *((_DWORD *)this + 0x2B) ) /*0x52c796*/
    {
      do /*0x52c7c4*/
      {
        v24 = *(_DWORD *)(*((_DWORD *)this + 0x2B) + 4); /*0x52c7b3*/
        FormHeapFree(*((_DWORD *)this + 0x2B)); /*0x52c7b7*/
        *((_DWORD *)this + 0x2B) = v24; /*0x52c7c1*/
      }
      while ( v24 ); /*0x52c7c4*/
    }
    *((_DWORD *)this + 0x2A) = 0; /*0x52c7cb*/
    if ( v4 != 0xFFFFFF58 ) /*0x52c7d2*/
    {
      do /*0x52c834*/
      {
        v30 = a2d->vtbl; /*0x52c7dc*/
        if ( !a2d->vtbl ) /*0x52c7dc*/
          break; /*0x52c7e0*/
        v25 = this + 7; /*0x52c7e2*/
        if ( *((_DWORD *)this + 0x2B) ) /*0x52c7e4*/
        {
          do /*0x52c7f3*/
            v25 = *(TESForm **)&v25->member.type; /*0x52c7f0*/
          while ( *(_DWORD *)&v25->member.type ); /*0x52c7f3*/
        }
        if ( v25->vtbl ) /*0x52c7f9*/
        {
          v26 = (TESFormVtbl **)FormHeapAlloc(8u); /*0x52c800*/
          if ( v26 ) /*0x52c80a*/
          {
            *v26 = v30; /*0x52c810*/
            v26[1] = 0; /*0x52c812*/
            *(_DWORD *)&v25->member.type = v26; /*0x52c819*/
          }
          else
          {
            *(_DWORD *)&v25->member.type = 0; /*0x52c820*/
          }
        }
        else
        {
          v25->vtbl = a2d->vtbl; /*0x52c825*/
        }
        a2d = *(TESForm **)&a2d->member.type; /*0x52c830*/
      }
      while ( a2d ); /*0x52c834*/
    }
    FaceGenHeadParameters_Copy( /*0x52c844*/
      (const FaceGenHeadParameters *)(v4 + 0x29C),
      (FaceGenHeadParameters *)((char *)this + 0x29C));
    LOWORD(v3) = *(_WORD *)(v4 + 0x2FC); /*0x52c849*/
    *((_WORD *)this + 0x17E) = (_WORD)v3; /*0x52c853*/
  }
  return (__int16)v3; /*0x52c85b*/
}
