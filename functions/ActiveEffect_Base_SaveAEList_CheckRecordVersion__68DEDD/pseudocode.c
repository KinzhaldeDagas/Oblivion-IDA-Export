int __usercall ActiveEffect_Base_SaveAEList_::CheckRecordVersion@<eax>(
        double st7_0@<st0>,
        int a1,
        int a2,
        int Src,
        int source,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x68dedd*/
    return ActiveEffect_Base_SaveAEList_::OldHeader(a1, a2, Src, source, a5, a6, a7, a8, a9, a10); /*0x68dee5*/
  else
    return ActiveEffect_Base_SaveAEList_::ReserveEffectCount( /*0x68dee4*/
             st7_0,
             a1,
             a2,
             Src,
             source,
             a5,
             a6,
             a7,
             a8,
             (_DWORD *)a9,
             a10);
}
