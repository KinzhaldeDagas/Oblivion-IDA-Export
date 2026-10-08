int __thiscall sub_704FA0(_DWORD *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, _DWORD *, int, signed int *, int); // eax
  int v6; // eax
  void (__cdecl *v7)(int, unsigned int *, int, signed int *, int); // edx
  unsigned int i; // ebp
  int v9; // ebx
  int v10; // eax
  void (__cdecl *v11)(int, signed int *, int, int *, int); // edx
  int v12; // eax
  unsigned int v13; // ebp
  int result; // eax
  int v15; // ebx
  int (__cdecl *v16)(int, signed int *, int, int *, int); // eax
  int v17; // esi
  int v18; // [esp-14h] [ebp-2Ch]
  int v19; // [esp-14h] [ebp-2Ch]
  int v20; // [esp-14h] [ebp-2Ch]
  unsigned int v21; // [esp+10h] [ebp-8h] BYREF
  int v22; // [esp+14h] [ebp-4h] BYREF

  v2 = a2; /*0x704fa6*/
  sub_700A80((int)this, (int)this, (_DWORD *)a2); /*0x704fae*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x14010002u ) /*0x704fc4*/
  {
    v19 = *(_DWORD *)(v2 + 0x220); /*0x704ffc*/
    v5 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v19 + 8); /*0x704ffd*/
    a2 = 2; /*0x705000*/
    v5(v19, this + 6, 2, &a2, 1); /*0x705008*/
  }
  else
  {
    v22 = (*((unsigned __int8 *)this + 0x18) >> 1) & 7; /*0x704fd4*/
    v18 = *(_DWORD *)(v2 + 0x220); /*0x704fe4*/
    v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v18 + 8); /*0x704fe5*/
    a2 = 4; /*0x704fe8*/
    v4(v18, &v22, 4, &a2, 1); /*0x704fec*/
  }
  v6 = *(_DWORD *)(v2 + 0x220); /*0x705013*/
  v21 = *((unsigned __int16 *)this + 0x13); /*0x705023*/
  v7 = *(void (__cdecl **)(int, unsigned int *, int, signed int *, int))(v6 + 8); /*0x705027*/
  a2 = 4; /*0x705031*/
  v7(v6, &v21, 4, &a2, 1); /*0x705035*/
  for ( i = 0; i < v21; ++i ) /*0x705040*/
  {
    v9 = *(_DWORD *)(*(this + 8) + 4 * i); /*0x705045*/
    v10 = *(_DWORD *)(v2 + 0x220); /*0x705048*/
    LOBYTE(a2) = v9 != 0; /*0x70505a*/
    v11 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v10 + 8); /*0x70505e*/
    v22 = 1; /*0x705069*/
    v11(v10, &a2, 1, &v22, 1); /*0x705071*/
    if ( (_BYTE)a2 ) /*0x70507b*/
      (*(void (__thiscall **)(int, signed int))(*(_DWORD *)v9 + 8))(v9, v2); /*0x705085*/
  }
  v12 = *(this + 0xB); /*0x705095*/
  v13 = 0; /*0x70509f*/
  a2 = 4; /*0x7050a8*/
  if ( v12 ) /*0x7050ad*/
  {
    v21 = *(unsigned __int16 *)(v12 + 0xA); /*0x7050b3*/
    result = (*(int (__cdecl **)(_DWORD, unsigned int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8))( /*0x7050c1*/
               *(_DWORD *)(v2 + 0x220),
               &v21,
               4,
               &a2,
               1);
    if ( v21 ) /*0x7050ca*/
    {
      do /*0x70511f*/
      {
        v15 = *(_DWORD *)(*(_DWORD *)(*(this + 0xB) + 4) + 4 * v13); /*0x7050d6*/
        LOBYTE(a2) = v15 != 0; /*0x7050e5*/
        v20 = *(_DWORD *)(v2 + 0x220); /*0x7050f6*/
        v16 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v20 + 8); /*0x7050f7*/
        v22 = 1; /*0x7050fa*/
        result = v16(v20, &a2, 1, &v22, 1); /*0x705102*/
        if ( (_BYTE)a2 ) /*0x70510c*/
          result = (*(int (__thiscall **)(int, signed int))(*(_DWORD *)v15 + 8))(v15, v2); /*0x705116*/
        ++v13; /*0x705118*/
      }
      while ( v13 < v21 ); /*0x70511f*/
    }
  }
  else
  {
    v17 = *(_DWORD *)(v2 + 0x220); /*0x70512b*/
    v21 = 0; /*0x705131*/
    return (*(int (__cdecl **)(int, unsigned int *, int, signed int *, int))(v17 + 8))(v17, &v21, 4, &a2, 1); /*0x705139*/
  }
  return result; /*0x705121*/
}
