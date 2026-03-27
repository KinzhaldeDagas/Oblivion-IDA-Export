NiRenderTargetGroup *__thiscall sub_70BA00(NiRenderTargetGroup *this, int *a2)
{
  int *v2; // ebx
  NiRenderTargetGroup *result; // eax
  unsigned int i; // edi
  int v6; // ecx

  v2 = a2;
  sub_707AB0(this, (int)a2);
  NiTMap_GetAt((_DWORD *)*v2, (int)this, &a2);
  result = (NiRenderTargetGroup *)((char *)this + 0xBC);
  if ( *((_DWORD *)this + 0x32) )
    result = (NiRenderTargetGroup *)sub_70B4E0(a2, (_DWORD *)this + 0x2F, v2);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x5B); ++i )
  {
    v6 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * i);
    if ( v6 )
      result = (NiRenderTargetGroup *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 0x38))(v6, v2);
  }
  return result;
}
