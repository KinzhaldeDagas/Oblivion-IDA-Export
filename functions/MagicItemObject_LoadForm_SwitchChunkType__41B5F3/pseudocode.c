void __usercall MagicItemObject_LoadForm_::SwitchChunkType(
        int a1@<eax>,
        int edi0@<edi>,
        int a3@<esi>,
        int a4@<ebx>,
        int a5@<ebp>,
        int a6)
{
  switch ( a1 )
  {
    case 0x44494445:
      MagicItemObject_LoadForm_::LoadEditorName();
      break;
    case 0x44494645:
      MagicItemObject_LoadForm_::LoadEffectItem();
      break;
    case 0x4C4C5546:
      MagicItemObject_LoadForm_::LoadFullName(edi0, a3);
      break;
    default:
      MagicItemObject_LoadForm_::LoadBaseData(a1, a4, a3, a5, edi0, a6);
      break;
  }
}
