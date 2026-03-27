void __cdecl sub_85E570(NiD3DPass *a1)
{
  NiD3DTextureStage *v1; // esi
  unsigned int v2; // edi
  NiD3DPass *v3; // ebx
  NiD3DTextureStage **v4; // ebp
  bool v5; // zf
  NiD3DTextureStage *v6; // eax

  v1 = 0;
  v2 = 0;
  v3 = a1;
  if ( a1->StageCount < 7 )
  {
    do
    {
      v4 = (NiD3DTextureStage **)sub_772630(&a1);
      if ( v1 != *v4 )
      {
        if ( v1 )
        {
          v5 = v1[7].Unk08-- == 1;
          if ( v5 )
            sub_772560(v1);
        }
        v1 = *v4;
        if ( *v4 )
          ++v1[7].Unk08;
      }
      v6 = (NiD3DTextureStage *)a1;
      if ( a1 )
      {
        --*(_DWORD *)&a1->SoftwareVP;
        if ( !v6[7].Unk08 )
          sub_772560(v6);
      }
      sub_801110((int)v1, v2, 1, 2);
      sub_760010(v3, v3->CurrentStage, &v1->Stage);
      ++v2;
    }
    while ( v2 < 7 );
  }
  if ( v1 )
  {
    v5 = v1[7].Unk08-- == 1;
    if ( v5 )
      sub_772560(v1);
  }
}
