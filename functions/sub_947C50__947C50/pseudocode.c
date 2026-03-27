int __thiscall sub_947C50(LPCRITICAL_SECTION *this, const char *a2, int a3)
{
  LPCRITICAL_SECTION *v3; // ebp
  char *v4; // esi
  int v5; // ebx
  int v6; // edi
  int v7; // ebx
  LPCRITICAL_SECTION *v8; // edi
  int v9; // ecx
  int v10; // esi
  unsigned int v11; // ebp
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // esi
  int v16; // eax
  _DWORD *v17; // ebp
  char *v18; // eax
  _DWORD *v19; // edx
  _DWORD *v20; // ecx
  int v21; // esi
  int v22; // ebp
  int v23; // eax
  _DWORD *v24; // esi
  _DWORD *v25; // ecx
  int v26; // eax
  int v27; // ecx
  PRTL_CRITICAL_SECTION_DEBUG_0 *v28; // eax
  int v29; // ecx
  char *v30; // ecx
  signed int v31; // edi
  _DWORD *v32; // eax
  int v33; // ecx
  _DWORD *v34; // eax
  _DWORD *v35; // ecx
  int v36; // eax
  char v39; // [esp+14h] [ebp-14h]
  int v40; // [esp+14h] [ebp-14h]
  int v41; // [esp+18h] [ebp-10h]
  _DWORD *v42; // [esp+1Ch] [ebp-Ch]

  v3 = this;
  v4 = 0;
  v39 = 0;
  sub_8A7720(*(this + 6));
  v5 = 0;
  if ( (int)v3[4] <= 0 )
    goto LABEL_7;
  v6 = 0;
  do
  {
    if ( !sub_8B1770(*(const char **)((char *)&v3[3]->DebugInfo + v6), a2) )
    {
      v4 = (char *)v3[3] + v6;
      v39 = 1;
    }
    ++v5;
    v6 += 0xC;
  }
  while ( v5 < (int)v3[4] );
  if ( !v39 )
  {
LABEL_7:
    v7 = (int)v3[4];
    v8 = v3 + 3;
    v9 = v7 + 1;
    if ( v7 + 1 > v7 )
    {
      v15 = (int)v3[5];
      v41 = v15;
      if ( v9 > (v15 & 0x3FFFFFFF) )
      {
        v16 = 2 * (v15 & 0x3FFFFFFF);
        if ( v9 >= v16 )
          v16 = v7 + 1;
        v17 = *v8;
        v42 = *v8;
        *v8 = 0;
        v8[1] = 0;
        v8[2] = (LPCRITICAL_SECTION)0x80000000;
        if ( v16 > 0 )
          sub_8A6E40((const void **)v8, v16 < 0 ? 0 : v16, 0xC);
        v18 = (char *)*v8;
        if ( v7 > 0 )
        {
          v19 = v17;
          v20 = v18 + 4;
          v21 = (char *)v17 - v18;
          v22 = v7;
          do
          {
            if ( v20 != (_DWORD *)4 )
            {
              v23 = *v19 - 0xC;
              ++*(_DWORD *)(v23 + 8);
              v20[0xFFFFFFFF] = v23 + 0xC;
              *v20 = *(_DWORD *)((char *)v20 + v21);
              v20[1] = v19[2];
            }
            v20 += 3;
            v19 += 3;
            --v22;
          }
          while ( v22 );
          v17 = v42;
          v15 = v41;
        }
        v8[1] = (LPCRITICAL_SECTION)v7;
        if ( v7 > 0 )
        {
          v24 = v17;
          v40 = v7;
          do
          {
            v25 = (_DWORD *)(*v24 - 0xC);
            v26 = *(_DWORD *)(*v24 - 4) - 1;
            v25[2] = v26;
            if ( v26 < 0 )
              sub_8B1930(v25);
            v24 += 3;
            --v40;
          }
          while ( v40 );
          v15 = v41;
        }
        if ( v15 >= 0 )
        {
          v27 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
          if ( !v27 )
            v27 = dword_BA7D9C;
          sub_8A75D0(v27, v17, 0xC * (v15 & 0x3FFFFFFF), 0x14);
        }
        v3 = this;
      }
      if ( !__OFSUB__(v7, v7 + 1) )
      {
        v28 = &(*v8)->DebugInfo + 3 * v7;
        v29 = 1;
        do
        {
          if ( v28 )
          {
            ++dword_BA7FC0;
            *v28 = (PRTL_CRITICAL_SECTION_DEBUG_0)&unk_BA7FC4;
          }
          v28 += 3;
          --v29;
        }
        while ( v29 );
      }
    }
    else
    {
      v10 = 0xC * v9;
      v11 = 0xFFFFFFFF;
      do
      {
        v12 = *(int *)((char *)&(*v8)->DebugInfo + v10);
        v13 = *(_DWORD *)(v12 - 4);
        v14 = (_DWORD *)(v12 - 0xC);
        v14[2] = --v13;
        if ( v13 < 0 )
          sub_8B1930(v14);
        v10 += 0xC;
        --v11;
      }
      while ( v11 );
      v3 = this;
    }
    v30 = (char *)*v8;
    v8[1] = (LPCRITICAL_SECTION)(v7 + 1);
    v4 = &v30[0xC * v7];
    if ( a2 && *a2 )
    {
      v31 = sub_8B1860(a2);
      v32 = *(_DWORD **)v4;
      if ( *(_DWORD *)(*(_DWORD *)v4 - 8) < v31 || (int)v32[0xFFFFFFFF] > 0 )
      {
        v33 = v32[0xFFFFFFFF];
        v34 = v32 + 0xFFFFFFFD;
        v34[2] = --v33;
        if ( v33 < 0 )
          sub_8B1930(v34);
        *(_DWORD *)v4 = sub_8B1950(v31) + 3;
      }
      sub_8B1890(*(void **)v4, a2, v31 + 1);
      *(_DWORD *)(*(_DWORD *)v4 - 0xC) = v31;
    }
    else
    {
      v35 = (_DWORD *)(*(_DWORD *)v4 - 0xC);
      v36 = *(_DWORD *)(*(_DWORD *)v4 - 4) - 1;
      v35[2] = v36;
      if ( v36 < 0 )
        sub_8B1930(v35);
      ++dword_BA7FC0;
      *(_DWORD *)v4 = &unk_BA7FC4;
    }
    *((_DWORD *)v4 + 1) = a3;
    *((_DWORD *)v4 + 2) = v3[2];
    v3[2] = (LPCRITICAL_SECTION)((char *)v3[2] + 1);
  }
  LeaveCriticalSection(v3[6]);
  return *((_DWORD *)v4 + 2);
}
