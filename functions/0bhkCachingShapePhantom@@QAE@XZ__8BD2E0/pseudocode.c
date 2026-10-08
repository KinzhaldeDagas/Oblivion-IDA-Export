bhkCachingShapePhantom *__thiscall bhkCachingShapePhantom::bhkCachingShapePhantom(bhkCachingShapePhantom *this)
{
  bhkRefObject::bhkRefObject((bhkRefObject *)this); /*0x8bd2e3*/
  *(_DWORD *)this = &bhkWorldObject::`vftable'; /*0x8bd2e8*/
  *((_DWORD *)this + 3) = 0; /*0x8bd2f0*/
  ++unk_BA7D34; /*0x8bd2f8*/
  *(_DWORD *)this = &bhkPhantom::`vftable'; /*0x8bd2fe*/
  ++unk_BA7F5C; /*0x8bd304*/
  *((_BYTE *)this + 0x10) = 0; /*0x8bd30a*/
  *(_DWORD *)this = &bhkShapePhantom::`vftable'; /*0x8bd30d*/
  ++unk_BA7F68; /*0x8bd313*/
  *((_BYTE *)this + 0x10) = 0; /*0x8bd319*/
  *(_DWORD *)this = &bhkCachingShapePhantom::`vftable'; /*0x8bd31c*/
  ++unk_BA804C; /*0x8bd322*/
  *((_BYTE *)this + 0x10) = 0; /*0x8bd328*/
  return this; /*0x8bd32d*/
}
