NiTMap<char const *,Setting *> *__thiscall NiTMap<char const *,Setting *>::NiTMap<char const *,Setting *>(
        NiTMap<char const *,Setting *> *this,
        unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a2; /*0x4a7e69*/
  *(_DWORD *)this = &NiTMapBase<DFALL<Setting *>,char const *,Setting *>::`vftable'; /*0x4a7e76*/
  *((_DWORD *)this + 3) = 0; /*0x4a7e7c*/
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *((_DWORD *)this + 1); /*0x4a7e94*/
  *((_DWORD *)this + 2) = v3; /*0x4a7e98*/
  _memset(v3, 0, v5); /*0x4a7e9b*/
  *(_DWORD *)this = &NiTMap<char const *,Setting *>::`vftable'; /*0x4a7ea3*/
  return this; /*0x4a7eab*/
}
