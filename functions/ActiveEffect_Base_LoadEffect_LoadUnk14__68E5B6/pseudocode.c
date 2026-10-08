void __userpurge ActiveEffect_Base_LoadEffect_::LoadUnk14(
        TESSaveLoadGame_SerializationView *a1@<ecx>,
        int a2@<ebp>,
        int a3)
{
  if ( a1->currentVersion < 0x48u ) /*0x68e5bb*/
  {
    ActiveEffect_Base_LoadEffect_::Lowbit_Unk14(a3); /*0x68e5bb*/
  }
  else
  {
    SaveLoad_LoadData(a1, (void *)(a2 + 0x14), 4u); /*0x68e5c3*/
    ActiveEffect_Base_LoadEffect_::Epilogue(a3); /*0x68e5c8*/
  }
}
