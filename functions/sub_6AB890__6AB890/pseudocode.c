int __thiscall sub_6AB890(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this;
  if ( bSoundEnabled_Audio )
  {
    v2 = (_DWORD *)*(this + 0xC0);
    v4 = 0;
    NiTMap_GetAt(v2, a2, &v4);
    if ( v4 )
      sub_6B6AC0(v4);
  }
  return 0;
}
