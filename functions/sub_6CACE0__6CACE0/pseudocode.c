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

  nullsub_returnvVoid_1arg(a2); /*0x6cad0e*/
  if ( *(_DWORD *)(a2 + 0xD8) < 0xA010068u )
  {
    v3 = *((_DWORD *)this + 3); /*0x6cad29*/
    *(this + 0xB) = flt_A7DEB4; /*0x6cad2c*/
    v4 = 0; /*0x6cad2f*/
    v5 = 0; /*0x6cad37*/
    *(this + 0xC) = -flt_A7DEB4; /*0x6cad3d*/
    if ( v3 ) /*0x6cad40*/
    {
      v6 = *((_DWORD *)this + 5) + 4; /*0x6cad45*/
      do /*0x6cad94*/
      {
        v7 = *(_DWORD *)v6; /*0x6cad50*/
        if ( *(this + 0xB) > (double)*(float *)(*(_DWORD *)v6 + 0x14) ) /*0x6cad67*/
          *(this + 0xB) = *(float *)(v7 + 0x14); /*0x6cad6c*/
        if ( *(this + 0xC) < (double)*(float *)(v7 + 0x18) ) /*0x6cad84*/
          *(this + 0xC) = *(float *)(v7 + 0x18); /*0x6cad89*/
        ++v5; /*0x6cad8c*/
        v6 += 0x10; /*0x6cad8f*/
      }
      while ( v5 < v3 ); /*0x6cad94*/
    }
    if ( flt_A7DEB4 == *(this + 0xB) && -flt_A7DEB4 == *(this + 0xC) ) /*0x6cadba*/
    {
      *(this + 0xC) = 0.0; /*0x6cadbe*/
      *(this + 0xB) = 0.0; /*0x6cadc1*/
    }
    v30[1] = (LONG)&NiTArray<char *>::`vftable'; /*0x6cadcb*/
    v32 = (unsigned __int16)v3; /*0x6cadd3*/
    v34 = 1; /*0x6cadd8*/
    v33 = 0; /*0x6cade4*/
    if ( (_WORD)v3 )
    {
      v8 = FormHeapAlloc((unsigned __int64)(unsigned __int16)v3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v3);
      v31 = v8; /*0x6cae09*/
    }
    else
    {
      v31 = 0; /*0x6cae0f*/
      v8 = 0; /*0x6cae13*/
    }
    v29 = *((_DWORD *)this + 3); /*0x6cae1a*/
    v38 = 0; /*0x6cae1f*/
    sub_6C7D90(&v35, v29, 1); /*0x6cae23*/
    v9 = *((_DWORD *)this + 3) == 0; /*0x6cae28*/
    LOBYTE(v38) = 1; /*0x6cae2b*/
    v39 = 0; /*0x6cae30*/
    if ( !v9 ) /*0x6cae34*/
    {
      v30[0] = 0; /*0x6cae3a*/
      do /*0x6cafc4*/
      {
        v10 = (_WORD *)(v30[0] + *((_DWORD *)this + 6)); /*0x6cae43*/
        v11 = v10[2]; /*0x6cae47*/
        if ( v11 != 0xFFFF ) /*0x6cae50*/
          v4 = (const char *)(*(_DWORD *)(*(_DWORD *)v10 + 8) + v11); /*0x6cae5a*/
        v12 = strlen(v4); /*0x6cae5e*/
        v13 = (char *)FormHeapAlloc(v12 + 1); /*0x6cae76*/
        strcpy_s(v13, v12 + 1, v4); /*0x6cae7a*/
        if ( v39 < HIWORD(v32) ) /*0x6cae8d*/
        {
          if ( v13 ) /*0x6caea5*/
          {
            if ( !*(_DWORD *)(v31 + 4 * v39) ) /*0x6caeab*/
              ++v33; /*0x6caeb1*/
          }
          else if ( *(_DWORD *)(v31 + 4 * v39) ) /*0x6caebd*/
          {
            --v33; /*0x6caec3*/
          }
        }
        else
        {
          HIWORD(v32) = v39 + 1; /*0x6cae94*/
          if ( v13 ) /*0x6cae99*/
            ++v33; /*0x6cae9b*/
        }
        v14 = v30[0]; /*0x6caece*/
        *(_DWORD *)(v31 + 4 * v39) = v13; /*0x6caed2*/
        v15 = (_WORD *)(v14 + *((_DWORD *)this + 6)); /*0x6caed8*/
        v15[2] = 0xFFFF; /*0x6caedf*/
        v15[3] = 0xFFFF; /*0x6caee3*/
        v15[4] = 0xFFFF; /*0x6caee7*/
        v15[5] = 0xFFFF; /*0x6caeeb*/
        v15[6] = 0xFFFF; /*0x6caeef*/
        v16 = *(_DWORD *)(*((_DWORD *)this + 5) + v14 + 4); /*0x6caef6*/
        v30[0] = v16; /*0x6caefc*/
        if ( v16 ) /*0x6caf00*/
          InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x6caf06*/
        LOBYTE(v38) = 2; /*0x6caf16*/
        sub_6C7E90(&v35, v39, v30); /*0x6caf1b*/
        LOBYTE(v38) = 1; /*0x6caf22*/
        if ( v16 ) /*0x6caf27*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x6caf2d*/
            (**(void (__thiscall ***)(LONG, int))v16)(v16, 1); /*0x6caf3f*/
        }
        v17 = *((_DWORD *)this + 5); /*0x6caf41*/
        v18 = *(_DWORD *)(v17 + v14); /*0x6caf44*/
        v19 = v14 + v17; /*0x6caf47*/
        if ( v18 ) /*0x6caf4b*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x6caf51*/
            (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x6caf67*/
          *(_DWORD *)v19 = 0; /*0x6caf69*/
        }
        v20 = *(_DWORD *)(v19 + 4); /*0x6caf6f*/
        if ( v20 ) /*0x6caf74*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x6caf7a*/
            (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x6caf90*/
          *(_DWORD *)(v19 + 4) = 0; /*0x6caf92*/
        }
        *(_DWORD *)(v19 + 8) = 0; /*0x6cafa0*/
        v21 = byte_A79EFC; /*0x6cafa7*/
        v30[0] = v14 + 0x10; /*0x6cafb0*/
        *(_BYTE *)(v19 + 0xC) = v21; /*0x6cafb4*/
        *(_BYTE *)(v19 + 0xD) = 0xFF; /*0x6cafb7*/
        v4 = 0; /*0x6cafbb*/
        ++v39; /*0x6cafc0*/
      }
      while ( v39 < *((_DWORD *)this + 3) ); /*0x6cafc4*/
      v8 = v31; /*0x6cafca*/
    }
    v22 = v37; /*0x6cafce*/
    for ( i = 0; i < v22; sub_6CA8E0(this, *(char **)(v8 + 4 * i++), (volatile LONG *)v24) ) /*0x6cafd3*/
    {
      v24 = *((_DWORD *)v36 + i); /*0x6cafdf*/
      if ( !i ) /*0x6cafe2*/
      {
        v25 = (*(unsigned __int8 *)(v24 + 8) >> 1) & 3; /*0x6cafea*/
        *((_DWORD *)this + 9) = v25; /*0x6caff0*/
        if ( v25 != 2 ) /*0x6caff3*/
        {
          if ( v25 ) /*0x6caff7*/
            *(this + 9) = 0.0; /*0x6caff9*/
        }
        *(this + 0xA) = *(float *)(v24 + 0xC); /*0x6cb007*/
      }
    }
    v26 = HIWORD(v32); /*0x6cb01d*/
    for ( j = 0; j < v26; FormHeapFree(*(_DWORD *)(v8 + 4 * j++)) ) /*0x6cb022*/
      ; /*0x6cb034*/
    LOBYTE(v38) = 0; /*0x6cb049*/
    if ( v36 ) /*0x6cb04e*/
    {
      v28 = (char *)v36 + 0xFFFFFFFC; /*0x6cb053*/
      _LN21((char *)v36, 4u, *((_DWORD *)v36 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_7016A0); /*0x6cb05f*/
      FormHeapFree((unsigned int)v28); /*0x6cb065*/
    }
    FormHeapFree(v8); /*0x6cb06e*/
  }
}
