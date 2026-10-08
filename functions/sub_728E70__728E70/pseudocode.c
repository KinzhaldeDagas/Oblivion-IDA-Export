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
    v4 = *(_DWORD **)(this + 0x34); /*0x728e83*/
    v7 = 0; /*0x728e88*/
    v10 = 0; /*0x728e8c*/
    v8 = 0; /*0x728e90*/
    if ( v4 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 0x4C))(v4) )
    {
      v5 = v4[0xB]; /*0x728ea3*/
      v9 = 0; /*0x728ecb*/
      sub_726320((int)v4, ((v5 >> 1) & 1) + ((v5 & 1) != 0 ? 4 : 2), &v8, &v12, &v10, &v11, &v9, &v7);
      v6 = v7; /*0x728eee*/
      *(_DWORD *)a3 = v8; /*0x728ef3*/
      *(_BYTE *)(a3 + 8) = 0; /*0x728ef6*/
      *(_DWORD *)(a3 + 4) = v6; /*0x728ef9*/
    }
    else
    {
      *(_DWORD *)a3 = *(_DWORD *)(this + 0x28); /*0x728f0f*/
      *(_DWORD *)(a3 + 4) = 8; /*0x728f11*/
      *(_BYTE *)(a3 + 8) = 0; /*0x728f14*/
    }
  }
}
