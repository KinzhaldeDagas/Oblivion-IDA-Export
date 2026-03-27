void __thiscall sub_6E12C0(int *this, signed int a2)
{
  int *v2; // ebp
  unsigned int *v3; // edi
  bool v4; // cf
  unsigned int v5; // eax
  unsigned int v6; // eax
  void (__cdecl *v7)(unsigned int, signed int *, int, int *, int); // eax
  void (__cdecl *v8)(unsigned int, int *, int, int *, int); // eax
  _WORD *v9; // eax
  NiTArray_NiTexturingPropertyMap *v10; // eax
  NiTArray_NiTexturingPropertyMap *v11; // esi
  unsigned int end; // ebp
  unsigned int capacity; // eax
  void (__cdecl *v14)(unsigned int, int *, int, int *, int); // eax
  unsigned int v15; // esi
  NiTArray_NiTexturingPropertyMap *v16; // ebp
  void (__cdecl *v17)(unsigned int, int *, int, int *, int); // edx
  unsigned int v18; // ebp
  unsigned __int16 *v19; // esi
  unsigned int v20; // ebp
  int v21; // esi
  int v22; // esi
  unsigned int v23; // eax
  void (__cdecl *v24)(unsigned int, char *, int, signed int *, int); // edx
  void (__cdecl *v25)(unsigned int, int *, int, int *, int); // edx
  unsigned int v26; // [esp-14h] [ebp-6Ch]
  unsigned int v27; // [esp-14h] [ebp-6Ch]
  unsigned int v28; // [esp-14h] [ebp-6Ch]
  unsigned int v29; // [esp-14h] [ebp-6Ch]
  unsigned int v30; // [esp-14h] [ebp-6Ch]
  char v31; // [esp+17h] [ebp-41h] BYREF
  int v32; // [esp+18h] [ebp-40h] BYREF
  int v33; // [esp+1Ch] [ebp-3Ch] BYREF
  char *Src; // [esp+20h] [ebp-38h] BYREF
  int v35; // [esp+24h] [ebp-34h] BYREF
  int v36; // [esp+28h] [ebp-30h] BYREF
  char *v37; // [esp+2Ch] [ebp-2Ch] BYREF
  int v38; // [esp+30h] [ebp-28h] BYREF
  int v39; // [esp+34h] [ebp-24h] BYREF
  int v40; // [esp+38h] [ebp-20h] BYREF
  int v41; // [esp+3Ch] [ebp-1Ch] BYREF
  int *v42; // [esp+40h] [ebp-18h]
  int v43; // [esp+44h] [ebp-14h] BYREF
  int v44; // [esp+48h] [ebp-10h] BYREF
  unsigned int v45; // [esp+54h] [ebp-4h]

  v2 = this;
  v42 = this;
  v3 = (unsigned int *)a2;
  sub_715F40(this, a2);
  v4 = v3[0x36] < 0x4010003;
  v5 = v3[0x87];
  a2 = 4;
  if ( v4 )
  {
    (*(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v5 + 4))(v5, &v36, 4, &a2, 1);
    while ( v36 )
    {
      v6 = v3[0x87];
      --v36;
      v26 = v6;
      v7 = *(void (__cdecl **)(unsigned int, signed int *, int, int *, int))(v6 + 4);
      v35 = 1;
      v7(v26, &a2, 1, &v35, 1);
      Src = 0;
      sub_713620(v3, (int *)&Src);
      if ( (_BYTE)a2 )
      {
        v35 = 0;
        sub_713620(v3, &v35);
        v27 = v3[0x87];
        v8 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v27 + 4);
        v39 = 4;
        v8(v27, &v40, 4, &v39, 1);
        sub_6E11E0(v2, (char *)v35, Src, (int *)v40);
        FormHeapFree(v35);
        FormHeapFree((unsigned int)Src);
      }
      else
      {
        v9 = (_WORD *)FormHeapAlloc(0x40u);
        v44 = (int)v9;
        v45 = 0;
        if ( v9 )
          v10 = (NiTArray_NiTexturingPropertyMap *)sub_6E0EF0(v9);
        else
          v10 = 0;
        v11 = v10 + 1;
        dword_B3E040 = (int)v10;
        end = v10[1].end;
        capacity = v10[1].capacity;
        v45 = 0xFFFFFFFF;
        if ( end >= capacity )
          NiTArray_SetSize((unsigned __int16 *)v11, end + v11->growSize);
        NiTArray_SetAt(v11, end, &Src);
        v28 = v3[0x87];
        v14 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v28 + 4);
        v39 = 4;
        v14(v28, &v41, 4, &v39, 1);
        v15 = *(unsigned __int16 *)(dword_B3E040 + 0xA);
        v16 = (NiTArray_NiTexturingPropertyMap *)dword_B3E040;
        if ( v15 >= *(unsigned __int16 *)(dword_B3E040 + 8) )
          NiTArray_SetSize((unsigned __int16 *)dword_B3E040, v15 + *(unsigned __int16 *)(dword_B3E040 + 0xE));
        NiTArray_SetAt(v16, v15, &v41);
        sub_712A20(v3);
        v17 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v3[0x87] + 4);
        v29 = v3[0x87];
        v39 = 4;
        v17(v29, &v32, 4, &v39, 1);
        v18 = *(unsigned __int16 *)(dword_B3E040 + 0x2A);
        v19 = (unsigned __int16 *)(dword_B3E040 + 0x20);
        if ( v18 >= *(unsigned __int16 *)(dword_B3E040 + 0x28) )
          NiTArray_SetSize(v19, v18 + *(unsigned __int16 *)(dword_B3E040 + 0x2E));
        NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)v19, v18, &v32);
        while ( v32 )
        {
          --v32;
          v35 = 0;
          sub_713620(v3, &v35);
          v20 = *(unsigned __int16 *)(dword_B3E040 + 0x3A);
          v21 = dword_B3E040 + 0x30;
          if ( v20 >= *(unsigned __int16 *)(dword_B3E040 + 0x38) )
            NiTArray_SetSize((unsigned __int16 *)v21, v20 + *(unsigned __int16 *)(dword_B3E040 + 0x3E));
          if ( v20 < *(unsigned __int16 *)(v21 + 0xA) )
          {
            if ( v35 )
            {
              if ( !*(_DWORD *)(*(_DWORD *)(v21 + 4) + 4 * v20) )
                ++*(_WORD *)(v21 + 0xC);
            }
            else if ( *(_DWORD *)(*(_DWORD *)(v21 + 4) + 4 * v20) )
            {
              --*(_WORD *)(v21 + 0xC);
            }
          }
          else
          {
            *(_WORD *)(v21 + 0xA) = v20 + 1;
            if ( v35 )
              ++*(_WORD *)(v21 + 0xC);
          }
          *(_DWORD *)(*(_DWORD *)(v21 + 4) + 4 * v20) = v35;
          sub_712A20(v3);
        }
        --v32;
        v2 = v42;
      }
    }
  }
  else
  {
    v22 = 0;
    (*(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v5 + 4))(v5, &v33, 4, &a2, 1);
    while ( v33 )
    {
      v23 = v3[0x87];
      --v33;
      v24 = *(void (__cdecl **)(unsigned int, char *, int, signed int *, int))(v23 + 4);
      a2 = 1;
      v24(v23, &v31, 1, &a2, 1);
      if ( v31 )
      {
        v37 = 0;
        sub_713620(v3, (int *)&v37);
        v38 = 0;
        sub_713620(v3, &v38);
        v25 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v3[0x87] + 4);
        v30 = v3[0x87];
        v43 = 4;
        v25(v30, &v44, 4, &v43, 1);
        sub_6E11E0(v2, (char *)v38, v37, (int *)v44);
        FormHeapFree((unsigned int)v37);
        FormHeapFree(v38);
      }
      else
      {
        sub_712A20(v3);
        ++v22;
      }
    }
    --v33;
    sub_712BC0(v3, v22);
  }
}
