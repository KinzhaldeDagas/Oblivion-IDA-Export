void __thiscall sub_4D8150(char *this, char a2)
{
  ExtraDataList *v2; // ecx
  BSExtraDataVtbl *v3; // eax
  void (__thiscall *Destructor)(BSExtraData *); // eax
  _DWORD *ShadowSceneNode; // eax
  int v6; // [esp-4h] [ebp-4h]

  v2 = (ExtraDataList *)(this + 0x44);
  if ( a2 )
    v3 = sub_41E670(v2);
  else
    v3 = sub_41E650(v2);
  if ( v3 )
  {
    Destructor = v3->Destructor;
    if ( Destructor )
    {
      v6 = (int)Destructor;
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
      sub_7C7DC0(ShadowSceneNode, v6);
    }
  }
}
