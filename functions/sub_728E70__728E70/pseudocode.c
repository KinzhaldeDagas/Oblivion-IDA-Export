void __thiscall sub_728E70(int this, int a2, int a3)
{
  _DWORD *v4; // esi
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // [esp+8h] [ebp-18h] BYREF
  int v8; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-Ch] BYREF
  int v11; // [esp+18h] [ebp-8h] BYREF
  int v12; // [esp+1Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 0x3C) )
  {
    v4 = *(_DWORD **)(this + 0x34);
    v7 = 0;
    v10 = 0;
    v8 = 0;
    if ( v4 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 0x4C))(v4) )
    {
      v5 = v4[0xB];
      v9 = 0;
      sub_726320((int)v4, ((v5 >> 1) & 1) + ((v5 & 1) != 0 ? 4 : 2), &v8, &v12, &v10, &v11, &v9, &v7);
      v6 = v7;
      *(_DWORD *)a3 = v8;
      *(_BYTE *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 4) = v6;
    }
    else
    {
      *(_DWORD *)a3 = *(_DWORD *)(this + 0x28);
      *(_DWORD *)(a3 + 4) = 8;
      *(_BYTE *)(a3 + 8) = 0;
    }
  }
}
