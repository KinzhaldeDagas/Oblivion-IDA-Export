void __thiscall NumericIDBufferMap::~NumericIDBufferMap(NiTMap_Entry_TESCELL *this)
{
  char *v2; // eax
  bool v3; // zf
  TESObjectCELL *data; // edx
  TESObjectCELL *v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  void *valueOut; // [esp+8h] [ebp-1Ch] BYREF
  MEF_U32PointerMapEntry32 *position[2]; // [esp+Ch] [ebp-18h] BYREF
  unsigned int keyOut; // [esp+14h] [ebp-10h] BYREF
  unsigned int v10; // [esp+20h] [ebp-4h]

  position[1] = (MEF_U32PointerMapEntry32 *)this; /*0x45ac56*/
  this->next = &NumericIDBufferMap::`vftable'; /*0x45ac5a*/
  v2 = 0; /*0x45ac60*/
  v3 = this->key == 0; /*0x45ac62*/
  v10 = 0; /*0x45ac65*/
  if ( v3 ) /*0x45ac6d*/
  {
LABEL_5:
    v6 = 0; /*0x45ac84*/
  }
  else
  {
    data = this->data; /*0x45ac6f*/
    v5 = data; /*0x45ac72*/
    while ( !v5->vtbl ) /*0x45ac77*/
    {
      ++v2; /*0x45ac79*/
      v5 = (TESObjectCELL *)((char *)v5 + 4); /*0x45ac7c*/
      if ( v2 >= this->key ) /*0x45ac82*/
        goto LABEL_5; /*0x45ac82*/
    }
    v6 = *((MEF_U32PointerMapEntry32 **)&data->vtbl + (_DWORD)v2); /*0x45acef*/
  }
  position[0] = v6; /*0x45ac88*/
  while ( position[0] ) /*0x45ac8c*/
  {
    valueOut = 0; /*0x45aca1*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)this, position, &keyOut, &valueOut); /*0x45aca9*/
    if ( valueOut ) /*0x45acb4*/
      MemoryHeap_Free_checked(valueOut); /*0x45acbc*/
  }
  NiTMap_Clear(this); /*0x45acca*/
  v10 = 0xFFFFFFFF; /*0x45acd1*/
  NiTPointerMap<unsigned int,void *>::~NiTPointerMap<unsigned int,void *>((unsigned int *)this); /*0x45acd9*/
}
