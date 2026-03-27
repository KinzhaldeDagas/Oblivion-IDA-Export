_DWORD *__thiscall NiTListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>::NiTListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
