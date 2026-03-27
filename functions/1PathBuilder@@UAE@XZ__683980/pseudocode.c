void __thiscall PathBuilder::~PathBuilder(PathBuilder *this)
{
  *(_DWORD *)this = &PathBuilder::`vftable';
  sub_683500((NiTMap_TESCELL *)this);
  NiTPointerMap<Actor *,PathingData *>::~NiTPointerMap<Actor *,PathingData *>((unsigned int *)this + 0xC);
  NiTPointerMap<Actor *,PathingData *>::~NiTPointerMap<Actor *,PathingData *>((unsigned int *)this + 8);
  NiTPointerMap<Actor *,PathingData *>::~NiTPointerMap<Actor *,PathingData *>((unsigned int *)this + 4);
  BackgroundLoader::~BackgroundLoader(this);
}
