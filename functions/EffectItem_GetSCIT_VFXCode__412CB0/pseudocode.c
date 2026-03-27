int __thiscall EffectItem_GetSCIT_VFXCode(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 6);
  if ( v1 )
    return *(_DWORD *)(v1 + 0x10);
  else
    return 0;
}
