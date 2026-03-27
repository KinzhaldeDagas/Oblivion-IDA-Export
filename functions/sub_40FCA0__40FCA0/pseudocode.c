bool __usercall sub_40FCA0@<al>(int a1@<edi>, _DWORD *a2@<esi>, int a3)
{
  int v3; // ebx
  int v5; // [esp+0h] [ebp-24h]
  int v6; // [esp+4h] [ebp-20h] BYREF
  int v7; // [esp+8h] [ebp-1Ch] BYREF
  int v8; // [esp+Ch] [ebp-18h] BYREF
  int v9; // [esp+10h] [ebp-14h] BYREF
  int v10; // [esp+14h] [ebp-10h] BYREF
  int v11; // [esp+18h] [ebp-Ch] BYREF
  int v12; // [esp+1Ch] [ebp-8h] BYREF
  int v13; // [esp+20h] [ebp-4h] BYREF

  v3 = 1;
  BinkDoFrame(v5);
  if ( sub_40F880(a2, &v13, &v12, &v11, &v10, &v9, &v8) )
  {
    do
    {
      v3 = BinkCopyToBufferRect(
             a1,
             v13,
             v12,
             *(_DWORD *)(a1 + 4),
             0,
             0,
             v11,
             v10,
             v9,
             v8,
             (a3 != 0 ? 0x80000000 : 0) | 3);
      (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(a2[0x10] + 4 * a2[5] - 4) + 0x50))(
        *(_DWORD *)(a2[0x10] + 4 * a2[5] - 4),
        0);
    }
    while ( sub_40F880(a2, &v11, &v10, &v9, &v8, &v7, &v6) );
  }
  return v3 != 0;
}
