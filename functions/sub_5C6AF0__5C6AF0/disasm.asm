0x5C6AF0: push    0FFFFFFFFh
0x5C6AF2: push    offset SEH_5C6AF0
0x5C6AF7: mov     eax, large fs:0
0x5C6AFD: push    eax
0x5C6AFE: sub     esp, 78h
0x5C6B01: push    ebx
0x5C6B02: push    ebp
0x5C6B03: push    esi
0x5C6B04: push    edi
0x5C6B05: mov     eax, ds:0B30AACh
0x5C6B0A: xor     eax, esp
0x5C6B0C: push    eax
0x5C6B0D: lea     eax, [esp+98h+var_C]
0x5C6B14: mov     large fs:0, eax
0x5C6B1A: mov     edi, ecx
0x5C6B1C: push    offset FaceGenMatrix_Destruct; a5
0x5C6B21: push    offset FaceGenMatrix_Construct; a4
0x5C6B26: push    4; size
0x5C6B28: push    18h; a2
0x5C6B2A: lea     eax, [esp+0A8h+a1]
0x5C6B2E: push    eax; a1
0x5C6B2F: call    ArrayConstructor
0x5C6B34: mov     ecx, ds:0B333C4h
0x5C6B3A: mov     edx, [ecx]
0x5C6B3C: mov     eax, [edx+170h]
0x5C6B42: xor     ebx, ebx
0x5C6B44: mov     [esp+98h+var_4], ebx
0x5C6B4B: call    eax
0x5C6B4D: fldz
0x5C6B4F: push    ecx
0x5C6B50: fstp    [esp+9Ch+a2]; maximumRms
0x5C6B53: mov     ebp, eax
0x5C6B55: mov     esi, [ebp+0E8h]
0x5C6B5B: push    ebx; specialSecondBankMode
0x5C6B5C: lea     ecx, [esp+0A0h+a1]
0x5C6B60: push    ecx; outParameters
0x5C6B61: mov     ecx, ebp; this
0x5C6B63: mov     [esp+0A4h+var_70], ebp
0x5C6B67: call    TESNPC_GetActiveFaceGenDeltaParameters; CORRECTION: chooses inline FaceGen delta by GetAViBase(0x45), NOT sex. Vtable 0xA53DD4+0x128 -> TESNPC_GetAViBase 0x5232D0. Zero vampirism selects NPC+0x108, nonzero selects +0x168. Both are four 0x18-byte matrices. Earlier sex-specific naming was wrong; sex bit at NPC+0x28 is separate.
0x5C6B6C: push    eax; delta
0x5C6B6D: add     esi, 29Ch
0x5C6B73: push    esi; base
0x5C6B74: call    FaceGenHeadParameters_Combine; Four-matrix combine. Normal branch adds base+delta; optional positive maximumRms rescales using sqrt(sumSquares/rows), NOT sqrt(sumSquares/(rows*columns)). Equivalent to coefficient RMS only for columns=1. Special second-bank branch copies base matrices 2/3 rather than adding delta. No claim of malformed multi-column asset impact without callers/asset evidence.
0x5C6B79: mov     edx, [esp+0ACh+arg_0]
0x5C6B80: mov     eax, [edx+34h]
0x5C6B83: add     esp, 14h
0x5C6B86: cmp     eax, ebx
0x5C6B88: mov     [esp+98h+var_7C], eax
0x5C6B8C: jz      loc_5C6E5F
0x5C6B92: jmp     short loc_5C6BA4
0x5C6B94: jmp     short loc_5C6BA0
0x5C6BA0: mov     eax, [esp+98h+var_7C]
0x5C6BA4: mov     esi, [eax+8]
0x5C6BA7: cmp     esi, [esp+98h+arg_4]
0x5C6BAE: jz      loc_5C6E51
0x5C6BB4: mov     eax, ds:0B39000h
0x5C6BB9: push    0FA8h
0x5C6BBE: sub     esp, 8
0x5C6BC1: mov     ecx, esp; this
0x5C6BC3: mov     [esp+0A4h+sliderIndex], esp
0x5C6BC7: push    ebx; a3
0x5C6BC8: push    eax; a2
0x5C6BC9: mov     [ecx], ebx
0x5C6BCB: mov     [ecx+4], bx
0x5C6BCF: mov     [ecx+6], bx
0x5C6BD3: call    BSStringT_Set
0x5C6BD8: mov     ecx, edi
0x5C6BDA: call    RaceSexMenu_GetCategoryTileByName
0x5C6BDF: mov     ecx, [edi+4]
0x5C6BE2: push    0FAEh
0x5C6BE7: mov     ebx, eax
0x5C6BE9: call    Tile_GetFloat
0x5C6BEE: fstp    qword ptr [esp+9Ch+sliderIndex]
0x5C6BF2: mov     ecx, ebx
0x5C6BF4: call    Tile_GetFloat
0x5C6BF9: fcomp   qword ptr [esp+98h+sliderIndex]
0x5C6BFD: mov     ebp, [ebp+0E8h]
0x5C6C03: fnstsw  ax
0x5C6C05: fldz
0x5C6C07: test    ah, 44h
0x5C6C0A: jp      short loc_5C6C29
0x5C6C0C: fcomp   dword ptr [ebp+0A4h]
0x5C6C12: fnstsw  ax
0x5C6C14: test    ah, 5
0x5C6C17: jp      short loc_5C6C21
0x5C6C19: fld     dword ptr [ebp+0A4h]
0x5C6C1F: jmp     short loc_5C6C44
0x5C6C21: fld     dword ptr ds:0A46C30h
0x5C6C27: jmp     short loc_5C6C44
0x5C6C29: fcomp   dword ptr [ebp+0A0h]
0x5C6C2F: fnstsw  ax
0x5C6C31: test    ah, 5
0x5C6C34: jp      short loc_5C6C3E
0x5C6C36: fld     dword ptr [ebp+0A0h]
0x5C6C3C: jmp     short loc_5C6C44
0x5C6C3E: fld     dword ptr ds:0A31E2Ch
0x5C6C44: push    0FB4h
0x5C6C49: fstp    [esp+9Ch+var_80]
0x5C6C4D: mov     ecx, esi
0x5C6C4F: call    Tile_GetFloat
0x5C6C54: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5C6C59: mov     eax, [edi+eax*4+94h]
0x5C6C60: push    0FB6h
0x5C6C65: mov     ecx, eax
0x5C6C67: call    Tile_GetFloat
0x5C6C6C: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5C6C71: test    eax, eax
0x5C6C73: push    0FB4h
0x5C6C78: mov     ecx, esi
0x5C6C7A: jnz     loc_5C6D4D
0x5C6C80: call    Tile_GetFloat
0x5C6C85: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5C6C8A: mov     ebx, [edi+eax*4+94h]
0x5C6C91: push    0FB4h
0x5C6C96: mov     ecx, esi
0x5C6C98: call    Tile_GetFloat
0x5C6C9D: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5C6CA2: mov     ebp, [edi+eax*4+94h]
0x5C6CA9: push    0FB5h
0x5C6CAE: mov     ecx, ebx
0x5C6CB0: call    Tile_GetFloat
0x5C6CB5: fsub    qword ptr ds:0A2F928h
0x5C6CBB: fnstcw  word ptr [esp+98h+var_84]
0x5C6CBF: mov     ecx, ebp
0x5C6CC1: movzx   eax, word ptr [esp+98h+var_84]
0x5C6CC6: or      eax, 0C00h
0x5C6CCB: mov     [esp+98h+sliderIndex], eax
0x5C6CCF: fldcw   word ptr [esp+98h+sliderIndex]
0x5C6CD3: fistp   qword ptr [esp+98h+sliderIndex]
0x5C6CD7: mov     eax, [esp+98h+sliderIndex]
0x5C6CDB: push    eax; sliderIndex
0x5C6CDC: push    0; matrixChannel
0x5C6CDE: fldcw   word ptr [esp+0A0h+var_84]
0x5C6CE2: push    0FB6h
0x5C6CE7: call    Tile_GetFloat
0x5C6CEC: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5C6CF1: push    eax; matrixGroup
0x5C6CF2: lea     ecx, [esp+0A4h+a1]
0x5C6CF6: push    ecx; parameters
0x5C6CF7: call    FaceGenHeadParameters_GetSliderValue; Projects a manual FaceGen slider value by multiplying its authored basis row by the selected parameter matrix (matrix index = matrixChannel + 2*matrixGroup).
0x5C6CFC: fstp    [esp+0A8h+sliderIndex]
0x5C6D00: fld     [esp+0A8h+var_80]
0x5C6D04: add     esp, 0Ch
0x5C6D07: fchs
0x5C6D09: mov     ecx, esi; this
0x5C6D0B: fstp    [esp+9Ch+var_84]
0x5C6D0F: fld     dword ptr ds:0A6D2D8h
0x5C6D15: fstp    [esp+9Ch+a2]; value
0x5C6D18: push    0FB1h; propertyCode
0x5C6D1D: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C6D22: fld     [esp+98h+sliderIndex]
0x5C6D26: fld     [esp+98h+var_84]
0x5C6D2A: fld     st
0x5C6D2C: fsubp   st(2), st
0x5C6D2E: fsubr   [esp+98h+var_80]
0x5C6D32: fdivp   st(1), st
0x5C6D34: fld1
0x5C6D36: fldz
0x5C6D38: fsub    st(1), st
0x5C6D3A: fxch    st(2)
0x5C6D3C: fmulp   st(1), st
0x5C6D3E: faddp   st(1), st
0x5C6D40: fstp    [esp+98h+sliderIndex]
0x5C6D44: fld     [esp+98h+sliderIndex]
0x5C6D48: jmp     loc_5C6E09
0x5C6D4D: call    Tile_GetFloat
0x5C6D52: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5C6D57: mov     ebx, [edi+eax*4+94h]
0x5C6D5E: push    0FB4h
0x5C6D63: mov     ecx, esi
0x5C6D65: call    Tile_GetFloat
0x5C6D6A: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5C6D6F: mov     ebp, [edi+eax*4+94h]
0x5C6D76: push    0FB5h
0x5C6D7B: mov     ecx, ebx
0x5C6D7D: call    Tile_GetFloat
0x5C6D82: fsub    qword ptr ds:0A2F928h
0x5C6D88: fnstcw  word ptr [esp+98h+var_84]
0x5C6D8C: mov     ecx, ebp
0x5C6D8E: movzx   eax, word ptr [esp+98h+var_84]
0x5C6D93: or      eax, 0C00h
0x5C6D98: mov     [esp+98h+sliderIndex], eax
0x5C6D9C: fldcw   word ptr [esp+98h+sliderIndex]
0x5C6DA0: fistp   qword ptr [esp+98h+sliderIndex]
0x5C6DA4: mov     edx, [esp+98h+sliderIndex]
0x5C6DA8: push    edx; sliderIndex
0x5C6DA9: push    0; matrixChannel
0x5C6DAB: fldcw   word ptr [esp+0A0h+var_84]
0x5C6DAF: push    0FB6h
0x5C6DB4: call    Tile_GetFloat
0x5C6DB9: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5C6DBE: push    eax; matrixGroup
0x5C6DBF: lea     eax, [esp+0A4h+a1]
0x5C6DC3: push    eax; parameters
0x5C6DC4: call    FaceGenHeadParameters_GetSliderValue; Projects a manual FaceGen slider value by multiplying its authored basis row by the selected parameter matrix (matrix index = matrixChannel + 2*matrixGroup).
0x5C6DC9: fstp    [esp+0A8h+sliderIndex]
0x5C6DCD: fld     dword ptr ds:0A6D2D8h
0x5C6DD3: add     esp, 0Ch
0x5C6DD6: fstp    [esp+9Ch+a2]; value
0x5C6DD9: push    0FB1h; propertyCode
0x5C6DDE: mov     ecx, esi; this
0x5C6DE0: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C6DE5: fld     [esp+98h+sliderIndex]
0x5C6DE9: fsub    qword ptr ds:0A6D3C8h
0x5C6DEF: fdiv    qword ptr ds:0A46E48h
0x5C6DF5: fld1
0x5C6DF7: fldz
0x5C6DF9: fsub    st(1), st
0x5C6DFB: fxch    st(2)
0x5C6DFD: fmulp   st(1), st
0x5C6DFF: faddp   st(1), st
0x5C6E01: fstp    [esp+98h+sliderIndex]
0x5C6E05: fld     [esp+98h+sliderIndex]
0x5C6E09: push    ecx
0x5C6E0A: fstp    [esp+9Ch+a2]; value
0x5C6E0D: push    0FB1h; propertyCode
0x5C6E12: mov     ecx, esi; this
0x5C6E14: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C6E19: fldz
0x5C6E1B: push    ecx
0x5C6E1C: fstp    [esp+9Ch+a2]; value
0x5C6E1F: push    0FB1h; propertyCode
0x5C6E24: mov     ecx, esi; this
0x5C6E26: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C6E2B: push    0FAEh
0x5C6E30: mov     ecx, esi
0x5C6E32: call    Tile_GetFloat
0x5C6E37: push    ecx
0x5C6E38: fstp    [esp+9Ch+a2]; value
0x5C6E3B: push    0FB8h; propertyCode
0x5C6E40: mov     ecx, esi; this
0x5C6E42: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C6E47: mov     ebp, [esp+98h+var_70]
0x5C6E4B: mov     eax, [esp+98h+var_7C]
0x5C6E4F: xor     ebx, ebx
0x5C6E51: mov     eax, [eax]
0x5C6E53: cmp     eax, ebx
0x5C6E55: mov     [esp+98h+var_7C], eax
0x5C6E59: jnz     loc_5C6BA0
0x5C6E5F: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x5C6E64: push    4; int
0x5C6E66: push    18h; unsigned int
0x5C6E68: lea     ecx, [esp+0A4h+a1]
0x5C6E6C: push    ecx; void *
0x5C6E6D: mov     [esp+0A8h+var_4], 0FFFFFFFFh
0x5C6E78: call    $LN21
0x5C6E7D: mov     ecx, [esp+98h+var_C]
0x5C6E84: mov     large fs:0, ecx
0x5C6E8B: pop     ecx
0x5C6E8C: pop     edi
0x5C6E8D: pop     esi
0x5C6E8E: pop     ebp
0x5C6E8F: pop     ebx
0x5C6E90: add     esp, 84h
0x5C6E96: retn    8
0x9C1460: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9C1465: push    4; int
0x9C1467: push    18h; unsigned int
0x9C1469: lea     eax, [ebp-6Ch]
0x9C146C: push    eax; void *
0x9C146D: call    $LN21
0x9C1472: retn
0x9C1473: mov     edx, [esp+arg_4]
0x9C1477: lea     eax, [edx-88h]
0x9C147D: mov     ecx, [edx-8Ch]
0x9C1483: xor     ecx, eax
0x9C1485: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C148A: mov     eax, offset stru_AEA504
0x9C148F: jmp     ___CxxFrameHandler3
