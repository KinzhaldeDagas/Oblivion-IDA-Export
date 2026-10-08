void __thiscall BSFaceGenModelMap::~BSFaceGenModelMap(BSFaceGenModelMap *this)
{
  DWORD CurrentThreadId; // eax
  _DWORD *v3; // esi

  *(_DWORD *)this = &BSFaceGenModelMap::`vftable'; /*0x5513c8*/
  EnterCriticalSection(&unk_B39C00); /*0x5513db*/
  CurrentThreadId = GetCurrentThreadId(); /*0x5513e1*/
  ++unk_B39C7C; /*0x5513e7*/
  v3 = (_DWORD *)((char *)this + 4); /*0x5513ee*/
  unk_B39C78 = CurrentThreadId; /*0x5513f3*/
  NiTMap_Clear(v3); /*0x5513f8*/
  if ( unk_B39C7C-- == 1 ) /*0x5513fd*/
    unk_B39C78 = 0; /*0x551406*/
  LeaveCriticalSection(&unk_B39C00); /*0x551415*/
  *v3 = &BSTCaseInsensitiveStringMap<NiPointer<BSFaceGenModelMap::Entry>>::`vftable'; /*0x551425*/
  NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>::~NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>(v3); /*0x55142b*/
}
