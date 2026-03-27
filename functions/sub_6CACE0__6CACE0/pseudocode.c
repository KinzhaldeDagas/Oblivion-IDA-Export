void __thiscall sub_6CACE0(float *this, int a2)
{
  unsigned int v3; // ebx
  const char *v4; // ebp
  unsigned int v5; // esi
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ebx
  bool v9; // zf
  _WORD *v10; // eax
  unsigned __int16 v11; // cx
  unsigned int v12; // kr00_4
  char *v13; // esi
  LONG v14; // ebp
  _WORD *v15; // eax
  LONG v16; // esi
  int v17; // esi
  int v18; // ebx
  int v19; // esi
  int v20; // ebx
  char v21; // cl
  unsigned int v22; // ebp
  unsigned int i; // esi
  int v24; // ecx
  int v25; // eax
  unsigned int v26; // edi
  unsigned int j; // esi
  char *v28; // esi
  unsigned __int16 v29; // [esp-8h] [ebp-4Ch]
  LONG v30[2]; // [esp+14h] [ebp-30h] BYREF
  unsigned int v31; // [esp+1Ch] [ebp-28h]
  int v32; // [esp+20h] [ebp-24h]
  __int16 v33; // [esp+24h] [ebp-20h]
  __int16 v34; // [esp+26h] [ebp-1Eh]
  int v35; // [esp+28h] [ebp-1Ch] BYREF
  void *v36; // [esp+2Ch] [ebp-18h]
  unsigned __int16 v37; // [esp+32h] [ebp-12h]
  int v38; // [esp+40h] [ebp-4h]
  unsigned int v39; // [esp+48h] [ebp+4h]

  nullsub_returnvVoid_1arg(a2);
  if ( *(_DWORD *)(a2 + 0xD8) < 0xA010068u )
  {
    v3 = *((_DWORD *)this + 3);
    *(this + 0xB) = flt_A7DEB4;
    v4 = 0;
    v5 = 0;
    *(this + 0xC) = -flt_A7DEB4;
    if ( v3 )
    {
      v6 = *((_DWORD *)this + 5) + 4;
      do
      {
        v7 = *(_DWORD *)v6;
        if ( *(this + 0xB) > (double)*(float *)(*(_DWORD *)v6 + 0x14) )
          *(this + 0xB) = *(float *)(v7 + 0x14);
        if ( *(this + 0xC) < (double)*(float *)(v7 + 0x18) )
          *(this + 0xC) = *(float *)(v7 + 0x18);
        ++v5;
        v6 += 0x10;
      }
      while ( v5 < v3 );
    }
    if ( flt_A7DEB4 == *(this + 0xB) && -flt_A7DEB4 == *(this + 0xC) )
    {
      *(this + 0xC) = 0.0;
      *(this + 0xB) = 0.0;
    }
    v30[1] = (LONG)&NiTArray<char *>::`vftable';
    v32 = (unsigned __int16)v3;
    v34 = 1;
    v33 = 0;
    if ( (_WORD)v3 )
    {
      v8 = FormHeapAlloc((unsigned __int64)(unsigned __int16)v3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v3);
      v31 = v8;
    }
    else
    {
      v31 = 0;
      v8 = 0;
    }
    v29 = *((_DWORD *)this + 3);
    v38 = 0;
    sub_6C7D90(&v35, v29, 1);
    v9 = *((_DWORD *)this + 3) == 0;
    LOBYTE(v38) = 1;
    v39 = 0;
    if ( !v9 )
    {
      v30[0] = 0;
      do
      {
        v10 = (_WORD *)(v30[0] + *((_DWORD *)this + 6));
        v11 = v10[2];
        if ( v11 != 0xFFFF )
          v4 = (const char *)(*(_DWORD *)(*(_DWORD *)v10 + 8) + v11);
        v12 = strlen(v4);
        v13 = (char *)FormHeapAlloc(v12 + 1);
        strcpy_s(v13, v12 + 1, v4);
        if ( v39 < HIWORD(v32) )
        {
          if ( v13 )
          {
            if ( !*(_DWORD *)(v31 + 4 * v39) )
              ++v33;
          }
          else if ( *(_DWORD *)(v31 + 4 * v39) )
          {
            --v33;
          }
        }
        else
        {
          HIWORD(v32) = v39 + 1;
          if ( v13 )
            ++v33;
        }
        v14 = v30[0];
        *(_DWORD *)(v31 + 4 * v39) = v13;
        v15 = (_WORD *)(v14 + *((_DWORD *)this + 6));
        v15[2] = 0xFFFF;
        v15[3] = 0xFFFF;
        v15[4] = 0xFFFF;
        v15[5] = 0xFFFF;
        v15[6] = 0xFFFF;
        v16 = *(_DWORD *)(*((_DWORD *)this + 5) + v14 + 4);
        v30[0] = v16;
        if ( v16 )
          InterlockedIncrement((volatile LONG *)(v16 + 4));
        LOBYTE(v38) = 2;
        sub_6C7E90(&v35, v39, v30);
        LOBYTE(v38) = 1;
        if ( v16 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
            (**(void (__thiscall ***)(LONG, int))v16)(v16, 1);
        }
        v17 = *((_DWORD *)this + 5);
        v18 = *(_DWORD *)(v17 + v14);
        v19 = v14 + v17;
        if ( v18 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
            (**(void (__thiscall ***)(int, int))v18)(v18, 1);
          *(_DWORD *)v19 = 0;
        }
        v20 = *(_DWORD *)(v19 + 4);
        if ( v20 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
            (**(void (__thiscall ***)(int, int))v20)(v20, 1);
          *(_DWORD *)(v19 + 4) = 0;
        }
        *(_DWORD *)(v19 + 8) = 0;
        v21 = byte_A79EFC;
        v30[0] = v14 + 0x10;
        *(_BYTE *)(v19 + 0xC) = v21;
        *(_BYTE *)(v19 + 0xD) = 0xFF;
        v4 = 0;
        ++v39;
      }
      while ( v39 < *((_DWORD *)this + 3) );
      v8 = v31;
    }
    v22 = v37;
    for ( i = 0; i < v22; sub_6CA8E0(this, *(char **)(v8 + 4 * i++), (volatile LONG *)v24) )
    {
      v24 = *((_DWORD *)v36 + i);
      if ( !i )
      {
        v25 = (*(unsigned __int8 *)(v24 + 8) >> 1) & 3;
        *((_DWORD *)this + 9) = v25;
        if ( v25 != 2 )
        {
          if ( v25 )
            *(this + 9) = 0.0;
        }
        *(this + 0xA) = *(float *)(v24 + 0xC);
      }
    }
    v26 = HIWORD(v32);
    for ( j = 0; j < v26; FormHeapFree(*(_DWORD *)(v8 + 4 * j++)) )
      ;
    LOBYTE(v38) = 0;
    if ( v36 )
    {
      v28 = (char *)v36 + 0xFFFFFFFC;
      _LN21(v36, 4u, *((_DWORD *)v36 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree((unsigned int)v28);
    }
    FormHeapFree(v8);
  }
}
