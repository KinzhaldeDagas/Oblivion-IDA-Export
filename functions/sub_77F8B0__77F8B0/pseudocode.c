//
// GPU-world state audit 2026-09-30: disabled blend writes only ALPHABLENDENABLE=0; SRCBLEND/DESTBLEND are retained. Disabled alpha test writes only ALPHATESTENABLE=0; ALPHAFUNC/ALPHAREF are retained. Enabled paths resolve selectors through this render-state instance tables (+20 blend, +4C compare). A resident pass must preserve partial-write semantics and any later shader/pass overrides; property flags alone do not prove final draw state.
int __thiscall OB_NiD3DRenderState_ApplyAlphaProperty_010201A0(void *renderState, const void *alphaProperty)
{
  void (__stdcall *v3)(int, int, _DWORD); // edx
  int v5; // [esp+0h] [ebp-8h]

  v3 = *(void (__stdcall **)(int, int, _DWORD))(*(_DWORD *)renderState + 0x64); /*0x77f8be*/
  if ( (*((_BYTE *)alphaProperty + 0x18) & 1) != 0 ) /*0x77f8c3*/
  {
    v3(0x1B, 1, 0); /*0x77f8c9*/
    (*(void (__thiscall **)(void *, int, _DWORD, _DWORD))(*(_DWORD *)renderState + 0x64))( /*0x77f8e4*/
      renderState,
      0x13,
      *((_DWORD *)renderState + ((*((unsigned __int8 *)alphaProperty + 0x18) >> 1) & 0xF) + 8),
      0);
    (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)renderState + 0x64))( /*0x77f900*/
      0x14,
      *((_DWORD *)renderState + ((*((unsigned __int16 *)alphaProperty + 0xC) >> 5) & 0xF) + 8),
      0,
      v5);
  }
  else
  {
    ((void (__stdcall *)(int, _DWORD, _DWORD, int))v3)(0x1B, 0, 0, v5); /*0x77f906*/
  }
  if ( (*((_WORD *)alphaProperty + 0xC) & 0x200) == 0 )// Authoritative NiAlphaProperty application: flag bit 9 gates D3DRS_ALPHATESTENABLE. /*0x77f916*/
    return (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)renderState + 0x64))(renderState, 0xF, 0); /*0x77f95f*/
  (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)renderState + 0x64))(renderState, 0xF, 1); /*0x77f921*/
  (*(void (__thiscall **)(void *, int, _DWORD, _DWORD))(*(_DWORD *)renderState + 0x64))( /*0x77f93d*/
    renderState,
    0x19,
    *((_DWORD *)renderState + ((*((unsigned __int16 *)alphaProperty + 0xC) >> 0xA) & 7) + 0x13),
    0);                                         // Applies D3DRS_ALPHAFUNC from selector bits 10..12. Tree flags 0x12EC select index 4, mapped to D3DCMP_GREATER by NiD3DRenderState construction.
  return (*(int (__thiscall **)(void *, int, _DWORD, _DWORD))(*(_DWORD *)renderState + 0x64))( /*0x77f951*/
           renderState,
           0x18,
           *((unsigned __int8 *)alphaProperty + 0x1A),
           0);                                  // Applies NiAlphaProperty reference byte at +0x1A to D3DRS_ALPHAREF. Tree leaf LOD sync updates this byte dynamically.
}
