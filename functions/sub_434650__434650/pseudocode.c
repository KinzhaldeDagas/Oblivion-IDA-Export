ArchiveFile *__thiscall sub_434650(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  char *v5; // ecx

  v3 = *(this + 9); /*0x434650*/
  if ( v3 ) /*0x434655*/
    return sub_42EBC0(a2, v3, 0xFFFFFFFF, 0); /*0x434661*/
  v5 = (char *)*(this + 8); /*0x43466c*/
  if ( v5 ) /*0x434671*/
    return ArchiveManager_FindFileInBSA(v5, 0xFFFFFFFF, a3); /*0x43467b*/
  else
    return 0; /*0x434686*/
}
