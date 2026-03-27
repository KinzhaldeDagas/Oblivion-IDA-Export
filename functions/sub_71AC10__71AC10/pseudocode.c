NiDX9Renderer *__thiscall sub_71AC10(_DWORD *this, _DWORD *a2)
{
  NiDX9Renderer *result; // eax
  unsigned int v4; // esi
  unsigned int v5; // ebp
  _BYTE *v6; // edi
  int v7; // eax
  NiDX9Renderer **v8; // ecx
  unsigned int i; // [esp+Ch] [ebp-8h]
  NiDX9Renderer *v10; // [esp+10h] [ebp-4h]

  result = g_Renderer;
  v4 = a2[1];
  v5 = 0;
  v10 = g_Renderer;
  for ( i = v4; v5 < v4; ++v5 )
  {
    v6 = *(_BYTE **)(*a2 + 4 * v5);
    v7 = *(_DWORD *)(*((_DWORD *)v6 + 0x2B) + 8);
    if ( (*(_BYTE *)(v7 + 0x18) & 1) == 0
      || *((_BYTE *)this + 0x34) && (*(_WORD *)(v7 + 0x18) & 0x2000) != 0
      || (v6[0x18] & 0x40) != 0 )
    {
      result = (NiDX9Renderer *)(*(int (__thiscall **)(_BYTE *, NiDX9Renderer *))(*(_DWORD *)v6 + 0x84))(v6, v10);
    }
    else
    {
      result = (NiDX9Renderer *)(*(int (__thiscall **)(_DWORD *))(*(this + 3) + 4))(this + 3);
      result->member.super.accumulator = (NiAccumulator *)v6;
      result->__vftable = 0;
      result->member.super.super.m_uiRefCount = *(this + 5);
      v8 = (NiDX9Renderer **)*(this + 5);
      if ( v8 )
      {
        *v8 = result;
        ++*(this + 6);
      }
      else
      {
        ++*(this + 6);
        *(this + 4) = result;
      }
      *(this + 5) = result;
      v4 = i;
    }
  }
  return result;
}
