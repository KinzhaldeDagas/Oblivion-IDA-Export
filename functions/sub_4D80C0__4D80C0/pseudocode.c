void __thiscall sub_4D80C0(_DWORD *this, char a2)
{
  int v3; // eax
  ExtraDataList *v4; // ecx
  BSExtraDataVtbl *v5; // eax
  void (__thiscall *Destructor)(BSExtraData *); // eax
  _DWORD *ShadowSceneNode; // eax
  ShadowSceneLight *v8; // esi
  int v9; // edi
  int v10; // [esp-Ch] [ebp-10h]

  v3 = *(this + 2);
  if ( (v3 & 0x20) == 0 && (v3 & 0x800) == 0 )
  {
    v4 = (ExtraDataList *)(this + 0x11);
    if ( a2 )
      v5 = sub_41E670(v4);
    else
      v5 = sub_41E650(v4);
    if ( v5 )
    {
      Destructor = v5->Destructor;
      if ( Destructor )
      {
        v10 = (int)Destructor;
        ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
        v8 = sub_7C6AE0(ShadowSceneNode, v10, 0);
        v9 = (*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this);
        if ( v9 )
        {
          sub_7D3370((int)v8, 0);
          *((_BYTE *)v8 + 0x120) = 0;
          *((float *)v8 + 0x4A) = *(float *)(v9 + 0x80);
          *((float *)v8 + 0x49) = *(float *)(v9 + 0x84);
        }
      }
    }
  }
}
