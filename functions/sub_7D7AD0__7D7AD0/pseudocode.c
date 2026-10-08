// [Verified] BSShaderPPLightingProperty clone-field copier. Calls BSShaderProperty_CopyCloneMembers, resizes/copies the three NiPointer arrays and scalar fields in the PP-lighting extension, and retains refcounted members. It does not copy the inherited BSShaderLightingProperty decal list at +0x80.
void __thiscall BSShaderPPLightingProperty_CopyCloneMembers(
        BSShaderPPLightingProperty *this,
        BSShaderPPLightingProperty *clone,
        void *cloneProcess)
{
  char *v5; // eax
  unsigned int v6; // ebx
  char *v7; // eax
  unsigned int v8; // ebx
  char *v9; // eax
  unsigned int v10; // ebx
  int v11; // ebp
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // ebx
  int v15; // ebp
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  int v19; // ebp
  int v20; // ecx
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // ecx
  _DWORD *v27; // eax
  int *v28; // ebp
  int v29; // ebp
  int v30; // eax
  int v31; // ecx
  _DWORD *v32; // eax
  int *v33; // ebp
  int v34; // ebp
  _DWORD *v35; // eax
  int *v36; // ebp
  int v37; // ebx
  int v38; // ebp
  int v39; // ebx
  int v40; // eax
  int v41; // ebx
  int v42; // eax
  void (__thiscall ***v43)(_DWORD, int); // [esp+14h] [ebp-10h]
  void (__thiscall ***v44)(_DWORD, int); // [esp+14h] [ebp-10h]
  BSShaderPPLightingProperty *clonea; // [esp+28h] [ebp+4h]
  _DWORD *cloneProcessa; // [esp+2Ch] [ebp+8h]
  _DWORD *cloneProcessb; // [esp+2Ch] [ebp+8h]
  _DWORD *cloneProcessc; // [esp+2Ch] [ebp+8h]

  j_BSShaderProperty_CopyCloneMembers((char **)this, (int)clone, (int)cloneProcess); /*0x7d7b01*/
  if ( *((_WORD *)clone + 0x5C) != *((_WORD *)this + 0x5C) )
  {
    v5 = *((char **)clone + 0x2F); /*0x7d7b1a*/
    if ( v5 ) /*0x7d7b22*/
    {
      v6 = (unsigned int)(v5 + 0xFFFFFFFC); /*0x7d7b27*/
      _LN21(v5, 4u, *((_DWORD *)v5 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7d7b33*/
      FormHeapFree(v6); /*0x7d7b39*/
    }
    v7 = *((char **)clone + 0x30); /*0x7d7b41*/
    if ( v7 ) /*0x7d7b49*/
    {
      v8 = (unsigned int)(v7 + 0xFFFFFFFC); /*0x7d7b4e*/
      _LN21(v7, 4u, *((_DWORD *)v7 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7d7b5a*/
      FormHeapFree(v8); /*0x7d7b60*/
    }
    v9 = *((char **)clone + 0x31); /*0x7d7b68*/
    if ( v9 ) /*0x7d7b70*/
    {
      v10 = (unsigned int)(v9 + 0xFFFFFFFC); /*0x7d7b75*/
      _LN21(v9, 4u, *((_DWORD *)v9 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7d7b81*/
      FormHeapFree(v10); /*0x7d7b87*/
    }
    FormHeapFree(*((_DWORD *)clone + 0x34)); /*0x7d7b96*/
    FormHeapFree(*((_DWORD *)clone + 0x32)); /*0x7d7ba2*/
    v11 = *((unsigned __int16 *)this + 0x5C); /*0x7d7ba7*/
    v12 = (unsigned __int64)*((unsigned __int16 *)this + 0x5C) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v11;
    v13 = FormHeapAlloc(__CFADD__(v12, 4) ? 0xFFFFFFFF : v12 + 4);
    v14 = 0; /*0x7d7bd9*/
    if ( v13 ) /*0x7d7be1*/
    {
      v14 = v13 + 4; /*0x7d7bee*/
      *(_DWORD *)v13 = v11; /*0x7d7bf4*/
      ArrayConstructor( /*0x7d7bf6*/
        (char *)(v13 + 4),
        4u,
        v11,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
    }
    *((_DWORD *)clone + 0x2F) = v14; /*0x7d7bfb*/
    v15 = *((unsigned __int16 *)this + 0x5C); /*0x7d7c01*/
    v16 = (unsigned __int64)*((unsigned __int16 *)this + 0x5C) >> 0x1E != 0; /*0x7d7c13*/
    v17 = FormHeapAlloc(__CFADD__((4 * v15) | -v16, 4) ? 0xFFFFFFFF : ((4 * v15) | -v16) + 4);
    if ( v17 ) /*0x7d7c45*/
    {
      v18 = v17 + 4; /*0x7d7c52*/
      *(_DWORD *)v17 = v15; /*0x7d7c58*/
      ArrayConstructor( /*0x7d7c5a*/
        (char *)(v17 + 4),
        4u,
        v15,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
    }
    else
    {
      v18 = 0; /*0x7d7c61*/
    }
    *((_DWORD *)clone + 0x30) = v18; /*0x7d7c63*/
    v19 = *((unsigned __int16 *)this + 0x5C); /*0x7d7c69*/
    v20 = (unsigned __int64)*((unsigned __int16 *)this + 0x5C) >> 0x1E != 0; /*0x7d7c7b*/
    v21 = FormHeapAlloc(__CFADD__((4 * v19) | -v20, 4) ? 0xFFFFFFFF : ((4 * v19) | -v20) + 4);
    if ( v21 ) /*0x7d7cad*/
    {
      v22 = v21 + 4; /*0x7d7cba*/
      *(_DWORD *)v21 = v19; /*0x7d7cc0*/
      ArrayConstructor( /*0x7d7cc2*/
        (char *)(v21 + 4),
        4u,
        v19,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
    }
    else
    {
      v22 = 0; /*0x7d7cc9*/
    }
    *((_DWORD *)clone + 0x31) = v22; /*0x7d7ccb*/
    *((_DWORD *)clone + 0x34) = FormHeapAlloc(*((unsigned __int16 *)this + 0x5C)); /*0x7d7ce6*/
    *((_DWORD *)clone + 0x32) = FormHeapAlloc(*((unsigned __int16 *)this + 0x5C)); /*0x7d7cf9*/
    *((_WORD *)clone + 0x5C) = *((_WORD *)this + 0x5C); /*0x7d7d09*/
  }
  v23 = 0; /*0x7d7d10*/
  clonea = 0; /*0x7d7d19*/
  if ( *((_WORD *)this + 0x5C) ) /*0x7d7d12*/
  {
    do /*0x7d7e66*/
    {
      v24 = 4 * v23; /*0x7d7d29*/
      v25 = *((_DWORD *)clone + 0x2F); /*0x7d7d30*/
      v26 = *(_DWORD *)(v25 + v24); /*0x7d7d36*/
      v27 = (_DWORD *)(v24 + v25); /*0x7d7d39*/
      v28 = (int *)(v24 + *((_DWORD *)this + 0x2F)); /*0x7d7d3b*/
      cloneProcessa = v27; /*0x7d7d40*/
      v43 = (void (__thiscall ***)(_DWORD, int))v26; /*0x7d7d44*/
      if ( v26 != *v28 ) /*0x7d7d48*/
      {
        if ( v26 ) /*0x7d7d4c*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x7d7d52*/
          {
            if ( v43 ) /*0x7d7d62*/
              (**v43)(v43, 1); /*0x7d7d6a*/
          }
          v27 = cloneProcessa; /*0x7d7d6c*/
        }
        v29 = *v28; /*0x7d7d70*/
        *v27 = v29; /*0x7d7d75*/
        if ( v29 ) /*0x7d7d77*/
          InterlockedIncrement((volatile LONG *)(v29 + 4)); /*0x7d7d7d*/
      }
      v30 = *((_DWORD *)clone + 0x30); /*0x7d7d83*/
      v31 = *(_DWORD *)(v30 + v24); /*0x7d7d8f*/
      v32 = (_DWORD *)(v24 + v30); /*0x7d7d92*/
      v33 = (int *)(v24 + *((_DWORD *)this + 0x30)); /*0x7d7d94*/
      cloneProcessb = v32; /*0x7d7d99*/
      v44 = (void (__thiscall ***)(_DWORD, int))v31; /*0x7d7d9d*/
      if ( v31 != *v33 ) /*0x7d7da1*/
      {
        if ( v31 ) /*0x7d7da5*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) ) /*0x7d7dab*/
          {
            if ( v44 ) /*0x7d7dbb*/
              (**v44)(v44, 1); /*0x7d7dc3*/
          }
          v32 = cloneProcessb; /*0x7d7dc5*/
        }
        v34 = *v33; /*0x7d7dc9*/
        *v32 = v34; /*0x7d7dce*/
        if ( v34 ) /*0x7d7dd0*/
          InterlockedIncrement((volatile LONG *)(v34 + 4)); /*0x7d7dd6*/
      }
      v35 = (_DWORD *)(v24 + *((_DWORD *)clone + 0x31)); /*0x7d7de8*/
      v36 = (int *)(v24 + *((_DWORD *)this + 0x31)); /*0x7d7dea*/
      v37 = *v35; /*0x7d7dec*/
      cloneProcessc = v35; /*0x7d7df1*/
      if ( *v35 != *v36 ) /*0x7d7df5*/
      {
        if ( v37 ) /*0x7d7df9*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v37 + 4)) ) /*0x7d7dff*/
            (**(void (__thiscall ***)(int, int))v37)(v37, 1); /*0x7d7e15*/
          v35 = cloneProcessc; /*0x7d7e17*/
        }
        v38 = *v36; /*0x7d7e1b*/
        *v35 = v38; /*0x7d7e20*/
        if ( v38 ) /*0x7d7e22*/
          InterlockedIncrement((volatile LONG *)(v38 + 4)); /*0x7d7e28*/
      }
      *((_BYTE *)clonea + *((_DWORD *)clone + 0x34)) = *((_BYTE *)clonea + *((_DWORD *)this + 0x34)); /*0x7d7e41*/
      *((_BYTE *)clonea + *((_DWORD *)clone + 0x32)) = *((_BYTE *)clonea + *((_DWORD *)this + 0x32)); /*0x7d7e53*/
      v23 = (int)clonea + 1; /*0x7d7e5d*/
      clonea = (BSShaderPPLightingProperty *)v23; /*0x7d7e62*/
    }
    while ( v23 < *((unsigned __int16 *)this + 0x5C) ); /*0x7d7e66*/
  }
  v39 = *((_DWORD *)clone + 0x35); /*0x7d7e6c*/
  if ( v39 != *((_DWORD *)this + 0x35) ) /*0x7d7e78*/
  {
    if ( v39 ) /*0x7d7e7c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v39 + 4)) ) /*0x7d7e82*/
        (**(void (__thiscall ***)(int, int))v39)(v39, 1); /*0x7d7e98*/
    }
    v40 = *((_DWORD *)this + 0x35); /*0x7d7e9a*/
    *((_DWORD *)clone + 0x35) = v40; /*0x7d7ea2*/
    if ( v40 ) /*0x7d7ea8*/
      InterlockedIncrement((volatile LONG *)(v40 + 4)); /*0x7d7eae*/
  }
  *((_WORD *)clone + 0x66) = *((_WORD *)this + 0x66); /*0x7d7ebb*/
  *((_DWORD *)clone + 0x37) = *((_DWORD *)this + 0x37); /*0x7d7ec8*/
  v41 = *((_DWORD *)clone + 0x38); /*0x7d7ece*/
  if ( v41 != *((_DWORD *)this + 0x38) ) /*0x7d7eda*/
  {
    if ( v41 ) /*0x7d7ede*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v41 + 4)) ) /*0x7d7ee4*/
        (**(void (__thiscall ***)(int, int))v41)(v41, 1); /*0x7d7efa*/
    }
    v42 = *((_DWORD *)this + 0x38); /*0x7d7efc*/
    *((_DWORD *)clone + 0x38) = v42; /*0x7d7f04*/
    if ( v42 ) /*0x7d7f0a*/
      InterlockedIncrement((volatile LONG *)(v42 + 4)); /*0x7d7f10*/
  }
  *((_BYTE *)clone + 0xE4) = *((_BYTE *)this + 0xE4); /*0x7d7f1c*/
  *((float *)clone + 0x3A) = *((float *)this + 0x3A); /*0x7d7f28*/
  *((_DWORD *)clone + 0x3B) = *((_DWORD *)this + 0x3B); /*0x7d7f34*/
  *((_DWORD *)clone + 0x36) = *((_DWORD *)this + 0x36); /*0x7d7f46*/
  *((_DWORD *)clone + 0x2A) = *((_DWORD *)this + 0x2A); /*0x7d7f54*/
  *((_DWORD *)clone + 0x2B) = *((_DWORD *)this + 0x2B); /*0x7d7f59*/
  *((_DWORD *)clone + 0x2C) = *((_DWORD *)this + 0x2C); /*0x7d7f5f*/
  *((_DWORD *)clone + 0x2D) = *((_DWORD *)this + 0x2D); /*0x7d7f65*/
}
