void __thiscall sub_6C70A0(unsigned int *this, unsigned int *a2, _DWORD **a3)
{
  const char *v5; // ebx
  unsigned int v6; // kr00_4
  char *v7; // eax
  int v8; // edi
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int v18; // edi
  void **v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // ecx
  int *v23; // ebx
  int v24; // eax
  bool v25; // zf
  _DWORD *v26; // eax
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // ebx
  volatile LONG *v30; // eax
  unsigned int v31; // ebx
  int v32; // ecx
  volatile LONG **v33; // ebx
  unsigned int v34; // edi
  unsigned int v35; // eax
  unsigned int v36; // edx
  const char *v37; // ebx
  unsigned int v38; // kr04_4
  char *v39; // eax
  unsigned int v40; // edi
  unsigned int v41; // ebp
  unsigned int i; // [esp+14h] [ebp-14h]
  void (__thiscall ***v43)(_DWORD, int); // [esp+18h] [ebp-10h]
  int *v44; // [esp+18h] [ebp-10h]
  void (__thiscall ***v45)(_DWORD, int); // [esp+18h] [ebp-10h]
  int v46; // [esp+2Ch] [ebp+4h]
  int v47; // [esp+2Ch] [ebp+4h]
  volatile LONG *v48; // [esp+2Ch] [ebp+4h]

  sub_700770(this, (int)a2, a3); /*0x6c70d3*/
  v5 = (const char *)*(this + 2); /*0x6c70db*/
  FormHeapFree(a2[2]); /*0x6c70df*/
  v6 = strlen(v5); /*0x6c70e9*/
  v7 = (char *)FormHeapAlloc(v6 + 1); /*0x6c70ff*/
  a2[2] = (unsigned int)v7; /*0x6c7107*/
  strcpy_s(v7, v6 + 1, v5); /*0x6c710a*/
  a2[3] = *(this + 3); /*0x6c7112*/
  a2[4] = *(this + 4); /*0x6c7118*/
  v8 = *(this + 3); /*0x6c711b*/
  v9 = (unsigned __int64)(unsigned int)v8 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v8;
  v10 = FormHeapAlloc(__CFADD__(v9, 4) ? 0xFFFFFFFF : v9 + 4);
  if ( v10 ) /*0x6c7153*/
  {
    v11 = v10 + 4; /*0x6c7160*/
    *(_DWORD *)v10 = v8; /*0x6c7166*/
    ArrayConstructor( /*0x6c7168*/
      (char *)(v10 + 4),
      0x10u,
      v8,
      (void (__thiscall *)(char *))sub_6C62E0,
      (void (__thiscall *)(void *))sub_6C64C0);
    v12 = v11; /*0x6c716d*/
  }
  else
  {
    v12 = 0; /*0x6c7171*/
  }
  a2[5] = v12; /*0x6c7173*/
  v13 = *(this + 3); /*0x6c7176*/
  v14 = (unsigned __int64)(unsigned int)v13 >> 0x1C != 0; /*0x6c7184*/
  v15 = FormHeapAlloc(__CFADD__((0x10 * v13) | -v14, 4) ? 0xFFFFFFFF : ((0x10 * v13) | -v14) + 4);
  if ( v15 ) /*0x6c71b6*/
  {
    v16 = v15 + 4; /*0x6c71c3*/
    *(_DWORD *)v15 = v13; /*0x6c71c9*/
    ArrayConstructor( /*0x6c71cb*/
      (char *)(v15 + 4),
      0x10u,
      v13,
      (void (__thiscall *)(char *))sub_6C6370,
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    v17 = v16; /*0x6c71d0*/
  }
  else
  {
    v17 = 0; /*0x6c71d4*/
  }
  v18 = 0; /*0x6c71d6*/
  a2[6] = v17; /*0x6c71d8*/
  for ( i = 0; i < *(this + 3); ++i ) /*0x6c71db*/
  {
    v19 = (void **)(v18 + *(this + 5)); /*0x6c71f7*/
    if ( *v19 ) /*0x6c71f3*/
    {
      if ( *(this + 0x10) ) /*0x6c7200*/
      {
        v30 = (volatile LONG *)sub_700710(*v19, a3); /*0x6c72e0*/
        v31 = a2[5]; /*0x6c72e5*/
        v32 = *(_DWORD *)(v31 + v18); /*0x6c72e8*/
        v33 = (volatile LONG **)(v18 + v31); /*0x6c72eb*/
        v48 = v30; /*0x6c72ef*/
        v45 = (void (__thiscall ***)(_DWORD, int))v32; /*0x6c72f3*/
        if ( (volatile LONG *)v32 != v30 ) /*0x6c72f7*/
        {
          if ( v32 ) /*0x6c72fb*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v32 + 4)) ) /*0x6c7301*/
            {
              if ( v45 ) /*0x6c7311*/
                (**v45)(v45, 1); /*0x6c7319*/
            }
            v30 = v48; /*0x6c731b*/
          }
          *v33 = v30; /*0x6c7321*/
          if ( v30 ) /*0x6c7323*/
            InterlockedIncrement(v30 + 1); /*0x6c7329*/
        }
        *(_BYTE *)(v18 + a2[5] + 0xC) = *(_BYTE *)(v18 + *(this + 5) + 0xC); /*0x6c7339*/
      }
      else
      {
        v20 = (*(int (__thiscall **)(void *, _DWORD **))(*(_DWORD *)*v19 + 0x18))(*v19, a3); /*0x6c7216*/
        v21 = a2[5]; /*0x6c7218*/
        v22 = *(_DWORD *)(v21 + v18); /*0x6c721b*/
        v23 = (int *)(v18 + v21); /*0x6c721e*/
        v46 = v20; /*0x6c7222*/
        v43 = (void (__thiscall ***)(_DWORD, int))v22; /*0x6c7226*/
        if ( v22 != v20 ) /*0x6c722a*/
        {
          if ( v22 ) /*0x6c722e*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x6c7234*/
            {
              if ( v43 ) /*0x6c7244*/
                (**v43)(v43, 1); /*0x6c724c*/
            }
            v20 = v46; /*0x6c724e*/
          }
          *v23 = v20; /*0x6c7254*/
          if ( v20 ) /*0x6c7256*/
            InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x6c725c*/
        }
        v24 = *(this + 5); /*0x6c7262*/
        v25 = *(_DWORD *)(v18 + v24 + 4) == 0; /*0x6c7265*/
        v26 = (_DWORD *)(v18 + v24 + 4); /*0x6c726a*/
        if ( !v25 ) /*0x6c726e*/
        {
          v27 = (*(int (__thiscall **)(_DWORD, _DWORD **))(*(_DWORD *)*v26 + 0x18))(*v26, a3); /*0x6c7280*/
          v28 = a2[5]; /*0x6c7282*/
          v29 = *(_DWORD *)(v18 + v28 + 4); /*0x6c7285*/
          v47 = v27; /*0x6c728f*/
          v44 = (int *)(v18 + v28 + 4); /*0x6c7293*/
          if ( v29 != v27 ) /*0x6c7297*/
          {
            if ( v29 ) /*0x6c729f*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) ) /*0x6c72a5*/
                (**(void (__thiscall ***)(int, int))v29)(v29, 1); /*0x6c72bb*/
              v27 = v47; /*0x6c72bd*/
            }
            *v44 = v27; /*0x6c72c7*/
            if ( v27 ) /*0x6c72c9*/
              InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x6c72cf*/
          }
        }
      }
    }
    *(_BYTE *)(v18 + a2[5] + 0xD) = *(_BYTE *)(v18 + *(this + 5) + 0xD); /*0x6c7347*/
    sub_6C67F0((_DWORD *)(v18 + a2[6]), (int *)(v18 + *(this + 6))); /*0x6c7356*/
    v18 += 0x10; /*0x6c7362*/
  }
  a2[7] = *(this + 7); /*0x6c7375*/
  v34 = a2[8]; /*0x6c7378*/
  if ( v34 != *(this + 8) ) /*0x6c737e*/
  {
    if ( v34 ) /*0x6c7382*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v34 + 4)) ) /*0x6c7388*/
        (**(void (__thiscall ***)(unsigned int, int))v34)(v34, 1); /*0x6c739e*/
    }
    v35 = *(this + 8); /*0x6c73a0*/
    a2[8] = v35; /*0x6c73a5*/
    if ( v35 ) /*0x6c73a8*/
      InterlockedIncrement((volatile LONG *)(v35 + 4)); /*0x6c73ae*/
  }
  v36 = a2[0x17]; /*0x6c73b7*/
  a2[9] = *(this + 9); /*0x6c73ba*/
  a2[0xA] = *(this + 0xA); /*0x6c73c0*/
  a2[0xB] = *(this + 0xB); /*0x6c73c7*/
  a2[0xC] = *(this + 0xC); /*0x6c73cd*/
  v37 = (const char *)*(this + 0x17); /*0x6c73d0*/
  FormHeapFree(v36); /*0x6c73d3*/
  a2[0x17] = 0; /*0x6c73dd*/
  if ( v37 ) /*0x6c73e4*/
  {
    v38 = strlen(v37); /*0x6c73e8*/
    v39 = (char *)FormHeapAlloc(v38 + 1); /*0x6c73ff*/
    a2[0x17] = (unsigned int)v39; /*0x6c7407*/
    strcpy_s(v39, v38 + 1, v37); /*0x6c740a*/
  }
  v40 = a2[0x19]; /*0x6c7412*/
  if ( v40 != *(this + 0x19) ) /*0x6c7418*/
  {
    if ( v40 ) /*0x6c741c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v40 + 4)) ) /*0x6c7422*/
        (**(void (__thiscall ***)(unsigned int, int))v40)(v40, 1); /*0x6c7438*/
    }
    v41 = *(this + 0x19); /*0x6c743a*/
    a2[0x19] = v41; /*0x6c743f*/
    if ( v41 ) /*0x6c7442*/
      InterlockedIncrement((volatile LONG *)(v41 + 4)); /*0x6c7448*/
  }
}
