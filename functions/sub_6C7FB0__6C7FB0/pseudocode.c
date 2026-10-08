void *__thiscall sub_6C7FB0(void *this, char *Src, int a3, int a4, int a5)
{
  double v6; // st7
  double v7; // st7
  unsigned int v8; // kr00_4
  char *v9; // eax
  int v10; // edi
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  int v15; // edi
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // ebp
  bool v19; // zf
  NiObject *v20; // eax
  NiObject **v21; // ebp
  NiObject *v22; // ebx
  NiObject *v23; // edi
  int v25; // [esp+2Ch] [ebp+8h]
  unsigned int v26; // [esp+30h] [ebp+Ch]

  NiObject_constr((NiObject *)this); /*0x6c7fdb*/
  *((float *)this + 7) = 1.0; /*0x6c7fe6*/
  *(_DWORD *)this = &NiControllerSequence::`vftable'; /*0x6c7fef*/
  *((_DWORD *)this + 2) = 0; /*0x6c7ff5*/
  *((_DWORD *)this + 3) = a3; /*0x6c7ff8*/
  *((_DWORD *)this + 4) = a4; /*0x6c7ffb*/
  *((_DWORD *)this + 5) = 0; /*0x6c7ffe*/
  *((_DWORD *)this + 6) = 0; /*0x6c8001*/
  *((_DWORD *)this + 8) = 0; /*0x6c8008*/
  *((float *)this + 0xA) = 1.0; /*0x6c800b*/
  *((_DWORD *)this + 9) = 0; /*0x6c800e*/
  *((float *)this + 0xB) = flt_A7DEB4; /*0x6c8017*/
  *((float *)this + 0xC) = -flt_A7DEB4; /*0x6c8028*/
  *((float *)this + 0xD) = -flt_A7DEB4; /*0x6c8033*/
  *((float *)this + 0xE) = -flt_A7DEB4; /*0x6c803e*/
  v6 = flt_A7DEB4; /*0x6c8041*/
  *((_DWORD *)this + 0x10) = 0; /*0x6c8047*/
  *((_DWORD *)this + 0x11) = 0; /*0x6c804c*/
  *((float *)this + 0xF) = -v6; /*0x6c804f*/
  *((float *)this + 0x12) = -flt_A7DEB4; /*0x6c805a*/
  *((float *)this + 0x13) = -flt_A7DEB4; /*0x6c8065*/
  *((float *)this + 0x14) = -flt_A7DEB4; /*0x6c8070*/
  v7 = flt_A7DEB4; /*0x6c8073*/
  *((_DWORD *)this + 0x16) = 0; /*0x6c8079*/
  *((_DWORD *)this + 0x17) = 0; /*0x6c807e*/
  *((float *)this + 0x15) = -v7; /*0x6c8081*/
  *((_DWORD *)this + 0x18) = 0; /*0x6c8084*/
  *((_DWORD *)this + 0x19) = a5; /*0x6c8087*/
  if ( a5 ) /*0x6c808a*/
    InterlockedIncrement((volatile LONG *)(a5 + 4)); /*0x6c8090*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x6c809f*/
  v8 = strlen(Src); /*0x6c80ad*/
  v9 = (char *)FormHeapAlloc(v8 + 1); /*0x6c80bf*/
  *((_DWORD *)this + 2) = v9; /*0x6c80c7*/
  strcpy_s(v9, v8 + 1, Src); /*0x6c80ca*/
  v10 = *((_DWORD *)this + 3); /*0x6c80cf*/
  if ( v10 )
  {
    v11 = (unsigned __int64)(unsigned int)v10 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v10;
    v12 = FormHeapAlloc(__CFADD__(v11, 4) ? 0xFFFFFFFF : v11 + 4);
    if ( v12 ) /*0x6c810f*/
    {
      v13 = v12 + 4; /*0x6c811c*/
      *(_DWORD *)v12 = v10; /*0x6c8122*/
      ArrayConstructor( /*0x6c8124*/
        (char *)(v12 + 4),
        0x10u,
        v10,
        (void (__thiscall *)(char *))sub_6C62E0,
        (void (__thiscall *)(void *))sub_6C64C0);
      v14 = v13; /*0x6c8129*/
    }
    else
    {
      v14 = 0; /*0x6c812d*/
    }
    v15 = *((_DWORD *)this + 3); /*0x6c812f*/
    *((_DWORD *)this + 5) = v14; /*0x6c8132*/
    v16 = (unsigned __int64)(unsigned int)v15 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v15;
    v17 = FormHeapAlloc(__CFADD__(v16, 4) ? 0xFFFFFFFF : v16 + 4);
    if ( v17 ) /*0x6c816c*/
    {
      v18 = v17 + 4; /*0x6c8179*/
      *(_DWORD *)v17 = v15; /*0x6c817f*/
      ArrayConstructor( /*0x6c8181*/
        (char *)(v17 + 4),
        0x10u,
        v15,
        (void (__thiscall *)(char *))sub_6C6370,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
    }
    else
    {
      v18 = 0; /*0x6c8188*/
    }
    v19 = *((_DWORD *)this + 3) == 0; /*0x6c818a*/
    *((_DWORD *)this + 6) = v18; /*0x6c8192*/
    v26 = 0; /*0x6c8195*/
    if ( !v19 ) /*0x6c8199*/
    {
      v25 = 0; /*0x6c819b*/
      do /*0x6c81fa*/
      {
        v20 = sub_6C6400(); /*0x6c81a1*/
        v21 = (NiObject **)(v25 + *((_DWORD *)this + 6)); /*0x6c81a9*/
        v22 = v20; /*0x6c81ad*/
        v23 = *v21; /*0x6c81af*/
        if ( *v21 != v20 ) /*0x6c81b4*/
        {
          if ( v23 ) /*0x6c81b8*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v23->members) ) /*0x6c81be*/
              v23->__vftable->super.Destructor((NiRefObject *)v23, 1); /*0x6c81d4*/
          }
          *v21 = v22; /*0x6c81d8*/
          if ( v22 ) /*0x6c81db*/
            InterlockedIncrement((volatile LONG *)&v22->members); /*0x6c81e1*/
        }
        v25 += 0x10; /*0x6c81eb*/
        ++v26; /*0x6c81f6*/
      }
      while ( v26 < *((_DWORD *)this + 3) ); /*0x6c81fa*/
    }
  }
  return this; /*0x6c81fe*/
}
