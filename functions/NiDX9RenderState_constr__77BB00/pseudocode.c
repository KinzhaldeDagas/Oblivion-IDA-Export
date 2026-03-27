NiD3DRenderState *__cdecl NiDX9RenderState_constr(int a1, void *Src, char a3)
{
  NiD3DRenderState *v3; // eax
  NiD3DRenderState *v4; // esi
  unsigned int i; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  NiD3DShaderConstantManager *v10; // eax
  volatile LONG *v11; // edi
  NiD3DShaderConstantManager *v12; // ebx
  size_t v14; // [esp-4h] [ebp-14h]

  v3 = (NiD3DRenderState *)FormHeapAlloc(0x1148u);
  v4 = v3;
  if ( v3 )
  {
    NiD3DRenderState::NiD3DRenderState(v3, a1);
    LODWORD(v14) = 0x130;
    *(_DWORD *)v4 = &NiDX9RenderState::`vftable';
    *((_BYTE *)v4 + 0x1014) = 0;
    memcpy((char *)v4 + 0x1018, Src, v14);
  }
  else
  {
    v4 = 0;
  }
  (*(void (__thiscall **)(NiD3DRenderState *))(*(_DWORD *)v4 + 0x108))(v4);
  for ( i = 0; i < 0x200; i += 8 )
  {
    v6 = dword_B29FB8[i];
    if ( v6 == 0xFFFFFFFF )
      break;
    if ( v6 == 7 )
      dword_B29FBC[i] = a3 != 0;
    v7 = dword_B29FC0[i];
    if ( v7 == 0xFFFFFFFF )
      break;
    if ( v7 == 7 )
      dword_B29FC4[i] = a3 != 0;
    v8 = dword_B29FC8[i];
    if ( v8 == 0xFFFFFFFF )
      break;
    if ( v8 == 7 )
      dword_B29FCC[i] = a3 != 0;
    v9 = dword_B29FD0[i];
    if ( v9 == 0xFFFFFFFF )
      break;
    if ( v9 == 7 )
      dword_B29FD4[i] = a3 != 0;
  }
  if ( a3 )
    *((_DWORD *)v4 + 2) |= 2u;
  v10 = sub_780B30(a1, (int)Src);
  v11 = *((volatile LONG **)v4 + 0x3FC);
  v12 = v10;
  if ( v11 != (volatile LONG *)v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement(v11 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v11)(v11, 1);
    }
    *((_DWORD *)v4 + 0x3FC) = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)v12 + 1);
  }
  return v4;
}
