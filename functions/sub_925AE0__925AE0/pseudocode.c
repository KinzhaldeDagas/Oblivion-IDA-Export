int __thiscall sub_925AE0(_DWORD *this, int *a2, int *a3)
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

  v4 = *(this + 0xF);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v17[0] = 0x30 * v4 + 0xB0;
  if ( v4 == 1 )
  {
    v6 = 4;
    v5 = 0x20;
    v7 = 1;
  }
  v8 = *(this + 0xD);
  v17[2] = v6 + 4;
  v17[1] = v5 + 0x30;
  v17[3] = v7 + 1;
  v9 = *(_DWORD **)(v8 + 8);
  v10 = v9[7];
  v11 = *(_RTL_CRITICAL_SECTION_0 **)(v10 + 0xA0);
  if ( v11 )
  {
    sub_8A7720(*(LPCRITICAL_SECTION *)(v10 + 0xA0));
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD *))(**(_DWORD **)(*(this + 0xD) + 8) + 0xC))(
      *(_DWORD *)(*(this + 0xD) + 8),
      *(this + 0xD),
      v17);
    LeaveCriticalSection(v11);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int, _DWORD *))(*v9 + 0xC))(v9, v8, v17);
  }
  *((_BYTE *)this + 0x44) |= 6u;
  v12 = *(this + 9);
  if ( v12 == (*(this + 0xA) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)this + 8, 0x20);
  v13 = *(this + 8) + 0x20 * (*(this + 9))++;
  if ( *(this + 0xF) == (*(this + 0x10) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)this + 0xE, 0x14);
  v14 = *(this + 0xF);
  v15 = *(this + 0xE) + 0x14 * v14;
  *(this + 0xF) = v14 + 1;
  *(_DWORD *)v15 = 0;
  *(_DWORD *)(v15 + 4) = 0;
  *(_BYTE *)(v15 + 0xF) = 1;
  if ( v12 > 0 && (*(_BYTE *)(v15 - 5) & 2) == 0 )
    *(_BYTE *)(v15 + 0xF) = 3;
  *a2 = v13;
  *a3 = v15;
  return sub_925A80((const void **)this + 3, v12);
}
