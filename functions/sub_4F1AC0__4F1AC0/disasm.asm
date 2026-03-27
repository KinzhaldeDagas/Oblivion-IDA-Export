0x4F1AC0: push    0FFFFFFFFh
0x4F1AC2: push    offset SEH_4F1AC0
0x4F1AC7: mov     eax, large fs:0
0x4F1ACD: push    eax
0x4F1ACE: sub     esp, 1Ch
0x4F1AD1: push    ebx
0x4F1AD2: push    ebp
0x4F1AD3: push    esi
0x4F1AD4: push    edi
0x4F1AD5: mov     eax, ds:0B30AACh
0x4F1ADA: xor     eax, esp
0x4F1ADC: push    eax
0x4F1ADD: lea     eax, [esp+3Ch+var_C]
0x4F1AE1: mov     large fs:0, eax
0x4F1AE7: mov     esi, ecx
0x4F1AE9: mov     [esp+3Ch+var_20], esi
0x4F1AED: mov     ebx, [esp+3Ch+arg_0]
0x4F1AF1: test    ebx, ebx
0x4F1AF3: jz      loc_4F1CFB
0x4F1AF9: mov     eax, [ebx]
0x4F1AFB: mov     edx, [eax+170h]
0x4F1B01: mov     ecx, ebx
0x4F1B03: call    edx
0x4F1B05: test    eax, eax
0x4F1B07: jz      loc_4F1CFB
0x4F1B0D: mov     eax, [ebx]
0x4F1B0F: mov     edx, [eax+170h]
0x4F1B15: mov     ecx, ebx
0x4F1B17: call    edx
0x4F1B19: cmp     byte ptr [eax+4], 29h ; ')'
0x4F1B1D: jnz     loc_4F1CFB
0x4F1B23: cmp     dword ptr [esi+60h], 0
0x4F1B27: jnz     short loc_4F1B5B
0x4F1B29: push    10h; Size
0x4F1B2B: call    FormHeapAlloc
0x4F1B30: add     esp, 4
0x4F1B33: mov     [esp+3Ch+arg_0], eax
0x4F1B37: test    eax, eax
0x4F1B39: mov     [esp+3Ch+var_4], 0
0x4F1B41: jz      short loc_4F1B4E
0x4F1B43: push    25h ; '%'
0x4F1B45: mov     ecx, eax
0x4F1B47: call    sub_4F0DE0
0x4F1B4C: jmp     short loc_4F1B50
0x4F1B4E: xor     eax, eax
0x4F1B50: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x4F1B58: mov     [esi+60h], eax
0x4F1B5B: mov     eax, [ebx]
0x4F1B5D: mov     edx, [eax+170h]
0x4F1B63: mov     ecx, ebx
0x4F1B65: call    edx
0x4F1B67: mov     esi, eax
0x4F1B69: mov     eax, [ebx]
0x4F1B6B: mov     edx, [eax+0ECh]
0x4F1B71: mov     ecx, ebx
0x4F1B73: call    edx
0x4F1B75: fstp    [esp+3Ch+var_14]
0x4F1B79: mov     ecx, esi
0x4F1B7B: call    sub_4A9730
0x4F1B80: fmul    [esp+3Ch+var_14]
0x4F1B84: mov     eax, [ebx]
0x4F1B86: mov     edx, [eax+174h]
0x4F1B8C: mov     ecx, ebx
0x4F1B8E: fstp    [esp+3Ch+arg_0]
0x4F1B92: call    edx
0x4F1B94: fld     dword ptr [eax]
0x4F1B96: fsub    [esp+3Ch+arg_0]
0x4F1B9A: fstp    [esp+3Ch+var_28]
0x4F1B9E: fld     [esp+3Ch+var_28]
0x4F1BA2: fistp   [esp+3Ch+var_24]
0x4F1BA6: mov     eax, [ebx]
0x4F1BA8: mov     edx, [eax+174h]
0x4F1BAE: mov     ecx, ebx
0x4F1BB0: call    edx
0x4F1BB2: fld     dword ptr [eax+4]
0x4F1BB5: fsub    [esp+3Ch+arg_0]
0x4F1BB9: fstp    [esp+3Ch+var_1C]
0x4F1BBD: fld     [esp+3Ch+var_1C]
0x4F1BC1: fistp   [esp+3Ch+var_28]
0x4F1BC5: mov     ebp, [esp+3Ch+var_28]
0x4F1BC9: mov     eax, [ebx]
0x4F1BCB: mov     edx, [eax+174h]
0x4F1BD1: sar     ebp, 0Ch
0x4F1BD4: mov     ecx, ebx
0x4F1BD6: mov     dword ptr [esp+3Ch+var_14], ebp
0x4F1BDA: call    edx
0x4F1BDC: fld     dword ptr [eax]
0x4F1BDE: fadd    [esp+3Ch+arg_0]
0x4F1BE2: fstp    [esp+3Ch+var_1C]
0x4F1BE6: fld     [esp+3Ch+var_1C]
0x4F1BEA: fistp   [esp+3Ch+var_28]
0x4F1BEE: mov     esi, [esp+3Ch+var_28]
0x4F1BF2: mov     eax, [ebx]
0x4F1BF4: mov     edx, [eax+174h]
0x4F1BFA: sar     esi, 0Ch
0x4F1BFD: mov     ecx, ebx
0x4F1BFF: mov     [esp+3Ch+var_18], esi
0x4F1C03: call    edx
0x4F1C05: fld     dword ptr [eax+4]
0x4F1C08: fadd    [esp+3Ch+arg_0]
0x4F1C0C: fstp    [esp+3Ch+var_1C]
0x4F1C10: fld     [esp+3Ch+var_1C]
0x4F1C14: fistp   [esp+3Ch+arg_0]
0x4F1C18: mov     eax, [esp+3Ch+var_24]
0x4F1C1C: mov     ecx, [esp+3Ch+arg_0]
0x4F1C20: sar     eax, 0Ch
0x4F1C23: sar     ecx, 0Ch
0x4F1C26: cmp     eax, esi
0x4F1C28: mov     [esp+3Ch+var_28], ecx
0x4F1C2C: mov     [esp+3Ch+var_24], eax
0x4F1C30: jg      loc_4F1CFB
0x4F1C36: cmp     ebp, ecx
0x4F1C38: jg      loc_4F1CEC
0x4F1C3E: movsx   eax, ax
0x4F1C41: shl     eax, 10h
0x4F1C44: mov     [esp+3Ch+var_1C], eax
0x4F1C48: jmp     short loc_4F1C54
0x4F1C4A: align 10h
0x4F1C50: mov     eax, [esp+3Ch+var_1C]
0x4F1C54: mov     ecx, [esp+3Ch+var_20]
0x4F1C58: mov     ecx, [ecx+60h]
0x4F1C5B: movzx   edi, bp
0x4F1C5E: or      edi, eax
0x4F1C60: lea     eax, [esp+3Ch+arg_0]
0x4F1C64: push    eax
0x4F1C65: push    edi
0x4F1C66: mov     [esp+44h+arg_0], 0
0x4F1C6E: call    NiTMap_GetAt
0x4F1C73: mov     esi, [esp+3Ch+arg_0]
0x4F1C77: test    esi, esi
0x4F1C79: jnz     short loc_4F1CA2
0x4F1C7B: push    8; Size
0x4F1C7D: call    FormHeapAlloc
0x4F1C82: add     esp, 4
0x4F1C85: test    eax, eax
0x4F1C87: jz      short loc_4F1C90
0x4F1C89: mov     [eax], esi
0x4F1C8B: mov     [eax+4], esi
0x4F1C8E: jmp     short loc_4F1C92
0x4F1C90: xor     eax, eax
0x4F1C92: mov     edx, [esp+3Ch+var_20]
0x4F1C96: mov     ecx, [edx+60h]; this
0x4F1C99: push    eax; a3
0x4F1C9A: push    edi; a2
0x4F1C9B: mov     esi, eax
0x4F1C9D: call    NiTMap_SetAt
0x4F1CA2: cmp     dword ptr [esi], 0
0x4F1CA5: jz      short loc_4F1CCD
0x4F1CA7: push    8; Size
0x4F1CA9: call    FormHeapAlloc
0x4F1CAE: add     esp, 4
0x4F1CB1: test    eax, eax
0x4F1CB3: jz      short loc_4F1CC2
0x4F1CB5: mov     ecx, [esi]
0x4F1CB7: mov     [eax], ecx
0x4F1CB9: mov     dword ptr [eax+4], 0
0x4F1CC0: jmp     short loc_4F1CC4
0x4F1CC2: xor     eax, eax
0x4F1CC4: mov     edx, [esi+4]
0x4F1CC7: mov     [eax+4], edx
0x4F1CCA: mov     [esi+4], eax
0x4F1CCD: add     ebp, 1
0x4F1CD0: cmp     ebp, [esp+3Ch+var_28]
0x4F1CD4: mov     [esi], ebx
0x4F1CD6: jle     loc_4F1C50
0x4F1CDC: mov     ecx, [esp+3Ch+var_28]
0x4F1CE0: mov     esi, [esp+3Ch+var_18]
0x4F1CE4: mov     ebp, dword ptr [esp+3Ch+var_14]
0x4F1CE8: mov     eax, [esp+3Ch+var_24]
0x4F1CEC: add     eax, 1
0x4F1CEF: cmp     eax, esi
0x4F1CF1: mov     [esp+3Ch+var_24], eax
0x4F1CF5: jle     loc_4F1C36
0x4F1CFB: mov     ecx, dword ptr [esp+3Ch+var_C]
0x4F1CFF: mov     large fs:0, ecx
0x4F1D06: pop     ecx
0x4F1D07: pop     edi
0x4F1D08: pop     esi
0x4F1D09: pop     ebp
0x4F1D0A: pop     ebx
0x4F1D0B: add     esp, 28h
0x4F1D0E: retn    4
