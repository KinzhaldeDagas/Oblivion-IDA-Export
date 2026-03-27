__int16 __thiscall sub_6ACA70(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this;
  if ( bSoundEnabled_Audio && (v2 = (_DWORD *)*(this + 0xC0), v4 = 0, NiTMap_GetAt(v2, a2, &v4), v4) )
    return *((_WORD *)v4 + 0xE);
  else
    return 0;
}
