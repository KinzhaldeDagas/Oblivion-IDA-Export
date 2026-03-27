int *__thiscall sub_71FEC0(NiTriBasedGeomData *this, signed int a2)
{
  signed int v3; // ebx
  void (__cdecl *v4)(int, NiTriBasedGeomData *, int, int *, int); // edx
  int *v5; // esi
  void (__cdecl *v6)(int, signed int *, int, int *, int); // eax
  int v7; // eax
  int v8; // edx
  void (__cdecl *v9)(int, int, int, int *, int); // eax
  void (__cdecl *v10)(int, char *, int, int *, int); // edx
  int *result; // eax
  int v12; // edi
  void *v13; // eax
  int v14; // esi
  int *v15; // eax
  bool v16; // zf
  void (__cdecl *v17)(int, unsigned __int16 *, int, int *, int); // edx
  int v18; // esi
  unsigned __int16 v19; // cx
  int *v20; // eax
  int *v21; // esi
  int v22; // edi
  int v23; // eax
  void (__cdecl *v24)(int, int, int, int *, int); // eax
  int v25; // edx
  int v26; // edx
  bool v27; // cf
  int v28; // [esp-18h] [ebp-48h]
  int v29; // [esp-14h] [ebp-44h]
  int v30; // [esp-14h] [ebp-44h]
  int v31; // [esp-14h] [ebp-44h]
  int v32; // [esp-14h] [ebp-44h]
  int v33; // [esp-14h] [ebp-44h]
  int v34; // [esp-14h] [ebp-44h]
  unsigned __int16 v35; // [esp+14h] [ebp-1Ch] BYREF
  int v36; // [esp+18h] [ebp-18h] BYREF
  int v37; // [esp+1Ch] [ebp-14h] BYREF
  int v38; // [esp+20h] [ebp-10h] BYREF
  int v39; // [esp+2Ch] [ebp-4h]

  v3 = a2;
  sub_732E70(this, a2);
  v4 = *(void (__cdecl **)(int, NiTriBasedGeomData *, int, int *, int))(*(_DWORD *)(v3 + 0x21C) + 4);
  v5 = (int *)(this + 1);
  v29 = *(_DWORD *)(v3 + 0x21C);
  v36 = 4;
  v4(v29, this + 1, 4, &v36, 1);
  if ( *(_DWORD *)(v3 + 0xD8) < 0xA000111u )
  {
    LOBYTE(a2) = 1;
  }
  else
  {
    v30 = *(_DWORD *)(v3 + 0x21C);
    v6 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v30 + 4);
    v36 = 1;
    v6(v30, &a2, 1, &v36, 1);
    if ( !(_BYTE)a2 )
      goto LABEL_5;
  }
  if ( *v5 )
  {
    v7 = FormHeapAlloc((unsigned __int64)(unsigned int)*v5 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * *v5);
    v8 = 2 * *v5;
    *((_DWORD *)this + 0x12) = v7;
    v31 = v7;
    v9 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v3 + 0x21C) + 4);
    v28 = *(_DWORD *)(v3 + 0x21C);
    v36 = 2;
    v9(v28, v31, v8, &v36, 1);
  }
LABEL_5:
  v10 = *(void (__cdecl **)(int, char *, int, int *, int))(*(_DWORD *)(v3 + 0x21C) + 4);
  v32 = *(_DWORD *)(v3 + 0x21C);
  v36 = 2;
  v10(v32, (char *)this + 0x50, 2, &v36, 1);
  result = (int *)*((unsigned __int16 *)this + 0x28);
  if ( (_WORD)result )
  {
    v12 = (unsigned __int16)result;
    v13 = (void *)FormHeapAlloc((unsigned __int64)(unsigned __int16)result >> 0x1D != 0 ? 0xFFFFFFFF : 8 * (unsigned __int16)result);
    v14 = (int)v13;
    v38 = (int)v13;
    v39 = 0;
    if ( v13 )
      sub_401080(v13, 8, v12, (void *(__thiscall *)(void *))sub_71FAB0);
    else
      v14 = 0;
    v39 = 0xFFFFFFFF;
    *((_DWORD *)this + 0x13) = v14;
    v15 = (int *)FormHeapAlloc(0x14u);
    v38 = (int)v15;
    v39 = 1;
    result = v15 ? sub_71FAC0(v15, *((unsigned __int16 *)this + 0x28)) : 0;
    v16 = *((_WORD *)this + 0x28) == 0;
    v39 = 0xFFFFFFFF;
    *((_DWORD *)this + 0x15) = result;
    v36 = 0;
    if ( !v16 )
    {
      do
      {
        v17 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(*(_DWORD *)(v3 + 0x21C) + 4);
        v33 = *(_DWORD *)(v3 + 0x21C);
        v18 = 0;
        v37 = 2;
        v17(v33, &v35, 2, &v37, 1);
        v19 = v35;
        if ( v35 )
        {
          v20 = *((int **)this + 0x15);
          if ( v20 )
          {
            while ( v35 > (unsigned int)v20[3] )
            {
              v20 = (int *)v20[4];
              if ( !v20 )
                goto LABEL_18;
            }
          }
          else
          {
LABEL_18:
            v21 = (int *)FormHeapAlloc(0x14u);
            v38 = (int)v21;
            v39 = 2;
            if ( v21 )
            {
              v22 = 2 * *(_DWORD *)(*((_DWORD *)this + 0x15) + 8);
              v23 = FormHeapAlloc(
                      (unsigned __int64)(unsigned int)v22 >> 0x1F != 0
                    ? 0xFFFFFFFF
                    : 4 * *(_DWORD *)(*((_DWORD *)this + 0x15) + 8));
              *v21 = v23;
              v21[1] = v23;
              v21[2] = v22;
              v21[3] = v22;
              v21[4] = 0;
              v20 = v21;
            }
            else
            {
              v20 = 0;
            }
            v20[4] = *((_DWORD *)this + 0x15);
            v19 = v35;
            v39 = 0xFFFFFFFF;
            *((_DWORD *)this + 0x15) = v20;
          }
          v18 = v20[1];
          v20[3] -= v19;
          v20[1] = v18 + 2 * v35;
          v34 = *(_DWORD *)(v3 + 0x21C);
          v24 = *(void (__cdecl **)(int, int, int, int *, int))(v34 + 4);
          v38 = 2;
          v24(v34, v18, 2 * v35, &v38, 1);
          v19 = v35;
        }
        v25 = v36;
        result = (int *)(*((_DWORD *)this + 0x13) + 8 * (unsigned __int16)v36);
        if ( v19 && v18 )
        {
          *(_WORD *)result = v19;
          result[1] = v18;
        }
        else
        {
          *(_WORD *)result = 0;
          result[1] = 0;
        }
        v26 = v25 + 1;
        v27 = (unsigned __int16)v26 < *((_WORD *)this + 0x28);
        v36 = v26;
      }
      while ( v27 );
    }
  }
  return result;
}
