int *__thiscall TESObjectREF_SetCastShadows(TESChildCELL *this, bool a2)
{
  int v3; // edi
  unsigned int v4; // edi
  int *result; // eax
  int *v6; // ebp
  _DWORD *ShadowSceneNode; // eax
  int v8; // [esp-8h] [ebp-18h]

  v3 = *((_DWORD *)this + 2);
  if ( a2 )
    v4 = v3 | 0x200;
  else
    v4 = v3 & 0xFFFFFDFF;
  result = (int *)sub_41E650((ExtraDataList *)(this + 0x11));
  v6 = result;
  if ( result )
  {
    if ( !a2 )
      sub_7B84E0();
    v8 = *v6;
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
    sub_7C7030(ShadowSceneNode, v8, a2);
  }
  *((_DWORD *)this + 2) = v4;
  return result;
}
