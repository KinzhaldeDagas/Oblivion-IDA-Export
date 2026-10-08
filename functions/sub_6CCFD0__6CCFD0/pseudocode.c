char __thiscall sub_6CCFD0(_BYTE *this)
{
  unsigned __int8 v3; // al
  int v4; // edi
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  unsigned __int8 i; // bl
  char *v10; // eax
  unsigned int v11; // ebx
  unsigned __int8 v12; // [esp+13h] [ebp-11h]

  if ( !byte_B242A0 ) /*0x6ccff8*/
    return 0; /*0x6cd002*/
  v3 = byte_B242A0 + *(this + 0xD); /*0x6cd01a*/
  v4 = v3; /*0x6cd01c*/
  v12 = v3; /*0x6cd01f*/
  v5 = (0x18 * (unsigned __int64)v3) >> 0x20 != 0 ? 0xFFFFFFFF : 0x18 * v3;
  v6 = FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  if ( v6 ) /*0x6cd058*/
  {
    v7 = v6 + 4; /*0x6cd065*/
    *(_DWORD *)v6 = v4; /*0x6cd06b*/
    ArrayConstructor( /*0x6cd06d*/
      (char *)(v6 + 4),
      0x18u,
      v4,
      (void (__thiscall *)(char *))sub_6CCDE0,
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    v8 = v7; /*0x6cd072*/
  }
  else
  {
    v8 = 0; /*0x6cd076*/
  }
  for ( i = 0; i < *(this + 0xD); ++i ) /*0x6cd07a*/
    sub_6CC890((float *)(0x18 * i + v8), (float *)(0x18 * i + *((_DWORD *)this + 5))); /*0x6cd09c*/
  v10 = *((char **)this + 5); /*0x6cd0a9*/
  if ( v10 ) /*0x6cd0ae*/
  {
    v11 = (unsigned int)(v10 + 0xFFFFFFFC); /*0x6cd0b3*/
    _LN21(v10, 0x18u, *((_DWORD *)v10 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6cd0bf*/
    FormHeapFree(v11); /*0x6cd0c5*/
  }
  *(this + 0xD) = v12; /*0x6cd0d1*/
  *((_DWORD *)this + 5) = v8; /*0x6cd0d4*/
  return 1; /*0x6cd004*/
}
