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

  v2 = a2; /*0x6c77a1*/
  result = sub_700650(this, a2); /*0x6c77a9*/
  if ( result ) /*0x6c77b0*/
  {
    v5 = 0; /*0x6c77b8*/
    if ( this->members.RenderTargets[1] ) /*0x6c77ba*/
    {
      v6 = 0; /*0x6c77c0*/
      do /*0x6c7808*/
      {
        v7 = this->members.RenderTargets[3]; /*0x6c77c2*/
        v8 = *(int *)((char *)&v7->__vftable + v6); /*0x6c77c5*/
        v9 = (char *)v7 + v6; /*0x6c77c8*/
        if ( v8 ) /*0x6c77cc*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x24))(v8, a2); /*0x6c77d8*/
        v10 = *((_DWORD *)v9 + 1); /*0x6c77da*/
        if ( v10 ) /*0x6c77df*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x24))(v10, a2); /*0x6c77eb*/
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v6 + this->members.numRenderTargets) + 0x24))( /*0x6c77fd*/
          *(_DWORD *)(v6 + this->members.numRenderTargets),
          a2);
        v5 = (Ni2DBuffer *)((char *)v5 + 1); /*0x6c77ff*/
        v6 += 0x10; /*0x6c7802*/
      }
      while ( v5 < this->members.RenderTargets[1] ); /*0x6c7808*/
      v2 = a2; /*0x6c780a*/
    }
    RenderData = this->members.RenderData; /*0x6c780f*/
    if ( RenderData ) /*0x6c7815*/
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)RenderData + 0x24))(RenderData, v2); /*0x6c781d*/
    v12 = *((_DWORD *)this + 0x19); /*0x6c781f*/
    if ( v12 ) /*0x6c7824*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x24))(v12, v2); /*0x6c782e*/
    return 1; /*0x6c7831*/
  }
  return result; /*0x6c77b2*/
}
