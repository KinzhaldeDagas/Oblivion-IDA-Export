void __thiscall ChangesMap::~ChangesMap(NiTMap_TESCELL *this)
{
  this->vtbl = &ChangesMap::`vftable';
  sub_45A8B0(this);
  NiTPointerMap<unsigned int,ChangeData *>::~NiTPointerMap<unsigned int,ChangeData *>((unsigned int *)this);
}
