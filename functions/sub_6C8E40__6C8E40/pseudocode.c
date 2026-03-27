LONG __thiscall sub_6C8E40(int *this, NiObject *a2)
{
  char *v3; // edi
  int *v4; // ebp
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  int v6; // ebx
  int v7; // ecx
  int *v8; // eax
  int v9; // eax
  int v10; // ebx
  unsigned int v11; // ecx
  int *v12; // eax
  int v13; // eax
  NiObject *v14; // eax
  Ni2DBuffer *v15; // eax
  LONG result; // eax
  bool v17; // zf
  int *v18; // ebx
  int v19; // eax
  int v20; // ebp
  char *v21; // ebx
  bool v22; // cf
  void (__cdecl *v23)(int, int *, int, int *, int); // edx
  int *v24; // ebp
  void (__cdecl *v25)(int, int *, int, int *, int); // eax
  int v26; // ebx
  unsigned int v27; // ecx
  int *v28; // eax
  int v29; // eax
  int v30; // ebx
  unsigned int v31; // ecx
  int *v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  NiObject *v35; // eax
  Ni2DBuffer *v36; // eax
  int v37; // ebp
  int v38; // eax
  int v39; // ecx
  int v40; // ebx
  NiObject *v41; // eax
  void (__cdecl *v42)(int, int *, int, int *, int); // eax
  void (__cdecl *v43)(int, int *, int, int *, int); // eax
  void (__cdecl *v44)(int, int *, int, int *, int); // edx
  void (__cdecl *v45)(int, int *, int, int *, int); // eax
  void (__cdecl *v46)(int, int *, int, int *, int); // eax
  void (__cdecl *v47)(int, int *, int, int *, int); // eax
  void (__cdecl *v48)(int, NiObject **, int, int *, int); // eax
  int v49; // edi
  int v50; // ebx
  int v51; // [esp-28h] [ebp-58h]
  int v52; // [esp-28h] [ebp-58h]
  int v53; // [esp-28h] [ebp-58h]
  int v54; // [esp-14h] [ebp-44h]
  int v55; // [esp-14h] [ebp-44h]
  int v56; // [esp-14h] [ebp-44h]
  int v57; // [esp-14h] [ebp-44h]
  int v58; // [esp-14h] [ebp-44h]
  int v59; // [esp-14h] [ebp-44h]
  int v60; // [esp-14h] [ebp-44h]
  size_t v61; // [esp-4h] [ebp-34h]
  const char *v62; // [esp+14h] [ebp-1Ch] BYREF
  int v63; // [esp+18h] [ebp-18h] BYREF
  int v64; // [esp+1Ch] [ebp-14h] BYREF
  int v65; // [esp+20h] [ebp-10h] BYREF
  int v66; // [esp+2Ch] [ebp-4h]

  v3 = (char *)a2;
  sub_7008A0((NiRenderer *)this, (signed int)a2);
  if ( *((_DWORD *)v3 + 0x36) >= 0xA010068u )
  {
    sub_713620(v3, this + 2);
    v23 = *(void (__cdecl **)(int, int *, int, int *, int))(*((_DWORD *)v3 + 0x87) + 4);
    v24 = this + 3;
    v55 = *((_DWORD *)v3 + 0x87);
    v64 = 4;
    v23(v55, this + 3, 4, &v64, 1);
    v51 = *((_DWORD *)v3 + 0x87);
    v25 = *(void (__cdecl **)(int, int *, int, int *, int))(v51 + 4);
    v64 = 4;
    v25(v51, this + 4, 4, &v64, 1);
    v26 = *v24;
    v27 = (unsigned __int64)(unsigned int)*v24 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * *v24;
    v28 = (int *)FormHeapAlloc(__CFADD__(v27, 4) ? 0xFFFFFFFF : v27 + 4);
    v65 = (int)v28;
    v66 = 3;
    if ( v28 )
    {
      *v28 = v26;
      a2 = (NiObject *)(v28 + 1);
      ArrayConstructor(v28 + 1, 0x10u, v26, (int)sub_6C62E0, (void (__thiscall *)(void *))sub_6C64C0);
      v29 = (int)a2;
    }
    else
    {
      v29 = 0;
    }
    v30 = *v24;
    *(this + 5) = v29;
    v66 = 0xFFFFFFFF;
    v31 = (unsigned __int64)(unsigned int)v30 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v30;
    v32 = (int *)FormHeapAlloc(__CFADD__(v31, 4) ? 0xFFFFFFFF : v31 + 4);
    v65 = (int)v32;
    v66 = 4;
    if ( v32 )
    {
      *v32 = v30;
      a2 = (NiObject *)(v32 + 1);
      ArrayConstructor(v32 + 1, 0x10u, v30, (int)sub_6C6370, (void (__thiscall *)(void *))sub_7016A0);
      v33 = (int)a2;
    }
    else
    {
      v33 = 0;
    }
    *(this + 6) = v33;
    v34 = *((_DWORD *)v3 + 0x36);
    v66 = 0xFFFFFFFF;
    if ( v34 < 0xA010071 )
    {
      v35 = (NiObject *)FormHeapAlloc(0x14u);
      a2 = v35;
      v66 = 5;
      if ( v35 )
      {
        LODWORD(v61) = 0x140 * *v24;
        v36 = (Ni2DBuffer *)sub_6C5D80(v35, v61);
      }
      else
      {
        v36 = 0;
      }
      v66 = 0xFFFFFFFF;
      NiSmartPointer_Set__((Ni2DBuffer **)this + 0x19, v36);
    }
    v17 = *v24 == 0;
    v63 = 0;
    if ( !v17 )
    {
      v37 = 0;
      do
      {
        if ( *((_DWORD *)v3 + 0x36) < 0xA010071u )
        {
          v38 = *(this + 6);
          v40 = *(_DWORD *)(v38 + v37);
          v41 = (NiObject *)(v37 + v38);
          v64 = *(this + 0x19);
          v39 = v64;
          a2 = v41;
          if ( v40 != v64 )
          {
            if ( v40 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v40 + 4)) )
                (**(void (__thiscall ***)(int, int))v40)(v40, 1);
              v39 = v64;
              v41 = a2;
            }
            v41->__vftable = (NiObjectVtbl *)v39;
            if ( v39 )
              InterlockedIncrement((volatile LONG *)(v39 + 4));
          }
        }
        sub_6C8820((char *)(v37 + *(this + 5)), (int)v3);
        sub_6C8A60((Ni2DBuffer **)(v37 + *(this + 6)), v3);
        v37 += 0x10;
        v22 = ++v63 < (unsigned int)*(this + 3);
      }
      while ( v22 );
    }
    v56 = *((_DWORD *)v3 + 0x87);
    v42 = *(void (__cdecl **)(int, int *, int, int *, int))(v56 + 4);
    v64 = 4;
    v42(v56, this + 7, 4, &v64, 1);
    sub_712A20((unsigned int *)v3);
    v57 = *((_DWORD *)v3 + 0x87);
    v43 = *(void (__cdecl **)(int, int *, int, int *, int))(v57 + 4);
    v64 = 4;
    v43(v57, &v63, 4, &v64, 1);
    *(this + 9) = v63;
    v44 = *(void (__cdecl **)(int, int *, int, int *, int))(*((_DWORD *)v3 + 0x87) + 4);
    v52 = *((_DWORD *)v3 + 0x87);
    v64 = 4;
    v44(v52, this + 0xA, 4, &v64, 1);
    if ( *((_DWORD *)v3 + 0x36) < 0xA030001u )
    {
      v58 = *((_DWORD *)v3 + 0x87);
      v45 = *(void (__cdecl **)(int, int *, int, int *, int))(v58 + 4);
      v64 = 4;
      v45(v58, &v63, 4, &v64, 1);
    }
    v59 = *((_DWORD *)v3 + 0x87);
    v46 = *(void (__cdecl **)(int, int *, int, int *, int))(v59 + 4);
    v64 = 4;
    v46(v59, this + 0xB, 4, &v64, 1);
    v53 = *((_DWORD *)v3 + 0x87);
    v47 = *(void (__cdecl **)(int, int *, int, int *, int))(v53 + 4);
    v64 = 4;
    v47(v53, this + 0xC, 4, &v64, 1);
    if ( *((_DWORD *)v3 + 0x36) < 0xA01006Bu )
    {
      v60 = *((_DWORD *)v3 + 0x87);
      v48 = *(void (__cdecl **)(int, NiObject **, int, int *, int))(v60 + 4);
      v65 = 1;
      v48(v60, &a2, 1, &v65, 1);
    }
    sub_712A20((unsigned int *)v3);
    result = sub_713620(v3, this + 0x17);
    if ( *((_DWORD *)v3 + 0x36) >= 0xA010071u )
    {
      result = sub_712A90(v3);
      v49 = *(this + 0x19);
      v50 = result;
      if ( v49 != result )
      {
        if ( v49 )
        {
          result = InterlockedDecrement((volatile LONG *)(v49 + 4));
          if ( !result )
            result = (**(int (__thiscall ***)(int, int))v49)(v49, 1);
        }
        *(this + 0x19) = v50;
        if ( v50 )
          return InterlockedIncrement((volatile LONG *)(v50 + 4));
      }
    }
  }
  else
  {
    sub_713620(v3, this + 2);
    sub_713620(v3, this + 0x17);
    sub_712A20((unsigned int *)v3);
    v4 = this + 3;
    v54 = *((_DWORD *)v3 + 0x87);
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v54 + 4);
    v64 = 4;
    v5(v54, this + 3, 4, &v64, 1);
    v6 = *(this + 3);
    v7 = (unsigned __int64)(unsigned int)v6 >> 0x1C != 0;
    *(this + 4) = 0xC;
    v8 = (int *)FormHeapAlloc(__CFADD__((0x10 * v6) | -v7, 4) ? 0xFFFFFFFF : ((0x10 * v6) | -v7) + 4);
    v65 = (int)v8;
    v66 = 0;
    if ( v8 )
    {
      *v8 = v6;
      a2 = (NiObject *)(v8 + 1);
      ArrayConstructor(v8 + 1, 0x10u, v6, (int)sub_6C62E0, (void (__thiscall *)(void *))sub_6C64C0);
      v9 = (int)a2;
    }
    else
    {
      v9 = 0;
    }
    v10 = *v4;
    *(this + 5) = v9;
    v66 = 0xFFFFFFFF;
    v11 = (unsigned __int64)(unsigned int)v10 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v10;
    v12 = (int *)FormHeapAlloc(__CFADD__(v11, 4) ? 0xFFFFFFFF : v11 + 4);
    v65 = (int)v12;
    v66 = 1;
    if ( v12 )
    {
      *v12 = v10;
      a2 = (NiObject *)(v12 + 1);
      ArrayConstructor(v12 + 1, 0x10u, v10, (int)sub_6C6370, (void (__thiscall *)(void *))sub_7016A0);
      v13 = (int)a2;
    }
    else
    {
      v13 = 0;
    }
    v66 = 0xFFFFFFFF;
    *(this + 6) = v13;
    v14 = (NiObject *)FormHeapAlloc(0x14u);
    a2 = v14;
    v66 = 2;
    if ( v14 )
    {
      LODWORD(v61) = 0x140 * *v4;
      v15 = (Ni2DBuffer *)sub_6C5D80(v14, v61);
    }
    else
    {
      v15 = 0;
    }
    v66 = 0xFFFFFFFF;
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x19, v15);
    result = 0;
    v17 = *v4 == 0;
    v64 = 0;
    if ( !v17 )
    {
      a2 = 0;
      do
      {
        v18 = (int *)((char *)a2 + *(this + 6));
        v19 = *(this + 0x19);
        v20 = *v18;
        v17 = *v18 == v19;
        v63 = v19;
        if ( !v17 )
        {
          if ( v20 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
              (**(void (__thiscall ***)(int, int))v20)(v20, 1);
            v19 = v63;
          }
          *v18 = v19;
          if ( v19 )
            InterlockedIncrement((volatile LONG *)(v19 + 4));
        }
        v62 = 0;
        sub_713620(v3, (int *)&v62);
        v21 = (char *)a2 + *(this + 6);
        if ( v62 )
          *((_WORD *)v21 + 2) = (unsigned __int16)sub_6C6270(*(const char ***)v21, v62);
        else
          *((_WORD *)v21 + 2) = 0xFFFF;
        FormHeapFree((unsigned int)v62);
        sub_712A20((unsigned int *)v3);
        a2 += 2;
        result = v64 + 1;
        v22 = ++v64 < (unsigned int)*(this + 3);
      }
      while ( v22 );
    }
  }
  return result;
}
