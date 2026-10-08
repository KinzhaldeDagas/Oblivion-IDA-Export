void __cdecl sub_4806E0(int a1)
{
  char v1; // dl
  int *v2; // eax
  int *v3; // esi
  Atmosphere *v4; // eax
  Atmosphere *v5; // eax
  int **v6; // ecx

  if ( a1 ) /*0x4806e9*/
  {
    v1 = *(_BYTE *)(a1 + 0x18); /*0x4806eb*/
    if ( v1 == 1 ) /*0x4806f2*/
    {
      v2 = (int *)(a1 + *(_DWORD *)(a1 + 0x10)); /*0x4806f7*/
      if ( v2 ) /*0x4806fb*/
        goto LABEL_7; /*0x4806fb*/
    }
    else
    {
      v2 = 0; /*0x480709*/
    }
    if ( v1 == 2 ) /*0x480700*/
    {
      v3 = (int *)(a1 + *(_DWORD *)(a1 + 0x10)); /*0x480705*/
      goto LABEL_8; /*0x480707*/
    }
LABEL_7:
    v3 = 0; /*0x48070d*/
LABEL_8:
    if ( v2 ) /*0x480711*/
    {
      v4 = (Atmosphere *)sub_47FA60(v2); /*0x480714*/
      if ( v4 ) /*0x48071e*/
        Shared_GetPointerAtOffset08(v4); /*0x480724*/
    }
    else
    {
      v5 = (Atmosphere *)sub_47FB10(v3); /*0x48072a*/
      if ( !v5 || !Shared_GetPointerAtOffset08(v5) ) /*0x480738*/
      {
        if ( v3 ) /*0x480745*/
          v6 = (int **)v3[3]; /*0x480747*/
        else
          v6 = 0; /*0x48074c*/
        if ( v6 ) /*0x480750*/
          sub_89F6B0(v6, 0); /*0x480754*/
      }
    }
  }
}
