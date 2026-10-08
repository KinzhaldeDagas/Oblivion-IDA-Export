_DWORD *__thiscall NiTListBase<DFALL<VideoMenu::VideoRes>,VideoMenu::VideoRes>::NiTListBase<DFALL<VideoMenu::VideoRes>,VideoMenu::VideoRes>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<VideoMenu::VideoRes>,VideoMenu::VideoRes>::`vftable'; /*0x587488*/
  if ( (a2 & 1) != 0 ) /*0x58748e*/
    FormHeapFree((unsigned int)this); /*0x587491*/
  return this; /*0x58749b*/
}
