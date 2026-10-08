LONG __thiscall sub_6C8E40(int *this, NiObject *a2)
{
  NiObject *v3; // edi
  int *v4; // ebp
  void (__cdecl *v5)(UInt32, int *, int, int *, int); // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  NiObject *v9; // eax
  int v10; // ebx
  unsigned int v11; // ecx
  int v12; // eax
  NiObject *v13; // eax
  NiObject *v14; // eax
  Ni2DBuffer *v15; // eax
  LONG result; // eax
  bool v17; // zf
  int *v18; // ebx
  int v19; // eax
  int v20; // ebp
  char *v21; // ebx
  bool v22; // cf
  void (__cdecl *v23)(UInt32, int *, int, int *, int); // edx
  int *v24; // ebp
  void (__cdecl *v25)(UInt32, int *, int, int *, int); // eax
  int v26; // ebx
  unsigned int v27; // ecx
  int v28; // eax
  NiObject *v29; // eax
  int v30; // ebx
  unsigned int v31; // ecx
  int v32; // eax
  NiObject *v33; // eax
  unsigned int vftable; // eax
  NiObject *v35; // eax
  Ni2DBuffer *v36; // eax
  int v37; // ebp
  int v38; // eax
  int v39; // ecx
  int v40; // ebx
  NiObject *v41; // eax
  void (__cdecl *v42)(UInt32, int *, int, int *, int); // eax
  void (__cdecl *v43)(UInt32, int *, int, int *, int); // eax
  void (__cdecl *v44)(UInt32, int *, int, int *, int); // edx
  void (__cdecl *v45)(UInt32, int *, int, int *, int); // eax
  void (__cdecl *v46)(UInt32, int *, int, int *, int); // eax
  void (__cdecl *v47)(UInt32, int *, int, int *, int); // eax
  void (__cdecl *v48)(UInt32, NiObject **, int, int *, int); // eax
  int v49; // edi
  int v50; // ebx
  UInt32 v51; // [esp-28h] [ebp-58h]
  UInt32 v52; // [esp-28h] [ebp-58h]
  UInt32 v53; // [esp-28h] [ebp-58h]
  UInt32 v54; // [esp-14h] [ebp-44h]
  UInt32 m_uiRefCount; // [esp-14h] [ebp-44h]
  UInt32 v56; // [esp-14h] [ebp-44h]
  UInt32 v57; // [esp-14h] [ebp-44h]
  UInt32 v58; // [esp-14h] [ebp-44h]
  UInt32 v59; // [esp-14h] [ebp-44h]
  UInt32 v60; // [esp-14h] [ebp-44h]
  size_t v61; // [esp-4h] [ebp-34h]
  const char *v62; // [esp+14h] [ebp-1Ch] BYREF
  int v63; // [esp+18h] [ebp-18h] BYREF
  int v64; // [esp+1Ch] [ebp-14h] BYREF
  int v65; // [esp+20h] [ebp-10h] BYREF
  int v66; // [esp+2Ch] [ebp-4h]

  v3 = a2; /*0x6c8e69*/
  sub_7008A0((NiRenderer *)this, (signed int)a2); /*0x6c8e6e*/
  if ( v3[0x1B].__vftable >= (NiObjectVtbl *)0xA010068 )
  {
    sub_713620(v3, (int)(this + 2)); /*0x6c909e*/
    v23 = *(void (__cdecl **)(UInt32, int *, int, int *, int))(v3[0x43].members.m_uiRefCount + 4); /*0x6c90a9*/
    v24 = this + 3; /*0x6c90b9*/
    m_uiRefCount = v3[0x43].members.m_uiRefCount; /*0x6c90bd*/
    v64 = 4; /*0x6c90be*/
    v23(m_uiRefCount, this + 3, 4, &v64, 1); /*0x6c90c2*/
    v51 = v3[0x43].members.m_uiRefCount; /*0x6c90d6*/
    v25 = *(void (__cdecl **)(UInt32, int *, int, int *, int))(v51 + 4); /*0x6c90d7*/
    v64 = 4; /*0x6c90da*/
    v25(v51, this + 4, 4, &v64, 1); /*0x6c90de*/
    v26 = *v24; /*0x6c90e0*/
    v27 = (unsigned __int64)(unsigned int)*v24 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * *v24;
    v28 = FormHeapAlloc(__CFADD__(v27, 4) ? 0xFFFFFFFF : v27 + 4);
    v65 = v28; /*0x6c910a*/
    v66 = 3; /*0x6c9110*/
    if ( v28 ) /*0x6c9118*/
    {
      *(_DWORD *)v28 = v26; /*0x6c9125*/
      a2 = (NiObject *)(v28 + 4); /*0x6c912d*/
      ArrayConstructor( /*0x6c9131*/
        (char *)(v28 + 4),
        0x10u,
        v26,
        (void (__thiscall *)(char *))sub_6C62E0,
        (void (__thiscall *)(void *))sub_6C64C0);
      v29 = a2; /*0x6c9136*/
    }
    else
    {
      v29 = 0; /*0x6c913c*/
    }
    v30 = *v24; /*0x6c913e*/
    *(this + 5) = (int)v29; /*0x6c9141*/
    v66 = 0xFFFFFFFF; /*0x6c9152*/
    v31 = (unsigned __int64)(unsigned int)v30 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v30;
    v32 = FormHeapAlloc(__CFADD__(v31, 4) ? 0xFFFFFFFF : v31 + 4);
    v65 = v32; /*0x6c9173*/
    v66 = 4; /*0x6c9179*/
    if ( v32 ) /*0x6c9181*/
    {
      *(_DWORD *)v32 = v30; /*0x6c918e*/
      a2 = (NiObject *)(v32 + 4); /*0x6c9196*/
      ArrayConstructor( /*0x6c919a*/
        (char *)(v32 + 4),
        0x10u,
        v30,
        (void (__thiscall *)(char *))sub_6C6370,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
      v33 = a2; /*0x6c919f*/
    }
    else
    {
      v33 = 0; /*0x6c91a5*/
    }
    *(this + 6) = (int)v33; /*0x6c91a7*/
    vftable = (unsigned int)v3[0x1B].__vftable; /*0x6c91aa*/
    v66 = 0xFFFFFFFF; /*0x6c91b8*/
    if ( vftable < 0xA010071 ) /*0x6c91bc*/
    {
      v35 = (NiObject *)FormHeapAlloc(0x14u); /*0x6c91c0*/
      a2 = v35; /*0x6c91c8*/
      v66 = 5; /*0x6c91ce*/
      if ( v35 ) /*0x6c91d6*/
      {
        LODWORD(v61) = 0x140 * *v24; /*0x6c91e1*/
        v36 = (Ni2DBuffer *)sub_6C5D80(v35, v61); /*0x6c91e4*/
      }
      else
      {
        v36 = 0; /*0x6c91eb*/
      }
      v66 = 0xFFFFFFFF; /*0x6c91f1*/
      NiSmartPointer_Set__((Ni2DBuffer **)this + 0x19, v36); /*0x6c91f5*/
    }
    v17 = *v24 == 0; /*0x6c91fa*/
    v63 = 0; /*0x6c91fe*/
    if ( !v17 ) /*0x6c9206*/
    {
      v37 = 0; /*0x6c920c*/
      do /*0x6c9290*/
      {
        if ( v3[0x1B].__vftable < (NiObjectVtbl *)0xA010071 ) /*0x6c9218*/
        {
          v38 = *(this + 6); /*0x6c921a*/
          v40 = *(_DWORD *)(v38 + v37); /*0x6c9220*/
          v41 = (NiObject *)(v37 + v38); /*0x6c9223*/
          v64 = *(this + 0x19); /*0x6c9227*/
          v39 = v64; /*0x6c921d*/
          a2 = v41; /*0x6c922b*/
          if ( v40 != v64 ) /*0x6c922f*/
          {
            if ( v40 ) /*0x6c9233*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v40 + 4)) ) /*0x6c9239*/
                (**(void (__thiscall ***)(int, int))v40)(v40, 1); /*0x6c924f*/
              v39 = v64; /*0x6c9251*/
              v41 = a2; /*0x6c9255*/
            }
            v41->__vftable = (NiObjectVtbl *)v39; /*0x6c925b*/
            if ( v39 ) /*0x6c925d*/
              InterlockedIncrement((volatile LONG *)(v39 + 4)); /*0x6c9263*/
          }
        }
        sub_6C8820((char *)(v37 + *(this + 5)), (int)v3); /*0x6c926f*/
        sub_6C8A60((Ni2DBuffer **)(v37 + *(this + 6)), (char *)v3); /*0x6c927a*/
        v37 += 0x10; /*0x6c9286*/
        v22 = ++v63 < (unsigned int)*(this + 3); /*0x6c9289*/
      }
      while ( v22 ); /*0x6c9290*/
    }
    v56 = v3[0x43].members.m_uiRefCount; /*0x6c92a9*/
    v42 = *(void (__cdecl **)(UInt32, int *, int, int *, int))(v56 + 4); /*0x6c92aa*/
    v64 = 4; /*0x6c92ad*/
    v42(v56, this + 7, 4, &v64, 1); /*0x6c92b5*/
    sub_712A20((unsigned int *)v3); /*0x6c92bc*/
    v57 = v3[0x43].members.m_uiRefCount; /*0x6c92d9*/
    v43 = *(void (__cdecl **)(UInt32, int *, int, int *, int))(v57 + 4); /*0x6c92da*/
    v64 = 4; /*0x6c92dd*/
    v43(v57, &v63, 4, &v64, 1); /*0x6c92e1*/
    *(this + 9) = v63; /*0x6c92ee*/
    v44 = *(void (__cdecl **)(UInt32, int *, int, int *, int))(v3[0x43].members.m_uiRefCount + 4); /*0x6c92f7*/
    v52 = v3[0x43].members.m_uiRefCount; /*0x6c92ff*/
    v64 = 4; /*0x6c9300*/
    v44(v52, this + 0xA, 4, &v64, 1); /*0x6c9304*/
    if ( v3[0x1B].__vftable < (NiObjectVtbl *)0xA030001 ) /*0x6c9313*/
    {
      v58 = v3[0x43].members.m_uiRefCount; /*0x6c9328*/
      v45 = *(void (__cdecl **)(UInt32, int *, int, int *, int))(v58 + 4); /*0x6c9329*/
      v64 = 4; /*0x6c932c*/
      v45(v58, &v63, 4, &v64, 1); /*0x6c9330*/
    }
    v59 = v3[0x43].members.m_uiRefCount; /*0x6c9347*/
    v46 = *(void (__cdecl **)(UInt32, int *, int, int *, int))(v59 + 4); /*0x6c9348*/
    v64 = 4; /*0x6c934b*/
    v46(v59, this + 0xB, 4, &v64, 1); /*0x6c934f*/
    v53 = v3[0x43].members.m_uiRefCount; /*0x6c9363*/
    v47 = *(void (__cdecl **)(UInt32, int *, int, int *, int))(v53 + 4); /*0x6c9364*/
    v64 = 4; /*0x6c9367*/
    v47(v53, this + 0xC, 4, &v64, 1); /*0x6c936b*/
    if ( v3[0x1B].__vftable < (NiObjectVtbl *)0xA01006B ) /*0x6c937a*/
    {
      v60 = v3[0x43].members.m_uiRefCount; /*0x6c9390*/
      v48 = *(void (__cdecl **)(UInt32, NiObject **, int, int *, int))(v60 + 4); /*0x6c9391*/
      v65 = 1; /*0x6c9394*/
      v48(v60, &a2, 1, &v65, 1); /*0x6c939c*/
    }
    sub_712A20((unsigned int *)v3); /*0x6c93a3*/
    result = sub_713620(v3, (int)(this + 0x17)); /*0x6c93ae*/
    if ( v3[0x1B].__vftable >= (NiObjectVtbl *)0xA010071 ) /*0x6c93bd*/
    {
      result = sub_712A90(v3); /*0x6c93c1*/
      v49 = *(this + 0x19); /*0x6c93c6*/
      v50 = result; /*0x6c93c9*/
      if ( v49 != result ) /*0x6c93cd*/
      {
        if ( v49 ) /*0x6c93d1*/
        {
          result = InterlockedDecrement((volatile LONG *)(v49 + 4)); /*0x6c93d7*/
          if ( !result ) /*0x6c93df*/
            result = (**(int (__thiscall ***)(int, int))v49)(v49, 1); /*0x6c93ed*/
        }
        *(this + 0x19) = v50; /*0x6c93f1*/
        if ( v50 ) /*0x6c93f4*/
          return InterlockedIncrement((volatile LONG *)(v50 + 4)); /*0x6c93fa*/
      }
    }
  }
  else
  {
    sub_713620(v3, (int)(this + 2)); /*0x6c8e89*/
    sub_713620(v3, (int)(this + 0x17)); /*0x6c8e94*/
    sub_712A20((unsigned int *)v3); /*0x6c8e9b*/
    v4 = this + 3; /*0x6c8eaf*/
    v54 = v3[0x43].members.m_uiRefCount; /*0x6c8eb3*/
    v5 = *(void (__cdecl **)(UInt32, int *, int, int *, int))(v54 + 4); /*0x6c8eb4*/
    v64 = 4; /*0x6c8eb7*/
    v5(v54, this + 3, 4, &v64, 1); /*0x6c8ebf*/
    v6 = *(this + 3); /*0x6c8ec1*/
    v7 = (unsigned __int64)(unsigned int)v6 >> 0x1C != 0; /*0x6c8ecf*/
    *(this + 4) = 0xC; /*0x6c8ed2*/
    v8 = FormHeapAlloc(__CFADD__((0x10 * v6) | -v7, 4) ? 0xFFFFFFFF : ((0x10 * v6) | -v7) + 4);
    v65 = v8; /*0x6c8ef2*/
    v66 = 0; /*0x6c8ef8*/
    if ( v8 ) /*0x6c8f00*/
    {
      *(_DWORD *)v8 = v6; /*0x6c8f0d*/
      a2 = (NiObject *)(v8 + 4); /*0x6c8f15*/
      ArrayConstructor( /*0x6c8f19*/
        (char *)(v8 + 4),
        0x10u,
        v6,
        (void (__thiscall *)(char *))sub_6C62E0,
        (void (__thiscall *)(void *))sub_6C64C0);
      v9 = a2; /*0x6c8f1e*/
    }
    else
    {
      v9 = 0; /*0x6c8f24*/
    }
    v10 = *v4; /*0x6c8f26*/
    *(this + 5) = (int)v9; /*0x6c8f29*/
    v66 = 0xFFFFFFFF; /*0x6c8f3a*/
    v11 = (unsigned __int64)(unsigned int)v10 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v10;
    v12 = FormHeapAlloc(__CFADD__(v11, 4) ? 0xFFFFFFFF : v11 + 4);
    v65 = v12; /*0x6c8f5b*/
    v66 = 1; /*0x6c8f61*/
    if ( v12 ) /*0x6c8f69*/
    {
      *(_DWORD *)v12 = v10; /*0x6c8f76*/
      a2 = (NiObject *)(v12 + 4); /*0x6c8f7e*/
      ArrayConstructor( /*0x6c8f82*/
        (char *)(v12 + 4),
        0x10u,
        v10,
        (void (__thiscall *)(char *))sub_6C6370,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
      v13 = a2; /*0x6c8f87*/
    }
    else
    {
      v13 = 0; /*0x6c8f8d*/
    }
    v66 = 0xFFFFFFFF; /*0x6c8f94*/
    *(this + 6) = (int)v13; /*0x6c8f98*/
    v14 = (NiObject *)FormHeapAlloc(0x14u); /*0x6c8f9b*/
    a2 = v14; /*0x6c8fa3*/
    v66 = 2; /*0x6c8fa9*/
    if ( v14 ) /*0x6c8fb1*/
    {
      LODWORD(v61) = 0x140 * *v4; /*0x6c8fbc*/
      v15 = (Ni2DBuffer *)sub_6C5D80(v14, v61); /*0x6c8fbf*/
    }
    else
    {
      v15 = 0; /*0x6c8fc6*/
    }
    v66 = 0xFFFFFFFF; /*0x6c8fcc*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x19, v15); /*0x6c8fd0*/
    result = 0; /*0x6c8fd5*/
    v17 = *v4 == 0; /*0x6c8fd7*/
    v64 = 0; /*0x6c8fda*/
    if ( !v17 ) /*0x6c8fde*/
    {
      a2 = 0; /*0x6c8fe4*/
      do /*0x6c908f*/
      {
        v18 = (int *)((char *)a2 + *(this + 6)); /*0x6c8feb*/
        v19 = *(this + 0x19); /*0x6c8fef*/
        v20 = *v18; /*0x6c8ff2*/
        v17 = *v18 == v19; /*0x6c8ff4*/
        v63 = v19; /*0x6c8ff6*/
        if ( !v17 ) /*0x6c8ffa*/
        {
          if ( v20 ) /*0x6c8ffe*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x6c9004*/
              (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x6c901b*/
            v19 = v63; /*0x6c901d*/
          }
          *v18 = v19; /*0x6c9023*/
          if ( v19 ) /*0x6c9025*/
            InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x6c902b*/
        }
        v62 = 0; /*0x6c9038*/
        sub_713620(v3, (int)&v62); /*0x6c9040*/
        v21 = (char *)a2 + *(this + 6); /*0x6c904c*/
        if ( v62 ) /*0x6c9052*/
          *((_WORD *)v21 + 2) = (unsigned __int16)sub_6C6270(*(const char ***)v21, v62); /*0x6c9064*/
        else
          *((_WORD *)v21 + 2) = 0xFFFF; /*0x6c9054*/
        FormHeapFree((unsigned int)v62); /*0x6c906d*/
        sub_712A20((unsigned int *)v3); /*0x6c9077*/
        a2 += 2; /*0x6c9080*/
        result = v64 + 1; /*0x6c9085*/
        v22 = ++v64 < (unsigned int)*(this + 3); /*0x6c9088*/
      }
      while ( v22 ); /*0x6c908f*/
    }
  }
  return result; /*0x6c9400*/
}
