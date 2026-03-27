void __thiscall sub_728C00(int this, int a2)
{
  _BYTE *v2; // esi
  int v3; // edx
  int v4; // [esp+4h] [ebp-18h] BYREF
  int v5; // [esp+8h] [ebp-14h] BYREF
  int v6; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-Ch] BYREF
  int v8; // [esp+14h] [ebp-8h] BYREF
  int v9; // [esp+18h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 0x3C) )
  {
    v2 = *(_BYTE **)(this + 0x34);
    v5 = 0;
    v7 = 0;
    v4 = 0;
    if ( v2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 0x4C))(v2) )
      {
        if ( (v2[0x2C] & 1) != 0 )
        {
          v6 = 0;
          sub_726320((int)v2, 1u, &v4, &v9, &v7, &v8, &v6, &v5);
        }
      }
    }
    v3 = v5;
    *(_DWORD *)a2 = v4;
    *(_DWORD *)(a2 + 4) = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
}
