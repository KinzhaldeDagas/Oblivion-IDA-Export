void __usercall MagicItemObject_LoadForm_::SwitchChunkType(
        int a1@<eax>,
        int edi0@<edi>,
        TESFullName *a3@<esi>,
        Data *a4@<ebx>,
        int a5@<ebp>,
        int a6)
{
  switch ( a1 ) /*0x41b5f8*/
  {
    case 0x44494445: /*0x41b5f8*/
      MagicItemObject_LoadForm_::LoadEditorName(a4, a5, edi0); /*0x41b5f8*/
      break;
    case 0x44494645: /*0x41b5f8*/
      MagicItemObject_LoadForm_::LoadEffectItem(); /*0x41b5ff*/
      break;
    case 0x4C4C5546: /*0x41b5f8*/
      MagicItemObject_LoadForm_::LoadFullName(edi0, a3); /*0x41b607*/
      break;
    default:
      MagicItemObject_LoadForm_::LoadBaseData(a1, (int *)a4, (int)a3, a5, edi0, a6); /*0x41b606*/
      break;
  }
}
