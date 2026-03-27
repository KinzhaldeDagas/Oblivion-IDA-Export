void __thiscall sub_728DB0(int this, int a2)
{
  _DWORD *v3; // esi
  int v4; // ebx
  int v5; // ecx
  bool v6; // [esp+7h] [ebp-19h]
  int v7; // [esp+8h] [ebp-18h] BYREF
  int v8; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-Ch] BYREF
  int v11; // [esp+18h] [ebp-8h] BYREF
  int v12; // [esp+1Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 0x3C) )
  {
    v3 = *(_DWORD **)(this + 0x34);
    v6 = 0;
    v8 = 0;
    v10 = 0;
    v7 = 0;
    if ( v3 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v3 + 0x4C))(v3) )
    {
      v4 = v3[0xB];
      if ( (v4 & 2) == 0 )
        return;
      v9 = 0;
      sub_726320((int)v3, (v4 & 1) != 0 ? 4 : 2, &v7, &v12, &v10, &v11, &v9, &v8);
      v6 = (v4 & 0x20) != 0;
    }
    else
    {
      v7 = *(_DWORD *)(this + 0x24);
      v8 = 0x10;
    }
    v5 = v8;
    *(_DWORD *)a2 = v7;
    *(_DWORD *)(a2 + 4) = v5;
    *(_BYTE *)(a2 + 8) = v6;
  }
}
