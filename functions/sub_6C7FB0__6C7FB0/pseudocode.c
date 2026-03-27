void *__thiscall sub_6C7FB0(void *this, char *Src, int a3, int a4, int a5)
{
  double v6; // st7
  double v7; // st7
  unsigned int v8; // kr00_4
  char *v9; // eax
  int v10; // edi
  unsigned int v11; // ecx
  int *v12; // eax
  _DWORD *v13; // ebp
  _DWORD *v14; // eax
  int v15; // edi
  unsigned int v16; // ecx
  int *v17; // eax
  _DWORD *v18; // ebp
  bool v19; // zf
  NiObject *v20; // eax
  NiObject **v21; // ebp
  NiObject *v22; // ebx
  NiObject *v23; // edi
  int v25; // [esp+2Ch] [ebp+8h]
  unsigned int v26; // [esp+30h] [ebp+Ch]

  NiObject_constr((NiObject *)this);
  *((float *)this + 7) = 1.0;
  *(_DWORD *)this = &NiControllerSequence::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = a3;
  *((_DWORD *)this + 4) = a4;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 0;
  *((float *)this + 0xA) = 1.0;
  *((_DWORD *)this + 9) = 0;
  *((float *)this + 0xB) = flt_A7DEB4;
  *((float *)this + 0xC) = -flt_A7DEB4;
  *((float *)this + 0xD) = -flt_A7DEB4;
  *((float *)this + 0xE) = -flt_A7DEB4;
  v6 = flt_A7DEB4;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((float *)this + 0xF) = -v6;
  *((float *)this + 0x12) = -flt_A7DEB4;
  *((float *)this + 0x13) = -flt_A7DEB4;
  *((float *)this + 0x14) = -flt_A7DEB4;
  v7 = flt_A7DEB4;
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *((float *)this + 0x15) = -v7;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = a5;
  if ( a5 )
    InterlockedIncrement((volatile LONG *)(a5 + 4));
  FormHeapFree(*((_DWORD *)this + 2));
  v8 = strlen(Src);
  v9 = (char *)FormHeapAlloc(v8 + 1);
  *((_DWORD *)this + 2) = v9;
  strcpy_s(v9, v8 + 1, Src);
  v10 = *((_DWORD *)this + 3);
  if ( v10 )
  {
    v11 = (unsigned __int64)(unsigned int)v10 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v10;
    v12 = (int *)FormHeapAlloc(__CFADD__(v11, 4) ? 0xFFFFFFFF : v11 + 4);
    if ( v12 )
    {
      v13 = v12 + 1;
      *v12 = v10;
      ArrayConstructor(v12 + 1, 0x10u, v10, (int)sub_6C62E0, (void (__thiscall *)(void *))sub_6C64C0);
      v14 = v13;
    }
    else
    {
      v14 = 0;
    }
    v15 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 5) = v14;
    v16 = (unsigned __int64)(unsigned int)v15 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v15;
    v17 = (int *)FormHeapAlloc(__CFADD__(v16, 4) ? 0xFFFFFFFF : v16 + 4);
    if ( v17 )
    {
      v18 = v17 + 1;
      *v17 = v15;
      ArrayConstructor(v17 + 1, 0x10u, v15, (int)sub_6C6370, (void (__thiscall *)(void *))sub_7016A0);
    }
    else
    {
      v18 = 0;
    }
    v19 = *((_DWORD *)this + 3) == 0;
    *((_DWORD *)this + 6) = v18;
    v26 = 0;
    if ( !v19 )
    {
      v25 = 0;
      do
      {
        v20 = sub_6C6400();
        v21 = (NiObject **)(v25 + *((_DWORD *)this + 6));
        v22 = v20;
        v23 = *v21;
        if ( *v21 != v20 )
        {
          if ( v23 )
          {
            if ( !InterlockedDecrement((volatile LONG *)&v23->members) )
              v23->__vftable->super.Destructor((NiRefObject *)v23, 1);
          }
          *v21 = v22;
          if ( v22 )
            InterlockedIncrement((volatile LONG *)&v22->members);
        }
        v25 += 0x10;
        ++v26;
      }
      while ( v26 < *((_DWORD *)this + 3) );
    }
  }
  return this;
}
