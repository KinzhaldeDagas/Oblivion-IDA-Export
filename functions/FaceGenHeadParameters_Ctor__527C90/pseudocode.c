_DWORD *__thiscall FaceGenHeadParameters_Ctor(_DWORD *this)
{
  int i; // ecx
  int v3; // edi
  int j; // ecx
  int v5; // edi
  int k; // ecx
  int v7; // edi

  ArrayConstructor(this, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  *(this + 0x1D) = &NiTArray<TESModel *>::`vftable';
  *((_WORD *)this + 0x3E) = 0;
  *((_WORD *)this + 0x41) = 1;
  *((_WORD *)this + 0x3F) = 0;
  *((_WORD *)this + 0x40) = 0;
  *(this + 0x1E) = 0;
  *(this + 0x21) = &NiTArray<TESTexture *>::`vftable';
  *((_WORD *)this + 0x46) = 0;
  *((_WORD *)this + 0x49) = 1;
  *((_WORD *)this + 0x47) = 0;
  *((_WORD *)this + 0x48) = 0;
  *(this + 0x22) = 0;
  *(this + 0x25) = &NiTArray<char const *>::`vftable';
  *((_WORD *)this + 0x4E) = 0;
  *((_WORD *)this + 0x51) = 1;
  *((_WORD *)this + 0x4F) = 0;
  *((_WORD *)this + 0x50) = 0;
  *(this + 0x26) = 0;
  *(this + 0x29) = &NiTArray<NiPointer<NiTexture>>::`vftable';
  *((_WORD *)this + 0x56) = 0;
  *((_WORD *)this + 0x59) = 1;
  *((_WORD *)this + 0x57) = 0;
  *((_WORD *)this + 0x58) = 0;
  *(this + 0x2A) = 0;
  *((float *)this + 0x1A) = 0.0;
  *(this + 0x18) = 0;
  *(this + 0x19) = 0;
  *(this + 0x1B) = 0;
  *(this + 0x1C) = 0;
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 0x3F); *(_DWORD *)(*(this + 0x1E) + 4 * v3) = 0 )
    v3 = (unsigned __int16)i++;
  *((_WORD *)this + 0x3F) = 0;
  *((_WORD *)this + 0x40) = 0;
  for ( j = 0; (unsigned __int16)j < *((_WORD *)this + 0x47); *(_DWORD *)(*(this + 0x22) + 4 * v5) = 0 )
    v5 = (unsigned __int16)j++;
  *((_WORD *)this + 0x47) = 0;
  *((_WORD *)this + 0x48) = 0;
  for ( k = 0; (unsigned __int16)k < *((_WORD *)this + 0x4F); *(_DWORD *)(*(this + 0x26) + 4 * v7) = 0 )
    v7 = (unsigned __int16)k++;
  *((_WORD *)this + 0x4F) = 0;
  *((_WORD *)this + 0x50) = 0;
  *((_BYTE *)this + 0xB4) = 0;
  *(this + 0x30) = 0xFFFFFFFF;
  return this;
}
