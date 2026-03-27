void __thiscall sub_728B60(int this, int a2)
{
  int v3; // esi
  int v4; // ecx
  int v5; // edx
  int v6; // [esp+8h] [ebp-18h] BYREF
  int v7; // [esp+Ch] [ebp-14h] BYREF
  int v8; // [esp+10h] [ebp-10h] BYREF
  int v9; // [esp+14h] [ebp-Ch] BYREF
  int v10; // [esp+18h] [ebp-8h] BYREF
  int v11; // [esp+1Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 0x3C) )
  {
    v3 = *(_DWORD *)(this + 0x34);
    v7 = 0;
    v9 = 0;
    v6 = 0;
    if ( !v3 )
      goto LABEL_6;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 0x4C))(v3) )
    {
      v8 = 0;
      sub_726320(v3, 0, &v6, &v11, &v9, &v10, &v8, &v7);
    }
    if ( v6 )
    {
      v5 = v7;
      *(_DWORD *)a2 = v6;
      *(_DWORD *)(a2 + 4) = v5;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
LABEL_6:
      v4 = *(_DWORD *)(this + 0x1C);
      *(_BYTE *)(a2 + 8) = 0;
      *(_DWORD *)a2 = v4;
      *(_DWORD *)(a2 + 4) = 0xC;
    }
  }
}
