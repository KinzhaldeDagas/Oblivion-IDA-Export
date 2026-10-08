void __userpurge ActiveEffect_Base_LoadEffect_::Lowbit_Unk14(
        unsigned __int8 a1@<al>,
        TESSaveLoadGame_SerializationView *a2@<ecx>,
        char a3@<bl>,
        int a4@<ebp>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        char Dst)
{
  if ( a1 >= 0x41u ) /*0x68e5cc*/
  {
    SaveLoad_LoadData(a2, &Dst, 1u); /*0x68e5d5*/
    if ( Dst != a3 ) /*0x68e5de*/
      *(_DWORD *)(a4 + 0x14) |= 6u; /*0x68e5e0*/
  }
  ActiveEffect_Base_LoadEffect_::Epilogue(a5); /*0x68e5e1*/
}
