char __thiscall sub_6F5E50(_DWORD *this, int a2, int a3, int a4)
{
  void (__thiscall ***v5)(_DWORD, int); // ecx
  OB_stString28_010201A0 v7; // [esp-1Ch] [ebp-20h] BYREF

  if ( !*(this + 0x10) ) /*0x6f5e57*/
    return 0; /*0x6f5e57*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, int))(*this + 0x10))(this, a2, 1, a4 * a3) ) /*0x6f5e71*/
  {
    *(_QWORD *)&v7.size = 0xF00000000LL; /*0x6f5e8e*/
    v7.storage.inlineData[0] = 0; /*0x6f5e96*/
    OB_stString28_AssignSubstring_010201A0(&v7, (const OB_stString28_010201A0 *)(this + 1), 0, 0xFFFFFFFF); /*0x6f5e99*/
    sub_6F6BF0( /*0x6f5ea0*/
      1,
      v7.allocatorState,
      (void **)v7.storage.heapData,
      *((int *)&v7.storage.heapData + 1),
      *((int *)&v7.storage.heapData + 2),
      *((int *)&v7.storage.heapData + 3),
      *(size_t *)&v7.size);
    v5 = (void (__thiscall ***)(_DWORD, int))*(this + 0x10); /*0x6f5ea5*/
    if ( v5 ) /*0x6f5ead*/
      (**v5)(v5, 1); /*0x6f5eb5*/
    *(this + 0x10) = 0; /*0x6f5eb7*/
    return 0; /*0x6f5ec1*/
  }
  return 1; /*0x6f5ec0*/
}
