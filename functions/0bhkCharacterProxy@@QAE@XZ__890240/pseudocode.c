bhkCharacterProxy *__thiscall bhkCharacterProxy::bhkCharacterProxy(bhkCharacterProxy *this)
{
  bhkRefObject::bhkRefObject((bhkRefObject *)this);
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &bhkCharacterProxy::`vftable';
  bhkCharacterPointCollector::bhkCharacterPointCollector((bhkCharacterProxy *)((char *)this + 0x10), 0);
  ++dword_BA8020;
  return this;
}
