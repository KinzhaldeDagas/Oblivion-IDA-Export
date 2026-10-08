_DWORD *__thiscall sub_4316E0(_DWORD *this)
{
  *this = &FileFinder::`vftable'; /*0x431708*/
  *(this + 1) = &NiTArray<char const *>::`vftable'; /*0x431710*/
  *((_WORD *)this + 6) = 0; /*0x431717*/
  *((_WORD *)this + 9) = 1; /*0x43171b*/
  *((_WORD *)this + 7) = 0; /*0x431721*/
  *((_WORD *)this + 8) = 0; /*0x431725*/
  *(this + 2) = 0; /*0x431729*/
  if ( !MEMORY[0xB33A04] ) /*0x431736*/
    MEMORY[0xB33A04] = (FileFinder *)this; /*0x431738*/
  NiFile_SetGetNiFileFunc((int (__cdecl *)(int, int, int))sub_431440); /*0x431743*/
  NiFile_SetCanOpenFileWithModeFunc((int (__cdecl *)(int, int))sub_431370); /*0x43174d*/
  return this; /*0x431757*/
}
