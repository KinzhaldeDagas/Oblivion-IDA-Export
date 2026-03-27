const void *__thiscall sub_759940(const void **this, int a2, _DWORD **a3)
{
  void *v5; // eax
  int v6; // ebp
  void *v7; // ebx
  void *v8; // ebp
  void *v9; // ebx
  void *v10; // ebx
  int v11; // ebp
  void *v12; // ebx
  void *v13; // ebx
  void *v14; // ebx
  void *v15; // ebx
  int v16; // ebp
  void *v17; // eax
  void *v18; // ebx
  const void *result; // eax
  size_t v20; // [esp-8h] [ebp-18h]
  size_t v21; // [esp-8h] [ebp-18h]
  size_t v22; // [esp-8h] [ebp-18h]
  size_t v23; // [esp-8h] [ebp-18h]
  size_t v24; // [esp-8h] [ebp-18h]
  size_t v25; // [esp-8h] [ebp-18h]
  size_t v26; // [esp-8h] [ebp-18h]
  size_t v27; // [esp-8h] [ebp-18h]
  size_t v28; // [esp-4h] [ebp-14h]
  unsigned int v29; // [esp+14h] [ebp+4h]
  int v30; // [esp+18h] [ebp+8h]

  sub_700770(this, a2, a3);
  v5 = (void *)FormHeapAlloc(
                 (0xC * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0
               ? 0xFFFFFFFF
               : 0xC * *((unsigned __int16 *)this + 4));
  v6 = 0xC * *((unsigned __int16 *)this + 4);
  LODWORD(v20) = v6;
  v29 = (unsigned int)v5;
  memcpy(v5, *(this + 7), v20);
  v7 = 0;
  if ( *(this + 8) )
  {
    v7 = (void *)FormHeapAlloc(
                   (0xC * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0
                 ? 0xFFFFFFFF
                 : 0xC * *((unsigned __int16 *)this + 4));
    LODWORD(v21) = v6;
    memcpy(v7, *(this + 8), v21);
  }
  v8 = 0;
  if ( *(this + 9) )
  {
    v30 = *((unsigned __int16 *)this + 4);
    v8 = (void *)FormHeapAlloc((unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v30);
    if ( v8 )
      sub_401080(v8, 0x10, v30, (void *(__thiscall *)(void *))sub_47EA50);
    else
      v8 = 0;
    LODWORD(v28) = 0x10 * *((unsigned __int16 *)this + 4);
    memcpy(v8, *(this + 9), v28);
  }
  sub_728890((unsigned int *)a2, *((_WORD *)this + 4), v29, (unsigned int)v7, (unsigned int)v8, 0, 0, 0);
  v9 = 0;
  if ( *(this + 0x14) )
  {
    v9 = (void *)FormHeapAlloc(
                   (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1C != 0
                 ? 0xFFFFFFFF
                 : 0x10 * *((unsigned __int16 *)this + 4));
    LODWORD(v22) = 0x10 * *((unsigned __int16 *)this + 4);
    memcpy(v9, *(this + 0x14), v22);
  }
  sub_73EF50((unsigned int *)a2, (unsigned int)v9);
  v10 = (void *)FormHeapAlloc(
                  (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
                ? 0xFFFFFFFF
                : 4 * *((unsigned __int16 *)this + 4));
  v11 = 4 * *((unsigned __int16 *)this + 4);
  LODWORD(v23) = v11;
  memcpy(v10, *(this + 0x13), v23);
  sub_73EF30((unsigned int *)a2, (unsigned int)v10);
  v12 = (void *)FormHeapAlloc(
                  (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
                ? 0xFFFFFFFF
                : 4 * *((unsigned __int16 *)this + 4));
  LODWORD(v24) = v11;
  memcpy(v12, *(this + 0x11), v24);
  sub_73EF10((unsigned int *)a2, (unsigned int)v12);
  *(_WORD *)(a2 + 0x48) = *((_WORD *)this + 0x24);
  if ( *(this + 0x15) )
  {
    v13 = (void *)FormHeapAlloc(
                    (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
                  ? 0xFFFFFFFF
                  : 4 * *((unsigned __int16 *)this + 4));
    LODWORD(v25) = v11;
    memcpy(v13, *(this + 0x15), v25);
    sub_73EF70((unsigned int *)a2, (unsigned int)v13);
  }
  if ( *(this + 0x16) )
  {
    v14 = (void *)FormHeapAlloc(
                    (0xC * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0
                  ? 0xFFFFFFFF
                  : 0xC * *((unsigned __int16 *)this + 4));
    LODWORD(v26) = 0xC * *((unsigned __int16 *)this + 4);
    memcpy(v14, *(this + 0x16), v26);
    sub_73EF90((unsigned int *)a2, (unsigned int)v14);
  }
  v15 = 0;
  if ( *(this + 0x17) )
  {
    v16 = *((unsigned __int16 *)this + 4);
    v17 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * v16);
    v15 = v17;
    if ( v17 )
      sub_401080(v17, 0x1C, v16, (void *(__thiscall *)(void *))sub_75F780);
    else
      v15 = 0;
    LODWORD(v28) = 0x1C * *((unsigned __int16 *)this + 4);
    memcpy(v15, *(this + 0x17), v28);
  }
  FormHeapFree(*(_DWORD *)(a2 + 0x5C));
  *(_DWORD *)(a2 + 0x5C) = v15;
  v18 = 0;
  if ( *(this + 0x18) )
  {
    v18 = (void *)FormHeapAlloc(
                    (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
                  ? 0xFFFFFFFF
                  : 4 * *((unsigned __int16 *)this + 4));
    LODWORD(v27) = 4 * *((unsigned __int16 *)this + 4);
    memcpy(v18, *(this + 0x18), v27);
  }
  FormHeapFree(*(_DWORD *)(a2 + 0x60));
  *(_DWORD *)(a2 + 0x60) = v18;
  *(_WORD *)(a2 + 0x64) = *((_WORD *)this + 0x32);
  *(_WORD *)(a2 + 0x66) = *((_WORD *)this + 0x33);
  *(_DWORD *)(a2 + 0xC) = *(this + 3);
  *(_DWORD *)(a2 + 0x10) = *(this + 4);
  *(_DWORD *)(a2 + 0x14) = *(this + 5);
  result = *(this + 6);
  *(_DWORD *)(a2 + 0x18) = result;
  return result;
}
