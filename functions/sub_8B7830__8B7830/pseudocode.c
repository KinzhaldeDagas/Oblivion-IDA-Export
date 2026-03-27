int __thiscall sub_8B7830(_DWORD *this, signed int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int result; // eax
  int v10; // ecx
  int v11; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD *v12; // [esp+18h] [ebp-18h] BYREF
  int v13; // [esp+1Ch] [ebp-14h]
  int v14; // [esp+20h] [ebp-10h]
  unsigned int v15; // [esp+2Ch] [ebp-4h]

  v3 = (*(int (__thiscall **)(_DWORD *, int *))(*this + 0x74))(this, &v11);
  v4 = v3;
  v12 = 0;
  v13 = 0;
  v14 = 0x80000000;
  v15 = 0;
  if ( v3 )
  {
    v12 = *(_DWORD **)(v3 + 4);
    v5 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 4) = 0;
    v6 = v13;
    v13 = v5;
    v7 = *(_DWORD *)(v4 + 0xC);
    *(_DWORD *)(v4 + 8) = v6;
    v8 = v14;
    v14 = v7;
    *(_DWORD *)(v4 + 0xC) = v8;
  }
  sub_8A2610(this, a2);
  if ( v4 )
  {
    sub_8E81B0(a2, &v12);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 0x64))(this, v11);
  }
  result = v14;
  v15 = 0xFFFFFFFF;
  if ( v14 >= 0 )
  {
    v10 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v10 )
      v10 = dword_BA7D9C;
    return sub_8A75D0(v10, v12, 0x10 * v14, 0x14);
  }
  return result;
}
