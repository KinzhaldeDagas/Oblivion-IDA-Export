bhkCachingShapePhantom *__thiscall bhkCachingShapePhantom::bhkCachingShapePhantom(bhkCachingShapePhantom *this)
{
  bhkRefObject::bhkRefObject((bhkRefObject *)this);
  *(_DWORD *)this = &bhkWorldObject::`vftable';
  *((_DWORD *)this + 3) = 0;
  ++dword_BA7D34;
  *(_DWORD *)this = &bhkPhantom::`vftable';
  ++dword_BA7F5C;
  *((_BYTE *)this + 0x10) = 0;
  *(_DWORD *)this = &bhkShapePhantom::`vftable';
  ++dword_BA7F68;
  *((_BYTE *)this + 0x10) = 0;
  *(_DWORD *)this = &bhkCachingShapePhantom::`vftable';
  ++dword_BA804C;
  *((_BYTE *)this + 0x10) = 0;
  return this;
}
