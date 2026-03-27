bool __thiscall sub_89FA50(NiTriBasedGeomData *this, _DWORD *a2)
{
  bool result; // al
  int v5; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // ecx
  int v8; // ecx
  _DWORD v9[2]; // [esp+10h] [ebp-3Ch] BYREF
  char v10; // [esp+18h] [ebp-34h]
  _DWORD *v11; // [esp+1Ch] [ebp-30h]
  int v12; // [esp+20h] [ebp-2Ch]
  int v13; // [esp+24h] [ebp-28h]
  _BYTE v14[12]; // [esp+28h] [ebp-24h] BYREF
  _DWORD *v15; // [esp+34h] [ebp-18h]
  int v16; // [esp+3Ch] [ebp-10h]
  unsigned int v17; // [esp+48h] [ebp-4h]
  char v18; // [esp+50h] [ebp+4h]

  result = sub_89D6F0(this, (int)a2);
  v18 = result;
  if ( result )
  {
    v11 = 0;
    v12 = 0;
    v13 = 0x80000000;
    v9[0] = 0;
    v9[1] = 0;
    v10 = 1;
    v17 = 0;
    v15 = 0;
    v16 = 0x80000000;
    sub_89F580(this, (int)v9);
    sub_89F580(a2, (int)v14);
    v5 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( v16 >= 0 )
    {
      v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
      if ( !v7 )
        v7 = dword_BA7D9C;
      sub_8A75D0(v7, v15, 8 * v16, 0x14);
    }
    v17 = 0xFFFFFFFF;
    if ( v13 >= 0 )
    {
      v8 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
      if ( !v8 )
        v8 = dword_BA7D9C;
      sub_8A75D0(v8, v11, 8 * v13, 0x14);
    }
    return v18;
  }
  return result;
}
