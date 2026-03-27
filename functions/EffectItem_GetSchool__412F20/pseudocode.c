int __thiscall EffectItem_GetSchool(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 6);
  if ( v1 )
    return *(_DWORD *)(v1 + 4);
  else
    return *(_DWORD *)(*(this + 7) + 0x64);
}
