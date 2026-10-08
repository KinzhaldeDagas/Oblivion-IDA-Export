OB_stString28_010201A0 *__usercall sub_6F8D30@<eax>(
        int a1@<ebp>,
        OB_stString28_010201A0 *a2,
        OB_stString28_010201A0 *source,
        char *Src)
{
  const OB_stString28_010201A0 *v4; // eax
  rsize_t v6; // [esp-4h] [ebp-3Ch]
  OB_stString28_010201A0 v7; // [esp+10h] [ebp-28h] BYREF
  int v8; // [esp+34h] [ebp-4h]

  v7.capacity = 0xF; /*0x6f8d67*/
  v7.size = 0; /*0x6f8d6f*/
  v7.storage.inlineData[0] = 0; /*0x6f8d73*/
  OB_stString28_AssignSubstring_010201A0(&v7, source, 0, 0xFFFFFFFF); /*0x6f8d77*/
  v8 = 0; /*0x6f8d82*/
  LODWORD(v6) = strlen(Src); /*0x6f8d86*/
  v4 = (const OB_stString28_010201A0 *)sub_6F6CA0(&v7.allocatorState, a1, (unsigned int *)Src, v6); /*0x6f8da1*/
  a2->capacity = 0xF; /*0x6f8dad*/
  a2->size = 0; /*0x6f8db4*/
  a2->storage.inlineData[0] = 0; /*0x6f8dba*/
  OB_stString28_AssignSubstring_010201A0(a2, v4, 0, 0xFFFFFFFF); /*0x6f8dbd*/
  if ( v7.capacity >= 0x10 ) /*0x6f8dc7*/
    FormHeapFree((unsigned int)v7.storage.heapData); /*0x6f8dce*/
  return a2; /*0x6f8dd8*/
}
