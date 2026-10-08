char __thiscall sub_812470(_DWORD *this)
{
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  NiD3DPass *v8; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = NiD3DPassPool_Acquire(&v8); /*0x8124a2*/
  v3 = (NiD3DPass *)*(this + 0x1F); /*0x8124a4*/
  v4 = v3 == *v2; /*0x8124a7*/
  v9 = 0; /*0x8124a9*/
  if ( !v4 ) /*0x8124b1*/
  {
    if ( v3 ) /*0x8124b5*/
    {
      v4 = v3->RefCount-- == 1; /*0x8124b7*/
      if ( v4 ) /*0x8124bb*/
        NiD3DPass_ReleaseToPool(v3); /*0x8124bd*/
    }
    v5 = *v2; /*0x8124c2*/
    v4 = *v2 == 0; /*0x8124c4*/
    *(this + 0x1F) = *v2; /*0x8124c6*/
    if ( !v4 ) /*0x8124c9*/
      ++v5->RefCount; /*0x8124cb*/
  }
  v6 = v8; /*0x8124cf*/
  v9 = 0xFFFFFFFF; /*0x8124d5*/
  if ( v8 ) /*0x8124dd*/
  {
    --v8->RefCount; /*0x8124df*/
    if ( !v6->RefCount ) /*0x8124e8*/
      NiD3DPass_ReleaseToPool(v6); /*0x8124ed*/
  }
  sub_811A30((_DWORD **)this); /*0x8124f4*/
  return 1; /*0x8124fb*/
}
