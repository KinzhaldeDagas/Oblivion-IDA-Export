int __thiscall sub_6CD720(NiRenderer *this, unsigned int size)
{
  _DWORD *v3; // esi
  void (__cdecl *v4)(int, NiPropertyState **, int, unsigned int *, int); // edx
  int v5; // eax
  void (__cdecl *v6)(int, unsigned int *, int, int *, int); // eax
  void (__cdecl *v7)(int, int *, int, int *, int); // edx
  char *v8; // ebp
  void (__cdecl *v9)(int, char *, int, unsigned int *, int); // edx
  unsigned int v10; // ecx
  unsigned int *v11; // eax
  unsigned int v12; // eax
  bool v13; // cf
  unsigned __int8 i; // bl
  void (__cdecl *v15)(int, unsigned int *, int, int *, int); // eax
  void (__cdecl *v16)(int, UInt32 *, int, int *, int); // eax
  void (__cdecl *v17)(int, char *, int, int *, int); // eax
  void (__cdecl *v18)(int, char *, int, int *, int); // eax
  void (__cdecl *v19)(int, int *, int, int *, int); // edx
  void (__cdecl *v20)(int, char *, int, int *, int); // eax
  void (__cdecl *v21)(int, UInt32 *, int, int *, int); // eax
  int v22; // eax
  void (__cdecl *v23)(int, int *, int, int *, int); // eax
  int v24; // esi
  void (__cdecl *v25)(int, int *, int, int *, int); // eax
  int result; // eax
  void (__cdecl *v27)(int, NiDynamicEffectState **, int, int *, int); // eax
  int v28; // esi
  int (__cdecl *v29)(int, char *, int, int *, int); // edx
  int (__cdecl *v30)(int, UInt32 *, int, unsigned int *, int); // eax
  void (__cdecl *v31)(int, char *, int, unsigned int *, int); // eax
  void (__cdecl *v32)(int, char *, int, unsigned int *, int); // eax
  void (__cdecl *v33)(int, NiDynamicEffectState **, int, unsigned int *, int); // eax
  void (__cdecl *v34)(int, char *, int, unsigned int *, int); // eax
  void (__cdecl *v35)(int, UInt32 *, int, unsigned int *, int); // eax
  void (__cdecl *v36)(int, UInt32 *, int, unsigned int *, int); // eax
  void (__cdecl *v37)(int, UInt32 *, int, unsigned int *, int); // eax
  int v38; // eax
  unsigned __int8 j; // bl
  int v40; // [esp-50h] [ebp-84h]
  int v41; // [esp-3Ch] [ebp-70h]
  int v42; // [esp-3Ch] [ebp-70h]
  int v43; // [esp-28h] [ebp-5Ch]
  int v44; // [esp-28h] [ebp-5Ch]
  int v45; // [esp-28h] [ebp-5Ch]
  int v46; // [esp-28h] [ebp-5Ch]
  int v47; // [esp-28h] [ebp-5Ch]
  int v48; // [esp-28h] [ebp-5Ch]
  int v49; // [esp-14h] [ebp-48h]
  int v50; // [esp-14h] [ebp-48h]
  int v51; // [esp-14h] [ebp-48h]
  int v52; // [esp-14h] [ebp-48h]
  int v53; // [esp-14h] [ebp-48h]
  int v54; // [esp-14h] [ebp-48h]
  int v55; // [esp-14h] [ebp-48h]
  int v56; // [esp-14h] [ebp-48h]
  int v57; // [esp-14h] [ebp-48h]
  int v58; // [esp-14h] [ebp-48h]
  int v59; // [esp-14h] [ebp-48h]
  int v60; // [esp-Ch] [ebp-40h]
  char v61; // [esp+17h] [ebp-1Dh] BYREF
  int v62; // [esp+18h] [ebp-1Ch] BYREF
  int v63; // [esp+1Ch] [ebp-18h] BYREF
  int v64; // [esp+20h] [ebp-14h] BYREF
  int v65; // [esp+24h] [ebp-10h] BYREF
  unsigned int v66; // [esp+30h] [ebp-4h]

  v3 = (_DWORD *)size;
  sub_6EBA80(this, size);
  if ( v3[0x36] >= 0xA010070u )
  {
    v4 = *(void (__cdecl **)(int, NiPropertyState **, int, unsigned int *, int))(v3[0x87] + 4);
    v49 = v3[0x87];
    size = 1;
    v4(v49, &this->members.propertyState, 1, &size, 1);
    LOBYTE(this->members.propertyState) &= ~4u;
  }
  v5 = v3[0x87];
  if ( v3[0x36] >= 0xA01006Eu )
  {
    v9 = *(void (__cdecl **)(int, char *, int, unsigned int *, int))(v5 + 4);
    v8 = (char *)&this->members.propertyState + 1;
    size = 1;
    v9(v5, (char *)&this->members.propertyState + 1, 1, &size, 1);
  }
  else
  {
    v50 = v3[0x87];
    v6 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v5 + 4);
    v62 = 2;
    v6(v50, &size, 2, &v62, 1);
    BYTE1(this->members.propertyState) = size;
    v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v3[0x87] + 4);
    v8 = (char *)&this->members.propertyState + 1;
    v43 = v3[0x87];
    v62 = 2;
    v7(v43, &v63, 2, &v62, 1);
  }
  size = (unsigned __int8)*v8;
  v10 = (0x18 * (unsigned __int64)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x18 * size;
  v11 = (unsigned int *)FormHeapAlloc(__CFADD__(v10, 4) ? 0xFFFFFFFF : v10 + 4);
  v65 = (int)v11;
  v66 = 0;
  if ( v11 )
  {
    v60 = size;
    *v11 = size;
    size = (unsigned int)(v11 + 1);
    ArrayConstructor(v11 + 1, 0x18u, v60, (int)sub_6CCDE0, (void (__thiscall *)(void *))sub_7016A0);
    v12 = size;
  }
  else
  {
    v12 = 0;
  }
  this->members.pad014[0] = v12;
  v13 = v3[0x36] < 0xA010070u;
  v66 = 0xFFFFFFFF;
  if ( v13 )
  {
    for ( i = 0; i < (unsigned __int8)*v8; ++i )
      sub_6CD570((char *)(this->members.pad014[0] + 0x18 * i), (int)v3);
    v51 = v3[0x87];
    v15 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v51 + 4);
    v63 = 1;
    v15(v51, &size, 1, &v63, 1);
    if ( (_BYTE)size )
      LOBYTE(this->members.propertyState) |= 1u;
    else
      LOBYTE(this->members.propertyState) &= ~1u;
    v52 = v3[0x87];
    v16 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v52 + 4);
    v63 = 4;
    v16(v52, &this->members.pad014[2], 4, &v63, 1);
    v44 = v3[0x87];
    v17 = *(void (__cdecl **)(int, char *, int, int *, int))(v44 + 4);
    v63 = 1;
    v17(v44, &v61, 1, &v63, 1);
    if ( v61 )
      LOBYTE(this->members.propertyState) |= 2u;
    else
      LOBYTE(this->members.propertyState) &= ~2u;
    v53 = v3[0x87];
    v18 = *(void (__cdecl **)(int, char *, int, int *, int))(v53 + 4);
    if ( v3[0x36] >= 0xA01006Eu )
    {
      v64 = 1;
      v18(v53, (char *)&this->members.propertyState + 2, 1, &v64, 1);
      v46 = v3[0x87];
      v20 = *(void (__cdecl **)(int, char *, int, int *, int))(v46 + 4);
      v64 = 1;
      v20(v46, (char *)&this->members.propertyState + 3, 1, &v64, 1);
    }
    else
    {
      v64 = 2;
      v18(v53, (char *)&v62, 2, &v64, 1);
      BYTE2(this->members.propertyState) = v62;
      v19 = *(void (__cdecl **)(int, int *, int, int *, int))(v3[0x87] + 4);
      v45 = v3[0x87];
      v64 = 2;
      v19(v45, &v63, 2, &v64, 1);
      HIBYTE(this->members.propertyState) = v63;
    }
    if ( v3[0x36] >= 0xA01006Cu )
    {
      this->members.pad014[1] = sub_712A90(v3);
      v54 = v3[0x87];
      v21 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v54 + 4);
      v64 = 4;
      v21(v54, &this->members.pad014[3], 4, &v64, 1);
    }
    v22 = v3[0x87];
    if ( v3[0x36] >= 0xA01006Eu )
    {
      v56 = v3[0x87];
      v27 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, int *, int))(v22 + 4);
      v64 = 1;
      v27(v56, &this->members.dynamicEffectState, 1, &v64, 1);
      v28 = v3[0x87];
      v29 = *(int (__cdecl **)(int, char *, int, int *, int))(v28 + 4);
      v64 = 1;
      return v29(v28, (char *)&this->members.dynamicEffectState + 1, 1, &v64, 1);
    }
    else
    {
      v55 = v3[0x87];
      v23 = *(void (__cdecl **)(int, int *, int, int *, int))(v22 + 4);
      v64 = 4;
      v23(v55, &v63, 4, &v64, 1);
      if ( v63 == 0x80000000 )
        LOBYTE(this->members.dynamicEffectState) = 0x80;
      else
        LOBYTE(this->members.dynamicEffectState) = v63;
      v24 = v3[0x87];
      v25 = *(void (__cdecl **)(int, int *, int, int *, int))(v24 + 4);
      v64 = 4;
      v25(v24, &v62, 4, &v64, 1);
      result = v62;
      if ( v62 == 0x80000000 )
        BYTE1(this->members.dynamicEffectState) = 0x80;
      else
        BYTE1(this->members.dynamicEffectState) = v62;
    }
  }
  else
  {
    v57 = v3[0x87];
    v30 = *(int (__cdecl **)(int, UInt32 *, int, unsigned int *, int))(v57 + 4);
    size = 4;
    result = v30(v57, &this->members.pad014[2], 4, &size, 1);
    if ( ((int)this->members.propertyState & 1) == 0 )
    {
      v58 = v3[0x87];
      v31 = *(void (__cdecl **)(int, char *, int, unsigned int *, int))(v58 + 4);
      size = 1;
      v31(v58, (char *)&this->members.propertyState + 2, 1, &size, 1);
      v47 = v3[0x87];
      v32 = *(void (__cdecl **)(int, char *, int, unsigned int *, int))(v47 + 4);
      size = 1;
      v32(v47, (char *)&this->members.propertyState + 3, 1, &size, 1);
      v41 = v3[0x87];
      v33 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, unsigned int *, int))(v41 + 4);
      size = 1;
      v33(v41, &this->members.dynamicEffectState, 1, &size, 1);
      v40 = v3[0x87];
      v34 = *(void (__cdecl **)(int, char *, int, unsigned int *, int))(v40 + 4);
      size = 1;
      v34(v40, (char *)&this->members.dynamicEffectState + 1, 1, &size, 1);
      v59 = v3[0x87];
      v35 = *(void (__cdecl **)(int, UInt32 *, int, unsigned int *, int))(v59 + 4);
      size = 4;
      v35(v59, &this->members.pad014[3], 4, &size, 1);
      v48 = v3[0x87];
      v36 = *(void (__cdecl **)(int, UInt32 *, int, unsigned int *, int))(v48 + 4);
      size = 4;
      v36(v48, &this->members.pad014[4], 4, &size, 1);
      v42 = v3[0x87];
      v37 = *(void (__cdecl **)(int, UInt32 *, int, unsigned int *, int))(v42 + 4);
      size = 4;
      v37(v42, &this->members.pad014[5], 4, &size, 1);
      v38 = v3[0x87];
      v65 = 4;
      (*(void (__cdecl **)(int, UInt32 *, int, int *, int))(v38 + 4))(v38, &this->members.pad014[6], 4, &v65, 1);
      for ( j = 0; j < (unsigned __int8)*v8; ++j )
        sub_6CD570((char *)(this->members.pad014[0] + 0x18 * j), (int)v3);
      result = sub_712A90(v3);
      this->members.pad014[1] = result;
    }
  }
  return result;
}
