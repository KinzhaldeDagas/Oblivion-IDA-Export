char __thiscall sub_6C77A0(NiRenderTargetGroup *this, int a2)
{
  int v2; // esi
  char result; // al
  Ni2DBuffer *v5; // ebp
  int v6; // ebx
  Ni2DBuffer *v7; // esi
  int v8; // ecx
  char *v9; // esi
  int v10; // ecx
  void *RenderData; // ecx
  int v12; // edi

  v2 = a2;
  result = sub_700650(this, a2);
  if ( result )
  {
    v5 = 0;
    if ( this->members.RenderTargets[1] )
    {
      v6 = 0;
      do
      {
        v7 = this->members.RenderTargets[3];
        v8 = *(int *)((char *)&v7->__vftable + v6);
        v9 = (char *)v7 + v6;
        if ( v8 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x24))(v8, a2);
        v10 = *((_DWORD *)v9 + 1);
        if ( v10 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x24))(v10, a2);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v6 + this->members.numRenderTargets) + 0x24))(
          *(_DWORD *)(v6 + this->members.numRenderTargets),
          a2);
        v5 = (Ni2DBuffer *)((char *)v5 + 1);
        v6 += 0x10;
      }
      while ( v5 < this->members.RenderTargets[1] );
      v2 = a2;
    }
    RenderData = this->members.RenderData;
    if ( RenderData )
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)RenderData + 0x24))(RenderData, v2);
    v12 = *((_DWORD *)this + 0x19);
    if ( v12 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x24))(v12, v2);
    return 1;
  }
  return result;
}
