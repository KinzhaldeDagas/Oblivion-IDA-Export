char *__thiscall sub_6DE410(NiRenderer *this, _DWORD *a2)
{
  NiRenderer *v2; // ebx
  void (__cdecl *v3)(int, NiAccumulator **, int, char *, int); // edx
  void (__cdecl *v4)(int, NiPropertyState **, int, char *, int); // eax
  void (__cdecl *v5)(int, char *, int, char *, int); // eax
  int accumulator; // ebp
  unsigned int v7; // ecx
  int v8; // eax
  char *result; // eax
  bool v10; // zf
  void (__cdecl *v11)(int, int *, int, int *, int); // eax
  void (__cdecl *v12)(int, int *, int, int *, int); // eax
  int v13; // esi
  int (__cdecl *v14)(_DWORD *, int); // eax
  int v15; // ebx
  NiObject *v16; // eax
  NiObject *v17; // ebp
  NiDynamicEffectState *dynamicEffectState; // edx
  NiObject *v19; // esi
  NiObject **v20; // ebx
  char *v21; // esi
  unsigned int v22; // kr00_4
  char *v23; // eax
  NiPropertyState *propertyState; // esi
  NiPropertyState **p_propertyState; // ebx
  int v26; // eax
  unsigned int v27; // esi
  char *v28; // ebp
  unsigned int *v29; // esi
  int v31; // [esp-3Ch] [ebp-184h]
  int v32; // [esp-28h] [ebp-170h]
  int v33; // [esp-28h] [ebp-170h]
  int v34; // [esp-14h] [ebp-15Ch]
  int v35; // [esp-14h] [ebp-15Ch]
  size_t v36; // [esp-Ch] [ebp-154h]
  char ArgList[4]; // [esp+14h] [ebp-134h] BYREF
  char v38; // [esp+1Bh] [ebp-12Dh] BYREF
  int v39; // [esp+1Ch] [ebp-12Ch]
  int v40; // [esp+20h] [ebp-128h] BYREF
  NiRenderer *v41; // [esp+24h] [ebp-124h]
  int v42; // [esp+28h] [ebp-120h] BYREF
  int v43; // [esp+2Ch] [ebp-11Ch]
  int v44; // [esp+30h] [ebp-118h] BYREF
  int v45; // [esp+34h] [ebp-114h] BYREF
  char Src[256]; // [esp+38h] [ebp-110h] BYREF
  int v47; // [esp+144h] [ebp-4h]

  v2 = this; /*0x6de452*/
  v41 = this; /*0x6de455*/
  sub_7008A0(this, (signed int)a2); /*0x6de459*/
  v3 = *(void (__cdecl **)(int, NiAccumulator **, int, char *, int))(a2[0x87] + 4); /*0x6de464*/
  v34 = a2[0x87]; /*0x6de478*/
  *(_DWORD *)ArgList = 4; /*0x6de479*/
  v3(v34, &v2->members.accumulator, 4, ArgList, 1); /*0x6de47d*/
  v32 = a2[0x87]; /*0x6de491*/
  v4 = *(void (__cdecl **)(int, NiPropertyState **, int, char *, int))(v32 + 4); /*0x6de492*/
  *(_DWORD *)ArgList = 4; /*0x6de495*/
  v4(v32, &v2->members.propertyState, 4, ArgList, 1); /*0x6de499*/
  v31 = a2[0x87]; /*0x6de4af*/
  v5 = *(void (__cdecl **)(int, char *, int, char *, int))(v31 + 4); /*0x6de4b0*/
  *(_DWORD *)ArgList = 1; /*0x6de4b3*/
  v5(v31, &v38, 1, ArgList, 1); /*0x6de4bb*/
  accumulator = (int)v2->members.accumulator; /*0x6de4c2*/
  LOBYTE(v2->members.pad014[0]) = v38 == 1; /*0x6de4c7*/
  v7 = (0xC * (unsigned __int64)(unsigned int)accumulator) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * accumulator;
  v8 = FormHeapAlloc(__CFADD__(v7, 4) ? 0xFFFFFFFF : v7 + 4);
  v43 = v8; /*0x6de4f1*/
  v47 = 0; /*0x6de4f9*/
  if ( v8 ) /*0x6de500*/
  {
    *(_DWORD *)v8 = accumulator; /*0x6de50d*/
    *(_DWORD *)ArgList = v8 + 4; /*0x6de515*/
    ArrayConstructor( /*0x6de519*/
      (char *)(v8 + 4),
      0xCu,
      accumulator,
      (void (__thiscall *)(char *))sub_4842D0,
      (void (__thiscall *)(void *))sub_6DE0D0);
    result = *(char **)ArgList; /*0x6de51e*/
  }
  else
  {
    result = 0; /*0x6de526*/
  }
  v10 = v2->members.accumulator == 0; /*0x6de528*/
  v47 = 0xFFFFFFFF; /*0x6de52a*/
  v2->members.dynamicEffectState = (NiDynamicEffectState *)result; /*0x6de535*/
  *(_DWORD *)ArgList = 0; /*0x6de538*/
  if ( !v10 )
  {
    v39 = 0; /*0x6de542*/
    do
    {
      if ( a2[0x36] >= 0xA010068u )
      {
        sub_6DE2F0( /*0x6de740*/
          (int *)((char *)v2->members.dynamicEffectState + v39),
          (int)a2,
          (unsigned int)v2->members.propertyState);
      }
      else
      {
        v35 = a2[0x87]; /*0x6de578*/
        v11 = *(void (__cdecl **)(int, int *, int, int *, int))(v35 + 4); /*0x6de579*/
        v40 = 4; /*0x6de57c*/
        v11(v35, &v42, 4, &v40, 1); /*0x6de580*/
        v33 = a2[0x87]; /*0x6de595*/
        v12 = *(void (__cdecl **)(int, int *, int, int *, int))(v33 + 4); /*0x6de596*/
        v44 = 4; /*0x6de599*/
        v12(v33, &v45, 4, &v44, 1); /*0x6de59d*/
        if ( v42 ) /*0x6de5a8*/
        {
          v13 = v45; /*0x6de5ae*/
          v14 = *(int (__cdecl **)(_DWORD *, int))(4 * v45 + 0xB3D088); /*0x6de5b8*/
          LOBYTE(v43) = byte_B3D3E8[v45]; /*0x6de5c1*/
          v15 = v14(a2, v42); /*0x6de5d0*/
          (*(void (__cdecl **)(int, int, int))(4 * v13 + 0xB3D410))(v15, v42, v43); /*0x6de5db*/
          v16 = (NiObject *)FormHeapAlloc(0x18u); /*0x6de5df*/
          v40 = (int)v16; /*0x6de5e7*/
          v47 = 1; /*0x6de5ed*/
          if ( v16 ) /*0x6de5f8*/
            v17 = sub_6D2990(v16, 0); /*0x6de603*/
          else
            v17 = 0; /*0x6de607*/
          v47 = 0xFFFFFFFF; /*0x6de612*/
          sub_6DE010((Ni2DBuffer **)v17, v15, v42, v13); /*0x6de61d*/
          dynamicEffectState = v41->members.dynamicEffectState; /*0x6de626*/
          v19 = *(NiObject **)((char *)dynamicEffectState + v39 + 8); /*0x6de62d*/
          v20 = (NiObject **)((char *)dynamicEffectState + v39 + 8); /*0x6de633*/
          if ( v19 != v17 ) /*0x6de637*/
          {
            if ( v19 ) /*0x6de63b*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&v19->members) ) /*0x6de641*/
                v19->__vftable->super.Destructor((NiRefObject *)v19, 1); /*0x6de657*/
            }
            *v20 = v17; /*0x6de65b*/
            if ( v17 ) /*0x6de65d*/
              InterlockedIncrement((volatile LONG *)&v17->members); /*0x6de663*/
          }
          ((void (__thiscall *)(NiObject *))v17->__vftable[1].DumpAttributes)(v17); /*0x6de671*/
          v2 = v41; /*0x6de673*/
        }
        HIDWORD(v36) = "MT %d"; /*0x6de67c*/
        LODWORD(v36) = 0x100; /*0x6de685*/
        sub_6C5D40((va_list)a2, Src, v36, *(char **)ArgList); /*0x6de68b*/
        v21 = (char *)v2->members.dynamicEffectState + v39; /*0x6de693*/
        FormHeapFree(*((_DWORD *)v21 + 1)); /*0x6de69b*/
        v22 = strlen(Src); /*0x6de6a0*/
        v23 = (char *)FormHeapAlloc(v22 + 1); /*0x6de6bf*/
        *((_DWORD *)v21 + 1) = v23; /*0x6de6cb*/
        strcpy_s(v23, v22 + 1, Src); /*0x6de6ce*/
        propertyState = v2->members.propertyState; /*0x6de6d3*/
        p_propertyState = &v2->members.propertyState; /*0x6de6d6*/
        v26 = FormHeapAlloc(
                (0xC * (unsigned __int64)(unsigned int)propertyState) >> 0x20 != 0
              ? 0xFFFFFFFF
              : 0xC * (_DWORD)propertyState);
        v27 = 0; /*0x6de6f1*/
        v10 = *p_propertyState == 0; /*0x6de6f6*/
        v40 = v26; /*0x6de6f8*/
        if ( !v10 ) /*0x6de6fc*/
        {
          v28 = (char *)v26; /*0x6de6fe*/
          do /*0x6de710*/
          {
            sub_709430(v28, (signed int)a2); /*0x6de703*/
            ++v27; /*0x6de708*/
            v28 += 0xC; /*0x6de70b*/
          }
          while ( v27 < (unsigned int)*p_propertyState ); /*0x6de710*/
        }
        v29 = (unsigned int *)((char *)v41->members.dynamicEffectState + v39); /*0x6de719*/
        FormHeapFree(*v29); /*0x6de720*/
        v2 = v41; /*0x6de729*/
        *v29 = v40; /*0x6de730*/
      }
      v39 += 0xC; /*0x6de749*/
      result = (char *)(*(_DWORD *)ArgList + 1); /*0x6de74e*/
    }
    while ( (NiAccumulator *)++*(_DWORD *)ArgList < v2->members.accumulator );
  }
  return result; /*0x6de75e*/
}
