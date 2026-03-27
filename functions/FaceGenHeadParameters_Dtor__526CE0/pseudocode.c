void __thiscall FaceGenHeadParameters_Dtor(unsigned int *this)
{
  int *v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // [esp-Ch] [ebp-28h]
  unsigned int v5; // [esp-8h] [ebp-24h]
  unsigned int v6; // [esp-4h] [ebp-20h]

  v2 = (int *)*(this + 0x2A);
  *(this + 0x29) = (unsigned int)&NiTArray<NiPointer<NiTexture>>::`vftable';
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 4u, v2[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v3);
  }
  v6 = *(this + 0x26);
  *(this + 0x25) = (unsigned int)&NiTArray<char const *>::`vftable';
  FormHeapFree(v6);
  v5 = *(this + 0x22);
  *(this + 0x21) = (unsigned int)&NiTArray<TESTexture *>::`vftable';
  FormHeapFree(v5);
  v4 = *(this + 0x1E);
  *(this + 0x1D) = (unsigned int)&NiTArray<TESModel *>::`vftable';
  FormHeapFree(v4);
  _LN21(this, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
}
