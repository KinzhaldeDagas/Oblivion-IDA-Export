_DWORD *__thiscall sub_4316E0(_DWORD *this)
{
  *this = &FileFinder::`vftable';
  *(this + 1) = &NiTArray<char const *>::`vftable';
  *((_WORD *)this + 6) = 0;
  *((_WORD *)this + 9) = 1;
  *((_WORD *)this + 7) = 0;
  *((_WORD *)this + 8) = 0;
  *(this + 2) = 0;
  if ( !OBSE_g_FileFinder )
    OBSE_g_FileFinder = (FileFinder *)this;
  NiFile_SetGetNiFileFunc((int (__cdecl *)(int, int, int))sub_431440);
  NiFile_SetCanOpenFileWithModeFunc((int (__cdecl *)(int, int))sub_431370);
  return this;
}
