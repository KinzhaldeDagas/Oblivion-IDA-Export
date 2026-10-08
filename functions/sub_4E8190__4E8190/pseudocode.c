// Verified TESPathGridPoint_ClearRenderNode handles the per-point NiNode* at +0x28: clears/releases child objects, removes the node from its parent when attached, releases the returned parent reference, and nulls the field. This is the corrected interpretation of the former unknown28 field.
void __thiscall TESPathGridPoint_ClearRenderNode(TESPathGridPoint *this)
{
  int renderNode; // eax
  int v3; // ecx
  void (__thiscall ***v4)(_DWORD, int); // edi
  int v5; // [esp+8h] [ebp-4h] BYREF

  renderNode = this->renderNode; /*0x4e8194*/
  if ( renderNode ) /*0x4e8199*/
  {
    NiTObjectArray_ClearAndRelease((void *)(renderNode + 0xAC));// Verified here: clear/release the NiNode child-object array at point->renderNode+0xAC. The next block detaches that renderNode from its parent if present, releases the returned reference, and nulls the point field. /*0x4e81a1*/
    v3 = *(_DWORD *)(this->renderNode + 0x1C); /*0x4e81a9*/
    if ( v3 ) /*0x4e81ae*/
    {
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v3 + 0x88))(v3, &v5, this->renderNode); /*0x4e81be*/
      if ( v5 ) /*0x4e81c6*/
      {
        v4 = (void (__thiscall ***)(_DWORD, int))v5; /*0x4e81c9*/
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x4e81cf*/
          (**v4)(v4, 1); /*0x4e81e5*/
      }
    }
    this->renderNode = 0; /*0x4e81e8*/
  }
}
