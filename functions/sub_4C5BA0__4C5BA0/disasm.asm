0x4C5BA0: push    0FFFFFFFFh
0x4C5BA2: push    offset SEH_4C5BA0
0x4C5BA7: mov     eax, large fs:0
0x4C5BAD: push    eax
0x4C5BAE: sub     esp, 0D0h
0x4C5BB4: push    ebx
0x4C5BB5: push    ebp
0x4C5BB6: push    esi
0x4C5BB7: push    edi
0x4C5BB8: mov     eax, ds:0B30AACh
0x4C5BBD: xor     eax, esp
0x4C5BBF: push    eax
0x4C5BC0: lea     eax, [esp+0F0h+var_C]
0x4C5BC7: mov     large fs:0, eax
0x4C5BCD: mov     ebx, ecx
0x4C5BCF: mov     eax, [ebx+24h]
0x4C5BD2: xor     esi, esi
0x4C5BD4: test    eax, eax
0x4C5BD6: jz      loc_4C6150
0x4C5BDC: cmp     [eax+4], esi
0x4C5BDF: jz      loc_4C6150
0x4C5BE5: mov     ecx, [ebx+20h]; this
0x4C5BE8: call    TESObjectCELL_GetNiNode?
0x4C5BED: mov     edx, eax
0x4C5BEF: test    edx, edx
0x4C5BF1: mov     [esp+0F0h+var_B0], edx
0x4C5BF5: jz      loc_4C6150
0x4C5BFB: mov     eax, [ebx+24h]
0x4C5BFE: mov     ecx, [eax+14h]
0x4C5C01: test    ecx, ecx
0x4C5C03: jz      short loc_4C5C6B
0x4C5C05: mov     edi, [edx]
0x4C5C07: mov     eax, ecx
0x4C5C09: push    eax
0x4C5C0A: lea     eax, [esp+0F4h+var_C8]
0x4C5C0E: mov     ecx, edx
0x4C5C10: mov     edx, [edi+88h]
0x4C5C16: push    eax
0x4C5C17: call    edx
0x4C5C19: mov     eax, [esp+0F0h+var_C8]
0x4C5C1D: test    eax, eax
0x4C5C1F: jz      short loc_4C5C3F
0x4C5C21: mov     edi, eax
0x4C5C23: add     eax, 4
0x4C5C26: push    eax; lpAddend
0x4C5C27: call    dword ptr ds:0A2807Ch
0x4C5C2D: test    eax, eax
0x4C5C2F: jnz     short loc_4C5C3F
0x4C5C31: test    edi, edi
0x4C5C33: jz      short loc_4C5C3F
0x4C5C35: mov     eax, [edi]
0x4C5C37: mov     edx, [eax]
0x4C5C39: push    1
0x4C5C3B: mov     ecx, edi
0x4C5C3D: call    edx
0x4C5C3F: mov     edi, [ebx+24h]
0x4C5C42: mov     ebp, [edi+14h]
0x4C5C45: add     edi, 14h
0x4C5C48: test    ebp, ebp
0x4C5C4A: jz      short loc_4C5C6B
0x4C5C4C: lea     eax, [ebp+4]
0x4C5C4F: push    eax; lpAddend
0x4C5C50: call    dword ptr ds:0A2807Ch
0x4C5C56: test    eax, eax
0x4C5C58: jnz     short loc_4C5C69
0x4C5C5A: test    ebp, ebp
0x4C5C5C: jz      short loc_4C5C69
0x4C5C5E: mov     edx, [ebp+0]
0x4C5C61: mov     eax, [edx]
0x4C5C63: push    1
0x4C5C65: mov     ecx, ebp
0x4C5C67: call    eax
0x4C5C69: mov     [edi], esi
0x4C5C6B: cmp     [esp+0F0h+arg_0], 0
0x4C5C73: jz      loc_4C6150
0x4C5C79: push    600h; Size
0x4C5C7E: call    FormHeapAlloc
0x4C5C83: push    800h; Size
0x4C5C88: mov     [esp+0F8h+var_C8], eax
0x4C5C8C: call    FormHeapAlloc
0x4C5C91: mov     edi, eax
0x4C5C93: add     esp, 8
0x4C5C96: mov     [esp+0F0h+var_DC], edi
0x4C5C9A: xor     ebp, ebp
0x4C5C9C: cmp     edi, ebp
0x4C5C9E: mov     [esp+0F0h+var_4], ebp
0x4C5CA5: jz      short loc_4C5CBF
0x4C5CA7: push    offset sub_47EA50
0x4C5CAC: push    80h ; '€'
0x4C5CB1: push    10h
0x4C5CB3: push    edi
0x4C5CB4: call    sub_401080
0x4C5CB9: mov     [esp+0F0h+var_CC], edi
0x4C5CBD: jmp     short loc_4C5CC3
0x4C5CBF: mov     [esp+0F0h+var_CC], ebp
0x4C5CC3: push    80h ; '€'; Size
0x4C5CC8: mov     [esp+0F4h+var_4], 0FFFFFFFFh
0x4C5CD3: call    FormHeapAlloc
0x4C5CD8: add     esp, 4
0x4C5CDB: mov     ecx, ebx
0x4C5CDD: mov     [esp+0F0h+var_C4], eax
0x4C5CE1: call    sub_4BF060
0x4C5CE6: fstp    [esp+0F0h+var_B4]
0x4C5CEA: mov     ecx, ebx
0x4C5CEC: call    sub_4BF0A0
0x4C5CF1: fstp    [esp+0F0h+var_C0]
0x4C5CF5: fld     [esp+0F0h+var_B4]
0x4C5CF9: mov     [esp+0F0h+var_BC], ebp
0x4C5CFD: fst     [esp+0F0h+var_AC]
0x4C5D01: fld     [esp+0F0h+var_C0]
0x4C5D05: fst     [esp+0F0h+var_A8]
0x4C5D09: fldz
0x4C5D0B: fstp    [esp+0F0h+var_A4]
0x4C5D0F: fld     qword ptr ds:0A3DDD8h
0x4C5D15: fld1
0x4C5D17: fld     qword ptr ds:0A3F428h
0x4C5D1D: fldz
0x4C5D1F: xor     edi, edi
0x4C5D21: mov     [esp+0F0h+var_D8], edi
0x4C5D25: test    ebp, ebp
0x4C5D27: jz      short loc_4C5D3B
0x4C5D29: test    edi, edi
0x4C5D2B: jz      short loc_4C5D3F
0x4C5D2D: cmp     ebp, 20h ; ' '
0x4C5D30: jz      short loc_4C5D3B
0x4C5D32: cmp     edi, 20h ; ' '
0x4C5D35: jnz     loc_4C5F6B
0x4C5D3B: test    edi, edi
0x4C5D3D: jnz     short loc_4C5D43
0x4C5D3F: mov     esi, ebp
0x4C5D41: jmp     short loc_4C5D66
0x4C5D43: cmp     ebp, 20h ; ' '
0x4C5D46: jnz     short loc_4C5D4D
0x4C5D48: lea     esi, [edi+20h]
0x4C5D4B: jmp     short loc_4C5D66
0x4C5D4D: cmp     edi, 20h ; ' '
0x4C5D50: jnz     short loc_4C5D5B
0x4C5D52: mov     esi, 60h ; '`'
0x4C5D57: sub     esi, ebp
0x4C5D59: jmp     short loc_4C5D66
0x4C5D5B: test    ebp, ebp
0x4C5D5D: jnz     short loc_4C5D66
0x4C5D5F: mov     esi, 80h ; '€'
0x4C5D64: sub     esi, edi
0x4C5D66: mov     ecx, esi
0x4C5D68: and     ecx, 80000001h
0x4C5D6E: jns     short loc_4C5D75
0x4C5D70: dec     ecx
0x4C5D71: or      ecx, 0FFFFFFFEh
0x4C5D74: inc     ecx
0x4C5D75: mov     eax, esi
0x4C5D77: jz      short loc_4C5DE7
0x4C5D79: fild    dword ptr ds:0B08B74h
0x4C5D7F: shl     eax, 4
0x4C5D82: add     eax, [esp+0F0h+var_CC]
0x4C5D86: fdiv    st, st(4)
0x4C5D88: fstp    [esp+0F0h+var_D4]
0x4C5D8C: fild    dword ptr ds:0B08B7Ch
0x4C5D92: fdiv    st, st(4)
0x4C5D94: fstp    [esp+0F0h+var_D0]
0x4C5D98: fild    dword ptr ds:0B08B84h
0x4C5D9E: fdivrp  st(4), st
0x4C5DA0: fxch    st(3)
0x4C5DA2: fstp    [esp+0F0h+var_DC]
0x4C5DA6: fld     [esp+0F0h+var_D4]
0x4C5DAA: fstp    [esp+0F0h+var_78]
0x4C5DAE: fld     [esp+0F0h+var_D0]
0x4C5DB2: mov     edx, [esp+0F0h+var_78]
0x4C5DB6: fstp    [esp+0F0h+var_74]
0x4C5DBA: fld     [esp+0F0h+var_DC]
0x4C5DBE: mov     [eax], edx
0x4C5DC0: mov     ecx, [esp+0F0h+var_74]
0x4C5DC4: fstp    [esp+0F0h+var_70]
0x4C5DCB: fxch    st(1)
0x4C5DCD: mov     [eax+4], ecx
0x4C5DD0: mov     edx, [esp+0F0h+var_70]
0x4C5DD7: fstp    [esp+0F0h+var_6C]
0x4C5DDE: mov     ecx, [esp+0F0h+var_6C]
0x4C5DE5: jmp     short loc_4C5E47
0x4C5DE7: fild    dword ptr ds:0B08B8Ch
0x4C5DED: shl     eax, 4
0x4C5DF0: add     eax, [esp+0F0h+var_CC]
0x4C5DF4: fdiv    st, st(4)
0x4C5DF6: fstp    [esp+0F0h+var_DC]
0x4C5DFA: fild    dword ptr ds:0B08B94h
0x4C5E00: fdiv    st, st(4)
0x4C5E02: fstp    [esp+0F0h+var_D0]
0x4C5E06: fild    dword ptr ds:0B08B9Ch
0x4C5E0C: fdivrp  st(4), st
0x4C5E0E: fxch    st(3)
0x4C5E10: fstp    [esp+0F0h+var_D4]
0x4C5E14: fld     [esp+0F0h+var_DC]
0x4C5E18: fstp    [esp+0F0h+var_A0]
0x4C5E1C: fld     [esp+0F0h+var_D0]
0x4C5E20: mov     edx, [esp+0F0h+var_A0]
0x4C5E24: fstp    [esp+0F0h+var_9C]
0x4C5E28: fld     [esp+0F0h+var_D4]
0x4C5E2C: mov     [eax], edx
0x4C5E2E: mov     ecx, [esp+0F0h+var_9C]
0x4C5E32: fstp    [esp+0F0h+var_98]
0x4C5E36: fxch    st(1)
0x4C5E38: mov     [eax+4], ecx
0x4C5E3B: mov     edx, [esp+0F0h+var_98]
0x4C5E3F: fstp    [esp+0F0h+var_94]
0x4C5E43: mov     ecx, [esp+0F0h+var_94]
0x4C5E47: fild    [esp+0F0h+var_BC]
0x4C5E4B: mov     [eax+8], edx
0x4C5E4E: mov     edx, [esp+0F0h+var_C4]
0x4C5E52: mov     [eax+0Ch], ecx
0x4C5E55: fmul    st, st(1)
0x4C5E57: push    0
0x4C5E59: lea     eax, [esp+0F4h+var_90]
0x4C5E5D: push    eax
0x4C5E5E: fstp    [esp+0F8h+var_68]
0x4C5E65: lea     ecx, [esp+0F8h+var_5C]
0x4C5E6C: push    ecx
0x4C5E6D: fimul   [esp+0FCh+var_D8]
0x4C5E71: mov     ecx, ebx
0x4C5E73: mov     byte ptr [edx+esi], 1
0x4C5E77: fstp    [esp+0FCh+var_64]
0x4C5E7E: fld     [esp+0FCh+var_68]
0x4C5E85: faddp   st(3), st
0x4C5E87: fxch    st(2)
0x4C5E89: fstp    [esp+0FCh+var_D4]
0x4C5E8D: fadd    [esp+0FCh+var_64]
0x4C5E94: fstp    [esp+0FCh+var_D8]
0x4C5E98: fadd    st, st
0x4C5E9A: fstp    [esp+0FCh+var_DC]
0x4C5E9E: fld     [esp+0FCh+var_D4]
0x4C5EA2: fstp    [esp+0FCh+var_90]
0x4C5EA6: fld     [esp+0FCh+var_D8]
0x4C5EAA: fstp    [esp+0FCh+var_8C]
0x4C5EAE: fld     [esp+0FCh+var_DC]
0x4C5EB2: fstp    [esp+0FCh+var_88]
0x4C5EB6: call    sub_4C3030
0x4C5EBB: test    al, al
0x4C5EBD: jnz     short loc_4C5ECB
0x4C5EBF: fld     dword ptr ds:0A37448h
0x4C5EC5: fstp    [esp+0F0h+var_B8]
0x4C5EC9: jmp     short loc_4C5EDF
0x4C5ECB: lea     edx, [esp+0F0h+var_B8]
0x4C5ECF: push    edx
0x4C5ED0: lea     eax, [esp+0F4h+var_5C]
0x4C5ED7: push    eax
0x4C5ED8: mov     ecx, ebx
0x4C5EDA: call    sub_4C44C0
0x4C5EDF: fld     [esp+0F0h+var_B8]
0x4C5EE3: mov     edx, [esp+0F0h+var_C8]
0x4C5EE7: fadd    qword ptr ds:0A3F3F0h
0x4C5EED: lea     ecx, [esi+esi*2]
0x4C5EF0: lea     eax, [edx+ecx*4]
0x4C5EF3: fstp    [esp+0F0h+var_88]
0x4C5EF7: fld     [esp+0F0h+var_D4]
0x4C5EFB: fld     [esp+0F0h+var_B4]
0x4C5EFF: fld     st
0x4C5F01: fsubp   st(2), st
0x4C5F03: fxch    st(1)
0x4C5F05: fstp    [esp+0F0h+var_DC]
0x4C5F09: fld     [esp+0F0h+var_D8]
0x4C5F0D: fld     [esp+0F0h+var_C0]
0x4C5F11: fld     st
0x4C5F13: fsubp   st(2), st
0x4C5F15: fxch    st(1)
0x4C5F17: fstp    [esp+0F0h+var_D0]
0x4C5F1B: fld     [esp+0F0h+var_88]
0x4C5F1F: fldz
0x4C5F21: fsub    st(1), st
0x4C5F23: fxch    st(1)
0x4C5F25: fstp    [esp+0F0h+var_D8]
0x4C5F29: fld     [esp+0F0h+var_DC]
0x4C5F2D: fstp    [esp+0F0h+var_84]
0x4C5F31: mov     ecx, [esp+0F0h+var_84]
0x4C5F35: fld     [esp+0F0h+var_D0]
0x4C5F39: mov     [eax], ecx
0x4C5F3B: fstp    [esp+0F0h+var_80]
0x4C5F3F: mov     edx, [esp+0F0h+var_80]
0x4C5F43: fld     [esp+0F0h+var_D8]
0x4C5F47: mov     [eax+4], edx
0x4C5F4A: fstp    [esp+0F0h+var_7C]
0x4C5F4E: mov     ecx, [esp+0F0h+var_7C]
0x4C5F52: fld     qword ptr ds:0A3F428h
0x4C5F58: mov     [eax+8], ecx
0x4C5F5B: fld1
0x4C5F5D: fld     qword ptr ds:0A3DDD8h
0x4C5F63: fxch    st(3)
0x4C5F65: fxch    st(1)
0x4C5F67: fxch    st(2)
0x4C5F69: fxch    st(1)
0x4C5F6B: add     edi, 1
0x4C5F6E: cmp     edi, 21h ; '!'
0x4C5F71: mov     [esp+0F0h+var_D8], edi
0x4C5F75: jl      loc_4C5D25
0x4C5F7B: add     ebp, 1
0x4C5F7E: cmp     ebp, 21h ; '!'
0x4C5F81: mov     [esp+0F0h+var_BC], ebp
0x4C5F85: jl      loc_4C5D1F
0x4C5F8B: fstp    st
0x4C5F8D: push    0C0h ; 'À'; Size
0x4C5F92: fstp    st(4)
0x4C5F94: fstp    st(2)
0x4C5F96: fstp    st
0x4C5F98: fstp    st(1)
0x4C5F9A: fstp    st
0x4C5F9C: call    FormHeapAlloc
0x4C5FA1: add     esp, 4
0x4C5FA4: mov     [esp+0F0h+var_DC], eax
0x4C5FA8: test    eax, eax
0x4C5FAA: mov     [esp+0F0h+var_4], 1
0x4C5FB5: jz      short loc_4C5FDC
0x4C5FB7: mov     edx, [esp+0F0h+var_C4]
0x4C5FBB: mov     ecx, [esp+0F0h+var_CC]
0x4C5FBF: push    edx
0x4C5FC0: mov     edx, [esp+0F4h+var_C8]
0x4C5FC4: push    0
0x4C5FC6: push    0
0x4C5FC8: push    0
0x4C5FCA: push    ecx
0x4C5FCB: push    edx
0x4C5FCC: push    80h ; '€'
0x4C5FD1: mov     ecx, eax
0x4C5FD3: call    sub_7177E0
0x4C5FD8: mov     ebp, eax
0x4C5FDA: jmp     short loc_4C5FDE
0x4C5FDC: xor     ebp, ebp
0x4C5FDE: mov     esi, [ebx+24h]
0x4C5FE1: mov     edi, [esi+14h]
0x4C5FE4: add     esi, 14h
0x4C5FE7: cmp     edi, ebp
0x4C5FE9: mov     [esp+0F0h+var_4], 0FFFFFFFFh
0x4C5FF4: jz      short loc_4C6026
0x4C5FF6: test    edi, edi
0x4C5FF8: jz      short loc_4C6016
0x4C5FFA: lea     eax, [edi+4]
0x4C5FFD: push    eax; lpAddend
0x4C5FFE: call    dword ptr ds:0A2807Ch
0x4C6004: test    eax, eax
0x4C6006: jnz     short loc_4C6016
0x4C6008: test    edi, edi
0x4C600A: jz      short loc_4C6016
0x4C600C: mov     edx, [edi]
0x4C600E: mov     eax, [edx]
0x4C6010: push    1
0x4C6012: mov     ecx, edi
0x4C6014: call    eax
0x4C6016: test    ebp, ebp
0x4C6018: mov     [esi], ebp
0x4C601A: jz      short loc_4C6026
0x4C601C: add     ebp, 4
0x4C601F: push    ebp; lpAddend
0x4C6020: call    dword ptr ds:0A28078h
0x4C6026: mov     ecx, [ebx+24h]
0x4C6029: mov     eax, [ecx+14h]
0x4C602C: mov     edx, [esp+0F0h+var_AC]
0x4C6030: mov     ecx, [esp+0F0h+var_A8]
0x4C6034: mov     [eax+54h], edx
0x4C6037: mov     edx, [esp+0F0h+var_A4]
0x4C603B: mov     [eax+58h], ecx
0x4C603E: push    30h ; '0'; Size
0x4C6040: mov     [eax+5Ch], edx
0x4C6043: call    FormHeapAlloc
0x4C6048: add     esp, 4
0x4C604B: mov     [esp+0F0h+var_DC], eax
0x4C604F: test    eax, eax
0x4C6051: mov     [esp+0F0h+var_4], 2
0x4C605C: jz      short loc_4C6069
0x4C605E: mov     ecx, eax
0x4C6060: call    NiTexturingProperty__NiTexturingProperty
0x4C6065: mov     esi, eax
0x4C6067: jmp     short loc_4C606B
0x4C6069: xor     esi, esi
0x4C606B: mov     eax, [esi+20h]
0x4C606E: mov     ecx, [eax]
0x4C6070: or      edi, 0FFFFFFFFh
0x4C6073: test    ecx, ecx
0x4C6075: mov     [esp+0F0h+var_4], edi
0x4C607C: mov     [esp+0F0h+var_DC], 0
0x4C6084: jz      short loc_4C609D
0x4C6086: mov     edx, [ecx]
0x4C6088: mov     eax, [edx]
0x4C608A: push    1
0x4C608C: call    eax
0x4C608E: lea     ecx, [esp+0F0h+var_DC]
0x4C6092: push    ecx
0x4C6093: push    0
0x4C6095: lea     ecx, [esi+1Ch]
0x4C6098: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4C609D: push    0
0x4C609F: push    0
0x4C60A1: mov     ecx, esi
0x4C60A3: call    sub_703DC0
0x4C60A8: mov     edx, [ebx+24h]
0x4C60AB: mov     ecx, [edx+14h]; this
0x4C60AE: push    esi; a2
0x4C60AF: call    sub_405680
0x4C60B4: push    1Ch; Size
0x4C60B6: call    FormHeapAlloc
0x4C60BB: mov     esi, eax
0x4C60BD: add     esp, 4
0x4C60C0: mov     [esp+0F0h+var_DC], esi
0x4C60C4: test    esi, esi
0x4C60C6: mov     [esp+0F0h+var_4], 3
0x4C60D1: jz      short loc_4C60EA
0x4C60D3: mov     ecx, esi; this
0x4C60D5: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x4C60DA: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x4C60E0: mov     word ptr [esi+18h], 8
0x4C60E6: mov     eax, esi
0x4C60E8: jmp     short loc_4C60EC
0x4C60EA: xor     eax, eax
0x4C60EC: mov     cx, [eax+18h]
0x4C60F0: and     cx, 0FFD7h
0x4C60F5: or      cx, 10h
0x4C60F9: mov     [eax+18h], cx
0x4C60FD: mov     edx, [ebx+24h]
0x4C6100: mov     ecx, [edx+14h]; this
0x4C6103: push    eax; a2
0x4C6104: mov     [esp+0F4h+var_4], edi
0x4C610B: call    sub_405680
0x4C6110: mov     ecx, [esp+0F0h+var_B0]
0x4C6114: mov     edx, [ebx+24h]
0x4C6117: mov     eax, [ecx]
0x4C6119: mov     edx, [edx+14h]
0x4C611C: mov     eax, [eax+84h]
0x4C6122: push    1
0x4C6124: push    edx
0x4C6125: call    eax
0x4C6127: mov     ecx, [ebx+24h]
0x4C612A: mov     ecx, [ecx+14h]; this
0x4C612D: call    NiAVObject_InitializePropertyState
0x4C6132: mov     edx, [ebx+24h]
0x4C6135: mov     ecx, [edx+14h]
0x4C6138: call    NiNode_UpdateDynamicEffectState
0x4C613D: fldz
0x4C613F: mov     eax, [ebx+24h]
0x4C6142: push    0; a3
0x4C6144: push    ecx
0x4C6145: mov     ecx, [eax+14h]; this
0x4C6148: fstp    [esp+0F8h+a2]; a2
0x4C614B: call    NiAVObject_UpdateNiAVObject
0x4C6150: mov     ecx, dword ptr [esp+0F0h+var_C]
0x4C6157: mov     large fs:0, ecx
0x4C615E: pop     ecx
0x4C615F: pop     edi
0x4C6160: pop     esi
0x4C6161: pop     ebp
0x4C6162: pop     ebx
0x4C6163: add     esp, 0DCh
0x4C6169: retn    4
