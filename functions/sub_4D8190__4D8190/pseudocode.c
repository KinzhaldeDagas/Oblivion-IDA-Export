void __thiscall sub_4D8190(_DWORD *this, char a2)
{
  _DWORD *v2; // ebp
  ExtraDataList *v3; // ecx
  BSExtraDataVtbl *v4; // eax
  BSExtraDataVtbl *v5; // esi
  void (__thiscall *Destructor)(BSExtraData *); // eax
  _DWORD *ShadowSceneNode; // eax
  void (__thiscall *v8)(BSExtraData *); // edi
  int v9; // [esp-8h] [ebp-14h]

  v2 = this + 0x11;
  v3 = (ExtraDataList *)(this + 0x11);
  if ( a2 )
    v4 = sub_41E670(v3);
  else
    v4 = sub_41E650(v3);
  v5 = v4;
  if ( v4 )
  {
    Destructor = v4->Destructor;
    if ( v5->Destructor )
    {
      v9 = (int)Destructor;
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
      sub_7C7DC0(ShadowSceneNode, v9);
      v8 = v5->Destructor;
      if ( v5->Destructor )
      {
        if ( !InterlockedDecrement((volatile LONG *)v8 + 1) )
        {
          if ( v8 )
            (**(void (__thiscall ***)(void (__thiscall *)(BSExtraData *), int))v8)(v8, 1);
        }
        v5->Destructor = 0;
      }
    }
    if ( a2 )
      sub_41F5C0(v2);
    else
      sub_41F5B0(v2);
  }
}
