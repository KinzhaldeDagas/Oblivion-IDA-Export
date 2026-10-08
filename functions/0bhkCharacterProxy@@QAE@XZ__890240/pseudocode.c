bhkCharacterProxy *__thiscall bhkCharacterProxy::bhkCharacterProxy(bhkCharacterProxy *this)
{
  bhkRefObject::bhkRefObject((bhkRefObject *)this); /*0x890268*/
  *((_DWORD *)this + 3) = 0; /*0x89026f*/
  *(_DWORD *)this = &bhkCharacterProxy::`vftable'; /*0x89027a*/
  bhkCharacterPointCollector::bhkCharacterPointCollector((bhkCharacterProxy *)((char *)this + 0x10), 0); /*0x890280*/
  ++unk_BA8020; /*0x890285*/
  return this; /*0x89028e*/
}
