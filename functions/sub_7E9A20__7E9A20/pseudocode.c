char __thiscall sub_7E9A20(NiD3DPass **this)
{
  NiD3DPass **v1; // edi
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  int v8; // [esp+10h] [ebp-18h]
  NiD3DPass *v9; // [esp+14h] [ebp-14h] BYREF
  void *v10; // [esp+18h] [ebp-10h]
  unsigned int v11; // [esp+24h] [ebp-4h]

  v10 = this; /*0x7e9a46*/
  v1 = this + 0x1F; /*0x7e9a4a*/
  v8 = 3; /*0x7e9a4d*/
  do /*0x7e9abd*/
  {
    v2 = NiD3DPassPool_Acquire(&v9); /*0x7e9a6d*/
    v3 = *v1; /*0x7e9a6f*/
    v4 = *v1 == *v2; /*0x7e9a71*/
    v11 = 0; /*0x7e9a73*/
    if ( !v4 ) /*0x7e9a7b*/
    {
      if ( v3 ) /*0x7e9a7f*/
      {
        v4 = v3->RefCount-- == 1; /*0x7e9a81*/
        if ( v4 ) /*0x7e9a84*/
          NiD3DPass_ReleaseToPool(v3); /*0x7e9a86*/
      }
      v5 = *v2; /*0x7e9a8b*/
      v4 = *v2 == 0; /*0x7e9a8d*/
      *v1 = *v2; /*0x7e9a8f*/
      if ( !v4 ) /*0x7e9a91*/
        ++v5->RefCount; /*0x7e9a93*/
    }
    v6 = v9; /*0x7e9a97*/
    v11 = 0xFFFFFFFF; /*0x7e9a9d*/
    if ( v9 ) /*0x7e9aa1*/
    {
      --v9->RefCount; /*0x7e9aa3*/
      if ( !v6->RefCount ) /*0x7e9aab*/
        NiD3DPass_ReleaseToPool(v6); /*0x7e9ab0*/
    }
    ++v1; /*0x7e9ab5*/
    --v8; /*0x7e9ab8*/
  }
  while ( v8 ); /*0x7e9abd*/
  sub_7E7F70(v10); /*0x7e9ac3*/
  return 1; /*0x7e9aca*/
}
