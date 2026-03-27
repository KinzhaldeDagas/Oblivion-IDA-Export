int __thiscall sub_6AB850(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD **v4; // [esp+0h] [ebp-4h] BYREF

  v4 = (_DWORD **)this;
  if ( bSoundEnabled_Audio )
  {
    v2 = (_DWORD *)*(this + 0xC0);
    v4 = 0;
    NiTMap_GetAt(v2, a2, &v4);
    if ( v4 )
      sub_6B6AA0(v4);
  }
  return 0;
}
