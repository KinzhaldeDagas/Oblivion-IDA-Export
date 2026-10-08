FutBinaryFileC *__thiscall sub_6F6110(FutBinaryFileC *this, OB_stString28_010201A0 source)
{
  bool v3; // cf
  OB_stString28_010201A0 v5; // [esp-1Ch] [ebp-38h] BYREF
  OB_stString28_010201A0 *v6; // [esp+Ch] [ebp-10h]
  int v7; // [esp+18h] [ebp-4h]

  v6 = &v5; /*0x6f613a*/
  v5.capacity = 0xF; /*0x6f6147*/
  v5.size = 0; /*0x6f614e*/
  v7 = 0; /*0x6f6152*/
  v5.storage.inlineData[0] = 0; /*0x6f6156*/
  OB_stString28_AssignSubstring_010201A0(&v5, &source, 0, 0xFFFFFFFF); /*0x6f6159*/
  FutBinaryFileC::FutBinaryFileC(this, v5); /*0x6f6160*/
  v3 = source.capacity < 0x10; /*0x6f6165*/
  *(_DWORD *)this = &BSFaceGenBinaryFile::`vftable'; /*0x6f616a*/
  *((_DWORD *)this + 0x10) = 0; /*0x6f6170*/
  if ( !v3 ) /*0x6f6173*/
    FormHeapFree((unsigned int)source.storage.heapData); /*0x6f617a*/
  return this; /*0x6f6184*/
}
