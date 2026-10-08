void __thiscall PathBuilder::~PathBuilder(PathBuilder *this)
{
  *(_DWORD *)this = &PathBuilder::`vftable'; /*0x6839a8*/
  sub_683500((NiTMap_TESCELL *)this); /*0x6839b6*/
  NiTPointerMap<Actor *,PathingData *>::~NiTPointerMap<Actor *,PathingData *>((unsigned int *)this + 0xC); /*0x6839c3*/
  NiTPointerMap<Actor *,PathingData *>::~NiTPointerMap<Actor *,PathingData *>((unsigned int *)this + 8); /*0x6839d0*/
  NiTPointerMap<Actor *,PathingData *>::~NiTPointerMap<Actor *,PathingData *>((unsigned int *)this + 4); /*0x6839dd*/
  BackgroundLoader::~BackgroundLoader(this); /*0x6839ec*/
}
