void __thiscall sub_6F47F0(
        OB_stString28_010201A0 *this,
        unsigned int a2,
        OB_stString28_010201A0 a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  char *heapData; // ecx
  unsigned int v9; // eax
  int v10; // edi
  OB_stString28_010201A0 *v11; // ebp
  OB_stString28_010201A0 *v12; // edi
  unsigned int v13; // ebp
  OB_stString28_010201A0 *v14; // ebx
  bool v15; // cc
  _DWORD v16[5]; // [esp+14h] [ebp-14h] BYREF

  heapData = this->storage.heapData; /*0x6f4819*/
  v16[4] = 0; /*0x6f4820*/
  if ( heapData ) /*0x6f4824*/
    v9 = (*((_DWORD *)&this->storage.heapData + 1) - (int)heapData) / 0x2C; /*0x6f483e*/
  else
    v9 = 0; /*0x6f4826*/
  if ( v9 < a2 ) /*0x6f4846*/
  {
    if ( heapData ) /*0x6f484a*/
      v10 = (*((_DWORD *)&this->storage.heapData + 1) - (int)heapData) / 0x2C; /*0x6f4864*/
    else
      v10 = 0; /*0x6f484c*/
    v11 = *((OB_stString28_010201A0 **)&this->storage.heapData + 1); /*0x6f4866*/
    if ( heapData > (char *)v11 ) /*0x6f486b*/
      _invalid_parameter_noinfo(); /*0x6f486d*/
    sub_6F41C0(this, (int)this, v11, a2 - v10, &a3); /*0x6f487e*/
  }
  if ( heapData ) /*0x6f4887*/
  {
    v12 = *((OB_stString28_010201A0 **)&this->storage.heapData + 1); /*0x6f4889*/
    if ( a2 < ((char *)v12 - heapData) / 0x2C ) /*0x6f48a3*/
    {
      if ( heapData > (char *)v12 ) /*0x6f48a7*/
        _invalid_parameter_noinfo(); /*0x6f48a9*/
      v13 = (unsigned int)this->storage.heapData; /*0x6f48ae*/
      if ( v13 > *((_DWORD *)&this->storage.heapData + 1) ) /*0x6f48b4*/
        _invalid_parameter_noinfo(); /*0x6f48b6*/
      v14 = (OB_stString28_010201A0 *)(v13 + 0x2C * a2); /*0x6f48be*/
      v15 = (unsigned int)v14 <= *((_DWORD *)&this->storage.heapData + 1); /*0x6f48c0*/
      v16[1] = v13; /*0x6f48c3*/
      if ( !v15 || (char *)v14 < this->storage.heapData ) /*0x6f48cc*/
        _invalid_parameter_noinfo(); /*0x6f48ce*/
      sub_6F37D0((int *)this, v16, (int)this, v14, (int)this, v12); /*0x6f48de*/
    }
  }
  if ( a5 ) /*0x6f48eb*/
    FormHeapFree(a5); /*0x6f48ee*/
  a5 = 0; /*0x6f48fb*/
  a6 = 0; /*0x6f48ff*/
  a7 = 0; /*0x6f4903*/
  if ( a3.capacity >= 0x10 ) /*0x6f4907*/
    FormHeapFree((unsigned int)a3.storage.heapData); /*0x6f490e*/
}
