_DWORD *__thiscall NiTListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>::NiTListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
