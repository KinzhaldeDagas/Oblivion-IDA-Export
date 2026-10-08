_DWORD *__thiscall NiTListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>::NiTListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>::`vftable'; /*0x5738f8*/
  if ( (a2 & 1) != 0 ) /*0x5738fe*/
    FormHeapFree((unsigned int)this); /*0x573901*/
  return this; /*0x57390b*/
}
