void __thiscall CTreeEngine::~CTreeEngine(CTreeEngine *this)
{
  sub_7A5B70((_DWORD *)this + 0x21);
  if ( *((_DWORD *)this + 0x1E) )
    FormHeapFree(*((_DWORD *)this + 0x1E));
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x1F) = 0;
  *((_DWORD *)this + 0x20) = 0;
  if ( *((_DWORD *)this + 0x19) )
    FormHeapFree(*((_DWORD *)this + 0x19));
  *((_DWORD *)this + 0x19) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  if ( *((_DWORD *)this + 0xF) >= 0x10u )
    FormHeapFree(*((_DWORD *)this + 0xA));
  *((_DWORD *)this + 0xF) = 0xF;
  *((_DWORD *)this + 0xE) = 0;
  *((_BYTE *)this + 0x28) = 0;
  TESTexture::ClearComponentReferences((char *)this + 0x20);
  CBillboardLeaf::~CBillboardLeaf(this);
}
