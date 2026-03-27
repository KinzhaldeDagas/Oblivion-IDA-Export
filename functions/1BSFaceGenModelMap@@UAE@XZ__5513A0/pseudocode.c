void __thiscall BSFaceGenModelMap::~BSFaceGenModelMap(BSFaceGenModelMap *this)
{
  DWORD CurrentThreadId; // eax
  _DWORD *v3; // esi

  *(_DWORD *)this = &BSFaceGenModelMap::`vftable';
  EnterCriticalSection(&stru_B39C00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B39C7C;
  v3 = (_DWORD *)((char *)this + 4);
  dword_B39C78 = CurrentThreadId;
  NiTMap_Clear(v3);
  if ( dword_B39C7C-- == 1 )
    dword_B39C78 = 0;
  LeaveCriticalSection(&stru_B39C00);
  *v3 = &BSTCaseInsensitiveStringMap<NiPointer<BSFaceGenModelMap::Entry>>::`vftable';
  NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>::~NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>(v3);
}
