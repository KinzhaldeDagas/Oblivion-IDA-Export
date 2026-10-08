_DWORD *__thiscall NiTListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>::NiTListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>::`vftable'; /*0x571648*/
  if ( (a2 & 1) != 0 ) /*0x57164e*/
    FormHeapFree((unsigned int)this); /*0x571651*/
  return this; /*0x57165b*/
}
