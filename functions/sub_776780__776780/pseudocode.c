void __thiscall sub_776780(_DWORD *this)
{
  unsigned int v2; // edi
  _DWORD *v3; // edx
  int *v4; // ecx
  int v5; // eax
  bool v6; // zf
  int v7; // eax
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-8h] BYREF
  void *valueOut; // [esp+14h] [ebp-4h] BYREF

  while ( *(this + 3) ) /*0x776789*/
  {
    position = (MEF_U32PointerMapEntry32 *)NiTMapBase_GetFirstNode(this); /*0x776797*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)this, &position, &keyOut, &valueOut); /*0x7767ac*/
    v2 = keyOut; /*0x7767b1*/
    NiTMap_RemoveAt(this, keyOut); /*0x7767b8*/
    v3 = valueOut; /*0x7767bd*/
    *(_DWORD *)(v2 + 0x104) = 0; /*0x7767c1*/
    *(this + (v3[0x1B] >> 5) + 0x10) &= ~(1 << (v3[0x1B] & 0x1F)); /*0x7767dc*/
    FormHeapFree((unsigned int)v3); /*0x7767e0*/
  }
  for ( ; *(this + 7); --*(this + 7) ) /*0x7767ed*/
  {
    v4 = (int *)*(this + 5); /*0x7767f5*/
    v5 = *v4; /*0x7767f8*/
    v6 = *v4 == 0; /*0x7767fa*/
    *(this + 5) = *v4; /*0x7767fc*/
    if ( v6 ) /*0x7767ff*/
      *(this + 6) = 0; /*0x776806*/
    else
      *(_DWORD *)(v5 + 4) = 0; /*0x776801*/
    (*(void (__thiscall **)(_DWORD *, int *))(*(this + 4) + 8))(this + 4, v4); /*0x776811*/
  }
  v7 = *(this + 8); /*0x77681c*/
  if ( v7 ) /*0x776821*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 8))(*(this + 8)); /*0x776829*/
    *(this + 8) = 0; /*0x77682b*/
  }
  *(this + 4) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiLight *>::`vftable'; /*0x776833*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 4)); /*0x776839*/
  *(this + 4) = &NiTListBase<NiTPointerAllocator<unsigned int>,NiLight *>::`vftable'; /*0x77683e*/
  *this = &NiTPointerMap<NiLight *,NiDX9LightManager::LightEntry *>::`vftable'; /*0x776846*/
  NiTMap_Clear(this); /*0x77684c*/
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiLight *,NiDX9LightManager::LightEntry *>::`vftable'; /*0x776853*/
  NiTMap_Clear(this); /*0x776859*/
  FormHeapFree(*(this + 2)); /*0x776862*/
}
