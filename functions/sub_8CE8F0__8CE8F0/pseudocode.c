// TES4 authoritative: cleans persistent collector/manifold state. Entries marked 1 are removed by swap-with-last; others are marked stale for the next pass.
void __thiscall bhkCharacterPointCollector_CleanupStaleContacts(int this)
{
  int v2; // ebx
  void (__cdecl *v3)(int, int); // ecx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  __int128 v13; // xmm0
  int v14; // eax

  v2 = 0; /*0x8ce8fa*/
  *(float *)(this + 4) = flt_A99DCC; /*0x8ce8fc*/
  *(_DWORD *)(this + 0x14) = 0; /*0x8ce8ff*/
  v3 = (void (__cdecl *)(int, int))unk_BA7A50; /*0x8ce902*/
  if ( unk_BA7A50 ) /*0x8ce902*/
  {
    v4 = 0; /*0x8ce90d*/
    if ( *(int *)(this + 0x1B4) > 0 ) /*0x8ce915*/
    {
      while ( 1 ) /*0x8ce932*/
      {
        v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x1A4) + 4 * v4) + 0x30) & 0x3F; /*0x8ce932*/
        if ( v5 == 0xE || v5 == 0x10 ) /*0x8ce93d*/
        {
          v6 = *(_DWORD *)(*(_DWORD *)(this + 0x1B0) + 4 * v4); /*0x8ce945*/
          if ( v6 ) /*0x8ce94a*/
          {
            if ( v6 == 1 ) /*0x8ce95b*/
              v3(v2 + *(_DWORD *)(this + 0x1BC), 1); /*0x8ce967*/
          }
          else
          {
            v3(v2 + *(_DWORD *)(this + 0x1BC), 0); /*0x8ce956*/
          }
        }
        ++v4; /*0x8ce96c*/
        v2 += 0x30; /*0x8ce96f*/
        if ( v4 >= *(_DWORD *)(this + 0x1B4) ) /*0x8ce978*/
          break; /*0x8ce978*/
        v3 = (void (__cdecl *)(int, int))unk_BA7A50; /*0x8ce920*/
      }
    }
  }
  v7 = *(_DWORD *)(this + 0x1B4) - 1; /*0x8ce980*/
  if ( v7 >= 0 ) /*0x8ce983*/
  {
    v8 = 0x30 * v7; /*0x8ce98c*/
    do /*0x8cea3c*/
    {
      v9 = (_DWORD *)(*(_DWORD *)(this + 0x1B0) + 4 * v7); /*0x8ce99a*/
      if ( *v9 == 1 )                           // State marker value 1 means remove this persistent contact entry during cleanup. /*0x8ce99d*/
      {
        sub_8BC730(*(int (__stdcall ****)(signed int))(*(_DWORD *)(this + 0x1A4) + 4 * v7)); /*0x8ce9ac*/
        v10 = *(_DWORD *)(this + 0x1A4); /*0x8ce9b1*/
        --*(_DWORD *)(this + 0x1A8); /*0x8ce9ba*/
        *(_DWORD *)(v10 + 4 * v7) = *(_DWORD *)(v10 + 4 * *(_DWORD *)(this + 0x1A8)); /*0x8ce9c9*/
        --*(_DWORD *)(this + 0x1C0); /*0x8ce9cc*/
        v11 = *(_DWORD *)(this + 0x1BC); /*0x8ce9d8*/
        v12 = 0x30 * *(_DWORD *)(this + 0x1C0); /*0x8ce9e1*/
        v13 = *(_OWORD *)(v12 + v11); /*0x8ce9e4*/
        v14 = v11 + v12; /*0x8ce9e8*/
        *(_OWORD *)(v8 + v11) = v13; /*0x8ce9ea*/
        *(_OWORD *)(v8 + v11 + 0x10) = *(_OWORD *)(v14 + 0x10); /*0x8ce9f2*/
        *(_DWORD *)(v8 + v11 + 0x20) = *(_DWORD *)(v14 + 0x20); /*0x8ce9fa*/
        *(_DWORD *)(v8 + v11 + 0x24) = *(_DWORD *)(v14 + 0x24); /*0x8cea01*/
        *(_DWORD *)(v8 + v11 + 0x28) = *(_DWORD *)(v14 + 0x28); /*0x8cea08*/
        *(_DWORD *)(v8 + v11 + 0x2C) = *(_DWORD *)(v14 + 0x2C); /*0x8cea0f*/
        --*(_DWORD *)(this + 0x1B4); /*0x8cea13*/
        *(_DWORD *)(*(_DWORD *)(this + 0x1B0) + 4 * v7) = *(_DWORD *)(*(_DWORD *)(this + 0x1B0) /*0x8cea29*/
                                                                    + 4 * *(_DWORD *)(this + 0x1B4));
      }
      else
      {
        *v9 = 1;                                // Non-removed entries are marked 1 so a later cleanup pass can remove them if not refreshed. /*0x8cea2e*/
      }
      --v7; /*0x8cea34*/
      v8 -= 0x30; /*0x8cea37*/
    }
    while ( v7 >= 0 ); /*0x8cea3c*/
  }
}
