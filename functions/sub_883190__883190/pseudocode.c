char __thiscall sub_883190(void *this)
{
  unsigned int i; // edi
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  void *v7; // esi
  NiD3DPass *v9; // [esp+10h] [ebp-14h] BYREF
  void *v10; // [esp+14h] [ebp-10h]
  unsigned int v11; // [esp+20h] [ebp-4h]

  v10 = this; /*0x8831b6*/
  for ( i = 0; i < 0x1C; ++i ) /*0x8831ba*/
  {
    v2 = NiD3DPassPool_Acquire(&v9); /*0x8831cd*/
    v3 = (NiD3DPass *)unk_B47790[i]; /*0x8831cf*/
    v4 = v3 == *v2; /*0x8831d5*/
    v11 = 0; /*0x8831d7*/
    if ( !v4 ) /*0x8831df*/
    {
      if ( v3 ) /*0x8831e3*/
      {
        v4 = v3->RefCount-- == 1; /*0x8831e5*/
        if ( v4 ) /*0x8831e8*/
          NiD3DPass_ReleaseToPool(v3); /*0x8831ea*/
      }
      v5 = *v2; /*0x8831ef*/
      v4 = *v2 == 0; /*0x8831f1*/
      unk_B47790[i] = (int)*v2; /*0x8831f3*/
      if ( !v4 ) /*0x8831f9*/
        ++v5->RefCount; /*0x8831fb*/
    }
    v6 = v9; /*0x8831ff*/
    v11 = 0xFFFFFFFF; /*0x883205*/
    if ( v9 ) /*0x883209*/
    {
      --v9->RefCount; /*0x88320b*/
      if ( !v6->RefCount ) /*0x883213*/
        NiD3DPass_ReleaseToPool(v6); /*0x883218*/
    }
  }
  v7 = v10; /*0x883225*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)v10 + 0xC4))(v10); /*0x883233*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x88323c*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)v7 + 0xC8))(v7); /*0x883248*/
  return 1; /*0x88324c*/
}
