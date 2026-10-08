// Lighting30 vtable +0x28 geometry-state preparation. In render mode 5 it applies NiAlphaProperty test enable bit 0x200, test-function bits 10..12, and reference byte +0x1A; disables alpha blending; uses GREATER/ref 128 for blend-only fallback; then applies native stencil/cull and wireframe/fill properties.
int __thiscall Lighting30Shader_PrepareGeometryRenderState(
        _DWORD **this,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8)
{
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  int v12; // eax
  char v13; // cl
  char v14; // bl
  int v15; // ebp
  void (__stdcall *v16)(int, int, _DWORD); // eax
  void (__stdcall *v17)(int, int, _DWORD); // eax
  void (__stdcall *v18)(int, int, _DWORD); // eax
  int v20; // [esp+Ch] [ebp-18h]

  v9 = a5[6]; /*0x7fb478*/
  v10 = a5[2]; /*0x7fb47e*/
  if ( v9 && (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x54))(v9) == 0xA ) /*0x7fb496*/
    v11 = a5[6]; /*0x7fb498*/
  else
    v11 = 0; /*0x7fb49d*/
  v12 = LODWORD(unk_B42E90); /*0x7fb49f*/
  if ( SLODWORD(unk_B42E90) >= 0x156 && v12 <= 0x15A ) /*0x7fb4b0*/
    goto LABEL_37; /*0x7fb4b0*/
  v13 = 0; /*0x7fb4b6*/
  v14 = 0; /*0x7fb4b8*/
  v15 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x13]; /*0x7fb4bd*/
  if ( !v10 ) /*0x7fb4c3*/
  {
LABEL_25:
    if ( (v12 < 0x14E || v12 > 0x151) && (_WORD)v15 != 5 ) /*0x7fb5d5*/
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 6) + 0x64))(*(this + 6), 0xF, 0, 0); /*0x7fb5e5*/
      (*(void (__stdcall **)(int, _DWORD, _DWORD))(**(this + 6) + 0x64))(0x1B, 0, 0); /*0x7fb5f5*/
      goto LABEL_37; /*0x7fb5f5*/
    }
    if ( (*(_WORD *)(v10 + 0x18) & 0x200) != 0 ) /*0x7fb605*/
      goto LABEL_32; /*0x7fb605*/
    if ( (*(_BYTE *)(v10 + 0x18) & 1) != 0 ) /*0x7fb60b*/
    {
      if ( (_WORD)v15 == 5 ) /*0x7fb615*/
      {
LABEL_32:
        (*(void (__thiscall **)(_DWORD, int))(**(this + 6) + 8))(*(this + 6), v10); /*0x7fb61b*/
        if ( (*(_BYTE *)(v10 + 0x18) & 1) == 0 ) /*0x7fb62a*/
          goto LABEL_37; /*0x7fb62a*/
        (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 6) + 0x64))(*(this + 6), 0x1B, 0, 0); /*0x7fb63a*/
        if ( (*(_WORD *)(v10 + 0x18) & 0x200) != 0 ) /*0x7fb647*/
          goto LABEL_37; /*0x7fb647*/
        (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(this + 6) + 0x64))(*(this + 6), 0xF, 1, 0); /*0x7fb657*/
        (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(this + 6) + 0x64))(*(this + 6), 0x19, 5, 0); /*0x7fb667*/
        v20 = 0x80; /*0x7fb66b*/
LABEL_35:
        v18 = *(void (__stdcall **)(int, int, _DWORD))(**(this + 6) + 0x64); /*0x7fb670*/
        goto LABEL_36; /*0x7fb675*/
      }
    }
    else if ( (_WORD)v15 == 5 ) /*0x7fb6a9*/
    {
      (*(void (__stdcall **)(int, _DWORD, _DWORD))(**(this + 6) + 0x64))(0xF, 0, 0); /*0x7fb6df*/
      goto LABEL_37; /*0x7fb6df*/
    }
    (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(this + 6) + 0x64))(*(this + 6), 0xF, 1, 0); /*0x7fb6b9*/
    (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(this + 6) + 0x64))(*(this + 6), 0x19, 5, 0); /*0x7fb6c9*/
    v20 = 0; /*0x7fb6cd*/
    goto LABEL_35; /*0x7fb6cf*/
  }
  if ( (*(_WORD *)(v10 + 0x18) & 0x200) != 0 && ((*(_DWORD *)(v11 + 0x1C) & 0x800) == 0 || *(float *)(v11 + 0x20) < 1.0) ) /*0x7fb4e8*/
    v14 = 1; /*0x7fb4ea*/
  if ( (*(_BYTE *)(v10 + 0x18) & 1) != 0 && (*(float *)(v11 + 0x20) < 1.0 || (*(_DWORD *)(v11 + 0x1C) & 0x100) != 0) ) /*0x7fb503*/
  {
    v13 = 1; /*0x7fb505*/
  }
  else if ( !v14 ) /*0x7fb50d*/
  {
LABEL_24:
    v12 = LODWORD(unk_B42E90); /*0x7fb5be*/
    goto LABEL_25; /*0x7fb5be*/
  }
  if ( (_WORD)v15 == 5 ) /*0x7fb517*/
    goto LABEL_24; /*0x7fb517*/
  v16 = *(void (__stdcall **)(int, int, _DWORD))(**(this + 6) + 0x64); /*0x7fb524*/
  if ( v13 ) /*0x7fb529*/
  {
    v16(0x1B, 1, 0); /*0x7fb52f*/
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(**(this + 6) + 0x64))( /*0x7fb54b*/
      0x13,
      (*(this + 6))[((*(unsigned __int8 *)(v10 + 0x18) >> 1) & 0xF) + 8],
      0);
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(**(this + 6) + 0x64))( /*0x7fb568*/
      0x14,
      (*(this + 6))[((*(unsigned __int16 *)(v10 + 0x18) >> 5) & 0xF) + 8],
      0);
  }
  else
  {
    v16(0x1B, 0, 0); /*0x7fb56e*/
  }
  v17 = *(void (__stdcall **)(int, int, _DWORD))(**(this + 6) + 0x64); /*0x7fb577*/
  if ( v14 ) /*0x7fb57c*/
  {
    v17(0xF, 1, 0); /*0x7fb582*/
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(**(this + 6) + 0x64))( /*0x7fb59f*/
      0x19,
      (*(this + 6))[((*(unsigned __int16 *)(v10 + 0x18) >> 0xA) & 7) + 0x13],
      0);
    v18 = *(void (__stdcall **)(int, int, _DWORD))(**(this + 6) + 0x64); /*0x7fb5aa*/
    v20 = *(unsigned __int8 *)(v10 + 0x1A); /*0x7fb5af*/
LABEL_36:
    v18(0x18, v20, 0); /*0x7fb678*/
    goto LABEL_37; /*0x7fb67a*/
  }
  v17(0xF, 0, 0); /*0x7fb5b9*/
LABEL_37:
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 6) + 0x20))(*(this + 6), a5[7]); /*0x7fb67d*/
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 6) + 0x24))(*(this + 6), a5[0xA]); /*0x7fb69b*/
  return 0; /*0x7fb69d*/
}
