char *__thiscall sub_434CB0(int **this, int a2, char a3)
{
  char *result; // eax
  int *v5; // esi
  int v6[2]; // [esp+4h] [ebp-118h] BYREF
  int v7[2]; // [esp+Ch] [ebp-110h] BYREF
  char v8[260]; // [esp+14h] [ebp-108h] BYREF

  result = (char *)*(this + 8);
  if ( result )
  {
    v5 = *(this + 8);
    if ( a3 )
    {
      sub_434710(result, v8);
      v5 = (int *)v8;
    }
    HashFilePAth((char *)v5, (int)v6, (int)v7);
    result = (char *)ArchiveManager_LazyFileLookup(a2, (unsigned int *)v6, (unsigned int *)v7, (unsigned int)v5);
    *(this + 9) = (int *)result;
  }
  return result;
}
