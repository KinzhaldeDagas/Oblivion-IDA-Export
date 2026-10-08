OB_stString28_010201A0 *__cdecl sub_6F8430(OB_stString28_010201A0 *a1, OB_stString28_010201A0 *source, _DWORD *a3)
{
  const OB_stString28_010201A0 *v3; // eax
  rsize_t v5; // [esp-4h] [ebp-3Ch]
  OB_stString28_010201A0 v6; // [esp+10h] [ebp-28h] BYREF
  int v7; // [esp+34h] [ebp-4h]

  v6.capacity = 0xF; /*0x6f8467*/
  v6.size = 0; /*0x6f846f*/
  v6.storage.inlineData[0] = 0; /*0x6f8473*/
  OB_stString28_AssignSubstring_010201A0(&v6, source, 0, 0xFFFFFFFF); /*0x6f8477*/
  LODWORD(v5) = 0xFFFFFFFF; /*0x6f8480*/
  v7 = 0; /*0x6f8488*/
  v3 = (const OB_stString28_010201A0 *)sub_6F6AF0(&v6, a3, 0, v5); /*0x6f848c*/
  a1->capacity = 0xF; /*0x6f8498*/
  a1->size = 0; /*0x6f849f*/
  a1->storage.inlineData[0] = 0; /*0x6f84a5*/
  OB_stString28_AssignSubstring_010201A0(a1, v3, 0, 0xFFFFFFFF); /*0x6f84a8*/
  if ( v6.capacity >= 0x10 ) /*0x6f84b2*/
    FormHeapFree((unsigned int)v6.storage.heapData); /*0x6f84b9*/
  return a1; /*0x6f84c3*/
}
