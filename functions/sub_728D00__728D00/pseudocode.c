void __thiscall sub_728D00(int this, int a2)
{
  _DWORD *v3; // esi
  int v4; // ecx
  unsigned int v5; // [esp-20h] [ebp-40h]
  int v6; // [esp+8h] [ebp-18h] BYREF
  int v7; // [esp+Ch] [ebp-14h] BYREF
  int v8; // [esp+10h] [ebp-10h] BYREF
  int v9; // [esp+14h] [ebp-Ch] BYREF
  int v10; // [esp+18h] [ebp-8h] BYREF
  int v11; // [esp+1Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 0x3C) )
  {
    v3 = *(_DWORD **)(this + 0x34);
    v6 = 0;
    v9 = 0;
    v7 = 0;
    if ( v3 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v3 + 0x4C))(v3) )
    {
      v5 = (2 * (v3[0xB] & 1)) | 1;
      v8 = 0;
      sub_726320((int)v3, v5, &v7, &v11, &v9, &v10, &v8, &v6);
      v4 = v6;
      *(_DWORD *)a2 = v7;
      *(_BYTE *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 4) = v4;
    }
    else
    {
      *(_DWORD *)a2 = *(_DWORD *)(this + 0x20);
      *(_DWORD *)(a2 + 4) = 0xC;
      *(_BYTE *)(a2 + 8) = 0;
    }
  }
}
