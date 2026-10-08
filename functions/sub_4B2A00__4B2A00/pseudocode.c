bool __thiscall sub_4B2A00(unsigned __int8 *this)
{
  bool result; // al
  unsigned __int8 *FormModelPAth; // eax

  if ( !this ) /*0x4b2a05*/
    return 0; /*0x4b2a07*/
  switch ( *(this + 4) ) /*0x4b2a22*/
  {
    case 0x12u: /*0x4b2a22*/
      FormModelPAth = (unsigned __int8 *)GetFormModelPAth(this); /*0x4b2a8b*/
      if ( CRT_StricmpLocaleDispatch(FormModelPAth, "EditorMarker.NIF") ) /*0x4b2a94*/
        goto LABEL_20; /*0x4b2a9e*/
      return 1; /*0x4b2aa3*/
    case 0x18u: /*0x4b2a22*/
      if ( (unsigned __int8 *)MEMORY[0xB35EBC] != this ) /*0x4b2a2f*/
        goto LABEL_20; /*0x4b2a2f*/
      return 1; /*0x4b2a2f*/
    case 0x1Au: /*0x4b2a22*/
      if ( sub_46DA90(this) ) /*0x4b2aa5*/
        goto LABEL_20; /*0x4b2aaf*/
      result = 1; /*0x4b2ab1*/
      break; /*0x4b2ab4*/
    case 0x1Cu: /*0x4b2a22*/
      if ( (unsigned __int8 *)MEMORY[0xB35EA4] != this /*0x4b2a7f*/
        && (unsigned __int8 *)MEMORY[0xB35EB4] != this
        && (unsigned __int8 *)MEMORY[0xB35EC0] != this
        && (unsigned __int8 *)MEMORY[0xB35EC4] != this
        && (unsigned __int8 *)MEMORY[0xB35EB8] != this
        && (unsigned __int8 *)MEMORY[0xB35EA8] != this
        && MEMORY[0xB35ED4] != (TESForm *)this
        && MEMORY[0xB35EAC] != (TESForm *)this
        && (unsigned __int8 *)MEMORY[0xB35EB0] != this )
      {
        goto LABEL_20; /*0x4b2a7f*/
      }
      result = 1; /*0x4b2a81*/
      break; /*0x4b2a84*/
    case 0x29u: /*0x4b2a22*/
      return 1; /*0x4b2a38*/
    default:
LABEL_20:
      result = (unsigned int)(*((_DWORD *)this + 3) - 0x64) <= 0x13; /*0x4b2ab5*/
      break; /*0x4b2abe*/
  }
  return result; /*0x4b2a09*/
}
