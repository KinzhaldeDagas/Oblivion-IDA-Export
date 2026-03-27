int __thiscall sub_7495E0(_DWORD *this, Ni2DBuffer *a2)
{
  Ni2DBuffer *v2; // edi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  NiTMap_Entry_TESCELL *v7; // eax
  UInt32 *p_height; // ebx
  _DWORD *v9; // esi
  int v10; // ecx
  NiTMap_Entry_TESCELL *v12; // [esp+10h] [ebp-Ch] BYREF
  TESObjectCELL *v13; // [esp+14h] [ebp-8h] BYREF
  int v14; // [esp+18h] [ebp-4h] BYREF

  v2 = a2;
  sub_723050((NiRenderTargetGroup *)this, a2);
  NiTMap_GetAt(v2->__vftable, (int)this, &a2);
  v4 = *(this + 0x36);
  v5 = 0;
  if ( v4 )
  {
    v6 = (_DWORD *)*(this + 0x37);
    while ( !*v6 )
    {
      ++v5;
      ++v6;
      if ( v5 >= v4 )
        goto LABEL_5;
    }
    v7 = *(NiTMap_Entry_TESCELL **)(*(this + 0x37) + 4 * v5);
  }
  else
  {
LABEL_5:
    v7 = 0;
  }
  v12 = v7;
  if ( v7 )
  {
    p_height = &a2[0xA].members.height;
    do
    {
      sub_452600((NiTMap_TESCELL *)(this + 0x35), &v12, (void **)&v14, &v13);
      NiTMap_GetAt(v2->__vftable, (int)v13, &a2);
      sub_412D30(p_height, v14, (TESForm *)a2);
    }
    while ( v12 );
  }
  v9 = (_DWORD *)*(this + 0x32);
  while ( v9 )
  {
    v10 = v9[2];
    v9 = (_DWORD *)*v9;
    (*(void (__thiscall **)(int, Ni2DBuffer *))(*(_DWORD *)v10 + 0x38))(v10, v2);
  }
  return (*(int (__thiscall **)(_DWORD, Ni2DBuffer *))(*(_DWORD *)*(this + 0x2D) + 0x38))(*(this + 0x2D), v2);
}
