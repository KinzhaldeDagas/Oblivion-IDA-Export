_DWORD *__thiscall NiTListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::NiTListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::`vftable'; /*0x573938*/
  if ( (a2 & 1) != 0 ) /*0x57393e*/
    FormHeapFree((unsigned int)this); /*0x573941*/
  return this; /*0x57394b*/
}
