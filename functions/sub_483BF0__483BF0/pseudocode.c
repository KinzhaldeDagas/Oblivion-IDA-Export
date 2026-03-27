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

  v6 = 0;
  v15 = 0;
  v7 = a3 + a2 * *(this + 3);
  v18 = 0;
  v8 = *(this + 4) + 0x10 * v7;
  v9 = *(_DWORD *)(v8 + 8);
  v14[0] = *(_BYTE *)v8;
  v10 = *(_DWORD *)(v8 + 0xC);
  v11 = *(_DWORD *)(v8 + 4);
  v16 = v9;
  v17 = v10;
  if ( v11 )
  {
    v6 = v11;
    v15 = v11;
    InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  sub_483870(this, a2, a3, *(this + 4) + 0x10 * (a5 + a4 * *(this + 3)));
  LOBYTE(v12) = sub_483870(this, a4, a5, (int)v14);
  v18 = 0xFFFFFFFF;
  if ( v6 )
  {
    v12 = InterlockedDecrement((volatile LONG *)(v6 + 4));
    if ( !v12 )
      LOBYTE(v12) = (**(char (__thiscall ***)(int, int))v6)(v6, 1);
  }
  return v12;
}
