void __userpurge ActiveEffect_Base_SaveEffect_::LowbitUnk14(
        unsigned __int8 a1@<al>,
        TESSaveLoadGame_SerializationView *a2@<ecx>,
        int a3@<ebp>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char Src)
{
  if ( a1 >= 0x41u ) /*0x68dc62*/
  {
    Src = *(_BYTE *)(a3 + 0x14) & 1; /*0x68dc70*/
    SaveLoad_SaveData(a2, &Src, 1u); /*0x68dc74*/
  }
  ActiveEffect_Base_SaveEffect_::SkipUnk14(a4); /*0x68dc75*/
}
