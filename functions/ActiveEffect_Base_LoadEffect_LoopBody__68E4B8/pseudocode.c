void __userpurge ActiveEffect_Base_LoadEffect_::LoopBody(
        float *a1@<ebx>,
        int a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6,
        int Dst,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)&Dst + 3, 1u); /*0x68e4c5*/
  if ( HIBYTE(Dst) == 5 )
  {
    ActiveEffect_Base_LoadEffect_::MagicModelHitEffect( /*0x68e4d6*/
      a1,
      a2,
      a3,
      a4,
      a5,
      a6,
      Dst,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17);
  }
  else if ( HIBYTE(Dst) == 6 )
  {
    ActiveEffect_Base_LoadEffect_::MagicShaderHitEffect( /*0x68e4db*/
      a1,
      a2,
      a3,
      a4,
      a5,
      a6,
      Dst,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17);
  }
  else
  {
    PrintError("Unknown magic hit effect type: %i", HIBYTE(Dst));
    ActiveEffect_Base_LoadEffect_::LoadHitEffect( /*0x68e4eb*/
      a1,
      a2,
      0,
      a3,
      a4,
      a5,
      a6,
      Dst,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17);
  }
}
