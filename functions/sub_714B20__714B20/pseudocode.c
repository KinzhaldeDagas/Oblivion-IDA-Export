char __thiscall sub_714B20(NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short> *this)
{
  unsigned int i; // edi
  int v3; // ecx

  (*(void (__thiscall **)(NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short> *))(*(_DWORD *)this + 0x44))(this);
  (*(void (__thiscall **)(NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short> *))(*(_DWORD *)this + 0x38))(this);
  NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short>::NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short>(this);
  sub_713400((unsigned __int16 *)this);
  sub_713520((int)this);
  for ( i = 0; i < *((_DWORD *)this + 0x7E); ++i )
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * i);
    (*(void (__thiscall **)(int, NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short> *))(*(_DWORD *)v3 + 0x28))(
      v3,
      this);
  }
  (*(void (__thiscall **)(NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short> *))(*(_DWORD *)this + 0x4C))(this);
  sub_8BCC50((_DWORD *)this + 0x7B);
  NiTMap_Clear((_DWORD *)this + 0x91);
  return 1;
}
