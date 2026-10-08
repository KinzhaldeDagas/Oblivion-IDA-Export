// [Verified] On property destruction, this owner drains its +0x80 NiTPointerList<DECAL_DATA*>; each node stores links at +0/+4 and payload at +8. The destructor removes nodes, releases payload smart pointers through DECAL_DATA_ReleaseOwnedReferences, and frees each 0x4C payload. Normal effect teardown instead removes one node through BSShaderLightingProperty_RemoveDecalData before freeing the payload.
void __thiscall BSShaderLightingProperty::~BSShaderLightingProperty(BSShaderLightingPropertyLayout_t *this)
{
  bool v2; // zf
  void *head; // ecx
  int *v4; // ebp
  _DWORD *v5; // eax

  this->base.vtbl = &BSShaderLightingProperty::`vftable'; /*0x7ee51b*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)this->shadowLightList_6C); /*0x7ee52c*/
  v2 = this->decalDataList_80.numItems == 0;    // [Verified] BSShaderLightingProperty destructor drains the decal list at +0x80 until its item count at +0x8C reaches zero, then destroys the list. /*0x7ee533*/
  *(_DWORD *)&this->shadowLightList_6C[0x10] = 0; /*0x7ee539*/
  if ( !v2 ) /*0x7ee53c*/
  {
    do /*0x7ee583*/
    {
      head = this->decalDataList_80.head; /*0x7ee54a*/
      v4 = *((int **)head + 2); /*0x7ee54d*/
      v5 = *(_DWORD **)head; /*0x7ee550*/
      v2 = *(_DWORD *)head == 0; /*0x7ee552*/
      this->decalDataList_80.head = *(void **)head; /*0x7ee554*/
      if ( v2 ) /*0x7ee557*/
        this->decalDataList_80.tail = 0; /*0x7ee55e*/
      else
        v5[1] = 0; /*0x7ee559*/
      (*((void (__thiscall **)(NiTPointerList_DecalDataLayout_t *, void *))this->decalDataList_80.vftable + 2))( /*0x7ee569*/
        &this->decalDataList_80,
        head);
      --this->decalDataList_80.numItems; /*0x7ee56b*/
      if ( v4 ) /*0x7ee571*/
      {
        DECAL_DATA_ReleaseOwnedReferences(v4); /*0x7ee575*/
        FormHeapFree((unsigned int)v4); /*0x7ee57b*/
      }
    }
    while ( this->decalDataList_80.numItems ); /*0x7ee583*/
  }
  this->decalListRemovalCursor_90 = 0; /*0x7ee591*/
  NiTPointerList<DECAL_DATA *>::~NiTPointerList<DECAL_DATA *>((NiTPointerList__BSImageSpaceShader *)&this->decalDataList_80); /*0x7ee59c*/
  NiTPointerList<ShadowSceneLight *>::~NiTPointerList<ShadowSceneLight *>((NiTPointerList__BSImageSpaceShader *)this->shadowLightList_6C); /*0x7ee5a8*/
  BSShaderProperty::~BSShaderProperty(&this->base); /*0x7ee5b7*/
}
