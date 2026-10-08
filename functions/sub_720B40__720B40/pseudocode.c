void __thiscall sub_720B40(NiSourceTexture *this, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8)
{
  const char *v8; // ebp
  unsigned int v9; // kr00_4
  char *v10; // ebx
  void *v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  int v15; // [esp+14h] [ebp-154h]
  char *v16; // [esp+18h] [ebp-150h]
  NiDevImageConverter *v17; // [esp+1Ch] [ebp-14Ch]
  int a1[6]; // [esp+24h] [ebp-144h] BYREF
  char *Src[6]; // [esp+3Ch] [ebp-12Ch]
  _BYTE v21[260]; // [esp+54h] [ebp-114h] BYREF
  unsigned int v22; // [esp+164h] [ebp-4h]

  ArrayConstructor( /*0x720bcf*/
    (char *)a1,
    4u,
    6,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  v22 = 0; /*0x720be0*/
  Src[0] = a2; /*0x720beb*/
  Src[1] = a3; /*0x720bef*/
  Src[2] = a4; /*0x720bf3*/
  Src[3] = a5; /*0x720bf7*/
  Src[4] = a6; /*0x720bfb*/
  Src[5] = a7; /*0x720bff*/
  v17 = sub_71B280(); /*0x720c08*/
  v15 = 0; /*0x720c0c*/
  while ( 1 ) /*0x720c18*/
  {
    v8 = Src[v15]; /*0x720c18*/
    v9 = strlen(v8); /*0x720c1e*/
    v10 = (char *)FormHeapAlloc(v9 + 1); /*0x720c36*/
    strcpy_s(v10, v9 + 1, v8); /*0x720c3a*/
    Shared_NoOpVirtual_60D0A0(v11); /*0x720c40*/
    v16 = sub_71B090(v10); /*0x720c51*/
    sub_7478F0(a8, v16); /*0x720c55*/
    (*(void (__thiscall **)(char *))(*(_DWORD *)a8 + 4))(a8); /*0x720c61*/
    if ( (*(unsigned __int8 (__thiscall **)(char *, _BYTE *, int))(*(_DWORD *)a8 + 8))(a8, v21, 0x104) ) /*0x720c74*/
    {
      while ( !NiFile_CanOpenFileWithMode_Indirect((int)v21, 0) ) /*0x720c91*/
      {
        if ( !(*(unsigned __int8 (__thiscall **)(char *, _BYTE *, int))(*(_DWORD *)a8 + 8))(a8, v21, 0x104) ) /*0x720ca4*/
          goto LABEL_13; /*0x720ca8*/
      }
      v12 = (*(int (__thiscall **)(NiDevImageConverter *, _BYTE *, _DWORD))(*(_DWORD *)v17 + 8))(v17, v21, 0); /*0x720cbc*/
      v13 = a1[v15]; /*0x720cc2*/
      v14 = v12; /*0x720cc6*/
      if ( v13 != v12 ) /*0x720cca*/
      {
        if ( v13 ) /*0x720cce*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x720cd4*/
            (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x720cea*/
        }
        a1[v15] = v14; /*0x720cf2*/
        if ( v14 ) /*0x720cf6*/
          InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x720cfc*/
      }
      FormHeapFree((unsigned int)v16); /*0x720d07*/
      FormHeapFree((unsigned int)v10); /*0x720d0d*/
    }
LABEL_13:
    if ( !a1[v15] ) /*0x720d19*/
      break; /*0x720d19*/
    if ( (unsigned int)++v15 >= 6 ) /*0x720d2a*/
    {
      sub_7205A0(this, a1[0], a1[1], a1[2], a1[3], a1[4], a1[5]); /*0x720d52*/
      break; /*0x720d52*/
    }
  }
  v22 = 0xFFFFFFFF; /*0x720d65*/
  _LN21((char *)a1, 4u, 6, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x720d70*/
}
