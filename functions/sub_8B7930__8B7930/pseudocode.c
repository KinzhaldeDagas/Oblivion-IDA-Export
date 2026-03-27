bool __thiscall sub_8B7930(NiTriBasedGeomData *this, _DWORD *a2)
{
  bool result; // al
  bool v4; // al
  int v5; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // [esp+10h] [ebp-2Ch] BYREF
  _DWORD *v10[2]; // [esp+14h] [ebp-28h] BYREF
  int v11; // [esp+1Ch] [ebp-20h]
  int v12; // [esp+20h] [ebp-1Ch] BYREF
  _DWORD *v13[2]; // [esp+24h] [ebp-18h] BYREF
  int v14; // [esp+2Ch] [ebp-10h]
  int v15; // [esp+38h] [ebp-4h]
  bool v16; // [esp+40h] [ebp+4h]

  result = sub_8A2650(this, (int)a2);
  if ( result )
  {
    v12 = 0;
    v13[0] = 0;
    v13[1] = 0;
    v14 = 0x80000000;
    v15 = 1;
    v9 = 0;
    v10[0] = 0;
    v10[1] = 0;
    v11 = 0x80000000;
    sub_8B77A0(this, &v12);
    sub_8B77A0(a2, &v9);
    v4 = sub_8E8140(v13, v10);
    v5 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v16 = v4;
    LOBYTE(v15) = 0;
    if ( v11 >= 0 )
    {
      v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
      if ( !v7 )
        v7 = dword_BA7D9C;
      sub_8A75D0(v7, v10[0], 0x10 * v11, 0x14);
    }
    v15 = 0xFFFFFFFF;
    if ( v14 >= 0 )
    {
      v8 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
      if ( !v8 )
        v8 = dword_BA7D9C;
      sub_8A75D0(v8, v13[0], 0x10 * v14, 0x14);
    }
    return v16;
  }
  return result;
}
