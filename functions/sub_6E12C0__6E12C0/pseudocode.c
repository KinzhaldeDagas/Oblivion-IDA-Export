void __thiscall sub_6E12C0(NiRenderer *this, signed int a2)
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
  NiRenderer *v42; // [esp+40h] [ebp-18h]
  int v43; // [esp+44h] [ebp-14h] BYREF
  int v44; // [esp+48h] [ebp-10h] BYREF
  unsigned int v45; // [esp+54h] [ebp-4h]

  v2 = (int *)this; /*0x6e12e7*/
  v42 = this; /*0x6e12e9*/
  v3 = (unsigned int *)a2; /*0x6e12ed*/
  NiTimeController_LoadBinary(this, a2); /*0x6e12f2*/
  v4 = v3[0x36] < 0x4010003; /*0x6e12f7*/
  v5 = v3[0x87]; /*0x6e1301*/
  a2 = 4; /*0x6e1307*/
  if ( v4 ) /*0x6e1313*/
  {
    (*(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v5 + 4))(v5, &v36, 4, &a2, 1); /*0x6e132b*/
    while ( v36 ) /*0x6e1336*/
    {
      v6 = v3[0x87]; /*0x6e1340*/
      --v36; /*0x6e1346*/
      v26 = v6; /*0x6e1356*/
      v7 = *(void (__cdecl **)(unsigned int, signed int *, int, int *, int))(v6 + 4); /*0x6e1357*/
      v35 = 1; /*0x6e135a*/
      v7(v26, &a2, 1, &v35, 1); /*0x6e135e*/
      Src = 0; /*0x6e136a*/
      sub_713620(v3, (int)&Src); /*0x6e136e*/
      if ( (_BYTE)a2 ) /*0x6e1377*/
      {
        v35 = 0; /*0x6e1380*/
        sub_713620(v3, (int)&v35); /*0x6e1384*/
        v27 = v3[0x87]; /*0x6e139c*/
        v8 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v27 + 4); /*0x6e139d*/
        v39 = 4; /*0x6e13a0*/
        v8(v27, &v40, 4, &v39, 1); /*0x6e13a8*/
        sub_6E11E0(v2, (char *)v35, Src, (int *)v40); /*0x6e13be*/
        FormHeapFree(v35); /*0x6e13c8*/
        FormHeapFree((unsigned int)Src); /*0x6e13d2*/
      }
      else
      {
        v9 = (_WORD *)FormHeapAlloc(0x40u); /*0x6e13e1*/
        v44 = (int)v9; /*0x6e13e9*/
        v45 = 0; /*0x6e13ef*/
        if ( v9 ) /*0x6e13f3*/
          v10 = (NiTArray_NiTexturingPropertyMap *)sub_6E0EF0(v9); /*0x6e13f7*/
        else
          v10 = 0; /*0x6e13fe*/
        v11 = v10 + 1; /*0x6e1400*/
        unk_B3E040 = (int)v10; /*0x6e1403*/
        end = v10[1].end; /*0x6e1408*/
        capacity = v10[1].capacity; /*0x6e140c*/
        v45 = 0xFFFFFFFF; /*0x6e1412*/
        if ( end >= capacity ) /*0x6e141a*/
          NiTArray_SetSize((unsigned __int16 *)v11, end + v11->growSize); /*0x6e1425*/
        NiTArray_SetAt(v11, end, &Src); /*0x6e1432*/
        v28 = v3[0x87]; /*0x6e144b*/
        v14 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v28 + 4); /*0x6e144c*/
        v39 = 4; /*0x6e144f*/
        v14(v28, &v41, 4, &v39, 1); /*0x6e1457*/
        v15 = *(unsigned __int16 *)(unk_B3E040 + 0xA); /*0x6e145f*/
        v16 = (NiTArray_NiTexturingPropertyMap *)unk_B3E040; /*0x6e146c*/
        if ( v15 >= *(unsigned __int16 *)(unk_B3E040 + 8) ) /*0x6e146e*/
          NiTArray_SetSize((unsigned __int16 *)unk_B3E040, v15 + *(unsigned __int16 *)(unk_B3E040 + 0xE)); /*0x6e1477*/
        NiTArray_SetAt(v16, v15, &v41); /*0x6e1484*/
        sub_712A20(v3); /*0x6e148b*/
        v17 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v3[0x87] + 4); /*0x6e149d*/
        v29 = v3[0x87]; /*0x6e14a7*/
        v39 = 4; /*0x6e14a8*/
        v17(v29, &v32, 4, &v39, 1); /*0x6e14b0*/
        v18 = *(unsigned __int16 *)(unk_B3E040 + 0x2A); /*0x6e14b8*/
        v19 = (unsigned __int16 *)(unk_B3E040 + 0x20); /*0x6e14c0*/
        if ( v18 >= *(unsigned __int16 *)(unk_B3E040 + 0x28) ) /*0x6e14c8*/
          NiTArray_SetSize(v19, v18 + *(unsigned __int16 *)(unk_B3E040 + 0x2E)); /*0x6e14d3*/
        NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)v19, v18, &v32); /*0x6e14e0*/
        while ( v32 ) /*0x6e14e9*/
        {
          --v32; /*0x6e14f0*/
          v35 = 0; /*0x6e14fc*/
          sub_713620(v3, (int)&v35); /*0x6e1500*/
          v20 = *(unsigned __int16 *)(unk_B3E040 + 0x3A); /*0x6e150b*/
          v21 = unk_B3E040 + 0x30; /*0x6e1513*/
          if ( v20 >= *(unsigned __int16 *)(unk_B3E040 + 0x38) ) /*0x6e1518*/
            NiTArray_SetSize((unsigned __int16 *)v21, v20 + *(unsigned __int16 *)(unk_B3E040 + 0x3E)); /*0x6e1523*/
          if ( v20 < *(unsigned __int16 *)(v21 + 0xA) ) /*0x6e152e*/
          {
            if ( v35 ) /*0x6e1548*/
            {
              if ( !*(_DWORD *)(*(_DWORD *)(v21 + 4) + 4 * v20) ) /*0x6e154d*/
                ++*(_WORD *)(v21 + 0xC); /*0x6e1552*/
            }
            else if ( *(_DWORD *)(*(_DWORD *)(v21 + 4) + 4 * v20) ) /*0x6e155c*/
            {
              --*(_WORD *)(v21 + 0xC); /*0x6e1561*/
            }
          }
          else
          {
            *(_WORD *)(v21 + 0xA) = v20 + 1; /*0x6e1533*/
            if ( v35 ) /*0x6e153b*/
              ++*(_WORD *)(v21 + 0xC); /*0x6e153d*/
          }
          *(_DWORD *)(*(_DWORD *)(v21 + 4) + 4 * v20) = v35; /*0x6e156e*/
          sub_712A20(v3); /*0x6e1573*/
        }
        --v32; /*0x6e1582*/
        v2 = (int *)v42; /*0x6e1587*/
      }
    }
  }
  else
  {
    v22 = 0; /*0x6e15af*/
    (*(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v5 + 4))(v5, &v33, 4, &a2, 1); /*0x6e15b1*/
    while ( v33 ) /*0x6e15ba*/
    {
      v23 = v3[0x87]; /*0x6e15c0*/
      --v33; /*0x6e15cb*/
      v24 = *(void (__cdecl **)(unsigned int, char *, int, signed int *, int))(v23 + 4); /*0x6e15d5*/
      a2 = 1; /*0x6e15d9*/
      v24(v23, &v31, 1, &a2, 1); /*0x6e15e3*/
      if ( v31 ) /*0x6e15ee*/
      {
        v37 = 0; /*0x6e15f5*/
        sub_713620(v3, (int)&v37); /*0x6e15f9*/
        v38 = 0; /*0x6e1605*/
        sub_713620(v3, (int)&v38); /*0x6e1609*/
        v25 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v3[0x87] + 4); /*0x6e161b*/
        v30 = v3[0x87]; /*0x6e1625*/
        v43 = 4; /*0x6e1626*/
        v25(v30, &v44, 4, &v43, 1); /*0x6e162e*/
        sub_6E11E0(v2, (char *)v38, v37, (int *)v44); /*0x6e1644*/
        FormHeapFree((unsigned int)v37); /*0x6e164e*/
        FormHeapFree(v38); /*0x6e1658*/
      }
      else
      {
        sub_712A20(v3); /*0x6e1662*/
        ++v22; /*0x6e1667*/
      }
    }
    --v33; /*0x6e1674*/
    sub_712BC0(v3, v22); /*0x6e167c*/
  }
}
