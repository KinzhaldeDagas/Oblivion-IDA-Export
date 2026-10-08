void __thiscall sub_6AC210(_DWORD *this)
{
  int v2; // ebx
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  _DWORD *v7; // edi
  unsigned int *v8; // eax
  int v9; // edi
  unsigned int *v10; // [esp+10h] [ebp-1Ch] BYREF
  int v11; // [esp+14h] [ebp-18h] BYREF
  unsigned int *v12; // [esp+18h] [ebp-14h] BYREF
  int v13; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v14; // [esp+28h] [ebp-4h]

  v2 = 0; /*0x6ac238*/
  v10 = 0; /*0x6ac23a*/
  v11 = 0; /*0x6ac242*/
  v3 = *(this + 0xC1); /*0x6ac246*/
  v4 = *(_DWORD *)(v3 + 4); /*0x6ac24c*/
  v5 = 0; /*0x6ac24f*/
  v14 = 0; /*0x6ac253*/
  if ( v4 ) /*0x6ac257*/
  {
    v6 = *(_DWORD **)(v3 + 8); /*0x6ac259*/
    v7 = v6; /*0x6ac25c*/
    while ( !*v7 ) /*0x6ac263*/
    {
      ++v5; /*0x6ac269*/
      ++v7; /*0x6ac26c*/
      if ( v5 >= v4 ) /*0x6ac271*/
        goto LABEL_5; /*0x6ac271*/
    }
    v8 = (unsigned int *)v6[v5]; /*0x6ac323*/
  }
  else
  {
LABEL_5:
    v8 = 0; /*0x6ac273*/
  }
  v12 = v8; /*0x6ac277*/
  while ( v12 ) /*0x6ac27b*/
  {
    sub_7B2600((unsigned int **)*(this + 0xC1), &v12, &v13, (unsigned int *)&v11); /*0x6ac295*/
    v9 = v13; /*0x6ac29a*/
    NiTMap_RemoveAt((_DWORD *)*(this + 0xC1), v13); /*0x6ac2a5*/
    v2 = v11; /*0x6ac2aa*/
    if ( v11 ) /*0x6ac2b0*/
      sub_6F9710(v11); /*0x6ac2b3*/
    NiTMap_GetAt((_DWORD *)*(this + 0xC0), v9, &v10); /*0x6ac2c7*/
    if ( v10 ) /*0x6ac2d2*/
    {
      sub_6B6AC0(v10); /*0x6ac2d4*/
      sub_6AA9C0(this, &v10); /*0x6ac2e0*/
    }
  }
  v14 = 0xFFFFFFFF; /*0x6ac2ee*/
  if ( v2 ) /*0x6ac2f6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6ac2fc*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6ac30e*/
  }
}
