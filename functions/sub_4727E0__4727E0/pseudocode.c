// Searches the active sequence at ActorAnimData +0xA0 + 4*slot for the first case-insensitive prefix match whose text-key time is >= sequence current time at +0x3C. Optionally writes the matched time and returns tolower(text[prefixLength]); returns 0 when absent. Observed with "m:" and compared with suffix 'l' to choose left/right attacks.
char __userpurge sub_4727E0@<al>(_DWORD *this@<ecx>, int a2@<edi>, size_t MaxCount, float *Str2, int a5)
{
  int v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // ebp
  int v11; // esi
  const char *v12; // edi
  size_t v13; // [esp-14h] [ebp-18h]
  float v14; // [esp+0h] [ebp-4h]

  if ( Str2 ) /*0x4727e7*/
    *Str2 = 0.0; /*0x4727eb*/
  if ( !*(this + (_DWORD)MaxCount + 0x28) || !HIDWORD(MaxCount) ) /*0x472805*/
    return 0; /*0x4728b7*/
  v5 = *(this + (_DWORD)MaxCount + 0x28); /*0x47280b*/
  v6 = *(float *)(v5 + 0x3C); /*0x472812*/
  v7 = *(_DWORD *)(v5 + 0x20); /*0x472815*/
  v8 = *(_DWORD *)(v7 + 0x10); /*0x47281d*/
  v9 = *(_DWORD *)(v7 + 0xC); /*0x472821*/
  LODWORD(MaxCount) = strlen((const char *)HIDWORD(MaxCount)); /*0x472826*/
  if ( !(_DWORD)MaxCount ) /*0x47283f*/
    return 0; /*0x472842*/
  v11 = 0; /*0x47284a*/
  HIDWORD(v13) = a2; /*0x47284e*/
  if ( !v9 ) /*0x47284f*/
    return 0; /*0x472887*/
  while ( 1 ) /*0x472851*/
  {
    v12 = *(const char **)(v8 + 8 * v11 + 4); /*0x472851*/
    if ( v12 ) /*0x472857*/
    {
      LODWORD(v13) = MaxCount; /*0x472861*/
      if ( !_strnicmp(v12, (const char *)HIDWORD(MaxCount), v13) ) /*0x472864*/
      {
        v14 = v6; /*0x472819*/
        if ( v14 <= (double)*(float *)(v8 + 8 * v11) ) /*0x47287e*/
          break; /*0x47287e*/
      }
    }
    if ( ++v11 >= v9 ) /*0x472885*/
      return 0; /*0x472885*/
  }
  if ( Str2 ) /*0x472897*/
    *Str2 = *(float *)(v8 + 8 * v11); /*0x47289c*/
  return tolower(v12[MaxCount]); /*0x472846*/
}
