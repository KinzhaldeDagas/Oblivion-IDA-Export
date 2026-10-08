int __thiscall EffectItem_GetSchool(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 6); /*0x412f20*/
  if ( v1 ) /*0x412f25*/
    return *(_DWORD *)(v1 + 4); /*0x412f27*/
  else
    return *(_DWORD *)(*(this + 7) + 0x64); /*0x412f2e*/
}
