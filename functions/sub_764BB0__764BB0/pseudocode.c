bool __thiscall sub_764BB0(_DWORD **this, _DWORD *a2, _DWORD *a3)
{
  int v4; // edi
  int v5; // eax
  _DWORD v7[8]; // [esp+14h] [ebp-40h] BYREF
  _DWORD v8[8]; // [esp+34h] [ebp-20h] BYREF

  if ( a2[2] > a3[2] || a2[3] > a3[3] )
    return 0;
  v4 = a3[4];
  (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a2[4] + 0xC) + 0x30))(*(_DWORD *)(a2[4] + 0xC), v8);
  (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(v4 + 0xC) + 0x30))(*(_DWORD *)(v4 + 0xC), v7);
  if ( v8[5] != v7[5] || v8[4] != v7[4] )
    return 0;
  v5 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(this + 0x21E) + 0x5C))(*(this + 0x21E), 0);
  return (*(int (__stdcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_B42154 + 0x30))(
           dword_B42154,
           *(this + 0x16F),
           *(this + 0x170),
           *(_DWORD *)(v5 + 0xC),
           v8[0],
           v7[0]) >= 0;
}
