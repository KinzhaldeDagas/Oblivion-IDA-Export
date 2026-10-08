void __thiscall sub_6F4930(
        OB_stString28_010201A0 *this,
        unsigned int a2,
        OB_stString28_010201A0 a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  char *heapData; // ecx
  unsigned int v10; // eax
  int v11; // edi
  OB_stString28_010201A0 *v12; // ebp
  OB_stString28_010201A0 *v13; // edi
  unsigned int v14; // ebp
  OB_stString28_010201A0 *v15; // ebx
  bool v16; // cc
  _DWORD v17[5]; // [esp+14h] [ebp-14h] BYREF

  heapData = this->storage.heapData; /*0x6f4959*/
  v17[4] = 0; /*0x6f4960*/
  if ( heapData ) /*0x6f4964*/
    v10 = (*((_DWORD *)&this->storage.heapData + 1) - (int)heapData) / 0x30; /*0x6f497e*/
  else
    v10 = 0; /*0x6f4966*/
  if ( v10 < a2 ) /*0x6f4986*/
  {
    if ( heapData ) /*0x6f498a*/
      v11 = (*((_DWORD *)&this->storage.heapData + 1) - (int)heapData) / 0x30; /*0x6f49a4*/
    else
      v11 = 0; /*0x6f498c*/
    v12 = *((OB_stString28_010201A0 **)&this->storage.heapData + 1); /*0x6f49a6*/
    if ( heapData > (char *)v12 ) /*0x6f49ab*/
      _invalid_parameter_noinfo(); /*0x6f49ad*/
    sub_6F44D0(this, (int)this, v12, a2 - v11, &a3); /*0x6f49be*/
  }
  if ( heapData ) /*0x6f49c7*/
  {
    v13 = *((OB_stString28_010201A0 **)&this->storage.heapData + 1); /*0x6f49c9*/
    if ( a2 < ((char *)v13 - heapData) / 0x30 ) /*0x6f49e3*/
    {
      if ( heapData > (char *)v13 ) /*0x6f49e7*/
        _invalid_parameter_noinfo(); /*0x6f49e9*/
      v14 = (unsigned int)this->storage.heapData; /*0x6f49ee*/
      if ( v14 > *((_DWORD *)&this->storage.heapData + 1) ) /*0x6f49f4*/
        _invalid_parameter_noinfo(); /*0x6f49f6*/
      v15 = (OB_stString28_010201A0 *)(0x30 * a2 + v14); /*0x6f4a01*/
      v16 = (unsigned int)v15 <= *((_DWORD *)&this->storage.heapData + 1); /*0x6f4a04*/
      v17[1] = v14; /*0x6f4a07*/
      if ( !v16 || (char *)v15 < this->storage.heapData ) /*0x6f4a10*/
        _invalid_parameter_noinfo(); /*0x6f4a12*/
      sub_6F3830((char **)this, v17, (int)this, v15, (int)this, v13); /*0x6f4a22*/
    }
  }
  if ( a6 ) /*0x6f4a2f*/
    FormHeapFree(a6); /*0x6f4a32*/
  a6 = 0; /*0x6f4a3f*/
  a7 = 0; /*0x6f4a43*/
  a8 = 0; /*0x6f4a47*/
  if ( a3.capacity >= 0x10 ) /*0x6f4a4b*/
    FormHeapFree((unsigned int)a3.storage.heapData); /*0x6f4a52*/
}
