int __userpurge MagicCaster_ApplyActiveMagicItem_::UnkCleanup_@<eax>(
        _DWORD *a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31)
{
  unsigned int v31; // eax
  int v32; // eax

  if ( HIBYTE(a6) ) /*0x69ba08*/
  {
    if ( a31 ) /*0x69ba10*/
    {
      LOWORD(v31) = *(_WORD *)(a31 + 0x20); /*0x69ba12*/
      if ( (_WORD)v31 == 0xFFFF ) /*0x69ba1a*/
        v31 = strlen(*(const char **)(a31 + 0x1C)); /*0x69ba1f*/
      else
        v31 = (unsigned __int16)v31; /*0x69ba2f*/
      if ( v31 ) /*0x69ba34*/
      {
        v32 = (*(int (__thiscall **)(int))(*(_DWORD *)(a31 + 0x18) + 0x14))(a31 + 0x18); /*0x69ba43*/
        QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v32, 0, 1); /*0x69ba4c*/
      }
    }
  }
  return MagicCaster_ApplyActiveMagicItem_::ClearCasterState(a1, a2, a3, a4);
}
