char *__thiscall sub_925AE0(_DWORD *this, int *a2, int *a3)
{
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // edx
  _RTL_CRITICAL_SECTION_0 *v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // ecx
  int v15; // eax
  _DWORD v17[4]; // [esp+10h] [ebp-10h] BYREF

  v4 = *(this + 0xF); /*0x925ae8*/
  v5 = 0; /*0x925af8*/
  v6 = 0; /*0x925afa*/
  v7 = 0; /*0x925afc*/
  v17[0] = 0x30 * v4 + 0xB0; /*0x925b01*/
  if ( v4 == 1 ) /*0x925b05*/
  {
    v6 = 4; /*0x925b07*/
    v5 = 0x20; /*0x925b0c*/
    v7 = 1; /*0x925b11*/
  }
  v8 = *(this + 0xD); /*0x925b13*/
  v17[2] = v6 + 4; /*0x925b1d*/
  v17[1] = v5 + 0x30; /*0x925b21*/
  v17[3] = v7 + 1; /*0x925b25*/
  v9 = *(_DWORD **)(v8 + 8); /*0x925b29*/
  v10 = v9[7]; /*0x925b2c*/
  v11 = *(_RTL_CRITICAL_SECTION_0 **)(v10 + 0xA0); /*0x925b2f*/
  if ( v11 ) /*0x925b37*/
  {
    sub_8A7720(*(LPCRITICAL_SECTION *)(v10 + 0xA0)); /*0x925b3b*/
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD *))(**(_DWORD **)(*(this + 0xD) + 8) + 0xC))( /*0x925b4e*/
      *(_DWORD *)(*(this + 0xD) + 8),
      *(this + 0xD),
      v17);
    LeaveCriticalSection(v11); /*0x925b52*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int, _DWORD *))(*v9 + 0xC))(v9, v8, v17); /*0x925b62*/
  }
  *((_BYTE *)this + 0x44) |= 6u; /*0x925b65*/
  v12 = *(this + 9); /*0x925b6f*/
  if ( v12 == (*(this + 0xA) & 0x3FFFFFFF) ) /*0x925b7c*/
    sub_8A6EE0((const void **)this + 8, 0x20); /*0x925b81*/
  v13 = *(this + 8) + 0x20 * (*(this + 9))++; /*0x925b93*/
  if ( *(this + 0xF) == (*(this + 0x10) & 0x3FFFFFFF) ) /*0x925baa*/
    sub_8A6EE0((const void **)this + 0xE, 0x14); /*0x925baf*/
  v14 = *(this + 0xF); /*0x925bb7*/
  v15 = *(this + 0xE) + 0x14 * v14; /*0x925bbf*/
  *(this + 0xF) = v14 + 1; /*0x925bc5*/
  *(_DWORD *)v15 = 0; /*0x925bc8*/
  *(_DWORD *)(v15 + 4) = 0; /*0x925bce*/
  *(_BYTE *)(v15 + 0xF) = 1; /*0x925bd5*/
  if ( v12 > 0 && (*(_BYTE *)(v15 - 5) & 2) == 0 ) /*0x925bdf*/
    *(_BYTE *)(v15 + 0xF) = 3; /*0x925be1*/
  *a2 = v13; /*0x925bed*/
  *a3 = v15; /*0x925bf3*/
  return sub_925A80((const void **)this + 3, v12); /*0x925bfa*/
}
