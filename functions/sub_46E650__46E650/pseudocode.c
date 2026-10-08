void __thiscall sub_46E650(char *this)
{
  char *v1; // esi
  _DWORD *v2; // eax
  int v3; // edx
  size_t v4; // [esp-4h] [ebp-10h]
  _DWORD Src[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = this + 4; /*0x46e654*/
  if ( this != (char *)0xFFFFFFFC ) /*0x46e659*/
  {
    do /*0x46e69a*/
    {
      v2 = *(_DWORD **)v1; /*0x46e660*/
      if ( !*(_DWORD *)v1 ) /*0x46e660*/
        break; /*0x46e664*/
      if ( (*(_DWORD *)(*v2 + 8) & 0x20) == 0 ) /*0x46e671*/
      {
        v3 = v2[1]; /*0x46e673*/
        LODWORD(v4) = 8; /*0x46e679*/
        Src[0] = *(_DWORD *)(*v2 + 0xC); /*0x46e685*/
        Src[1] = v3; /*0x46e689*/
        TESForm_PutFormRecordChunkData(0x4D414E58, Src, v4); /*0x46e68d*/
      }
      v1 = *((char **)v1 + 1); /*0x46e695*/
    }
    while ( v1 ); /*0x46e69a*/
  }
}
