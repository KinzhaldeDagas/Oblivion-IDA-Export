unsigned int __thiscall sub_4A3B90(_BYTE *this)
{
  TESRegionData_SaveHeader((TESRegionData *)this); /*0x4a3b93*/
  return TESTexture_Save(*((_DWORD *)this + 2), 0x4E4F4349); /*0x4a3ba5*/
}
