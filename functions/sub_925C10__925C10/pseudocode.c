void __thiscall sub_925C10(const void **this, unsigned __int16 a2)
{
  _BYTE *v3; // eax
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int i; // edx
  _BYTE *v11; // ecx
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // edx
  _RTL_CRITICAL_SECTION_0 *v15; // edi
  int v16; // [esp+10h] [ebp-10h] BYREF
  int v17; // [esp+14h] [ebp-Ch]
  int v18; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]
  int v20; // [esp+24h] [ebp+4h]

  v3 = (char *)*(this + 3) + a2;
  v4 = (unsigned __int8)*v3;
  *v3 = 0xFF;
  v5 = (int)*(this + 0xF);
  v20 = v4;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( v5 == 2 )
  {
    v18 = 4;
    v17 = 0x20;
    v19 = 1;
  }
  v6 = this + 0xE;
  v7 = (int)*(this + 0xF) + 0xFFFFFFFF;
  *(this + 0xF) = (const void *)v7;
  if ( v4 < v7 )
  {
    v8 = 0x14 * v4;
    do
    {
      v9 = (_DWORD *)(v8 + *v6);
      *v9 = v9[5];
      v9[1] = v9[6];
      v9[2] = v9[7];
      v9[3] = v9[8];
      v9[4] = v9[9];
      ++v4;
      v8 += 0x14;
    }
    while ( v4 < (int)*(this + 0xF) );
    v4 = v20;
  }
  *(_BYTE *)(*v6 + 0x14 * v4 + 0xF) &= ~2u;
  *(this + 9) = (char *)*(this + 9) + 0xFFFFFFFF;
  if ( 2 * (int)*(this + 0xF) + 2 <= (int)((unsigned int)*(this + 0x10) & 0x3FFFFFFF) )
    sub_8A6F90(this + 0xE, 0x14, 0, 0);
  if ( 2 * (int)*(this + 9) + 2 <= (int)((unsigned int)*(this + 0xA) & 0x3FFFFFFF) )
    sub_8A6F90(this + 8, 0x20, 0, 0);
  for ( i = (int)*(this + 4) + 0xFFFFFFFF; i >= 0; --i )
  {
    v11 = (char *)*(this + 3) + i;
    if ( *v11 != 0xFF && (unsigned __int8)*v11 > v4 )
      --*v11;
  }
  v18 += 4;
  v12 = (int)*(this + 0xD);
  v17 += 0x30;
  ++v19;
  v13 = *(_DWORD **)(v12 + 8);
  v14 = v13[7];
  v15 = *(_RTL_CRITICAL_SECTION_0 **)(v14 + 0xA0);
  if ( v15 )
  {
    sub_8A7720(*(LPCRITICAL_SECTION *)(v14 + 0xA0));
    (*(void (__thiscall **)(_DWORD, _DWORD, int *))(**((_DWORD **)*(this + 0xD) + 2) + 0x10))(
      *((_DWORD *)*(this + 0xD) + 2),
      *(this + 0xD),
      &v16);
    LeaveCriticalSection(v15);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int, int *))(*v13 + 0x10))(v13, v12, &v16);
  }
  *((_BYTE *)this + 0x44) |= 5u;
}
