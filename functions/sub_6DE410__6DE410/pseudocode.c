char *__thiscall sub_6DE410(NiRenderer *this, _DWORD *a2)
{
  NiRenderer *v2; // ebx
  void (__cdecl *v3)(int, NiAccumulator **, int, char *, int); // edx
  void (__cdecl *v4)(int, NiPropertyState **, int, char *, int); // eax
  void (__cdecl *v5)(int, char *, int, char *, int); // eax
  int accumulator; // ebp
  unsigned int v7; // ecx
  int *v8; // eax
  char *result; // eax
  bool v10; // zf
  void (__cdecl *v11)(int, int *, int, int *, int); // eax
  void (__cdecl *v12)(int, int *, int, int *, int); // eax
  int v13; // esi
  int (__cdecl *v14)(_DWORD *, int); // eax
  int v15; // ebx
  float *v16; // eax
  float *v17; // ebp
  NiDynamicEffectState *dynamicEffectState; // edx
  int v19; // esi
  float **v20; // ebx
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
  int *v43; // [esp+2Ch] [ebp-11Ch]
  int v44; // [esp+30h] [ebp-118h] BYREF
  int v45; // [esp+34h] [ebp-114h] BYREF
  char Src[256]; // [esp+38h] [ebp-110h] BYREF
  int v47; // [esp+144h] [ebp-4h]

  v2 = this;
  v41 = this;
  sub_7008A0(this, (signed int)a2);
  v3 = *(void (__cdecl **)(int, NiAccumulator **, int, char *, int))(a2[0x87] + 4);
  v34 = a2[0x87];
  *(_DWORD *)ArgList = 4;
  v3(v34, &v2->members.accumulator, 4, ArgList, 1);
  v32 = a2[0x87];
  v4 = *(void (__cdecl **)(int, NiPropertyState **, int, char *, int))(v32 + 4);
  *(_DWORD *)ArgList = 4;
  v4(v32, &v2->members.propertyState, 4, ArgList, 1);
  v31 = a2[0x87];
  v5 = *(void (__cdecl **)(int, char *, int, char *, int))(v31 + 4);
  *(_DWORD *)ArgList = 1;
  v5(v31, &v38, 1, ArgList, 1);
  accumulator = (int)v2->members.accumulator;
  LOBYTE(v2->members.pad014[0]) = v38 == 1;
  v7 = (0xC * (unsigned __int64)(unsigned int)accumulator) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * accumulator;
  v8 = (int *)FormHeapAlloc(__CFADD__(v7, 4) ? 0xFFFFFFFF : v7 + 4);
  v43 = v8;
  v47 = 0;
  if ( v8 )
  {
    *v8 = accumulator;
    *(_DWORD *)ArgList = v8 + 1;
    ArrayConstructor(v8 + 1, 0xCu, accumulator, (int)sub_4842D0, (void (__thiscall *)(void *))sub_6DE0D0);
    result = *(char **)ArgList;
  }
  else
  {
    result = 0;
  }
  v10 = v2->members.accumulator == 0;
  v47 = 0xFFFFFFFF;
  v2->members.dynamicEffectState = (NiDynamicEffectState *)result;
  *(_DWORD *)ArgList = 0;
  if ( !v10 )
  {
    v39 = 0;
    do
    {
      if ( a2[0x36] >= 0xA010068u )
      {
        sub_6DE2F0(
          (int *)((char *)v2->members.dynamicEffectState + v39),
          (int)a2,
          (unsigned int)v2->members.propertyState);
      }
      else
      {
        v35 = a2[0x87];
        v11 = *(void (__cdecl **)(int, int *, int, int *, int))(v35 + 4);
        v40 = 4;
        v11(v35, &v42, 4, &v40, 1);
        v33 = a2[0x87];
        v12 = *(void (__cdecl **)(int, int *, int, int *, int))(v33 + 4);
        v44 = 4;
        v12(v33, &v45, 4, &v44, 1);
        if ( v42 )
        {
          v13 = v45;
          v14 = *(int (__cdecl **)(_DWORD *, int))(4 * v45 + 0xB3D088);
          LOBYTE(v43) = byte_B3D3E8[v45];
          v15 = v14(a2, v42);
          (*(void (__cdecl **)(int, int, int *))(4 * v13 + 0xB3D410))(v15, v42, v43);
          v16 = (float *)FormHeapAlloc(0x18u);
          v40 = (int)v16;
          v47 = 1;
          if ( v16 )
            v17 = sub_6D2990(v16, 0);
          else
            v17 = 0;
          v47 = 0xFFFFFFFF;
          sub_6DE010((Ni2DBuffer **)v17, v15, v42, v13);
          dynamicEffectState = v41->members.dynamicEffectState;
          v19 = *(_DWORD *)((char *)dynamicEffectState + v39 + 8);
          v20 = (float **)((char *)dynamicEffectState + v39 + 8);
          if ( (float *)v19 != v17 )
          {
            if ( v19 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
                (**(void (__thiscall ***)(int, int))v19)(v19, 1);
            }
            *v20 = v17;
            if ( v17 )
              InterlockedIncrement((volatile LONG *)v17 + 1);
          }
          (*(void (__thiscall **)(float *))(*(_DWORD *)v17 + 0x7C))(v17);
          v2 = v41;
        }
        HIDWORD(v36) = "MT %d";
        LODWORD(v36) = 0x100;
        sub_6C5D40((va_list)a2, Src, v36, *(char **)ArgList);
        v21 = (char *)v2->members.dynamicEffectState + v39;
        FormHeapFree(*((_DWORD *)v21 + 1));
        v22 = strlen(Src);
        v23 = (char *)FormHeapAlloc(v22 + 1);
        *((_DWORD *)v21 + 1) = v23;
        strcpy_s(v23, v22 + 1, Src);
        propertyState = v2->members.propertyState;
        p_propertyState = &v2->members.propertyState;
        v26 = FormHeapAlloc(
                (0xC * (unsigned __int64)(unsigned int)propertyState) >> 0x20 != 0
              ? 0xFFFFFFFF
              : 0xC * (_DWORD)propertyState);
        v27 = 0;
        v10 = *p_propertyState == 0;
        v40 = v26;
        if ( !v10 )
        {
          v28 = (char *)v26;
          do
          {
            sub_709430(v28, (signed int)a2);
            ++v27;
            v28 += 0xC;
          }
          while ( v27 < (unsigned int)*p_propertyState );
        }
        v29 = (unsigned int *)((char *)v41->members.dynamicEffectState + v39);
        FormHeapFree(*v29);
        v2 = v41;
        *v29 = v40;
      }
      v39 += 0xC;
      result = (char *)(*(_DWORD *)ArgList + 1);
    }
    while ( (NiAccumulator *)++*(_DWORD *)ArgList < v2->members.accumulator );
  }
  return result;
}
