// BloodOnDeath decode 2026-05-30: initializes GeometryDecalShader pass slots; fixed render setup, not a limit on blood trail temp effects.
char __thiscall sub_805670(_DWORD *this)
{
  NiD3DPass **v1; // edi
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  int v8; // [esp+10h] [ebp-18h]
  NiD3DPass *v9; // [esp+14h] [ebp-14h] BYREF
  _DWORD *v10; // [esp+18h] [ebp-10h]
  unsigned int v11; // [esp+24h] [ebp-4h]

  v10 = this; /*0x805696*/
  v1 = (NiD3DPass **)(this + 0x1F);             // BloodOnDeath decode: two pass slots follow, corresponding to static and skinned geometry-decal variants. /*0x80569a*/
  v8 = 2; /*0x80569d*/
  do /*0x80570d*/
  {
    v2 = NiD3DPassPool_Acquire(&v9); /*0x8056bd*/
    v3 = *v1; /*0x8056bf*/
    v4 = *v1 == *v2; /*0x8056c1*/
    v11 = 0; /*0x8056c3*/
    if ( !v4 ) /*0x8056cb*/
    {
      if ( v3 ) /*0x8056cf*/
      {
        v4 = v3->RefCount-- == 1; /*0x8056d1*/
        if ( v4 ) /*0x8056d4*/
          NiD3DPass_ReleaseToPool(v3); /*0x8056d6*/
      }
      v5 = *v2; /*0x8056db*/
      v4 = *v2 == 0; /*0x8056dd*/
      *v1 = *v2; /*0x8056df*/
      if ( !v4 ) /*0x8056e1*/
        ++v5->RefCount; /*0x8056e3*/
    }
    v6 = v9; /*0x8056e7*/
    v11 = 0xFFFFFFFF; /*0x8056ed*/
    if ( v9 ) /*0x8056f1*/
    {
      --v9->RefCount; /*0x8056f3*/
      if ( !v6->RefCount ) /*0x8056fb*/
        NiD3DPass_ReleaseToPool(v6); /*0x805700*/
    }
    ++v1; /*0x805705*/
    --v8; /*0x805708*/
  }
  while ( v8 ); /*0x80570d*/
  (*(void (__thiscall **)(_DWORD *))(*v10 + 0xA8))(v10); /*0x80571b*/
  return 1; /*0x80571f*/
}
