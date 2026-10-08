void __usercall sub_443300(TES *a1@<ecx>, double a2@<st2>, double a3@<st1>)
{
  UInt32 v4; // edi
  _DWORD *sound; // ecx

  sub_440F20(a1); /*0x443303*/
  a1->unk48 = 0x7FFFFFFF; /*0x44330f*/
  a1->unk4C = 0x7FFFFFFF; /*0x443312*/
  source = 0.0; /*0x443315*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x44331d*/
  if ( a1->unk7C ) /*0x443325*/
  {
    do /*0x443344*/
    {
      v4 = *(_DWORD *)(a1->unk7C + 4); /*0x443333*/
      FormHeapFree(a1->unk7C); /*0x443337*/
      a1->unk7C = v4; /*0x443341*/
    }
    while ( v4 ); /*0x443344*/
  }
  a1->unk78 = 0; /*0x443347*/
  if ( a1->currentInteriorCell ) /*0x44334e*/
    sub_4425D0(a1); /*0x443356*/
  sound = MEMORY[0xB33398]->sound; /*0x443360*/
  if ( sound ) /*0x443365*/
    sub_6AC210(sound); /*0x443367*/
  sub_43FFF0(a1, a2, a3, 0.0, 1, 0); /*0x443372*/
  sub_43FE30(a1, a2, a3, 0.0, 1); /*0x44337b*/
  a1->unkA8 = 1; /*0x443384*/
  sub_43FC20(a1, 0); /*0x44338b*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x443392*/
}
