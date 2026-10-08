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

  v3 = (NiD3DRenderState *)FormHeapAlloc(0x1148u); /*0x77bb09*/
  v4 = v3; /*0x77bb16*/
  if ( v3 ) /*0x77bb1d*/
  {
    NiD3DRenderState::NiD3DRenderState(v3, a1); /*0x77bb22*/
    LODWORD(v14) = 0x130; /*0x77bb27*/
    *(_DWORD *)v4 = &NiDX9RenderState::`vftable'; /*0x77bb34*/
    *((_BYTE *)v4 + 0x1014) = 0; /*0x77bb3a*/
    memcpy((char *)v4 + 0x1018, Src, v14); /*0x77bb41*/
  }
  else
  {
    v4 = 0; /*0x77bb4b*/
  }
  (*(void (__thiscall **)(NiD3DRenderState *))(*(_DWORD *)v4 + 0x108))(v4); /*0x77bb57*/
  for ( i = 0; i < 0x200; i += 8 ) /*0x77bb5d*/
  {
    v6 = dword_B29FB8[i]; /*0x77bb60*/
    if ( v6 == 0xFFFFFFFF ) /*0x77bb69*/
      break; /*0x77bb69*/
    if ( v6 == 7 ) /*0x77bb6e*/
      dword_B29FBC[i] = a3 != 0; /*0x77bb77*/
    v7 = dword_B29FC0[i]; /*0x77bb7d*/
    if ( v7 == 0xFFFFFFFF ) /*0x77bb86*/
      break; /*0x77bb86*/
    if ( v7 == 7 ) /*0x77bb8b*/
      dword_B29FC4[i] = a3 != 0; /*0x77bb94*/
    v8 = dword_B29FC8[i]; /*0x77bb9a*/
    if ( v8 == 0xFFFFFFFF ) /*0x77bba3*/
      break; /*0x77bba3*/
    if ( v8 == 7 ) /*0x77bba8*/
      dword_B29FCC[i] = a3 != 0; /*0x77bbb1*/
    v9 = dword_B29FD0[i]; /*0x77bbb7*/
    if ( v9 == 0xFFFFFFFF ) /*0x77bbc0*/
      break; /*0x77bbc0*/
    if ( v9 == 7 ) /*0x77bbc5*/
      dword_B29FD4[i] = a3 != 0; /*0x77bbce*/
  }
  if ( a3 ) /*0x77bbe0*/
    *((_DWORD *)v4 + 2) |= 2u; /*0x77bbe2*/
  v10 = sub_780B30(a1, (int)Src); /*0x77bbe8*/
  v11 = *((volatile LONG **)v4 + 0x3FC); /*0x77bbed*/
  v12 = v10; /*0x77bbf3*/
  if ( v11 != (volatile LONG *)v10 ) /*0x77bbfa*/
  {
    if ( v11 ) /*0x77bbfe*/
    {
      if ( !InterlockedDecrement(v11 + 1) ) /*0x77bc04*/
        (**(void (__thiscall ***)(volatile LONG *, int))v11)(v11, 1); /*0x77bc1a*/
    }
    *((_DWORD *)v4 + 0x3FC) = v12; /*0x77bc1e*/
    if ( v12 ) /*0x77bc24*/
      InterlockedIncrement((volatile LONG *)v12 + 1); /*0x77bc2a*/
  }
  return v4; /*0x77bc30*/
}
