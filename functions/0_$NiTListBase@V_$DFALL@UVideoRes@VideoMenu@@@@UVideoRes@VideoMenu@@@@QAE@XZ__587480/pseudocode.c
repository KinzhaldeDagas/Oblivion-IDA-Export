_DWORD *__thiscall NiTListBase<DFALL<VideoMenu::VideoRes>,VideoMenu::VideoRes>::NiTListBase<DFALL<VideoMenu::VideoRes>,VideoMenu::VideoRes>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<VideoMenu::VideoRes>,VideoMenu::VideoRes>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
