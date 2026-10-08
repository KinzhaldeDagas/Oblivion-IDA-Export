0x410EE0: push    ecx; Fog interior decode: GetFarPlane uses TESObjectCELL::LightingData fogClipDistance (+0x20) for interior mode 1 when available.
0x410EE1: cmp     byte ptr [ecx+0E8h], 0
0x410EE8: jz      short loc_410EF8
0x410EEA: fld     ds:flt_A31BAC
0x410EF0: fstp    [esp+4+var_4]
0x410EF3: fld     [esp+4+var_4]
0x410EF6: pop     ecx
0x410EF7: retn
0x410EF8: call    sub_4E9F40; Fog decode: returns global far-plane/clamp mode flag unk_B3608F; when false, non-water 0x541DD0 paths clamp fogEnd to GetFarPlane.
0x410EFD: test    al, al
0x410EFF: mov     eax, ds:0B333A0h
0x410F04: jz      short loc_410F60; Fog interior decode: non-4E9F40 far-plane path can substitute interior fogClipDistance before applying far-plane scaling.
0x410F06: test    eax, eax
0x410F08: jz      short loc_410F52
0x410F0A: mov     ecx, [eax+34h]
0x410F0D: test    ecx, ecx
0x410F0F: jz      short loc_410F52
0x410F11: mov     eax, [eax+5Ch]
0x410F14: cmp     dword ptr [eax+0DCh], 1
0x410F1B: jnz     short loc_410F52
0x410F1D: call    sub_4C9A60; Fog interior decode: reads LightingData fogClipDistance at lighting+0x20; also feeds GetFarPlane interior far-plane selection.
0x410F22: fstp    [esp+4+var_4]; Fog interior decode: 4E9F40 path reads interior fogClipDistance directly for mode 1.
0x410F25: fldz
0x410F27: fld     [esp+4+var_4]
0x410F2A: fcom    st(1)
0x410F2C: fnstsw  ax
0x410F2E: fstp    st(1)
0x410F30: test    ah, 41h
0x410F33: fld     ds:flt_A31BA8
0x410F39: jnp     short loc_410F48
0x410F3B: fcom    st(1)
0x410F3D: fnstsw  ax
0x410F3F: test    ah, 5
0x410F42: jp      loc_410FE5; Fog interior decode: reject non-positive or over-283840 fogClipDistance before returning default far plane.
0x410F48: fstp    st(1)
0x410F4A: fstp    [esp+4+var_4]
0x410F4D: fld     [esp+4+var_4]
0x410F50: pop     ecx
0x410F51: retn
0x410F52: fld     ds:flt_A31BA8
0x410F58: fstp    [esp+4+var_4]
0x410F5B: fld     [esp+4+var_4]
0x410F5E: pop     ecx
0x410F5F: retn
0x410F60: test    eax, eax
0x410F62: jz      short loc_410FB1
0x410F64: mov     ecx, [eax+34h]
0x410F67: test    ecx, ecx
0x410F69: jz      short loc_410FB1
0x410F6B: mov     edx, [eax+5Ch]
0x410F6E: cmp     dword ptr [edx+0DCh], 1
0x410F75: jnz     short loc_410FB1; Fog interior decode: currentInteriorCell and Sky::unk0DC == 1 gate for fogClipDistance far-plane override.
0x410F77: call    sub_4C9A60; Fog interior decode: reads LightingData fogClipDistance at lighting+0x20; also feeds GetFarPlane interior far-plane selection.
0x410F7C: fstp    [esp+4+var_4]; Fog interior decode: read current cell fogClipDistance via 0x4C9A60.
0x410F7F: fldz
0x410F81: fcomp   [esp+4+var_4]
0x410F84: fnstsw  ax
0x410F86: test    ah, 1
0x410F89: jz      short loc_410FA3
0x410F8B: mov     ecx, offset flt_B03124
0x410F90: call    GameSetting_GetSafeFloatPointer
0x410F95: fld     [esp+4+var_4]
0x410F98: fld     dword ptr [eax]
0x410F9A: fcompp
0x410F9C: fnstsw  ax
0x410F9E: test    ah, 5
0x410FA1: jp      short loc_410FBA; Fog interior decode: when fogClipDistance is positive and within the configured far limit, use it as far-plane input.
0x410FA3: mov     ecx, offset flt_B03124
0x410FA8: call    GameSetting_GetSafeFloatPointer
0x410FAD: fld     dword ptr [eax]
0x410FAF: jmp     short loc_410FB7
0x410FB1: fld     flt_B03124
0x410FB7: fstp    [esp+4+var_4]
0x410FBA: fld     flt_B0312C
0x410FC0: fldz
0x410FC2: fsub    st(1), st
0x410FC4: fld1
0x410FC6: fsubrp  st(1), st
0x410FC8: fdivp   st(1), st
0x410FCA: fld     [esp+4+var_4]
0x410FCD: fld     flt_B0311C
0x410FD3: fld     st
0x410FD5: fsubp   st(2), st
0x410FD7: fxch    st(2)
0x410FD9: fmulp   st(1), st
0x410FDB: faddp   st(1), st
0x410FDD: fstp    [esp+4+var_4]
0x410FE0: fld     [esp+4+var_4]
0x410FE3: pop     ecx
0x410FE4: retn
0x410FE5: fstp    st
0x410FE7: pop     ecx
0x410FE8: retn
