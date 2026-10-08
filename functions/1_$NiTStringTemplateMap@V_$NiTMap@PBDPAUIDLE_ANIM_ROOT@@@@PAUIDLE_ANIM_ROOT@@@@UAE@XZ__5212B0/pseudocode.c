void __thiscall NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>::~NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>(
        _DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x5212b3*/
  *this = &NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>::`vftable'; /*0x5212b7*/
  if ( !v2 ) /*0x5212bd*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x5212c2*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x5212cb*/
      while ( v4 ) /*0x5212d0*/
      {
        v5 = v4[1]; /*0x5212d4*/
        v4 = (_DWORD *)*v4; /*0x5212d7*/
        FormHeapFree(v5); /*0x5212da*/
      }
    }
  }
  NiTMap<char const *,IDLE_ANIM_ROOT *>::~NiTMap<char const *,IDLE_ANIM_ROOT *>(this); /*0x5212f3*/
}
