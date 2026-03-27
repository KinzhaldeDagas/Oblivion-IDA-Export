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

  if ( (unsigned __int8)a2 == 0x23 )
  {
    sub_947910(*(this + 2), (char *)&v35, 8, 1);
    sub_947910(*(this + 2), (char *)&v34, 8, 1);
    sub_947910(*(this + 2), (char *)&a2, 1, 1);
    v18 = v35;
    result = 0;
    if ( v35 )
    {
      v19 = v34;
      if ( v34 )
      {
        v20 = a2;
        v39 = 0;
        v40 = 0;
        v41 = 0x80000000;
        v21 = (_DWORD *)v34 == dword_BA8788 || (a2 & 2) != 0;
        sub_9465A0(this + 0xFFFFFFFE, v35, (_DWORD *)v34, v21, (const void **)&v39);
        v22 = (int)*(this + 7);
        v23 = 0;
        if ( v22 > 0 )
        {
          v24 = *(this + 6);
          do
          {
            if ( *v24 == v18 )
              break;
            ++v23;
            v24 += 2;
          }
          while ( v23 < v22 );
        }
        v25 = v23 != v22;
        if ( (v20 & 1) != 0 )
        {
          if ( !v25 )
          {
            v26 = (int)*(this + 8);
            v27 = (int)*(this + 7);
            v28 = (const void **)(this + 6);
            if ( v27 == (v26 & 0x3FFFFFFF) )
              sub_8A6EE0(v28, 8);
            v29 = (_DWORD **)v28[1];
            v30 = (char *)*v28 + 8 * (_DWORD)v29;
            v28[1] = (char *)v29 + 1;
            v30[1] = v19;
            *v30 = v18;
          }
        }
        else if ( v25 )
        {
          v31 = (_DWORD **)((char *)*(this + 7) + 0xFFFFFFFF);
          *(this + 7) = v31;
          v32 = (int)*(this + 6);
          *(_DWORD *)(v32 + 8 * v23) = *(_DWORD *)(v32 + 8 * (_DWORD)v31);
          *(_DWORD *)(v32 + 8 * v23 + 4) = *(_DWORD *)(v32 + 8 * (_DWORD)v31 + 4);
        }
        result = v41;
        if ( v41 >= 0 )
        {
          v33 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
          if ( !v33 )
            v33 = dword_BA7D9C;
          return sub_8A75D0(v33, v39, 8 * v41, 0x14);
        }
      }
    }
  }
  else
  {
    result = (unsigned __int8)a2 - 0x25;
    if ( (unsigned __int8)a2 == 0x25 )
    {
      sub_947910(*(this + 2), (char *)&v34, 8, 1);
      sub_947910(*(this + 2), (char *)&v35, 8, 1);
      sub_947910(*(this + 2), (char *)&a2, 2, 1);
      v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      v5 = *(_DWORD *)(v4 + 0x19C);
      v6 = (unsigned __int16)a2;
      if ( !v5 )
        v5 = dword_BA7D9C;
      v36 = sub_8A7560(v5, 2 * (unsigned __int16)a2, 0x14);
      i = v6;
      v38 = v6;
      if ( (v6 & 0x3FFFFFFF) < v6 )
      {
        v7 = 2 * (v6 & 0x3FFFFFFF);
        if ( v6 >= v7 )
          v7 = v6;
        sub_8A6E40((const void **)&v36, v7, 2);
      }
      v8 = 0;
      for ( i = v6; v8 < v6; ++v8 )
      {
        sub_947910(*(this + 2), (char *)&a2, 2, 1);
        v36[v8] = a2;
      }
      sub_947910(*(this + 2), (char *)&a2, 4, 1);
      v9 = *(_DWORD *)(v4 + 0x19C);
      if ( !v9 )
        v9 = dword_BA7D9C;
      v10 = a2;
      v39 = sub_8A7560(v9, a2, 0x14);
      v40 = v10;
      v41 = v10;
      if ( (v10 & 0x3FFFFFFF) < v10 )
      {
        v11 = 2 * (v10 & 0x3FFFFFFF);
        if ( v10 >= v11 )
          v11 = v10;
        sub_8A6E40((const void **)&v39, v11, 1);
      }
      v12 = *(this + 2);
      v40 = v10;
      sub_918390(v12);
      v13 = v34;
      if ( v34 )
      {
        if ( v35 )
        {
          if ( i > 0 )
          {
            if ( v10 )
            {
              v14 = sub_90D2B0((_DWORD *)v35, (unsigned __int16)*v36);
              v15 = sub_946250(
                      v14,
                      (_DWORD *)(v13 + *(unsigned __int16 *)(v14 + 0x12)),
                      *(unsigned __int8 *)(v14 + 0xC),
                      &v36,
                      0);
              if ( v15 )
                sub_8B1890(v15, v39, v10);
            }
          }
        }
      }
      if ( v41 >= 0 )
      {
        v16 = *(_DWORD *)(v4 + 0x19C);
        if ( !v16 )
          v16 = dword_BA7D9C;
        sub_8A75D0(v16, v39, v41 & 0x3FFFFFFF, 0x14);
      }
      result = v38;
      if ( v38 >= 0 )
      {
        v17 = *(_DWORD *)(v4 + 0x19C);
        if ( !v17 )
          v17 = dword_BA7D9C;
        return sub_8A75D0(v17, v36, 2 * (v38 & 0x3FFFFFFF), 0x14);
      }
    }
  }
  return result;
}
