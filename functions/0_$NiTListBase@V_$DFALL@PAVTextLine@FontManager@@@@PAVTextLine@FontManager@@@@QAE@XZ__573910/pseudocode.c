_DWORD *__thiscall NiTListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>::NiTListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>::`vftable'; /*0x573918*/
  if ( (a2 & 1) != 0 ) /*0x57391e*/
    FormHeapFree((unsigned int)this); /*0x573921*/
  return this; /*0x57392b*/
}
