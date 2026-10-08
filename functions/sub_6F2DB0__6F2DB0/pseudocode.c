OB_stString28_010201A0 *__userpurge sub_6F2DB0@<eax>(
        OB_stString28_010201A0 *this@<ecx>,
        int a2@<ebp>,
        OB_stString28_010201A0 *source)
{
  this->capacity = 0xF; /*0x6f2de1*/
  this->size = 0; /*0x6f2de8*/
  this->storage.inlineData[0] = 0; /*0x6f2df0*/
  OB_stString28_AssignSubstring_010201A0(this, source, 0, 0xFFFFFFFF); /*0x6f2df4*/
  *((_DWORD *)this + 7) = source[1].allocatorState; /*0x6f2e0b*/
  sub_6F23C0((_DWORD *)this + 8, a2, (int)&source[1].storage.heapData); /*0x6f2e0e*/
  return this; /*0x6f2e15*/
}
