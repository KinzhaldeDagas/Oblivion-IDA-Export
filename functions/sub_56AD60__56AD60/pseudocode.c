void *__thiscall sub_56AD60(int *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ebx
  signed int i; // edi
  int v10; // eax
  int v11; // esi
  size_t v13; // [esp-4h] [ebp-28h]
  int Src; // [esp+Ch] [ebp-18h] BYREF
  int v15; // [esp+10h] [ebp-14h]
  int v16; // [esp+14h] [ebp-10h]
  _DWORD v17[3]; // [esp+18h] [ebp-Ch]

  v2 = *this; /*0x56ad67*/
  v3 = *(this + 1); /*0x56ad69*/
  v4 = *(this + 2); /*0x56ad6c*/
  Src = v2; /*0x56ad6f*/
  v17[0] = *(this + 3); /*0x56ad76*/
  v5 = *((unsigned __int16 *)this + 4); /*0x56ad7a*/
  v15 = v3; /*0x56ad7e*/
  v6 = *(this + 4); /*0x56ad82*/
  v16 = v4; /*0x56ad85*/
  v7 = *(this + 5); /*0x56ad89*/
  v17[1] = v6; /*0x56ad8e*/
  v17[2] = v7; /*0x56ad92*/
  v8 = sub_56B170(v5); /*0x56ad9b*/
  for ( i = 0; i < v8; ++i ) /*0x56ada4*/
  {
    if ( sub_56B190(*((unsigned __int16 *)this + 4), i) ) /*0x56adac*/
    {
      v10 = v17[i]; /*0x56adb8*/
      if ( v10 ) /*0x56adbe*/
        v17[i] = *(_DWORD *)(v10 + 0xC); /*0x56adc3*/
    }
  }
  if ( (*(_BYTE *)this & 4) != 0 ) /*0x56add1*/
  {
    v11 = *(this + 1); /*0x56add3*/
    if ( v11 ) /*0x56add8*/
      v15 = *(_DWORD *)(v11 + 0xC); /*0x56addd*/
  }
  LODWORD(v13) = 0x18; /*0x56ade1*/
  return TESForm_PutFormRecordChunkData(0x41445443, &Src, v13); /*0x56adf5*/
}
