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

  if ( *(_BYTE *)(this + 0x3C) ) /*0x728d09*/
  {
    v3 = *(_DWORD **)(this + 0x34); /*0x728d13*/
    v6 = 0; /*0x728d18*/
    v9 = 0; /*0x728d1c*/
    v7 = 0; /*0x728d20*/
    if ( v3 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v3 + 0x4C))(v3) ) /*0x728d2d*/
    {
      v5 = (2 * (v3[0xB] & 1)) | 1; /*0x728d5c*/
      v8 = 0; /*0x728d5f*/
      sub_726320((int)v3, v5, &v7, &v11, &v9, &v10, &v8, &v6); /*0x728d63*/
      v4 = v6; /*0x728d70*/
      *(_DWORD *)a2 = v7; /*0x728d75*/
      *(_BYTE *)(a2 + 8) = 0; /*0x728d78*/
      *(_DWORD *)(a2 + 4) = v4; /*0x728d7b*/
    }
    else
    {
      *(_DWORD *)a2 = *(_DWORD *)(this + 0x20); /*0x728d91*/
      *(_DWORD *)(a2 + 4) = 0xC; /*0x728d93*/
      *(_BYTE *)(a2 + 8) = 0; /*0x728d96*/
    }
  }
}
