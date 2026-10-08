int __thiscall sub_7D8BA0(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // ebp
  char *v11; // edi
  bool v12; // cf
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // eax
  NiSourceTexture *v16; // esi
  int v17; // eax
  NiSourceTexture *v18; // esi
  int v19; // ebx
  char *v20; // eax
  unsigned int v21; // ebp
  char *v22; // eax
  unsigned int v23; // ebp
  char *v24; // eax
  unsigned int v25; // ebp
  NiSourceTexture *v26; // ecx
  int v27; // esi
  LONG (__stdcall *v28)(volatile LONG *); // ebx
  int v29; // esi
  int v30; // esi
  int v31; // esi
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  int v37; // esi
  int v38; // ecx
  int v39; // ecx
  char *v40; // edi
  NiSourceTexture **v41; // ebp
  int v42; // esi
  NiRTTI *v43; // eax
  char v44; // al
  int v45; // eax
  const char *v46; // ebx
  NiSourceTexture **v47; // edi
  NiSourceTexture *v48; // esi
  bool v49; // zf
  NiSourceTexture *v50; // eax
  NiSourceTexture *v51; // esi
  NiSourceTexture *v52; // esi
  int v53; // eax
  int v54; // eax
  bool v55; // al
  NiSourceTexture **v56; // edi
  NiSourceTexture *v57; // esi
  NiSourceTexture *v58; // eax
  NiSourceTexture *v59; // esi
  _DWORD *v61; // [esp+38h] [ebp-12Ch]
  int v62; // [esp+38h] [ebp-12Ch]
  int v64; // [esp+40h] [ebp-124h]
  char *v65; // [esp+40h] [ebp-124h]
  NiSourceTexture *v66; // [esp+44h] [ebp-120h]
  char *v67; // [esp+44h] [ebp-120h]
  NiSourceTexture *v68; // [esp+48h] [ebp-11Ch] BYREF
  NiSourceTexture *outTexture; // [esp+4Ch] [ebp-118h] BYREF
  char Src[260]; // [esp+50h] [ebp-114h] BYREF
  int v71; // [esp+160h] [ebp-4h]

  v10 = this; /*0x7d8bdb*/
  v11 = *(char **)(this + 0xBC); /*0x7d8be9*/
  v12 = *(_WORD *)(this + 0xB8) < 0xAu; /*0x7d8bf2*/
  v66 = *(NiSourceTexture **)(this + 0xC0); /*0x7d8bfe*/
  outTexture = *(NiSourceTexture **)(this + 0xC4); /*0x7d8c02*/
  if ( v12 ) /*0x7d8c06*/
  {
    v13 = FormHeapAlloc(0x2Cu); /*0x7d8c0e*/
    v71 = 0; /*0x7d8c1c*/
    if ( v13 ) /*0x7d8c27*/
    {
      v14 = (_DWORD *)(v13 + 4); /*0x7d8c35*/
      *(_DWORD *)v13 = 0xA; /*0x7d8c3b*/
      ArrayConstructor( /*0x7d8c41*/
        (char *)(v13 + 4),
        4u,
        0xA,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
    }
    else
    {
      v14 = 0; /*0x7d8c48*/
    }
    v61 = v14; /*0x7d8c4c*/
    v11 = (char *)v14; /*0x7d8c57*/
    v15 = FormHeapAlloc(0x2Cu); /*0x7d8c59*/
    v71 = 1; /*0x7d8c67*/
    if ( v15 ) /*0x7d8c72*/
    {
      v16 = (NiSourceTexture *)(v15 + 4); /*0x7d8c80*/
      *(_DWORD *)v15 = 0xA; /*0x7d8c86*/
      ArrayConstructor( /*0x7d8c8c*/
        (char *)(v15 + 4),
        4u,
        0xA,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
    }
    else
    {
      v16 = 0; /*0x7d8c93*/
    }
    v68 = v16; /*0x7d8c97*/
    v66 = v16; /*0x7d8ca2*/
    v17 = FormHeapAlloc(0x2Cu); /*0x7d8ca6*/
    v71 = 2; /*0x7d8cb4*/
    if ( v17 ) /*0x7d8cbf*/
    {
      v18 = (NiSourceTexture *)(v17 + 4); /*0x7d8ccd*/
      *(_DWORD *)v17 = 0xA; /*0x7d8cd3*/
      ArrayConstructor( /*0x7d8cd9*/
        (char *)(v17 + 4),
        4u,
        0xA,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
    }
    else
    {
      v18 = 0; /*0x7d8ce0*/
    }
    v71 = 0xFFFFFFFF; /*0x7d8ce4*/
    outTexture = v18; /*0x7d8ceb*/
    v19 = FormHeapAlloc(0xAu); /*0x7d8cf6*/
    v64 = FormHeapAlloc(0xAu); /*0x7d8cfd*/
    v20 = *(char **)(v10 + 0xBC); /*0x7d8d01*/
    if ( v20 ) /*0x7d8d0c*/
    {
      v21 = (unsigned int)(v20 + 0xFFFFFFFC); /*0x7d8d11*/
      _LN21(v20, 4u, *((_DWORD *)v20 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7d8d1d*/
      FormHeapFree(v21); /*0x7d8d23*/
      v10 = this; /*0x7d8d28*/
    }
    v22 = *(char **)(v10 + 0xC0); /*0x7d8d2f*/
    if ( v22 ) /*0x7d8d37*/
    {
      v23 = (unsigned int)(v22 + 0xFFFFFFFC); /*0x7d8d3c*/
      _LN21(v22, 4u, *((_DWORD *)v22 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7d8d48*/
      FormHeapFree(v23); /*0x7d8d4e*/
      v10 = this; /*0x7d8d53*/
    }
    v24 = *(char **)(v10 + 0xC4); /*0x7d8d5a*/
    if ( v24 ) /*0x7d8d62*/
    {
      v25 = (unsigned int)(v24 + 0xFFFFFFFC); /*0x7d8d67*/
      _LN21(v24, 4u, *((_DWORD *)v24 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7d8d73*/
      FormHeapFree(v25); /*0x7d8d79*/
      v10 = this; /*0x7d8d7e*/
    }
    FormHeapFree(*(_DWORD *)(v10 + 0xD0)); /*0x7d8d8c*/
    FormHeapFree(*(_DWORD *)(v10 + 0xC8)); /*0x7d8d98*/
    v26 = v68; /*0x7d8da1*/
    *(_DWORD *)(v10 + 0xBC) = v61; /*0x7d8dac*/
    *(_DWORD *)(v10 + 0xC0) = v26; /*0x7d8db2*/
    *(_DWORD *)(v10 + 0xC4) = v18; /*0x7d8db8*/
    *(_DWORD *)(v10 + 0xD0) = v19; /*0x7d8dbe*/
    *(_DWORD *)(v10 + 0xC8) = v64; /*0x7d8dc4*/
    *(_WORD *)(v10 + 0xB8) = 0xA; /*0x7d8dca*/
  }
  v27 = *(_DWORD *)v11; /*0x7d8dd3*/
  v28 = InterlockedDecrement; /*0x7d8dde*/
  if ( *(_DWORD *)v11 != a2 ) /*0x7d8de4*/
  {
    if ( v27 ) /*0x7d8de8*/
    {
      if ( !v28((volatile LONG *)(v27 + 4)) ) /*0x7d8dee*/
        (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x7d8e00*/
    }
    *(_DWORD *)v11 = a2; /*0x7d8e04*/
    if ( a2 ) /*0x7d8e06*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x7d8e0c*/
  }
  v29 = *((_DWORD *)v11 + 1); /*0x7d8e12*/
  if ( v29 != a3 ) /*0x7d8e1e*/
  {
    if ( v29 ) /*0x7d8e22*/
    {
      if ( !v28((volatile LONG *)(v29 + 4)) ) /*0x7d8e28*/
        (**(void (__thiscall ***)(int, int))v29)(v29, 1); /*0x7d8e3a*/
    }
    *((_DWORD *)v11 + 1) = a3; /*0x7d8e3e*/
    if ( a3 ) /*0x7d8e41*/
      InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x7d8e47*/
  }
  v30 = *((_DWORD *)v11 + 2); /*0x7d8e4d*/
  if ( v30 != a4 ) /*0x7d8e59*/
  {
    if ( v30 ) /*0x7d8e5d*/
    {
      if ( !v28((volatile LONG *)(v30 + 4)) ) /*0x7d8e63*/
        (**(void (__thiscall ***)(int, int))v30)(v30, 1); /*0x7d8e75*/
    }
    *((_DWORD *)v11 + 2) = a4; /*0x7d8e79*/
    if ( a4 ) /*0x7d8e7c*/
      InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x7d8e82*/
  }
  v31 = *((_DWORD *)v11 + 3); /*0x7d8e88*/
  if ( v31 != a5 ) /*0x7d8e94*/
  {
    if ( v31 ) /*0x7d8e98*/
    {
      if ( !v28((volatile LONG *)(v31 + 4)) ) /*0x7d8e9e*/
        (**(void (__thiscall ***)(int, int))v31)(v31, 1); /*0x7d8eb0*/
    }
    *((_DWORD *)v11 + 3) = a5; /*0x7d8eb4*/
    if ( a5 ) /*0x7d8eb7*/
      InterlockedIncrement((volatile LONG *)(a5 + 4)); /*0x7d8ebd*/
  }
  v32 = *((_DWORD *)v11 + 4); /*0x7d8ec3*/
  if ( v32 != a6 ) /*0x7d8ecf*/
  {
    if ( v32 ) /*0x7d8ed3*/
    {
      if ( !v28((volatile LONG *)(v32 + 4)) ) /*0x7d8ed9*/
        (**(void (__thiscall ***)(int, int))v32)(v32, 1); /*0x7d8eeb*/
    }
    *((_DWORD *)v11 + 4) = a6; /*0x7d8eef*/
    if ( a6 ) /*0x7d8ef2*/
      InterlockedIncrement((volatile LONG *)(a6 + 4)); /*0x7d8ef8*/
  }
  v33 = *((_DWORD *)v11 + 5); /*0x7d8efe*/
  if ( v33 != a7 ) /*0x7d8f0a*/
  {
    if ( v33 ) /*0x7d8f0e*/
    {
      if ( !v28((volatile LONG *)(v33 + 4)) ) /*0x7d8f14*/
        (**(void (__thiscall ***)(int, int))v33)(v33, 1); /*0x7d8f26*/
    }
    *((_DWORD *)v11 + 5) = a7; /*0x7d8f2a*/
    if ( a7 ) /*0x7d8f2d*/
      InterlockedIncrement((volatile LONG *)(a7 + 4)); /*0x7d8f33*/
  }
  v34 = *((_DWORD *)v11 + 6); /*0x7d8f39*/
  if ( v34 != a8 ) /*0x7d8f45*/
  {
    if ( v34 ) /*0x7d8f49*/
    {
      if ( !v28((volatile LONG *)(v34 + 4)) ) /*0x7d8f4f*/
        (**(void (__thiscall ***)(int, int))v34)(v34, 1); /*0x7d8f61*/
    }
    *((_DWORD *)v11 + 6) = a8; /*0x7d8f65*/
    if ( a8 ) /*0x7d8f68*/
      InterlockedIncrement((volatile LONG *)(a8 + 4)); /*0x7d8f6e*/
  }
  v35 = *((_DWORD *)v11 + 7); /*0x7d8f74*/
  if ( v35 != a9 ) /*0x7d8f80*/
  {
    if ( v35 ) /*0x7d8f84*/
    {
      if ( !v28((volatile LONG *)(v35 + 4)) ) /*0x7d8f8a*/
        (**(void (__thiscall ***)(int, int))v35)(v35, 1); /*0x7d8f9c*/
    }
    *((_DWORD *)v11 + 7) = a9; /*0x7d8fa0*/
    if ( a9 ) /*0x7d8fa3*/
      InterlockedIncrement((volatile LONG *)(a9 + 4)); /*0x7d8fa9*/
  }
  v36 = *((_DWORD *)v11 + 8); /*0x7d8faf*/
  if ( v36 != a10 ) /*0x7d8fbb*/
  {
    if ( v36 ) /*0x7d8fbf*/
    {
      if ( !v28((volatile LONG *)(v36 + 4)) ) /*0x7d8fc5*/
        (**(void (__thiscall ***)(int, int))v36)(v36, 1); /*0x7d8fd7*/
    }
    *((_DWORD *)v11 + 8) = a10; /*0x7d8fdb*/
    if ( a10 ) /*0x7d8fde*/
      InterlockedIncrement((volatile LONG *)(a10 + 4)); /*0x7d8fe4*/
  }
  v37 = *((_DWORD *)v11 + 9); /*0x7d8fea*/
  if ( v37 ) /*0x7d8fef*/
  {
    if ( !v28((volatile LONG *)(v37 + 4)) ) /*0x7d8ff5*/
      (**(void (__thiscall ***)(int, int))v37)(v37, 1); /*0x7d9007*/
    *((_DWORD *)v11 + 9) = 0; /*0x7d9009*/
  }
  v38 = *(_DWORD *)(this + 0xC8); /*0x7d9014*/
  *(_DWORD *)v38 = 0; /*0x7d901c*/
  *(_DWORD *)(v38 + 4) = 0; /*0x7d901e*/
  *(_BYTE *)(v38 + 8) = 0; /*0x7d9021*/
  v39 = *(_DWORD *)(this + 0xD0); /*0x7d9024*/
  *(_DWORD *)v39 = 0; /*0x7d902a*/
  *(_DWORD *)(v39 + 4) = 0; /*0x7d902c*/
  *(_BYTE *)(v39 + 8) = 0; /*0x7d902f*/
  v62 = 0; /*0x7d9036*/
  v40 = (char *)(v11 - (char *)v66); /*0x7d903e*/
  v41 = (NiSourceTexture **)v66; /*0x7d9042*/
  v65 = v40; /*0x7d9044*/
  v67 = (char *)((char *)outTexture - (char *)v66); /*0x7d9048*/
  while ( 1 )
  {
    v42 = *(int *)((char *)v41 + (_DWORD)v40); /*0x7d9054*/
    if ( !v42 ) /*0x7d9059*/
      break; /*0x7d9059*/
    v43 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v42 + 4))(*(NiSourceTexture **)((char *)v41 + (_DWORD)v40)); /*0x7d9066*/
    if ( v43 ) /*0x7d906a*/
    {
      while ( v43 != &stru_B3F95C ) /*0x7d9075*/
      {
        v43 = v43->parent; /*0x7d907b*/
        if ( !v43 ) /*0x7d9080*/
          goto LABEL_82; /*0x7d9080*/
      }
      v44 = 1; /*0x7d916a*/
    }
    else
    {
LABEL_82:
      v44 = 0; /*0x7d9082*/
    }
    v45 = v44 != 0 ? v42 : 0;
    if ( v45 ) /*0x7d908a*/
    {
      v46 = *(const char **)(v45 + 0x38); /*0x7d9090*/
      BuildTextureVariantPath(Src, v46, "_n"); /*0x7d909e*/
      if ( Src[0] ) /*0x7d90ab*/
      {
        v47 = NiSourceTexture_LoadChecked(&outTexture, Src, 1, 1); /*0x7d90c7*/
        v48 = *v41; /*0x7d90c9*/
        v49 = *v41 == *v47; /*0x7d90cc*/
        v71 = 3; /*0x7d90ce*/
        if ( !v49 ) /*0x7d90d9*/
        {
          if ( v48 ) /*0x7d90dd*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v48->members) ) /*0x7d90e3*/
              v48->vtbl->super.super.super.Destructor((NiRefObject *)v48, 1); /*0x7d90f9*/
          }
          v50 = *v47; /*0x7d90fb*/
          v49 = *v47 == 0; /*0x7d90fd*/
          *v41 = *v47; /*0x7d90ff*/
          if ( !v49 ) /*0x7d9102*/
            InterlockedIncrement((volatile LONG *)&v50->members); /*0x7d9108*/
        }
        v51 = outTexture; /*0x7d910e*/
        v71 = 0xFFFFFFFF; /*0x7d9114*/
        if ( outTexture ) /*0x7d911f*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&outTexture->members) ) /*0x7d9125*/
          {
            if ( v51 ) /*0x7d9131*/
              v51->vtbl->super.super.super.Destructor((NiRefObject *)v51, 1); /*0x7d913b*/
          }
        }
        v52 = *v41; /*0x7d913d*/
        if ( *v41 ) /*0x7d913d*/
        {
          if ( v52->members.super.rendererData ) /*0x7d9144*/
          {
            if ( (*((int (__thiscall **)(NiDX9TextureData *))v52->members.super.rendererData->_vtbl + 3))(v52->members.super.rendererData) ) /*0x7d9152*/
            {
              if ( v52->members.super.rendererData ) /*0x7d9158*/
                v53 = (*((int (__thiscall **)(NiDX9TextureData *))v52->members.super.rendererData->_vtbl + 3))(v52->members.super.rendererData); /*0x7d9166*/
              else
                v53 = 0; /*0x7d9171*/
              v54 = *(_DWORD *)(v53 + 4); /*0x7d9173*/
              v55 = v54 == 5 || v54 == 6 || v54 == 1; /*0x7d9189*/
              *(_BYTE *)(v62 + *(_DWORD *)(this + 0xD0)) = v55; /*0x7d919c*/
            }
          }
        }
      }
      BuildTextureVariantPath(Src, v46, "_g"); /*0x7d91aa*/
      if ( Src[0] ) /*0x7d91b7*/
      {
        v56 = NiSourceTexture_LoadChecked(&v68, Src, 1, 1); /*0x7d91d3*/
        v57 = *(NiSourceTexture **)((char *)v41 + (_DWORD)v67); /*0x7d91d9*/
        v49 = v57 == *v56; /*0x7d91dc*/
        v71 = 4; /*0x7d91de*/
        if ( !v49 ) /*0x7d91e9*/
        {
          if ( v57 ) /*0x7d91ed*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v57->members) ) /*0x7d91f3*/
              v57->vtbl->super.super.super.Destructor((NiRefObject *)v57, 1); /*0x7d9209*/
          }
          v58 = *v56; /*0x7d920b*/
          v49 = *v56 == 0; /*0x7d920d*/
          *(NiSourceTexture **)((char *)v41 + (_DWORD)v67) = *v56; /*0x7d920f*/
          if ( !v49 ) /*0x7d9212*/
            InterlockedIncrement((volatile LONG *)&v58->members); /*0x7d9218*/
        }
        v59 = v68; /*0x7d921e*/
        v71 = 0xFFFFFFFF; /*0x7d9224*/
        if ( v68 ) /*0x7d922f*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v68->members) ) /*0x7d9235*/
          {
            if ( v59 ) /*0x7d9241*/
              v59->vtbl->super.super.super.Destructor((NiRefObject *)v59, 1); /*0x7d924b*/
          }
        }
      }
    }
    ++v41; /*0x7d9254*/
    if ( ++v62 >= 9 ) /*0x7d925e*/
      break; /*0x7d925e*/
    v40 = v65; /*0x7d9050*/
  }
  if ( v62 <= 0 ) /*0x7d926a*/
  {
    *(_WORD *)(this + 0xCC) = 0; /*0x7d9282*/
    return 0; /*0x7d9280*/
  }
  else
  {
    *(_WORD *)(this + 0xCC) = v62 - 1; /*0x7d9273*/
    return v62 - 1; /*0x7d9270*/
  }
}
