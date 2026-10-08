int __thiscall sub_946940(_DWORD ***this, signed int a2)
{
  int result; // eax
  int v4; // ebp
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  signed int v10; // edi
  int v11; // eax
  _DWORD **v12; // ecx
  int v13; // esi
  int v14; // eax
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // ebp
  int v19; // edi
  char v20; // bl
  char v21; // cl
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // edx
  bool v25; // cl
  int v26; // ecx
  int v27; // eax
  const void **v28; // esi
  _DWORD **v29; // eax
  _DWORD *v30; // ecx
  _DWORD **v31; // ecx
  int v32; // esi
  int v33; // ecx
  __int64 v34; // [esp+10h] [ebp-28h] BYREF
  __int64 v35; // [esp+18h] [ebp-20h] BYREF
  _WORD *v36; // [esp+20h] [ebp-18h] BYREF
  int i; // [esp+24h] [ebp-14h]
  int v38; // [esp+28h] [ebp-10h]
  _DWORD *v39; // [esp+2Ch] [ebp-Ch] BYREF
  signed int v40; // [esp+30h] [ebp-8h]
  int v41; // [esp+34h] [ebp-4h]

  if ( (unsigned __int8)a2 == 0x23 ) /*0x946951*/
  {
    sub_947910(*(this + 2), (char *)&v35, 8, 1); /*0x946b67*/
    sub_947910(*(this + 2), (char *)&v34, 8, 1); /*0x946b78*/
    sub_947910(*(this + 2), (char *)&a2, 1, 1); /*0x946b89*/
    v18 = v35; /*0x946b92*/
    result = 0; /*0x946b96*/
    if ( v35 ) /*0x946b9a*/
    {
      v19 = v34; /*0x946ba8*/
      if ( v34 ) /*0x946bac*/
      {
        v20 = a2; /*0x946bbc*/
        v39 = 0; /*0x946bc0*/
        v40 = 0; /*0x946bc4*/
        v41 = 0x80000000; /*0x946bc8*/
        v21 = (_DWORD *)v34 == unk_BA8788 || (a2 & 2) != 0; /*0x946bdb*/
        sub_9465A0(this + 0xFFFFFFFE, v35, (char *)v34, v21, (const void **)&v39); /*0x946bec*/
        v22 = (int)*(this + 7); /*0x946bf1*/
        v23 = 0; /*0x946bf4*/
        if ( v22 > 0 ) /*0x946bf8*/
        {
          v24 = *(this + 6); /*0x946bfa*/
          do /*0x946c0a*/
          {
            if ( *v24 == v18 ) /*0x946c02*/
              break; /*0x946c02*/
            ++v23; /*0x946c04*/
            v24 += 2; /*0x946c05*/
          }
          while ( v23 < v22 ); /*0x946c0a*/
        }
        v25 = v23 != v22; /*0x946c0e*/
        if ( (v20 & 1) != 0 ) /*0x946c14*/
        {
          if ( !v25 ) /*0x946c18*/
          {
            v26 = (int)*(this + 8); /*0x946c1a*/
            v27 = (int)*(this + 7); /*0x946c1d*/
            v28 = (const void **)(this + 6); /*0x946c20*/
            if ( v27 == (v26 & 0x3FFFFFFF) ) /*0x946c2b*/
              sub_8A6EE0(v28, 8); /*0x946c30*/
            v29 = (_DWORD **)v28[1]; /*0x946c38*/
            v30 = (char *)*v28 + 8 * (_DWORD)v29; /*0x946c3d*/
            v28[1] = (char *)v29 + 1; /*0x946c41*/
            v30[1] = v19; /*0x946c44*/
            *v30 = v18; /*0x946c47*/
          }
        }
        else if ( v25 ) /*0x946c4d*/
        {
          v31 = (_DWORD **)((char *)*(this + 7) + 0xFFFFFFFF); /*0x946c52*/
          *(this + 7) = v31; /*0x946c53*/
          v32 = (int)*(this + 6); /*0x946c56*/
          *(_DWORD *)(v32 + 8 * v23) = *(_DWORD *)(v32 + 8 * (_DWORD)v31); /*0x946c5c*/
          *(_DWORD *)(v32 + 8 * v23 + 4) = *(_DWORD *)(v32 + 8 * (_DWORD)v31 + 4); /*0x946c63*/
        }
        result = v41; /*0x946c67*/
        if ( v41 >= 0 ) /*0x946c6d*/
        {
          v33 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x946c7f*/
          if ( !v33 ) /*0x946c87*/
            v33 = unk_BA7D9C; /*0x946c89*/
          return sub_8A75D0(v33, v39, 8 * v41, 0x14); /*0x946c9f*/
        }
      }
    }
  }
  else
  {
    result = (unsigned __int8)a2 - 0x25; /*0x946957*/
    if ( (unsigned __int8)a2 == 0x25 ) /*0x94695a*/
    {
      sub_947910(*(this + 2), (char *)&v34, 8, 1); /*0x94696c*/
      sub_947910(*(this + 2), (char *)&v35, 8, 1); /*0x94697d*/
      sub_947910(*(this + 2), (char *)&a2, 2, 1); /*0x94698e*/
      v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x94699f*/
      v5 = *(_DWORD *)(v4 + 0x19C); /*0x9469a2*/
      v6 = (unsigned __int16)a2; /*0x9469aa*/
      if ( !v5 ) /*0x9469af*/
        v5 = unk_BA7D9C; /*0x9469b1*/
      v36 = sub_8A7560(v5, 2 * (unsigned __int16)a2, 0x14); /*0x9469c3*/
      i = v6; /*0x9469d0*/
      v38 = v6; /*0x9469d4*/
      if ( (v6 & 0x3FFFFFFF) < v6 ) /*0x9469d8*/
      {
        v7 = 2 * (v6 & 0x3FFFFFFF); /*0x9469da*/
        if ( v6 >= v7 ) /*0x9469de*/
          v7 = v6; /*0x9469e0*/
        sub_8A6E40((const void **)&v36, v7, 2); /*0x9469ea*/
      }
      v8 = 0; /*0x9469f2*/
      for ( i = v6; v8 < v6; ++v8 ) /*0x9469fa*/
      {
        sub_947910(*(this + 2), (char *)&a2, 2, 1); /*0x946a0c*/
        v36[v8] = a2; /*0x946a1a*/
      }
      sub_947910(*(this + 2), (char *)&a2, 4, 1); /*0x946a2f*/
      v9 = *(_DWORD *)(v4 + 0x19C); /*0x946a34*/
      if ( !v9 ) /*0x946a3c*/
        v9 = unk_BA7D9C; /*0x946a3e*/
      v10 = a2; /*0x946a43*/
      v39 = sub_8A7560(v9, a2, 0x14); /*0x946a51*/
      v40 = v10; /*0x946a5e*/
      v41 = v10; /*0x946a62*/
      if ( (v10 & 0x3FFFFFFF) < v10 ) /*0x946a66*/
      {
        v11 = 2 * (v10 & 0x3FFFFFFF); /*0x946a68*/
        if ( v10 >= v11 ) /*0x946a6c*/
          v11 = v10; /*0x946a6e*/
        sub_8A6E40((const void **)&v39, v11, 1); /*0x946a78*/
      }
      v12 = *(this + 2); /*0x946a84*/
      v40 = v10; /*0x946a89*/
      sub_918390(v12); /*0x946a8d*/
      v13 = v34; /*0x946a98*/
      if ( v34 ) /*0x946a9c*/
      {
        if ( v35 ) /*0x946aac*/
        {
          if ( i > 0 ) /*0x946ab8*/
          {
            if ( v10 ) /*0x946abc*/
            {
              v14 = sub_90D2B0((_DWORD *)v35, (unsigned __int16)*v36); /*0x946ac6*/
              v15 = sub_946250( /*0x946adc*/
                      v14,
                      (_DWORD *)(v13 + *(unsigned __int16 *)(v14 + 0x12)),
                      *(unsigned __int8 *)(v14 + 0xC),
                      &v36,
                      0);
              if ( v15 ) /*0x946ae6*/
                sub_8B1890(v15, v39, v10); /*0x946aef*/
            }
          }
        }
      }
      if ( v41 >= 0 ) /*0x946afd*/
      {
        v16 = *(_DWORD *)(v4 + 0x19C); /*0x946aff*/
        if ( !v16 ) /*0x946b07*/
          v16 = unk_BA7D9C; /*0x946b09*/
        sub_8A75D0(v16, v39, v41 & 0x3FFFFFFF, 0x14); /*0x946b1c*/
      }
      result = v38; /*0x946b21*/
      if ( v38 >= 0 ) /*0x946b27*/
      {
        v17 = *(_DWORD *)(v4 + 0x19C); /*0x946b2d*/
        if ( !v17 ) /*0x946b35*/
          v17 = unk_BA7D9C; /*0x946b37*/
        return sub_8A75D0(v17, v36, 2 * (v38 & 0x3FFFFFFF), 0x14); /*0x946b4c*/
      }
    }
  }
  return result; /*0x946b51*/
}
