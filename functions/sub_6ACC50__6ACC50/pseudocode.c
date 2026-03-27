char __thiscall sub_6ACC50(int *this, int a2, float a3, float a4)
{
  _DWORD *v4; // ecx
  char result; // al
  int *v6; // [esp+Ch] [ebp-4h] BYREF

  v6 = this;
  if ( bSoundEnabled_Audio )
  {
    v4 = (_DWORD *)*(this + 0xC0);
    v6 = 0;
    result = NiTMap_GetAt(v4, a2, &v6);
    if ( v6 )
      return sub_6B6D40(v6, a3, a4, 0);
  }
  return result;
}
