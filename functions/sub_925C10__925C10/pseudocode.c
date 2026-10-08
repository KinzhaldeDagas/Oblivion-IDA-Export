void __thiscall sub_925C10(const void **this, unsigned __int16 a2)
{
  _BYTE *v3; // eax
  int v4; // edi
  int v5; // eax
  const void **v6; // ecx
  char *v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  char *i; // edx
  char *v11; // ecx
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // edx
  _RTL_CRITICAL_SECTION_0 *v15; // edi
  int v16; // [esp+10h] [ebp-10h] BYREF
  int v17; // [esp+14h] [ebp-Ch]
  int v18; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]
  int v20; // [esp+24h] [ebp+4h]

  v3 = (char *)*(this + 3) + a2; /*0x925c20*/
  v4 = (unsigned __int8)*v3; /*0x925c23*/
  *v3 = 0xFF; /*0x925c26*/
  v5 = (int)*(this + 0xF); /*0x925c29*/
  v20 = v4; /*0x925c31*/
  v16 = 0; /*0x925c35*/
  v17 = 0; /*0x925c39*/
  v18 = 0; /*0x925c3d*/
  v19 = 0; /*0x925c41*/
  if ( v5 == 2 ) /*0x925c45*/
  {
    v18 = 4; /*0x925c47*/
    v17 = 0x20; /*0x925c4f*/
    v19 = 1; /*0x925c57*/
  }
  v6 = this + 0xE; /*0x925c62*/
  v7 = (char *)*(this + 0xF) + 0xFFFFFFFF; /*0x925c66*/
  *(this + 0xF) = v7; /*0x925c6a*/
  if ( v4 < (int)v7 ) /*0x925c6d*/
  {
    v8 = 0x14 * v4; /*0x925c72*/
    do /*0x925ca1*/
    {
      v9 = (char *)*v6 + v8; /*0x925c77*/
      *v9 = v9[5]; /*0x925c7e*/
      v9[1] = v9[6]; /*0x925c83*/
      v9[2] = v9[7]; /*0x925c89*/
      v9[3] = v9[8]; /*0x925c8f*/
      v9[4] = v9[9]; /*0x925c95*/
      ++v4; /*0x925c9b*/
      v8 += 0x14; /*0x925c9c*/
    }
    while ( v4 < (int)*(this + 0xF) ); /*0x925ca1*/
    v4 = v20; /*0x925ca3*/
  }
  *((_BYTE *)*v6 + 0x14 * v4 + 0xF) &= ~2u; /*0x925cb2*/
  *(this + 9) = (char *)*(this + 9) + 0xFFFFFFFF; /*0x925cbc*/
  if ( 2 * (int)*(this + 0xF) + 2 <= (int)((unsigned int)*(this + 0x10) & 0x3FFFFFFF) ) /*0x925cd1*/
    sub_8A6F90(this + 0xE, 0x14, 0, 0); /*0x925cd8*/
  if ( 2 * (int)*(this + 9) + 2 <= (int)((unsigned int)*(this + 0xA) & 0x3FFFFFFF) ) /*0x925cf2*/
    sub_8A6F90(this + 8, 0x20, 0, 0); /*0x925cf9*/
  for ( i = (char *)*(this + 4) + 0xFFFFFFFF; (int)i >= 0; --i ) /*0x925d05*/
  {
    v11 = &i[(_DWORD)*(this + 3)]; /*0x925d0a*/
    if ( *v11 != (char)0xFF && (unsigned __int8)*v11 > v4 ) /*0x925d18*/
      --*v11; /*0x925d1a*/
  }
  v18 += 4; /*0x925d2e*/
  v12 = (int)*(this + 0xD); /*0x925d32*/
  v17 += 0x30; /*0x925d39*/
  ++v19; /*0x925d3d*/
  v13 = *(_DWORD **)(v12 + 8); /*0x925d41*/
  v14 = v13[7]; /*0x925d44*/
  v15 = *(_RTL_CRITICAL_SECTION_0 **)(v14 + 0xA0); /*0x925d47*/
  if ( v15 ) /*0x925d4f*/
  {
    sub_8A7720(*(LPCRITICAL_SECTION *)(v14 + 0xA0)); /*0x925d53*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int *))(**((_DWORD **)*(this + 0xD) + 2) + 0x10))( /*0x925d66*/
      *((_DWORD *)*(this + 0xD) + 2),
      *(this + 0xD),
      &v16);
    LeaveCriticalSection(v15); /*0x925d6a*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int, int *))(*v13 + 0x10))(v13, v12, &v16); /*0x925d86*/
  }
  *((_BYTE *)this + 0x44) |= 5u; /*0x925d70*/
}
