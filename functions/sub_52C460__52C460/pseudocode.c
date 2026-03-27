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

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESRace `RTTI Type Descriptor',
         0);
  v4 = (int)v3;
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    v5 = *(_DWORD *)(v4 + 0x300);
    if ( !v5 )
      v5 = v4;
    *((_DWORD *)this + 0xC0) = v5;
    v6 = *(_DWORD *)(v4 + 0x304);
    if ( !v6 )
      v6 = v4;
    *((_DWORD *)this + 0xC1) = v6;
    *((_DWORD *)this + 0x25) = *(_DWORD *)(v4 + 0x94);
    *((_DWORD *)this + 0x26) = *(_DWORD *)(v4 + 0x98);
    *((_BYTE *)this + 0x9C) = *(_BYTE *)(v4 + 0x9C);
    if ( *(float *)(v4 + 0xA0) <= 0.0 )
      v7 = flt_A31E2C;
    else
      v7 = *(float *)(v4 + 0xA0);
    a2e = v7;
    *((float *)this + 0x28) = a2e;
    if ( *(float *)(v4 + 0xA4) <= 0.0 )
      v8 = *(float *)&dword_A46C30;
    else
      v8 = *(float *)(v4 + 0xA4);
    a2f = v8;
    v9 = *(void (__thiscall **)(char *, int))(*((_DWORD *)this + 0x1D) + 8);
    *((float *)this + 0x29) = a2f;
    v9((char *)this + 0x74, v4 + 0x74);
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 0x20) + 8))((char *)this + 0x80, v4 + 0x80);
    *((_BYTE *)this + 0x50) = *(_BYTE *)(v4 + 0x50);
    *((_BYTE *)this + 0x51) = *(_BYTE *)(v4 + 0x51);
    *((_BYTE *)this + 0x52) = *(_BYTE *)(v4 + 0x52);
    *((_BYTE *)this + 0x53) = *(_BYTE *)(v4 + 0x53);
    *((_BYTE *)this + 0x54) = *(_BYTE *)(v4 + 0x54);
    *((_BYTE *)this + 0x55) = *(_BYTE *)(v4 + 0x55);
    *((_BYTE *)this + 0x56) = *(_BYTE *)(v4 + 0x56);
    *((_BYTE *)this + 0x57) = *(_BYTE *)(v4 + 0x57);
    *((_BYTE *)this + 0x58) = *(_BYTE *)(v4 + 0x58);
    *((_BYTE *)this + 0x59) = *(_BYTE *)(v4 + 0x59);
    *((_BYTE *)this + 0x5A) = *(_BYTE *)(v4 + 0x5A);
    *((_BYTE *)this + 0x5B) = *(_BYTE *)(v4 + 0x5B);
    *((_BYTE *)this + 0x5C) = *(_BYTE *)(v4 + 0x5C);
    *((_BYTE *)this + 0x5D) = *(_BYTE *)(v4 + 0x5D);
    v10 = 0;
    *((float *)this + 0x18) = *(float *)(v4 + 0x60);
    a2a = (TESForm *)((char *)this + 0x1BC);
    v11 = (char *)this + 0xE0;
    *((float *)this + 0x1A) = *(float *)(v4 + 0x68);
    *((float *)this + 0x19) = *(float *)(v4 + 0x64);
    *((float *)this + 0x1B) = *(float *)(v4 + 0x6C);
    *((_DWORD *)this + 0x1C) = *(_DWORD *)(v4 + 0x70);
    do
    {
      v12 = sub_52BC50(v4, v10);
      v13 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)v12 + 0x14))(v12);
      (*(void (__thiscall **)(char *, int))(*(_DWORD *)v11 + 0x18))(v11, v13);
      v14 = *(const char **)(sub_52BD00(v4, v10) + 4);
      if ( !v14 )
        v14 = EmptyString;
      BSStringT_Set((BSStringT *)a2a, v14, 0);
      a2a = (TESForm *)((char *)a2a + 0xC);
      ++v10;
      v11 += 0x18;
    }
    while ( v10 < 9 );
    v15 = 0;
    a2b = 0;
    v28 = (char *)this + 0xB0;
    do
    {
      for ( i = 0; i < 5; ++i )
      {
        if ( v15 > 5 )
        {
          v17 = 0;
        }
        else
        {
          v17 = *(const char **)(v4 + 0xC * (i + v15) + 0x228);
          if ( !v17 )
            v17 = EmptyString;
        }
        if ( v15 <= 5 )
          BSStringT_Set((BSStringT *)((char *)this + 0xC * i + 0xC * v15 + 0x228), v17, 0);
      }
      if ( sub_52BDB0(v4, (unsigned int)a2b) )
      {
        v19 = sub_52BDB0(v18, (unsigned int)a2b);
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x14))(v19);
        if ( (unsigned int)a2b <= 1 )
          (*(void (__thiscall **)(char *, int))(*(_DWORD *)v28 + 0x18))(v28, v20);
      }
      else if ( (unsigned int)a2b <= 1 )
      {
        (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v28 + 0x18))(v28, 0);
      }
      a2b = (TESForm *)((char *)a2b + 1);
      v28 += 0x18;
      v15 += 5;
    }
    while ( v15 < 0xA );
    a2c = (TESForm *)(v4 + 0x8C);
    if ( *((_DWORD *)this + 0x24) )
    {
      do
      {
        v21 = *(_DWORD *)(*((_DWORD *)this + 0x24) + 4);
        FormHeapFree(*((_DWORD *)this + 0x24));
        *((_DWORD *)this + 0x24) = v21;
      }
      while ( v21 );
    }
    *((_DWORD *)this + 0x23) = 0;
    if ( v4 != 0xFFFFFF74 )
    {
      do
      {
        vtbl = a2c->vtbl;
        if ( !a2c->vtbl )
          break;
        v22 = (TESFormVtbl **)((char *)this + 0x8C);
        if ( *((_DWORD *)this + 0x24) )
        {
          do
            v22 = (TESFormVtbl **)v22[1];
          while ( v22[1] );
        }
        if ( *v22 )
        {
          v23 = (TESFormVtbl **)FormHeapAlloc(8u);
          if ( v23 )
          {
            *v23 = vtbl;
            v23[1] = 0;
            v22[1] = (TESFormVtbl *)v23;
          }
          else
          {
            v22[1] = 0;
          }
        }
        else
        {
          *v22 = a2c->vtbl;
        }
        a2c = *(TESForm **)&a2c->member.type;
      }
      while ( a2c );
    }
    a2d = (TESForm *)(v4 + 0xA8);
    if ( *((_DWORD *)this + 0x2B) )
    {
      do
      {
        v24 = *(_DWORD *)(*((_DWORD *)this + 0x2B) + 4);
        FormHeapFree(*((_DWORD *)this + 0x2B));
        *((_DWORD *)this + 0x2B) = v24;
      }
      while ( v24 );
    }
    *((_DWORD *)this + 0x2A) = 0;
    if ( v4 != 0xFFFFFF58 )
    {
      do
      {
        v30 = a2d->vtbl;
        if ( !a2d->vtbl )
          break;
        v25 = this + 7;
        if ( *((_DWORD *)this + 0x2B) )
        {
          do
            v25 = *(TESForm **)&v25->member.type;
          while ( *(_DWORD *)&v25->member.type );
        }
        if ( v25->vtbl )
        {
          v26 = (TESFormVtbl **)FormHeapAlloc(8u);
          if ( v26 )
          {
            *v26 = v30;
            v26[1] = 0;
            *(_DWORD *)&v25->member.type = v26;
          }
          else
          {
            *(_DWORD *)&v25->member.type = 0;
          }
        }
        else
        {
          v25->vtbl = a2d->vtbl;
        }
        a2d = *(TESForm **)&a2d->member.type;
      }
      while ( a2d );
    }
    sub_5528F0((int *)(v4 + 0x29C), (int)this + 0x29C);
    LOWORD(v3) = *(_WORD *)(v4 + 0x2FC);
    *((_WORD *)this + 0x17E) = (_WORD)v3;
  }
  return (__int16)v3;
}
