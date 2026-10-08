// QueuedFileEntry archive lookup helper. Hashes copied path at +0x20 and stores resolved archive/file entry pointer at +0x24.
char *__thiscall sub_434CB0(char **this, int a2, char a3)
{
  char *result; // eax
  char *v5; // esi
  int v6[2]; // [esp+4h] [ebp-118h] BYREF
  int v7[2]; // [esp+Ch] [ebp-110h] BYREF
  char v8[260]; // [esp+14h] [ebp-108h] BYREF

  result = *(this + 8); /*0x434cc7*/
  if ( result ) /*0x434ccc*/
  {
    v5 = *(this + 8); /*0x434cd7*/
    if ( a3 ) /*0x434cd9*/
    {
      sub_434710(result, v8); /*0x434ce7*/
      v5 = v8; /*0x434cec*/
    }
    HashFilePAth(v5, (int)v6, (int)v7); /*0x434cfb*/
    result = (char *)ArchiveManager_LazyFileLookup(a2, (unsigned int *)v6, (unsigned int *)v7, (unsigned int)v5); /*0x434d13*/
    *(this + 9) = result; /*0x434d1b*/
  }
  return result; /*0x434d1f*/
}
