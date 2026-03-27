_DWORD *__thiscall sub_724040(int this, _DWORD *a2, int a3)
{
  unsigned int v4; // eax
  bool v5; // zf
  _DWORD *v6; // ecx
  _DWORD *v7; // ecx
  unsigned __int16 v8; // cx
  int v9; // eax

  v4 = 0;
  v5 = *(_WORD *)(this + 0xB6) == 0;
  *(_DWORD *)(this + 0xE8) = 1;
  if ( !v5 )
  {
    v6 = *(_DWORD **)(this + 0xB0);
    while ( a3 != *v6 )
    {
      ++v4;
      ++v6;
      if ( v4 >= *(unsigned __int16 *)(this + 0xB6) )
        goto LABEL_11;
    }
    if ( v4 < *(unsigned __int16 *)(this + 0xF6) )
    {
      v7 = (_DWORD *)(*(_DWORD *)(this + 0xF0) + 4 * v4);
      v5 = *v7 == 0;
      *v7 = 0;
      if ( !v5 )
        --*(_WORD *)(this + 0xF8);
      v8 = *(_WORD *)(this + 0xF6);
      if ( v4 == v8 - 1 )
        *(_WORD *)(this + 0xF6) = v8 - 1;
    }
  }
LABEL_11:
  NiNode::RemoveObject((_WORD *)this, a2, a3);
  v9 = *(_DWORD *)(this + 0xE0);
  if ( v9 > (int)0xFFFFFFFF
    && (v9 >= *(unsigned __int16 *)(this + 0xB6) || !*(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * v9)) )
  {
    *(_DWORD *)(this + 0xE0) = 0xFFFFFFFF;
  }
  return a2;
}
