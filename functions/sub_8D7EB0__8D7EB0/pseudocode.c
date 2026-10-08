int __thiscall sub_8D7EB0(void *this, _DWORD *a2, int a3, int a4, int *a5)
{
  _DWORD *v6; // ebx
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+14h] [ebp-Ch]
  int v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  v9 = *a5; /*0x8d7ebf*/
  v10 = a5[1]; /*0x8d7ec6*/
  v6 = *(_DWORD **)(a4 + 0x74); /*0x8d7ed5*/
  v12 = a5[3]; /*0x8d7ed8*/
  v11 = a5[2]; /*0x8d7edf*/
  v6[4] = *a5; /*0x8d7ee8*/
  v6[5] = a5[1]; /*0x8d7eed*/
  v6[6] = a5[2]; /*0x8d7ef3*/
  v6[7] = a5[3]; /*0x8d7ef9*/
  ++*(_DWORD *)(a4 + 0x88); /*0x8d7f07*/
  sub_8D7400(a2, a3, a4); /*0x8d7f14*/
  sub_8D72F0((int)this, (int)v6, (int)a2, a3, (int)v6, (void (__thiscall *)(int, _DWORD, int, char *))sub_8D6D80); /*0x8d7f2e*/
  if ( (*(_DWORD *)(a4 + 0x88))-- == 1 ) /*0x8d7f33*/
  {
    if ( *(_DWORD *)(a4 + 0x84) ) /*0x8d7f3b*/
    {
      if ( !*(_BYTE *)(a4 + 0x90) ) /*0x8d7f45*/
        sub_899210(a4); /*0x8d7f51*/
    }
  }
  v6[4] = v9; /*0x8d7f62*/
  v6[5] = v10; /*0x8d7f68*/
  v6[6] = v11; /*0x8d7f6b*/
  v6[7] = v12; /*0x8d7f6e*/
  return v10; /*0x8d7f71*/
}
