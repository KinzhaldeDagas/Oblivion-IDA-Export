int __thiscall BSTextureManager_FetchShadowMap(BSTextureManager *this)
{
  int v2; // esi
  UInt32 numItems; // eax
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int *v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v8; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+14h] [ebp-10h] BYREF
  unsigned int v10; // [esp+20h] [ebp-4h]

  v2 = 0;
  v8 = 0;
  numItems = this->shadowMaps.numItems;
  v4 = InterlockedDecrement;
  v10 = 0;
  if ( numItems )
  {
    v5 = sub_7C1740((int **)&this->shadowMaps, &v9);
    LOBYTE(v10) = 1;
    sub_55E2A0(&v8, v5);
    LOBYTE(v10) = 0;
    if ( v9 )
    {
      v6 = (void (__thiscall ***)(_DWORD, int))v9;
      if ( !v4((volatile LONG *)(v9 + 4)) )
        (**v6)(v6, 1);
    }
    sub_7C16B0(&this->unk30.__vftable, &v8);
    v2 = v8;
  }
  v10 = 0xFFFFFFFF;
  if ( v2 )
  {
    if ( !v4((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  return v2;
}
