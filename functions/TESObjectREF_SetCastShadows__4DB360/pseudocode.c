int *__thiscall TESObjectREF_SetCastShadows(TESChildCELL *this, bool a2)
{
  int v3; // edi
  unsigned int v4; // edi
  int *result; // eax
  int *v6; // ebp
  _DWORD *ShadowSceneNode; // eax
  int v8; // [esp-8h] [ebp-18h]

  v3 = *((_DWORD *)this + 2); /*0x4db36c*/
  if ( a2 ) /*0x4db36f*/
    v4 = v3 | 0x200; /*0x4db371*/
  else
    v4 = v3 & 0xFFFFFDFF; /*0x4db379*/
  result = (int *)ExtraDataList_GetLight((ExtraDataList *)(this + 0x11)); /*0x4db382*/
  v6 = result; /*0x4db387*/
  if ( result ) /*0x4db38b*/
  {
    if ( !a2 ) /*0x4db38f*/
      sub_7B84E0(); /*0x4db391*/
    v8 = *v6; /*0x4db39a*/
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x4db39d*/
    ShadowSceneNode_SetSourceProjectorMode(ShadowSceneNode, v8, a2); /*0x4db3a7*/
  }
  *((_DWORD *)this + 2) = v4; /*0x4db3ac*/
  return result; /*0x4db3af*/
}
