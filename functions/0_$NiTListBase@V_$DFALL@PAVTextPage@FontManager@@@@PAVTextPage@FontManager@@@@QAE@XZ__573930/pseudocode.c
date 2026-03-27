_DWORD *__thiscall NiTListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::NiTListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
