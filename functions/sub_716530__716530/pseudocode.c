char __thiscall sub_716530(NiRenderTargetGroup *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  Ni2DBuffer *v5; // eax
  unsigned int *RenderTargets; // esi
  void *v7; // [esp+8h] [ebp-8h] BYREF
  TESObjectCELL *v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  if ( !sub_731E80(this, (int)a2) )
    return 0;
  v5 = this->members.RenderTargets[3];
  if ( (Ni2DBuffer *)v2[5] != v5 )
    return 0;
  if ( v5 )
  {
    RenderTargets = (unsigned int *)this->members.RenderTargets;
    a2 = (_DWORD *)sub_6A9030(RenderTargets);
    if ( a2 )
    {
      while ( 1 )
      {
        sub_452600((NiTMap_TESCELL *)RenderTargets, (NiTMap_Entry_TESCELL **)&a2, &v7, &v8);
        if ( !(*(int (__thiscall **)(_DWORD *, void *))(*v2 + 0x4C))(v2, v7) )
          break;
        if ( !a2 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
