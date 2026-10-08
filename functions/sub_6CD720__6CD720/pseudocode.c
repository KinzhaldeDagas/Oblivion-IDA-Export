int __thiscall sub_6CD720(NiRenderer *this, int size)
{
  _DWORD *v3; // esi
  void (__cdecl *v4)(int, NiPropertyState **, int, int *, int); // edx
  int v5; // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  void (__cdecl *v7)(int, int *, int, int *, int); // edx
  unsigned __int8 *v8; // ebp
  void (__cdecl *v9)(int, char *, int, int *, int); // edx
  unsigned int v10; // ecx
  int v11; // eax
  UInt32 v12; // eax
  bool v13; // cf
  unsigned __int8 i; // bl
  void (__cdecl *v15)(int, int *, int, int *, int); // eax
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
  int (__cdecl *v30)(int, UInt32 *, int, int *, int); // eax
  void (__cdecl *v31)(int, char *, int, int *, int); // eax
  void (__cdecl *v32)(int, char *, int, int *, int); // eax
  void (__cdecl *v33)(int, NiDynamicEffectState **, int, int *, int); // eax
  void (__cdecl *v34)(int, char *, int, int *, int); // eax
  void (__cdecl *v35)(int, UInt32 *, int, int *, int); // eax
  void (__cdecl *v36)(int, UInt32 *, int, int *, int); // eax
  void (__cdecl *v37)(int, UInt32 *, int, int *, int); // eax
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

  v3 = (_DWORD *)size; /*0x6cd749*/
  sub_6EBA80(this, size); /*0x6cd74e*/
  if ( v3[0x36] >= 0xA010070u ) /*0x6cd75e*/
  {
    v4 = *(void (__cdecl **)(int, NiPropertyState **, int, int *, int))(v3[0x87] + 4); /*0x6cd766*/
    v49 = v3[0x87]; /*0x6cd776*/
    size = 1; /*0x6cd777*/
    v4(v49, &this->members.propertyState, 1, &size, 1); /*0x6cd77f*/
    LOBYTE(this->members.propertyState) &= ~4u; /*0x6cd784*/
  }
  v5 = v3[0x87]; /*0x6cd792*/
  if ( v3[0x36] >= 0xA01006Eu ) /*0x6cd79a*/
  {
    v9 = *(void (__cdecl **)(int, char *, int, int *, int))(v5 + 4); /*0x6cd7e2*/
    v8 = (unsigned __int8 *)&this->members.propertyState + 1; /*0x6cd7ec*/
    size = 1; /*0x6cd7f1*/
    v9(v5, (char *)&this->members.propertyState + 1, 1, &size, 1); /*0x6cd7f9*/
  }
  else
  {
    v50 = v3[0x87]; /*0x6cd7ac*/
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v5 + 4); /*0x6cd7ad*/
    v62 = 2; /*0x6cd7b0*/
    v6(v50, &size, 2, &v62, 1); /*0x6cd7b4*/
    BYTE1(this->members.propertyState) = size; /*0x6cd7c1*/
    v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v3[0x87] + 4); /*0x6cd7ca*/
    v8 = (unsigned __int8 *)&this->members.propertyState + 1; /*0x6cd7cd*/
    v43 = v3[0x87]; /*0x6cd7d6*/
    v62 = 2; /*0x6cd7d7*/
    v7(v43, &v63, 2, &v62, 1); /*0x6cd7db*/
  }
  size = *v8; /*0x6cd802*/
  v10 = (0x18 * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x18 * size;
  v11 = FormHeapAlloc(__CFADD__(v10, 4) ? 0xFFFFFFFF : v10 + 4);
  v65 = v11; /*0x6cd82f*/
  v66 = 0; /*0x6cd835*/
  if ( v11 ) /*0x6cd83d*/
  {
    v60 = size; /*0x6cd84d*/
    *(_DWORD *)v11 = size; /*0x6cd84e*/
    size = v11 + 4; /*0x6cd855*/
    ArrayConstructor( /*0x6cd859*/
      (char *)(v11 + 4),
      0x18u,
      v60,
      (void (__thiscall *)(char *))sub_6CCDE0,
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    v12 = size; /*0x6cd85e*/
  }
  else
  {
    v12 = 0; /*0x6cd864*/
  }
  this->members.pad014[0] = v12; /*0x6cd866*/
  v13 = v3[0x36] < 0xA010070u; /*0x6cd869*/
  v66 = 0xFFFFFFFF; /*0x6cd873*/
  if ( v13 ) /*0x6cd87b*/
  {
    for ( i = 0; i < *v8; ++i ) /*0x6cd883*/
      sub_6CD570((char *)(this->members.pad014[0] + 0x18 * i), (int)v3); /*0x6cd89d*/
    v51 = v3[0x87]; /*0x6cd8c1*/
    v15 = *(void (__cdecl **)(int, int *, int, int *, int))(v51 + 4); /*0x6cd8c2*/
    v63 = 1; /*0x6cd8c5*/
    v15(v51, &size, 1, &v63, 1); /*0x6cd8c9*/
    if ( (_BYTE)size ) /*0x6cd8d3*/
      LOBYTE(this->members.propertyState) |= 1u; /*0x6cd8d5*/
    else
      LOBYTE(this->members.propertyState) &= ~1u; /*0x6cd8db*/
    v52 = v3[0x87]; /*0x6cd8f5*/
    v16 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v52 + 4); /*0x6cd8f6*/
    v63 = 4; /*0x6cd8f9*/
    v16(v52, &this->members.pad014[2], 4, &v63, 1); /*0x6cd8fd*/
    v44 = v3[0x87]; /*0x6cd911*/
    v17 = *(void (__cdecl **)(int, char *, int, int *, int))(v44 + 4); /*0x6cd912*/
    v63 = 1; /*0x6cd915*/
    v17(v44, &v61, 1, &v63, 1); /*0x6cd919*/
    if ( v61 ) /*0x6cd923*/
      LOBYTE(this->members.propertyState) |= 2u; /*0x6cd925*/
    else
      LOBYTE(this->members.propertyState) &= ~2u; /*0x6cd92b*/
    v53 = v3[0x87]; /*0x6cd952*/
    v18 = *(void (__cdecl **)(int, char *, int, int *, int))(v53 + 4); /*0x6cd953*/
    if ( v3[0x36] >= 0xA01006Eu ) /*0x6cd945*/
    {
      v64 = 1; /*0x6cd996*/
      v18(v53, (char *)&this->members.propertyState + 2, 1, &v64, 1); /*0x6cd99a*/
      v46 = v3[0x87]; /*0x6cd9ad*/
      v20 = *(void (__cdecl **)(int, char *, int, int *, int))(v46 + 4); /*0x6cd9ae*/
      v64 = 1; /*0x6cd9b1*/
      v20(v46, (char *)&this->members.propertyState + 3, 1, &v64, 1); /*0x6cd9b5*/
    }
    else
    {
      v64 = 2; /*0x6cd956*/
      v18(v53, (char *)&v62, 2, &v64, 1); /*0x6cd95a*/
      BYTE2(this->members.propertyState) = v62; /*0x6cd966*/
      v19 = *(void (__cdecl **)(int, int *, int, int *, int))(v3[0x87] + 4); /*0x6cd96f*/
      v45 = v3[0x87]; /*0x6cd978*/
      v64 = 2; /*0x6cd979*/
      v19(v45, &v63, 2, &v64, 1); /*0x6cd97d*/
      HIBYTE(this->members.propertyState) = v63; /*0x6cd983*/
    }
    if ( v3[0x36] >= 0xA01006Cu ) /*0x6cd9c4*/
    {
      this->members.pad014[1] = sub_712A90(v3); /*0x6cd9d3*/
      v54 = v3[0x87]; /*0x6cd9e1*/
      v21 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v54 + 4); /*0x6cd9e2*/
      v64 = 4; /*0x6cd9e5*/
      v21(v54, &this->members.pad014[3], 4, &v64, 1); /*0x6cd9e9*/
    }
    v22 = v3[0x87]; /*0x6cd9f8*/
    if ( v3[0x36] >= 0xA01006Eu ) /*0x6cda04*/
    {
      v56 = v3[0x87]; /*0x6cda6d*/
      v27 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, int *, int))(v22 + 4); /*0x6cda6e*/
      v64 = 1; /*0x6cda71*/
      v27(v56, &this->members.dynamicEffectState, 1, &v64, 1); /*0x6cda75*/
      v28 = v3[0x87]; /*0x6cda77*/
      v29 = *(int (__cdecl **)(int, char *, int, int *, int))(v28 + 4); /*0x6cda7d*/
      v64 = 1; /*0x6cda8c*/
      return v29(v28, (char *)&this->members.dynamicEffectState + 1, 1, &v64, 1); /*0x6cda90*/
    }
    else
    {
      v55 = v3[0x87]; /*0x6cda0c*/
      v23 = *(void (__cdecl **)(int, int *, int, int *, int))(v22 + 4); /*0x6cda0d*/
      v64 = 4; /*0x6cda10*/
      v23(v55, &v63, 4, &v64, 1); /*0x6cda14*/
      if ( v63 == 0x80000000 ) /*0x6cda1d*/
        LOBYTE(this->members.dynamicEffectState) = 0x80; /*0x6cda24*/
      else
        LOBYTE(this->members.dynamicEffectState) = v63; /*0x6cda2a*/
      v24 = v3[0x87]; /*0x6cda2d*/
      v25 = *(void (__cdecl **)(int, int *, int, int *, int))(v24 + 4); /*0x6cda33*/
      v64 = 4; /*0x6cda43*/
      v25(v24, &v62, 4, &v64, 1); /*0x6cda47*/
      result = v62; /*0x6cda49*/
      if ( v62 == 0x80000000 ) /*0x6cda50*/
        BYTE1(this->members.dynamicEffectState) = 0x80; /*0x6cda57*/
      else
        BYTE1(this->members.dynamicEffectState) = v62; /*0x6cda60*/
    }
  }
  else
  {
    v57 = v3[0x87]; /*0x6cdaac*/
    v30 = *(int (__cdecl **)(int, UInt32 *, int, int *, int))(v57 + 4); /*0x6cdaad*/
    size = 4; /*0x6cdab0*/
    result = v30(v57, &this->members.pad014[2], 4, &size, 1); /*0x6cdab4*/
    if ( ((int)this->members.propertyState & 1) == 0 ) /*0x6cdabd*/
    {
      v58 = v3[0x87]; /*0x6cdad6*/
      v31 = *(void (__cdecl **)(int, char *, int, int *, int))(v58 + 4); /*0x6cdad7*/
      size = 1; /*0x6cdada*/
      v31(v58, (char *)&this->members.propertyState + 2, 1, &size, 1); /*0x6cdae2*/
      v47 = v3[0x87]; /*0x6cdaf7*/
      v32 = *(void (__cdecl **)(int, char *, int, int *, int))(v47 + 4); /*0x6cdaf8*/
      size = 1; /*0x6cdafb*/
      v32(v47, (char *)&this->members.propertyState + 3, 1, &size, 1); /*0x6cdb03*/
      v41 = v3[0x87]; /*0x6cdb18*/
      v33 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, int *, int))(v41 + 4); /*0x6cdb19*/
      size = 1; /*0x6cdb1c*/
      v33(v41, &this->members.dynamicEffectState, 1, &size, 1); /*0x6cdb24*/
      v40 = v3[0x87]; /*0x6cdb39*/
      v34 = *(void (__cdecl **)(int, char *, int, int *, int))(v40 + 4); /*0x6cdb3a*/
      size = 1; /*0x6cdb3d*/
      v34(v40, (char *)&this->members.dynamicEffectState + 1, 1, &size, 1); /*0x6cdb48*/
      v59 = v3[0x87]; /*0x6cdb5f*/
      v35 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v59 + 4); /*0x6cdb60*/
      size = 4; /*0x6cdb63*/
      v35(v59, &this->members.pad014[3], 4, &size, 1); /*0x6cdb67*/
      v48 = v3[0x87]; /*0x6cdb7b*/
      v36 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v48 + 4); /*0x6cdb7c*/
      size = 4; /*0x6cdb7f*/
      v36(v48, &this->members.pad014[4], 4, &size, 1); /*0x6cdb83*/
      v42 = v3[0x87]; /*0x6cdb97*/
      v37 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v42 + 4); /*0x6cdb98*/
      size = 4; /*0x6cdb9b*/
      v37(v42, &this->members.pad014[5], 4, &size, 1); /*0x6cdb9f*/
      v38 = v3[0x87]; /*0x6cdba1*/
      v65 = 4; /*0x6cdba7*/
      (*(void (__cdecl **)(int, UInt32 *, int, int *, int))(v38 + 4))(v38, &this->members.pad014[6], 4, &v65, 1); /*0x6cdbbb*/
      for ( j = 0; j < *v8; ++j ) /*0x6cdbc2*/
        sub_6CD570((char *)(this->members.pad014[0] + 0x18 * j), (int)v3); /*0x6cdbd4*/
      result = sub_712A90(v3); /*0x6cdbe3*/
      this->members.pad014[1] = result; /*0x6cdbe8*/
    }
  }
  return result; /*0x6cdbeb*/
}
