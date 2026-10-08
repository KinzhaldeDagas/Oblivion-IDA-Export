char __thiscall sub_714B20(NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short> *this)
{
  unsigned int i; // edi
  int v3; // ecx

  (*(void (__thiscall **)(NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short> *))(*(_DWORD *)this + 0x44))(this); /*0x714b29*/
  (*(void (__thiscall **)(NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short> *))(*(_DWORD *)this + 0x38))(this); /*0x714b32*/
  NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short>::NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short>(this); /*0x714b36*/
  sub_713400((unsigned __int16 *)this); /*0x714b3d*/
  sub_713520((int)this); /*0x714b44*/
  for ( i = 0; i < *((_DWORD *)this + 0x7E); ++i ) /*0x714b4b*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * i); /*0x714b59*/
    (*(void (__thiscall **)(int, NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short> *))(*(_DWORD *)v3 + 0x28))( /*0x714b62*/
      v3,
      this);
  }
  (*(void (__thiscall **)(NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short> *))(*(_DWORD *)this + 0x4C))(this); /*0x714b76*/
  sub_8BCC50((_DWORD *)this + 0x7B); /*0x714b7e*/
  NiTMap_Clear((_DWORD *)this + 0x91); /*0x714b89*/
  return 1; /*0x714b8e*/
}
