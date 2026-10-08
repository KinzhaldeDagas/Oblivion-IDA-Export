char __thiscall sub_483BF0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  LONG v12; // eax
  _BYTE v14[4]; // [esp+14h] [ebp-1Ch] BYREF
  int v15; // [esp+18h] [ebp-18h]
  int v16; // [esp+1Ch] [ebp-14h]
  int v17; // [esp+20h] [ebp-10h]
  unsigned int v18; // [esp+2Ch] [ebp-4h]

  v6 = 0; /*0x483c19*/
  v15 = 0; /*0x483c1b*/
  v7 = a3 + a2 * *(this + 3); /*0x483c27*/
  v18 = 0; /*0x483c2b*/
  v8 = *(this + 4) + 0x10 * v7; /*0x483c32*/
  v9 = *(_DWORD *)(v8 + 8); /*0x483c37*/
  v14[0] = *(_BYTE *)v8; /*0x483c3a*/
  v10 = *(_DWORD *)(v8 + 0xC); /*0x483c3e*/
  v11 = *(_DWORD *)(v8 + 4); /*0x483c41*/
  v16 = v9; /*0x483c46*/
  v17 = v10; /*0x483c4a*/
  if ( v11 ) /*0x483c4e*/
  {
    v6 = v11; /*0x483c50*/
    v15 = v11; /*0x483c56*/
    InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x483c5a*/
  }
  sub_483870(this, a2, a3, *(this + 4) + 0x10 * (a5 + a4 * *(this + 3))); /*0x483c83*/
  LOBYTE(v12) = sub_483870(this, a4, a5, (int)v14); /*0x483c91*/
  v18 = 0xFFFFFFFF; /*0x483c98*/
  if ( v6 ) /*0x483ca0*/
  {
    v12 = InterlockedDecrement((volatile LONG *)(v6 + 4)); /*0x483ca6*/
    if ( !v12 ) /*0x483cae*/
      LOBYTE(v12) = (**(char (__thiscall ***)(int, int))v6)(v6, 1); /*0x483cb8*/
  }
  return v12; /*0x483cba*/
}
