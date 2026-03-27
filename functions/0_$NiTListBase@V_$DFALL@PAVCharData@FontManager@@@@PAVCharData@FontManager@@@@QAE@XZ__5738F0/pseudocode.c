_DWORD *__thiscall NiTListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>::NiTListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
