// Searches the active BSAnimGroupSequence at ActorAnimData +0xA0 + 4*slot. Walks its NiTextKeyExtraData [time,string] entries and returns the zero-based index of the first case-insensitive string-prefix match; optionally writes that key's time. Returns 0xFFFFFFFF for a missing sequence/prefix, empty prefix, or no match. Observed with prefix "a:l" in combat/player attack selection.
int __userpurge sub_472720@<eax>(_DWORD *this@<ecx>, int a2@<esi>, size_t MaxCount, float *Str2, int a5)
{
  int v5; // eax
  const char *v6; // ebp
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // edi
  const char *v10; // eax
  int v12; // esi
  const char **i; // edi
  size_t v14; // [esp-14h] [ebp-14h]
  int MaxCounta; // [esp+4h] [ebp+4h]
  char *Str2a; // [esp+8h] [ebp+8h]

  if ( Str2 ) /*0x472726*/
    *Str2 = 0.0; /*0x47272a*/
  v5 = *(this + (_DWORD)MaxCount + 0x28); /*0x472730*/
  if ( !v5 ) /*0x47273a*/
    return 0xFFFFFFFF; /*0x47273a*/
  v6 = (const char *)HIDWORD(MaxCount); /*0x472740*/
  if ( !HIDWORD(MaxCount) ) /*0x472746*/
    return 0xFFFFFFFF; /*0x4727cb*/
  v7 = *(_DWORD *)(v5 + 0x20); /*0x47274c*/
  v8 = *(_DWORD *)(v7 + 0xC); /*0x472750*/
  v9 = *(_DWORD *)(v7 + 0x10); /*0x472754*/
  v10 = (const char *)HIDWORD(MaxCount); /*0x472757*/
  Str2a = (char *)v9; /*0x472759*/
  MaxCounta = &v10[strlen(v10)] - v6; /*0x47276b*/
  if ( !MaxCounta ) /*0x47276f*/
    return 0xFFFFFFFF; /*0x472773*/
  HIDWORD(v14) = a2; /*0x47277a*/
  v12 = 0; /*0x47277b*/
  if ( !v8 ) /*0x47277f*/
    return 0xFFFFFFFF; /*0x4727a7*/
  for ( i = (const char **)(v9 + 4); ; i += 2 ) /*0x472781*/
  {
    if ( *i ) /*0x472784*/
    {
      LODWORD(v14) = MaxCounta; /*0x47278e*/
      if ( !_strnicmp(*i, v6, v14) ) /*0x472791*/
        break; /*0x472791*/
    }
    if ( ++v12 >= v8 ) /*0x4727a5*/
      return 0xFFFFFFFF; /*0x4727a5*/
  }
  if ( Str2 ) /*0x4727b7*/
    *Str2 = *(float *)&Str2a[8 * v12]; /*0x4727c0*/
  return v12; /*0x472777*/
}
