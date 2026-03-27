0x7B8990: push    ebp
0x7B8991: mov     ebp, esp
0x7B8993: and     esp, 0FFFFFFC0h
0x7B8996: push    0FFFFFFFFh
0x7B8998: push    offset SEH_7B8990
0x7B899D: mov     eax, large fs:0
0x7B89A3: push    eax
0x7B89A4: sub     esp, 1E8h
0x7B89AA: mov     eax, ds:0B30AACh
0x7B89AF: xor     eax, esp
0x7B89B1: mov     [esp+1F4h+var_44], eax
0x7B89B8: push    ebx
0x7B89B9: push    esi
0x7B89BA: push    edi
0x7B89BB: mov     eax, ds:0B30AACh
0x7B89C0: xor     eax, esp
0x7B89C2: push    eax
0x7B89C3: lea     eax, [esp+204h+var_C]
0x7B89CA: mov     large fs:0, eax
0x7B89D0: push    offset unk_B265E0
0x7B89D5: lea     ecx, [esp+208h+var_198]
0x7B89D9: call    sub_70F010
0x7B89DE: push    70h ; 'p'; Size
0x7B89E0: call    FormHeapAlloc
0x7B89E5: add     esp, 4
0x7B89E8: mov     [esp+204h+var_1BC], eax
0x7B89EC: xor     esi, esi
0x7B89EE: cmp     eax, esi
0x7B89F0: mov     [esp+204h+var_4], esi
0x7B89F7: jz      short loc_7B8A15
0x7B89F9: push    1
0x7B89FB: push    1
0x7B89FD: lea     ecx, [esp+20Ch+var_198]
0x7B8A01: push    ecx
0x7B8A02: push    80h ; '€'
0x7B8A07: push    80h ; '€'
0x7B8A0C: mov     ecx, eax
0x7B8A0E: call    NiPixelData__NiPixelData
0x7B8A13: jmp     short loc_7B8A17
0x7B8A15: xor     eax, eax
0x7B8A17: mov     edx, [eax+5Ch]
0x7B8A1A: fldz
0x7B8A1C: mov     ecx, [edx]
0x7B8A1E: fld     qword ptr ds:0A4D910h
0x7B8A24: add     ecx, [eax+50h]
0x7B8A27: mov     [esp+204h+var_1A0], eax
0x7B8A2B: mov     [esp+204h+var_4], 0FFFFFFFFh
0x7B8A36: mov     [esp+204h+var_1AC], esi
0x7B8A3A: lea     ebx, [ecx+1]
0x7B8A3D: jmp     short loc_7B8A41
0x7B8A3F: fxch    st(1)
0x7B8A41: fld     st
0x7B8A43: xor     edi, edi
0x7B8A45: fsubrp  st(2), st
0x7B8A47: mov     esi, ebx
0x7B8A49: fxch    st(1)
0x7B8A4B: fstp    [esp+204h+var_1A4]
0x7B8A4F: fldz
0x7B8A51: fstp    [esp+204h+var_1C8]
0x7B8A55: fld     [esp+204h+var_1C8]
0x7B8A59: fld     [esp+204h+var_1A4]
0x7B8A5D: fstp    [esp+204h+var_1C8]
0x7B8A61: fsubp   st(1), st
0x7B8A63: fstp    [esp+204h+var_1C0]
0x7B8A67: fld     [esp+204h+var_1C8]
0x7B8A6B: fld     [esp+204h+var_1C0]
0x7B8A6F: fld     st(1)
0x7B8A71: fmulp   st(2), st
0x7B8A73: fxch    st(1)
0x7B8A75: fadd    qword ptr ds:0A37650h
0x7B8A7B: fld     st(1)
0x7B8A7D: fmulp   st(2), st
0x7B8A7F: faddp   st(1), st
0x7B8A81: fstp    [esp+204h+var_1B8]
0x7B8A85: fld     [esp+204h+var_1B8]
0x7B8A89: call    __CIsqrt
0x7B8A8E: fstp    [esp+204h+var_1B8]
0x7B8A92: fld     [esp+204h+var_1B8]
0x7B8A96: mov     byte ptr [esi+2], 0
0x7B8A9A: fld1
0x7B8A9C: fld     st
0x7B8A9E: fdivrp  st(2), st
0x7B8AA0: fxch    st(1)
0x7B8AA2: fstp    [esp+204h+var_1B8]
0x7B8AA6: fld     [esp+204h+var_1B8]
0x7B8AAA: fld     st
0x7B8AAC: fld     qword ptr ds:0A4D910h
0x7B8AB2: fmul    st(1), st
0x7B8AB4: fxch    st(1)
0x7B8AB6: fnstcw  word ptr [esp+204h+var_1CC]
0x7B8ABA: fstp    [esp+204h+var_1B8]
0x7B8ABE: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B8AC3: fld     st(1)
0x7B8AC5: fmul    [esp+204h+var_1C8]
0x7B8AC9: or      eax, 0C00h
0x7B8ACE: fstp    [esp+204h+var_1C8]
0x7B8AD2: fld     [esp+204h+var_1C0]
0x7B8AD6: fmulp   st(2), st
0x7B8AD8: fxch    st(1)
0x7B8ADA: fstp    [esp+204h+var_1C0]
0x7B8ADE: fld     [esp+204h+var_1B8]
0x7B8AE2: mov     [esp+204h+var_1B8], eax
0x7B8AE6: fadd    st, st(2)
0x7B8AE8: fld     qword ptr ds:0A2FAA0h
0x7B8AEE: fmul    st(1), st
0x7B8AF0: fld     qword ptr ds:0A3DDD8h
0x7B8AF6: fmul    st(2), st
0x7B8AF8: fldcw   word ptr [esp+204h+var_1B8]
0x7B8AFC: fxch    st(2)
0x7B8AFE: fistp   [esp+204h+var_1B8]
0x7B8B02: mov     al, byte ptr [esp+204h+var_1B8]
0x7B8B06: mov     [esi+1], al
0x7B8B09: fldcw   word ptr [esp+204h+var_1CC]
0x7B8B0D: fld     [esp+204h+var_1C8]
0x7B8B11: fadd    st, st(4)
0x7B8B13: fnstcw  word ptr [esp+204h+var_1CC]
0x7B8B17: fmul    st, st(1)
0x7B8B19: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B8B1E: or      eax, 0C00h
0x7B8B23: mov     [esp+204h+var_1B8], eax
0x7B8B27: fmul    st, st(2)
0x7B8B29: fldcw   word ptr [esp+204h+var_1B8]
0x7B8B2D: fistp   [esp+204h+var_1B8]
0x7B8B31: mov     cl, byte ptr [esp+204h+var_1B8]
0x7B8B35: mov     [esi], cl
0x7B8B37: fldcw   word ptr [esp+204h+var_1CC]
0x7B8B3B: fld     [esp+204h+var_1C0]
0x7B8B3F: faddp   st(4), st
0x7B8B41: fnstcw  word ptr [esp+204h+var_1CC]
0x7B8B45: fmulp   st(3), st
0x7B8B47: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B8B4C: or      eax, 0C00h
0x7B8B51: mov     [esp+204h+var_1B8], eax
0x7B8B55: add     edi, 1
0x7B8B58: fmulp   st(2), st
0x7B8B5A: fldcw   word ptr [esp+204h+var_1B8]
0x7B8B5E: fxch    st(1)
0x7B8B60: fistp   [esp+204h+var_1B8]
0x7B8B64: mov     dl, byte ptr [esp+204h+var_1B8]
0x7B8B68: mov     [esi-1], dl
0x7B8B6B: fldcw   word ptr [esp+204h+var_1CC]
0x7B8B6F: mov     [esp+204h+var_1C8], edi
0x7B8B73: fild    [esp+204h+var_1C8]
0x7B8B77: add     esi, 4
0x7B8B7A: fstp    [esp+204h+var_1C8]
0x7B8B7E: fld     dword ptr ds:0A2FFE8h
0x7B8B84: fld     [esp+204h+var_1C8]
0x7B8B88: fcom    st(1)
0x7B8B8A: fnstsw  ax
0x7B8B8C: fstp    st(1)
0x7B8B8E: test    ah, 5
0x7B8B91: jnp     loc_7B8A59
0x7B8B97: mov     esi, 1
0x7B8B9C: fstp    st
0x7B8B9E: add     [esp+204h+var_1AC], esi
0x7B8BA2: fild    [esp+204h+var_1AC]
0x7B8BA6: add     ebx, 200h
0x7B8BAC: fld     qword ptr ds:0A3F428h
0x7B8BB2: fcomp   st(1)
0x7B8BB4: fnstsw  ax
0x7B8BB6: test    ah, 41h
0x7B8BB9: jz      loc_7B8A3F
0x7B8BBF: mov     eax, [esp+204h+var_1A0]
0x7B8BC3: fstp    st
0x7B8BC5: add     [eax+68h], esi
0x7B8BC8: fstp    st
0x7B8BCA: push    70h ; 'p'; Size
0x7B8BCC: call    FormHeapAlloc
0x7B8BD1: add     esp, 4
0x7B8BD4: mov     [esp+204h+var_1BC], eax
0x7B8BD8: test    eax, eax
0x7B8BDA: mov     [esp+204h+var_4], esi
0x7B8BE1: jz      short loc_7B8BFD
0x7B8BE3: push    esi
0x7B8BE4: push    esi
0x7B8BE5: lea     ecx, [esp+20Ch+var_198]
0x7B8BE9: push    ecx
0x7B8BEA: push    80h ; '€'
0x7B8BEF: push    80h ; '€'
0x7B8BF4: mov     ecx, eax
0x7B8BF6: call    NiPixelData__NiPixelData
0x7B8BFB: jmp     short loc_7B8BFF
0x7B8BFD: xor     eax, eax
0x7B8BFF: mov     edx, [eax+5Ch]
0x7B8C02: fldz
0x7B8C04: mov     ecx, [edx]
0x7B8C06: add     ecx, [eax+50h]
0x7B8C09: mov     [esp+204h+var_1B8], eax
0x7B8C0D: mov     [esp+204h+var_4], 0FFFFFFFFh
0x7B8C18: mov     [esp+204h+var_1AC], 0
0x7B8C20: lea     ebx, [ecx+1]
0x7B8C23: fsubr   qword ptr ds:0A4D910h
0x7B8C29: xor     edi, edi
0x7B8C2B: mov     esi, ebx
0x7B8C2D: fstp    [esp+204h+var_1A4]
0x7B8C31: fldz
0x7B8C33: fstp    [esp+204h+var_1C8]
0x7B8C37: fld     [esp+204h+var_1C8]
0x7B8C3B: fld     [esp+204h+var_1A4]
0x7B8C3F: fstp    [esp+204h+var_1C0]
0x7B8C43: fsub    qword ptr ds:0A4D910h
0x7B8C49: fstp    [esp+204h+var_1C8]
0x7B8C4D: fld     [esp+204h+var_1C0]
0x7B8C51: fld     [esp+204h+var_1C8]
0x7B8C55: fld     st(1)
0x7B8C57: fmulp   st(2), st
0x7B8C59: fxch    st(1)
0x7B8C5B: fadd    qword ptr ds:0A37650h
0x7B8C61: fld     st(1)
0x7B8C63: fmulp   st(2), st
0x7B8C65: faddp   st(1), st
0x7B8C67: fstp    [esp+204h+var_1B4]
0x7B8C6B: fld     [esp+204h+var_1B4]
0x7B8C6F: call    __CIsqrt
0x7B8C74: fstp    [esp+204h+var_1B4]
0x7B8C78: fld     [esp+204h+var_1B4]
0x7B8C7C: add     edi, 1
0x7B8C7F: fld1
0x7B8C81: mov     byte ptr [esi+2], 0
0x7B8C85: fld     st
0x7B8C87: fdivrp  st(2), st
0x7B8C89: fxch    st(1)
0x7B8C8B: fstp    [esp+204h+var_1B4]
0x7B8C8F: fld     [esp+204h+var_1B4]
0x7B8C93: fld     qword ptr ds:0A8F638h
0x7B8C99: fmul    st, st(1)
0x7B8C9B: fnstcw  word ptr [esp+204h+var_1CC]
0x7B8C9F: fstp    [esp+204h+var_1B4]
0x7B8CA3: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B8CA8: or      eax, 0C00h
0x7B8CAD: fld     st
0x7B8CAF: fmul    [esp+204h+var_1C0]
0x7B8CB3: fstp    [esp+204h+var_1C0]
0x7B8CB7: fmul    [esp+204h+var_1C8]
0x7B8CBB: fstp    [esp+204h+var_1C8]
0x7B8CBF: fld     [esp+204h+var_1B4]
0x7B8CC3: mov     [esp+204h+var_1B4], eax
0x7B8CC7: fadd    st, st(1)
0x7B8CC9: fld     qword ptr ds:0A2FAA0h
0x7B8CCF: fmul    st(1), st
0x7B8CD1: fld     qword ptr ds:0A3DDD8h
0x7B8CD7: fmul    st(2), st
0x7B8CD9: fldcw   word ptr [esp+204h+var_1B4]
0x7B8CDD: fxch    st(2)
0x7B8CDF: fistp   [esp+204h+var_1B4]
0x7B8CE3: mov     al, byte ptr [esp+204h+var_1B4]
0x7B8CE7: mov     [esi+1], al
0x7B8CEA: fldcw   word ptr [esp+204h+var_1CC]
0x7B8CEE: fld     [esp+204h+var_1C0]
0x7B8CF2: fadd    st, st(3)
0x7B8CF4: fnstcw  word ptr [esp+204h+var_1CC]
0x7B8CF8: fmul    st, st(1)
0x7B8CFA: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B8CFF: or      eax, 0C00h
0x7B8D04: mov     [esp+204h+var_1B4], eax
0x7B8D08: fmul    st, st(2)
0x7B8D0A: fldcw   word ptr [esp+204h+var_1B4]
0x7B8D0E: fistp   [esp+204h+var_1B4]
0x7B8D12: mov     cl, byte ptr [esp+204h+var_1B4]
0x7B8D16: mov     [esi], cl
0x7B8D18: fldcw   word ptr [esp+204h+var_1CC]
0x7B8D1C: fld     [esp+204h+var_1C8]
0x7B8D20: faddp   st(3), st
0x7B8D22: fnstcw  word ptr [esp+204h+var_1CC]
0x7B8D26: mov     [esp+204h+var_1C8], edi
0x7B8D2A: fmulp   st(2), st
0x7B8D2C: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B8D31: or      eax, 0C00h
0x7B8D36: mov     [esp+204h+var_1B4], eax
0x7B8D3A: add     esi, 4
0x7B8D3D: fmulp   st(1), st
0x7B8D3F: fldcw   word ptr [esp+204h+var_1B4]
0x7B8D43: fistp   [esp+204h+var_1B4]
0x7B8D47: mov     dl, byte ptr [esp+204h+var_1B4]
0x7B8D4B: mov     [esi-5], dl
0x7B8D4E: fldcw   word ptr [esp+204h+var_1CC]
0x7B8D52: fild    [esp+204h+var_1C8]
0x7B8D56: fstp    [esp+204h+var_1C8]
0x7B8D5A: fld     dword ptr ds:0A2FFE8h
0x7B8D60: fld     [esp+204h+var_1C8]
0x7B8D64: fcom    st(1)
0x7B8D66: fnstsw  ax
0x7B8D68: fstp    st(1)
0x7B8D6A: test    ah, 5
0x7B8D6D: jnp     loc_7B8C3B
0x7B8D73: add     [esp+204h+var_1AC], 1
0x7B8D78: fstp    st
0x7B8D7A: fild    [esp+204h+var_1AC]
0x7B8D7E: add     ebx, 200h
0x7B8D84: fld     qword ptr ds:0A3F428h
0x7B8D8A: fcomp   st(1)
0x7B8D8C: fnstsw  ax
0x7B8D8E: test    ah, 41h
0x7B8D91: jz      loc_7B8C23
0x7B8D97: mov     eax, [esp+204h+var_1B8]
0x7B8D9B: fstp    st
0x7B8D9D: add     dword ptr [eax+68h], 1
0x7B8DA1: push    70h ; 'p'; Size
0x7B8DA3: call    FormHeapAlloc
0x7B8DA8: add     esp, 4
0x7B8DAB: mov     [esp+204h+var_1BC], eax
0x7B8DAF: test    eax, eax
0x7B8DB1: mov     [esp+204h+var_4], 2
0x7B8DBC: jz      short loc_7B8DDA
0x7B8DBE: push    1
0x7B8DC0: push    1
0x7B8DC2: lea     ecx, [esp+20Ch+var_198]
0x7B8DC6: push    ecx
0x7B8DC7: push    80h ; '€'
0x7B8DCC: push    80h ; '€'
0x7B8DD1: mov     ecx, eax
0x7B8DD3: call    NiPixelData__NiPixelData
0x7B8DD8: jmp     short loc_7B8DDC
0x7B8DDA: xor     eax, eax
0x7B8DDC: mov     edx, [eax+5Ch]
0x7B8DDF: fldz
0x7B8DE1: mov     ecx, [edx]
0x7B8DE3: fld     qword ptr ds:0A4D910h
0x7B8DE9: add     ecx, [eax+50h]
0x7B8DEC: mov     [esp+204h+var_1B4], eax
0x7B8DF0: mov     [esp+204h+var_4], 0FFFFFFFFh
0x7B8DFB: mov     [esp+204h+var_1C8], 0
0x7B8E03: lea     ebx, [ecx+1]
0x7B8E06: jmp     short loc_7B8E0A
0x7B8E08: fxch    st(1)
0x7B8E0A: fldz
0x7B8E0C: xor     edi, edi
0x7B8E0E: fstp    [esp+204h+var_1CC]
0x7B8E12: mov     esi, ebx
0x7B8E14: fsub    st(1), st
0x7B8E16: fxch    st(1)
0x7B8E18: fstp    [esp+204h+var_19C]
0x7B8E1C: fld     [esp+204h+var_1CC]
0x7B8E20: fsubrp  st(1), st
0x7B8E22: fstp    [esp+204h+var_1C0]
0x7B8E26: fld     [esp+204h+var_19C]
0x7B8E2A: fstp    [esp+204h+var_1A4]
0x7B8E2E: fld     [esp+204h+var_1C0]
0x7B8E32: fld     [esp+204h+var_1A4]
0x7B8E36: fld     st(1)
0x7B8E38: fmulp   st(2), st
0x7B8E3A: fxch    st(1)
0x7B8E3C: fadd    qword ptr ds:0A37650h
0x7B8E42: fld     st(1)
0x7B8E44: fmulp   st(2), st
0x7B8E46: faddp   st(1), st
0x7B8E48: fstp    [esp+204h+var_1B0]
0x7B8E4C: fld     [esp+204h+var_1B0]
0x7B8E50: call    __CIsqrt
0x7B8E55: fstp    [esp+204h+var_1B0]
0x7B8E59: fld     [esp+204h+var_1B0]
0x7B8E5D: mov     byte ptr [esi+2], 0
0x7B8E61: fld1
0x7B8E63: fld     st
0x7B8E65: fdivrp  st(2), st
0x7B8E67: fxch    st(1)
0x7B8E69: fstp    [esp+204h+var_1B0]
0x7B8E6D: fld     [esp+204h+var_1B0]
0x7B8E71: fld     st
0x7B8E73: fmul    [esp+204h+var_1C0]
0x7B8E77: fnstcw  word ptr [esp+204h+var_1CC]
0x7B8E7B: fstp    [esp+204h+var_1C0]
0x7B8E7F: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B8E84: or      eax, 0C00h
0x7B8E89: mov     [esp+204h+var_1B0], eax
0x7B8E8D: fld     st
0x7B8E8F: fld     qword ptr ds:0A4D910h
0x7B8E95: fmul    st(1), st
0x7B8E97: fxch    st(1)
0x7B8E99: fstp    [esp+204h+var_1C4]
0x7B8E9D: fld     [esp+204h+var_1A4]
0x7B8EA1: fmulp   st(2), st
0x7B8EA3: fxch    st(1)
0x7B8EA5: fstp    [esp+204h+var_1A4]
0x7B8EA9: fld     [esp+204h+var_1C0]
0x7B8EAD: fadd    st, st(2)
0x7B8EAF: fld     qword ptr ds:0A2FAA0h
0x7B8EB5: fmul    st(1), st
0x7B8EB7: fld     qword ptr ds:0A3DDD8h
0x7B8EBD: fmul    st(2), st
0x7B8EBF: fldcw   word ptr [esp+204h+var_1B0]
0x7B8EC3: fxch    st(2)
0x7B8EC5: fistp   [esp+204h+var_1B0]
0x7B8EC9: mov     al, byte ptr [esp+204h+var_1B0]
0x7B8ECD: mov     [esi+1], al
0x7B8ED0: fldcw   word ptr [esp+204h+var_1CC]
0x7B8ED4: fld     [esp+204h+var_1C4]
0x7B8ED8: fadd    st, st(4)
0x7B8EDA: fnstcw  word ptr [esp+204h+var_1CC]
0x7B8EDE: fmul    st, st(1)
0x7B8EE0: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B8EE5: or      eax, 0C00h
0x7B8EEA: mov     [esp+204h+var_1B0], eax
0x7B8EEE: fmul    st, st(2)
0x7B8EF0: fldcw   word ptr [esp+204h+var_1B0]
0x7B8EF4: fistp   [esp+204h+var_1B0]
0x7B8EF8: mov     cl, byte ptr [esp+204h+var_1B0]
0x7B8EFC: mov     [esi], cl
0x7B8EFE: fldcw   word ptr [esp+204h+var_1CC]
0x7B8F02: fld     [esp+204h+var_1A4]
0x7B8F06: faddp   st(4), st
0x7B8F08: fnstcw  word ptr [esp+204h+var_1CC]
0x7B8F0C: fmulp   st(3), st
0x7B8F0E: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B8F13: or      eax, 0C00h
0x7B8F18: mov     [esp+204h+var_1B0], eax
0x7B8F1C: add     edi, 1
0x7B8F1F: fmulp   st(2), st
0x7B8F21: fldcw   word ptr [esp+204h+var_1B0]
0x7B8F25: fxch    st(1)
0x7B8F27: fistp   [esp+204h+var_1B0]
0x7B8F2B: mov     dl, byte ptr [esp+204h+var_1B0]
0x7B8F2F: mov     [esi-1], dl
0x7B8F32: fldcw   word ptr [esp+204h+var_1CC]
0x7B8F36: mov     [esp+204h+var_1CC], edi
0x7B8F3A: fild    [esp+204h+var_1CC]
0x7B8F3E: add     esi, 4
0x7B8F41: fstp    [esp+204h+var_1CC]
0x7B8F45: fld     dword ptr ds:0A2FFE8h
0x7B8F4B: fld     [esp+204h+var_1CC]
0x7B8F4F: fcom    st(1)
0x7B8F51: fnstsw  ax
0x7B8F53: fstp    st(1)
0x7B8F55: test    ah, 5
0x7B8F58: jnp     loc_7B8E20
0x7B8F5E: add     [esp+204h+var_1C8], 1
0x7B8F63: fstp    st
0x7B8F65: fild    [esp+204h+var_1C8]
0x7B8F69: add     ebx, 200h
0x7B8F6F: fld     qword ptr ds:0A3F428h
0x7B8F75: fcomp   st(1)
0x7B8F77: fnstsw  ax
0x7B8F79: test    ah, 41h
0x7B8F7C: jz      loc_7B8E08
0x7B8F82: mov     eax, [esp+204h+var_1B4]
0x7B8F86: fstp    st
0x7B8F88: add     dword ptr [eax+68h], 1
0x7B8F8C: fstp    st
0x7B8F8E: push    70h ; 'p'; Size
0x7B8F90: call    FormHeapAlloc
0x7B8F95: add     esp, 4
0x7B8F98: mov     [esp+204h+var_1BC], eax
0x7B8F9C: test    eax, eax
0x7B8F9E: mov     [esp+204h+var_4], 3
0x7B8FA9: jz      short loc_7B8FC7
0x7B8FAB: push    1
0x7B8FAD: push    1
0x7B8FAF: lea     ecx, [esp+20Ch+var_198]
0x7B8FB3: push    ecx
0x7B8FB4: push    80h ; '€'
0x7B8FB9: push    80h ; '€'
0x7B8FBE: mov     ecx, eax
0x7B8FC0: call    NiPixelData__NiPixelData
0x7B8FC5: jmp     short loc_7B8FC9
0x7B8FC7: xor     eax, eax
0x7B8FC9: mov     edx, [eax+5Ch]
0x7B8FCC: fldz
0x7B8FCE: mov     ecx, [edx]
0x7B8FD0: add     ecx, [eax+50h]
0x7B8FD3: mov     [esp+204h+var_19C], eax
0x7B8FD7: mov     [esp+204h+var_4], 0FFFFFFFFh
0x7B8FE2: mov     [esp+204h+var_1C8], 0
0x7B8FEA: lea     ebx, [ecx+1]
0x7B8FED: fldz
0x7B8FEF: xor     edi, edi
0x7B8FF1: fstp    [esp+204h+var_1CC]
0x7B8FF5: mov     esi, ebx
0x7B8FF7: fsubr   qword ptr ds:0A4D910h
0x7B8FFD: fstp    [esp+204h+var_1B0]
0x7B9001: fld     [esp+204h+var_1CC]
0x7B9005: fsub    qword ptr ds:0A4D910h
0x7B900B: fstp    [esp+204h+var_1C0]
0x7B900F: fld     [esp+204h+var_1B0]
0x7B9013: fstp    [esp+204h+var_1A4]
0x7B9017: fld     [esp+204h+var_1C0]
0x7B901B: fld     [esp+204h+var_1A4]
0x7B901F: fld     st(1)
0x7B9021: fmulp   st(2), st
0x7B9023: fxch    st(1)
0x7B9025: fadd    qword ptr ds:0A37650h
0x7B902B: fld     st(1)
0x7B902D: fmulp   st(2), st
0x7B902F: faddp   st(1), st
0x7B9031: fstp    [esp+204h+var_1C4]
0x7B9035: fld     [esp+204h+var_1C4]
0x7B9039: call    __CIsqrt
0x7B903E: fstp    [esp+204h+var_1C4]
0x7B9042: fld     [esp+204h+var_1C4]
0x7B9046: add     edi, 1
0x7B9049: fld1
0x7B904B: mov     byte ptr [esi+2], 0
0x7B904F: fld     st
0x7B9051: fdivrp  st(2), st
0x7B9053: fxch    st(1)
0x7B9055: fstp    [esp+204h+var_1C4]
0x7B9059: fld     [esp+204h+var_1C4]
0x7B905D: fld     st
0x7B905F: fmul    [esp+204h+var_1C0]
0x7B9063: fnstcw  word ptr [esp+204h+var_1CC]
0x7B9067: fstp    [esp+204h+var_1C0]
0x7B906B: fld     qword ptr ds:0A8F638h
0x7B9071: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B9076: fmul    st, st(1)
0x7B9078: or      eax, 0C00h
0x7B907D: mov     [esp+204h+var_1C4], eax
0x7B9081: fstp    [esp+204h+var_1AC]
0x7B9085: fmul    [esp+204h+var_1A4]
0x7B9089: fstp    [esp+204h+var_1A4]
0x7B908D: fld     [esp+204h+var_1C0]
0x7B9091: fadd    st, st(1)
0x7B9093: fld     qword ptr ds:0A2FAA0h
0x7B9099: fmul    st(1), st
0x7B909B: fld     qword ptr ds:0A3DDD8h
0x7B90A1: fmul    st(2), st
0x7B90A3: fldcw   word ptr [esp+204h+var_1C4]
0x7B90A7: fxch    st(2)
0x7B90A9: fistp   [esp+204h+var_1C4]
0x7B90AD: mov     al, byte ptr [esp+204h+var_1C4]
0x7B90B1: mov     [esi+1], al
0x7B90B4: fldcw   word ptr [esp+204h+var_1CC]
0x7B90B8: fld     [esp+204h+var_1AC]
0x7B90BC: fadd    st, st(3)
0x7B90BE: fnstcw  word ptr [esp+204h+var_1CC]
0x7B90C2: fmul    st, st(1)
0x7B90C4: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B90C9: or      eax, 0C00h
0x7B90CE: mov     [esp+204h+var_1C4], eax
0x7B90D2: fmul    st, st(2)
0x7B90D4: fldcw   word ptr [esp+204h+var_1C4]
0x7B90D8: fistp   [esp+204h+var_1C4]
0x7B90DC: mov     cl, byte ptr [esp+204h+var_1C4]
0x7B90E0: mov     [esi], cl
0x7B90E2: fldcw   word ptr [esp+204h+var_1CC]
0x7B90E6: fld     [esp+204h+var_1A4]
0x7B90EA: faddp   st(3), st
0x7B90EC: fnstcw  word ptr [esp+204h+var_1CC]
0x7B90F0: fmulp   st(2), st
0x7B90F2: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B90F7: or      eax, 0C00h
0x7B90FC: mov     [esp+204h+var_1C4], eax
0x7B9100: add     esi, 4
0x7B9103: fmulp   st(1), st
0x7B9105: fldcw   word ptr [esp+204h+var_1C4]
0x7B9109: fistp   [esp+204h+var_1C4]
0x7B910D: mov     dl, byte ptr [esp+204h+var_1C4]
0x7B9111: mov     [esi-5], dl
0x7B9114: fldcw   word ptr [esp+204h+var_1CC]
0x7B9118: mov     [esp+204h+var_1CC], edi
0x7B911C: fild    [esp+204h+var_1CC]
0x7B9120: fstp    [esp+204h+var_1CC]
0x7B9124: fld     dword ptr ds:0A2FFE8h
0x7B912A: fld     [esp+204h+var_1CC]
0x7B912E: fcom    st(1)
0x7B9130: fnstsw  ax
0x7B9132: fstp    st(1)
0x7B9134: test    ah, 5
0x7B9137: jnp     loc_7B9005
0x7B913D: add     [esp+204h+var_1C8], 1
0x7B9142: fstp    st
0x7B9144: fild    [esp+204h+var_1C8]
0x7B9148: add     ebx, 200h
0x7B914E: fld     qword ptr ds:0A3F428h
0x7B9154: fcomp   st(1)
0x7B9156: fnstsw  ax
0x7B9158: test    ah, 41h
0x7B915B: jz      loc_7B8FED
0x7B9161: mov     eax, [esp+204h+var_19C]
0x7B9165: fstp    st
0x7B9167: add     dword ptr [eax+68h], 1
0x7B916B: push    70h ; 'p'; Size
0x7B916D: call    FormHeapAlloc
0x7B9172: add     esp, 4
0x7B9175: mov     [esp+204h+var_1BC], eax
0x7B9179: test    eax, eax
0x7B917B: mov     [esp+204h+var_4], 4
0x7B9186: jz      short loc_7B91A4
0x7B9188: push    1
0x7B918A: push    1
0x7B918C: lea     ecx, [esp+20Ch+var_198]
0x7B9190: push    ecx
0x7B9191: push    80h ; '€'
0x7B9196: push    80h ; '€'
0x7B919B: mov     ecx, eax
0x7B919D: call    NiPixelData__NiPixelData
0x7B91A2: jmp     short loc_7B91A6
0x7B91A4: xor     eax, eax
0x7B91A6: mov     edx, [eax+5Ch]
0x7B91A9: fldz
0x7B91AB: mov     ecx, [edx]
0x7B91AD: fld     qword ptr ds:0A4D910h
0x7B91B3: add     ecx, [eax+50h]
0x7B91B6: mov     [esp+204h+var_1B0], eax
0x7B91BA: mov     [esp+204h+var_4], 0FFFFFFFFh
0x7B91C5: mov     [esp+204h+var_1AC], 0
0x7B91CD: lea     ebx, [ecx+1]
0x7B91D0: jmp     short loc_7B91D4
0x7B91D2: fxch    st(1)
0x7B91D4: fldz
0x7B91D6: xor     edi, edi
0x7B91D8: fstp    [esp+204h+var_1CC]
0x7B91DC: mov     esi, ebx
0x7B91DE: fld     st
0x7B91E0: fsubrp  st(2), st
0x7B91E2: fxch    st(1)
0x7B91E4: fstp    [esp+204h+var_1A4]
0x7B91E8: fld     [esp+204h+var_1CC]
0x7B91EC: fsubrp  st(1), st
0x7B91EE: fstp    [esp+204h+var_1C0]
0x7B91F2: fld     [esp+204h+var_1A4]
0x7B91F6: fstp    [esp+204h+var_1C8]
0x7B91FA: fld     [esp+204h+var_1C8]
0x7B91FE: fld     [esp+204h+var_1C0]
0x7B9202: fmul    st, st
0x7B9204: fld     st(1)
0x7B9206: fmulp   st(2), st
0x7B9208: faddp   st(1), st
0x7B920A: fadd    qword ptr ds:0A37650h
0x7B9210: fstp    [esp+204h+var_1C4]
0x7B9214: fld     [esp+204h+var_1C4]
0x7B9218: call    __CIsqrt
0x7B921D: fstp    [esp+204h+var_1C4]
0x7B9221: fld     [esp+204h+var_1C4]
0x7B9225: add     edi, 1
0x7B9228: fld1
0x7B922A: mov     byte ptr [esi+2], 0
0x7B922E: fld     st
0x7B9230: fdivrp  st(2), st
0x7B9232: fxch    st(1)
0x7B9234: fstp    [esp+204h+var_1C4]
0x7B9238: fld     [esp+204h+var_1C4]
0x7B923C: fld     st
0x7B923E: fmul    [esp+204h+var_1C0]
0x7B9242: fnstcw  word ptr [esp+204h+var_1CC]
0x7B9246: fstp    [esp+204h+var_1C0]
0x7B924A: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B924F: or      eax, 0C00h
0x7B9254: mov     [esp+204h+var_1C4], eax
0x7B9258: fld     st
0x7B925A: fmul    [esp+204h+var_1C8]
0x7B925E: fstp    [esp+204h+var_1C8]
0x7B9262: fld     qword ptr ds:0A4D910h
0x7B9268: fmul    st(1), st
0x7B926A: fxch    st(1)
0x7B926C: fstp    [esp+204h+var_1A8]
0x7B9270: fld     [esp+204h+var_1C0]
0x7B9274: fadd    st, st(2)
0x7B9276: fld     qword ptr ds:0A2FAA0h
0x7B927C: fmul    st(1), st
0x7B927E: fld     qword ptr ds:0A3DDD8h
0x7B9284: fmul    st(2), st
0x7B9286: fldcw   word ptr [esp+204h+var_1C4]
0x7B928A: fxch    st(2)
0x7B928C: fistp   [esp+204h+var_1C4]
0x7B9290: mov     al, byte ptr [esp+204h+var_1C4]
0x7B9294: mov     [esi+1], al
0x7B9297: fldcw   word ptr [esp+204h+var_1CC]
0x7B929B: fld     [esp+204h+var_1C8]
0x7B929F: fadd    st, st(4)
0x7B92A1: fnstcw  word ptr [esp+204h+var_1CC]
0x7B92A5: fmul    st, st(1)
0x7B92A7: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B92AC: or      eax, 0C00h
0x7B92B1: mov     [esp+204h+var_1C4], eax
0x7B92B5: fmul    st, st(2)
0x7B92B7: fldcw   word ptr [esp+204h+var_1C4]
0x7B92BB: fistp   [esp+204h+var_1C4]
0x7B92BF: mov     cl, byte ptr [esp+204h+var_1C4]
0x7B92C3: mov     [esi], cl
0x7B92C5: fldcw   word ptr [esp+204h+var_1CC]
0x7B92C9: fld     [esp+204h+var_1A8]
0x7B92CD: faddp   st(4), st
0x7B92CF: fnstcw  word ptr [esp+204h+var_1CC]
0x7B92D3: fmulp   st(3), st
0x7B92D5: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B92DA: or      eax, 0C00h
0x7B92DF: mov     [esp+204h+var_1A8], eax
0x7B92E3: add     esi, 4
0x7B92E6: fmulp   st(2), st
0x7B92E8: fldcw   word ptr [esp+204h+var_1A8]
0x7B92EC: fxch    st(1)
0x7B92EE: fistp   [esp+204h+var_1A8]
0x7B92F2: mov     dl, byte ptr [esp+204h+var_1A8]
0x7B92F6: mov     [esi-5], dl
0x7B92F9: fldcw   word ptr [esp+204h+var_1CC]
0x7B92FD: mov     [esp+204h+var_1CC], edi
0x7B9301: fild    [esp+204h+var_1CC]
0x7B9305: fstp    [esp+204h+var_1CC]
0x7B9309: fld     dword ptr ds:0A2FFE8h
0x7B930F: fld     [esp+204h+var_1CC]
0x7B9313: fcom    st(1)
0x7B9315: fnstsw  ax
0x7B9317: fstp    st(1)
0x7B9319: test    ah, 5
0x7B931C: jnp     loc_7B91EC
0x7B9322: add     [esp+204h+var_1AC], 1
0x7B9327: fstp    st
0x7B9329: fild    [esp+204h+var_1AC]
0x7B932D: add     ebx, 200h
0x7B9333: fld     qword ptr ds:0A3F428h
0x7B9339: fcomp   st(1)
0x7B933B: fnstsw  ax
0x7B933D: test    ah, 41h
0x7B9340: jz      loc_7B91D2
0x7B9346: mov     eax, [esp+204h+var_1B0]
0x7B934A: fstp    st
0x7B934C: add     dword ptr [eax+68h], 1
0x7B9350: fstp    st
0x7B9352: push    70h ; 'p'; Size
0x7B9354: call    FormHeapAlloc
0x7B9359: add     esp, 4
0x7B935C: mov     [esp+204h+var_1BC], eax
0x7B9360: test    eax, eax
0x7B9362: mov     [esp+204h+var_4], 5
0x7B936D: jz      short loc_7B938D
0x7B936F: push    1
0x7B9371: push    1
0x7B9373: lea     ecx, [esp+20Ch+var_198]
0x7B9377: push    ecx
0x7B9378: push    80h ; '€'
0x7B937D: push    80h ; '€'
0x7B9382: mov     ecx, eax
0x7B9384: call    NiPixelData__NiPixelData
0x7B9389: mov     edi, eax
0x7B938B: jmp     short loc_7B938F
0x7B938D: xor     edi, edi
0x7B938F: mov     edx, [edi+5Ch]
0x7B9392: fldz
0x7B9394: mov     eax, [edx]
0x7B9396: add     eax, [edi+50h]
0x7B9399: mov     [esp+204h+var_4], 0FFFFFFFFh
0x7B93A4: add     eax, 1
0x7B93A7: mov     [esp+204h+var_1AC], 0
0x7B93AF: mov     [esp+204h+var_1C4], eax
0x7B93B3: fldz
0x7B93B5: mov     esi, [esp+204h+var_1C4]
0x7B93B9: fstp    [esp+204h+var_1CC]
0x7B93BD: xor     ebx, ebx
0x7B93BF: fsubr   qword ptr ds:0A4D910h
0x7B93C5: fstp    [esp+204h+var_1A4]
0x7B93C9: fld     [esp+204h+var_1CC]
0x7B93CD: fsubr   qword ptr ds:0A4D910h
0x7B93D3: fstp    [esp+204h+var_1C0]
0x7B93D7: fld     [esp+204h+var_1A4]
0x7B93DB: fstp    [esp+204h+var_1C8]
0x7B93DF: fld     [esp+204h+var_1C8]
0x7B93E3: fld     [esp+204h+var_1C0]
0x7B93E7: fmul    st, st
0x7B93E9: fld     st(1)
0x7B93EB: fmulp   st(2), st
0x7B93ED: faddp   st(1), st
0x7B93EF: fadd    qword ptr ds:0A37650h
0x7B93F5: fstp    [esp+204h+var_1A8]
0x7B93F9: fld     [esp+204h+var_1A8]
0x7B93FD: call    __CIsqrt
0x7B9402: fstp    [esp+204h+var_1A8]
0x7B9406: fld     [esp+204h+var_1A8]
0x7B940A: add     ebx, 1
0x7B940D: fld1
0x7B940F: mov     byte ptr [esi+2], 0
0x7B9413: fld     st
0x7B9415: fdivrp  st(2), st
0x7B9417: fxch    st(1)
0x7B9419: fstp    [esp+204h+var_1A8]
0x7B941D: fld     [esp+204h+var_1A8]
0x7B9421: fld     st
0x7B9423: fmul    [esp+204h+var_1C0]
0x7B9427: fnstcw  word ptr [esp+204h+var_1CC]
0x7B942B: fstp    [esp+204h+var_1C0]
0x7B942F: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B9434: or      eax, 0C00h
0x7B9439: mov     [esp+204h+var_1A8], eax
0x7B943D: fld     st
0x7B943F: fmul    [esp+204h+var_1C8]
0x7B9443: fstp    [esp+204h+var_1C8]
0x7B9447: fmul    qword ptr ds:0A8F638h
0x7B944D: fstp    [esp+204h+var_1BC]
0x7B9451: fld     [esp+204h+var_1C0]
0x7B9455: fadd    st, st(1)
0x7B9457: fld     qword ptr ds:0A2FAA0h
0x7B945D: fmul    st(1), st
0x7B945F: fld     qword ptr ds:0A3DDD8h
0x7B9465: fmul    st(2), st
0x7B9467: fldcw   word ptr [esp+204h+var_1A8]
0x7B946B: fxch    st(2)
0x7B946D: fistp   [esp+204h+var_1A8]
0x7B9471: mov     al, byte ptr [esp+204h+var_1A8]
0x7B9475: mov     [esi+1], al
0x7B9478: fldcw   word ptr [esp+204h+var_1CC]
0x7B947C: fld     [esp+204h+var_1C8]
0x7B9480: fadd    st, st(3)
0x7B9482: fnstcw  word ptr [esp+204h+var_1CC]
0x7B9486: fmul    st, st(1)
0x7B9488: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B948D: or      eax, 0C00h
0x7B9492: mov     [esp+204h+var_1A8], eax
0x7B9496: fmul    st, st(2)
0x7B9498: fldcw   word ptr [esp+204h+var_1A8]
0x7B949C: fistp   [esp+204h+var_1A8]
0x7B94A0: mov     cl, byte ptr [esp+204h+var_1A8]
0x7B94A4: mov     [esi], cl
0x7B94A6: fldcw   word ptr [esp+204h+var_1CC]
0x7B94AA: fld     [esp+204h+var_1BC]
0x7B94AE: faddp   st(3), st
0x7B94B0: fnstcw  word ptr [esp+204h+var_1CC]
0x7B94B4: fmulp   st(2), st
0x7B94B6: movzx   eax, word ptr [esp+204h+var_1CC]
0x7B94BB: or      eax, 0C00h
0x7B94C0: mov     [esp+204h+var_1BC], eax
0x7B94C4: add     esi, 4
0x7B94C7: fmulp   st(1), st
0x7B94C9: fldcw   word ptr [esp+204h+var_1BC]
0x7B94CD: fistp   [esp+204h+var_1BC]
0x7B94D1: mov     dl, byte ptr [esp+204h+var_1BC]
0x7B94D5: mov     [esi-5], dl
0x7B94D8: fldcw   word ptr [esp+204h+var_1CC]
0x7B94DC: mov     [esp+204h+var_1CC], ebx
0x7B94E0: fild    [esp+204h+var_1CC]
0x7B94E4: fstp    [esp+204h+var_1CC]
0x7B94E8: fld     dword ptr ds:0A2FFE8h
0x7B94EE: fld     [esp+204h+var_1CC]
0x7B94F2: fcom    st(1)
0x7B94F4: fnstsw  ax
0x7B94F6: fstp    st(1)
0x7B94F8: test    ah, 5
0x7B94FB: jnp     loc_7B93CD
0x7B9501: add     [esp+204h+var_1C4], 200h
0x7B9509: fstp    st
0x7B950B: mov     ebx, 1
0x7B9510: add     [esp+204h+var_1AC], ebx
0x7B9514: fild    [esp+204h+var_1AC]
0x7B9518: fld     qword ptr ds:0A3F428h
0x7B951E: fcomp   st(1)
0x7B9520: fnstsw  ax
0x7B9522: test    ah, 41h
0x7B9525: jz      loc_7B93B3
0x7B952B: add     [edi+68h], ebx
0x7B952E: fstp    st
0x7B9530: mov     eax, ds:0B43104h
0x7B9535: mov     ecx, [esp+204h+var_1B0]
0x7B9539: mov     edx, [esp+204h+var_19C]
0x7B953D: push    offset dword_B256D0
0x7B9542: push    eax
0x7B9543: mov     eax, [esp+20Ch+var_1B4]
0x7B9547: push    edi
0x7B9548: push    ecx
0x7B9549: mov     ecx, [esp+214h+var_1B8]
0x7B954D: push    edx
0x7B954E: mov     edx, [esp+218h+var_1A0]
0x7B9552: push    eax
0x7B9553: push    ecx
0x7B9554: push    edx
0x7B9555: call    sub_720A30
0x7B955A: mov     esi, eax
0x7B955C: mov     eax, ds:0B430ECh
0x7B9561: add     esp, 20h
0x7B9564: cmp     eax, esi
0x7B9566: jz      short loc_7B95A2
0x7B9568: test    eax, eax
0x7B956A: jz      short loc_7B9589
0x7B956C: mov     edi, eax
0x7B956E: add     eax, 4
0x7B9571: push    eax; lpAddend
0x7B9572: call    dword ptr ds:0A2807Ch
0x7B9578: test    eax, eax
0x7B957A: jnz     short loc_7B9589
0x7B957C: test    edi, edi
0x7B957E: jz      short loc_7B9589
0x7B9580: mov     eax, [edi]
0x7B9582: mov     edx, [eax]
0x7B9584: push    ebx
0x7B9585: mov     ecx, edi
0x7B9587: call    edx
0x7B9589: test    esi, esi
0x7B958B: mov     ds:0B430ECh, esi
0x7B9591: jz      short loc_7B95A6
0x7B9593: add     esi, 4
0x7B9596: push    esi; lpAddend
0x7B9597: call    dword ptr ds:0A28078h
0x7B959D: mov     eax, ds:0B430ECh
0x7B95A2: test    eax, eax
0x7B95A4: jnz     short loc_7B95BA
0x7B95A6: push    97Ch
0x7B95AB: push    offset a_Bsshadermanag; ".\\BSShaderManager.cpp"
0x7B95B0: push    0
0x7B95B2: call    nullsub_return0_0arg
0x7B95B7: add     esp, 0Ch
0x7B95BA: push    70h ; 'p'; Size
0x7B95BC: call    FormHeapAlloc
0x7B95C1: add     esp, 4
0x7B95C4: mov     [esp+204h+var_1BC], eax
0x7B95C8: test    eax, eax
0x7B95CA: mov     [esp+204h+var_4], 6
0x7B95D5: jz      short loc_7B95EB
0x7B95D7: push    ebx
0x7B95D8: push    ebx
0x7B95D9: push    offset unk_B25E48
0x7B95DE: push    10h
0x7B95E0: push    10h
0x7B95E2: mov     ecx, eax
0x7B95E4: call    NiPixelData__NiPixelData
0x7B95E9: jmp     short loc_7B95ED
0x7B95EB: xor     eax, eax
0x7B95ED: mov     ecx, [eax+5Ch]
0x7B95F0: mov     ecx, [ecx]
0x7B95F2: add     ecx, [eax+50h]
0x7B95F5: or      ebx, 0FFFFFFFFh
0x7B95F8: mov     [esp+204h+var_4], ebx
0x7B95FF: add     ecx, 2
0x7B9602: mov     esi, 10h
0x7B9607: jmp     short loc_7B9610
0x7B9609: align 10h
0x7B9610: mov     edx, 10h
0x7B9615: mov     byte ptr [ecx-2], 80h ; '€'
0x7B9619: mov     byte ptr [ecx-1], 80h ; '€'
0x7B961D: mov     byte ptr [ecx], 0FFh
0x7B9620: add     ecx, 3
0x7B9623: sub     edx, 1
0x7B9626: jnz     short loc_7B9615
0x7B9628: sub     esi, 1
0x7B962B: jnz     short loc_7B9610
0x7B962D: add     dword ptr [eax+68h], 1
0x7B9631: push    offset dword_B256D0; a2
0x7B9636: push    eax; a1
0x7B9637: call    NiSourceTexture__LoadTexturePixelData
0x7B963C: mov     esi, eax
0x7B963E: mov     eax, ds:0B430DCh
0x7B9643: add     esp, 8
0x7B9646: cmp     eax, esi
0x7B9648: jz      short loc_7B9685
0x7B964A: test    eax, eax
0x7B964C: jz      short loc_7B966C
0x7B964E: mov     edi, eax
0x7B9650: add     eax, 4
0x7B9653: push    eax; lpAddend
0x7B9654: call    dword ptr ds:0A2807Ch
0x7B965A: test    eax, eax
0x7B965C: jnz     short loc_7B966C
0x7B965E: test    edi, edi
0x7B9660: jz      short loc_7B966C
0x7B9662: mov     edx, [edi]
0x7B9664: mov     eax, [edx]
0x7B9666: push    1
0x7B9668: mov     ecx, edi
0x7B966A: call    eax
0x7B966C: test    esi, esi
0x7B966E: mov     ds:0B430DCh, esi
0x7B9674: jz      short loc_7B9689
0x7B9676: add     esi, 4
0x7B9679: push    esi; lpAddend
0x7B967A: call    dword ptr ds:0A28078h
0x7B9680: mov     eax, ds:0B430DCh
0x7B9685: test    eax, eax
0x7B9687: jnz     short loc_7B969D
0x7B9689: push    98Ch
0x7B968E: push    offset a_Bsshadermanag; ".\\BSShaderManager.cpp"
0x7B9693: push    0
0x7B9695: call    nullsub_return0_0arg
0x7B969A: add     esp, 0Ch
0x7B969D: push    70h ; 'p'; Size
0x7B969F: call    FormHeapAlloc
0x7B96A4: add     esp, 4
0x7B96A7: mov     [esp+204h+var_1BC], eax
0x7B96AB: test    eax, eax
0x7B96AD: mov     [esp+204h+var_4], 7
0x7B96B8: jz      short loc_7B96D0
0x7B96BA: push    1
0x7B96BC: push    1
0x7B96BE: push    offset unk_B25E00
0x7B96C3: push    10h
0x7B96C5: push    10h
0x7B96C7: mov     ecx, eax
0x7B96C9: call    NiPixelData__NiPixelData
0x7B96CE: jmp     short loc_7B96D2
0x7B96D0: xor     eax, eax
0x7B96D2: mov     ecx, [eax+5Ch]
0x7B96D5: mov     ecx, [ecx]
0x7B96D7: add     ecx, [eax+50h]
0x7B96DA: mov     [esp+204h+var_4], ebx
0x7B96E1: add     ecx, 2
0x7B96E4: mov     esi, 10h
0x7B96E9: lea     esp, [esp+0]
0x7B96F0: mov     edx, 10h
0x7B96F5: mov     byte ptr [ecx-2], 80h ; '€'
0x7B96F9: mov     byte ptr [ecx-1], 80h ; '€'
0x7B96FD: mov     byte ptr [ecx], 0FFh
0x7B9700: mov     byte ptr [ecx+1], 40h ; '@'
0x7B9704: add     ecx, 4
0x7B9707: sub     edx, 1
0x7B970A: jnz     short loc_7B96F5
0x7B970C: sub     esi, 1
0x7B970F: jnz     short loc_7B96F0
0x7B9711: add     dword ptr [eax+68h], 1
0x7B9715: push    offset dword_B256D0; a2
0x7B971A: push    eax; a1
0x7B971B: call    NiSourceTexture__LoadTexturePixelData
0x7B9720: mov     esi, eax
0x7B9722: mov     eax, ds:0B430F0h
0x7B9727: add     esp, 8
0x7B972A: cmp     eax, esi
0x7B972C: jz      short loc_7B9769
0x7B972E: test    eax, eax
0x7B9730: jz      short loc_7B9750
0x7B9732: mov     edi, eax
0x7B9734: add     eax, 4
0x7B9737: push    eax; lpAddend
0x7B9738: call    dword ptr ds:0A2807Ch
0x7B973E: test    eax, eax
0x7B9740: jnz     short loc_7B9750
0x7B9742: test    edi, edi
0x7B9744: jz      short loc_7B9750
0x7B9746: mov     edx, [edi]
0x7B9748: mov     eax, [edx]
0x7B974A: push    1
0x7B974C: mov     ecx, edi
0x7B974E: call    eax
0x7B9750: test    esi, esi
0x7B9752: mov     ds:0B430F0h, esi
0x7B9758: jz      short loc_7B976D
0x7B975A: add     esi, 4
0x7B975D: push    esi; lpAddend
0x7B975E: call    dword ptr ds:0A28078h
0x7B9764: mov     eax, ds:0B430F0h
0x7B9769: test    eax, eax
0x7B976B: jnz     short loc_7B9781
0x7B976D: push    9AFh
0x7B9772: push    offset a_Bsshadermanag; ".\\BSShaderManager.cpp"
0x7B9777: push    0
0x7B9779: call    nullsub_return0_0arg
0x7B977E: add     esp, 0Ch
0x7B9781: push    70h ; 'p'; Size
0x7B9783: call    FormHeapAlloc
0x7B9788: add     esp, 4
0x7B978B: mov     [esp+204h+var_1BC], eax
0x7B978F: test    eax, eax
0x7B9791: mov     [esp+204h+var_4], 8
0x7B979C: jz      short loc_7B97B4
0x7B979E: push    1
0x7B97A0: push    1
0x7B97A2: push    offset unk_B25E48
0x7B97A7: push    10h
0x7B97A9: push    10h
0x7B97AB: mov     ecx, eax
0x7B97AD: call    NiPixelData__NiPixelData
0x7B97B2: jmp     short loc_7B97B6
0x7B97B4: xor     eax, eax
0x7B97B6: mov     ecx, [eax+5Ch]
0x7B97B9: mov     ecx, [ecx]
0x7B97BB: add     ecx, [eax+50h]
0x7B97BE: mov     [esp+204h+var_4], ebx
0x7B97C5: add     ecx, 2
0x7B97C8: mov     esi, 10h
0x7B97CD: lea     ecx, [ecx+0]
0x7B97D0: mov     edx, 10h
0x7B97D5: mov     byte ptr [ecx-2], 0
0x7B97D9: mov     byte ptr [ecx-1], 0
0x7B97DD: mov     byte ptr [ecx], 0
0x7B97E0: add     ecx, 3
0x7B97E3: sub     edx, 1
0x7B97E6: jnz     short loc_7B97D5
0x7B97E8: sub     esi, 1
0x7B97EB: jnz     short loc_7B97D0
0x7B97ED: add     dword ptr [eax+68h], 1
0x7B97F1: push    offset dword_B256D0; a2
0x7B97F6: push    eax; a1
0x7B97F7: call    NiSourceTexture__LoadTexturePixelData
0x7B97FC: mov     esi, eax
0x7B97FE: mov     eax, ds:0B430E0h
0x7B9803: add     esp, 8
0x7B9806: cmp     eax, esi
0x7B9808: jz      short loc_7B9845
0x7B980A: test    eax, eax
0x7B980C: jz      short loc_7B982C
0x7B980E: mov     edi, eax
0x7B9810: add     eax, 4
0x7B9813: push    eax; lpAddend
0x7B9814: call    dword ptr ds:0A2807Ch
0x7B981A: test    eax, eax
0x7B981C: jnz     short loc_7B982C
0x7B981E: test    edi, edi
0x7B9820: jz      short loc_7B982C
0x7B9822: mov     edx, [edi]
0x7B9824: mov     eax, [edx]
0x7B9826: push    1
0x7B9828: mov     ecx, edi
0x7B982A: call    eax
0x7B982C: test    esi, esi
0x7B982E: mov     ds:0B430E0h, esi
0x7B9834: jz      short loc_7B9849
0x7B9836: add     esi, 4
0x7B9839: push    esi; lpAddend
0x7B983A: call    dword ptr ds:0A28078h
0x7B9840: mov     eax, ds:0B430E0h
0x7B9845: test    eax, eax
0x7B9847: jnz     short loc_7B985D
0x7B9849: push    9C0h
0x7B984E: push    offset a_Bsshadermanag; ".\\BSShaderManager.cpp"
0x7B9853: push    0
0x7B9855: call    nullsub_return0_0arg
0x7B985A: add     esp, 0Ch
0x7B985D: push    1; char
0x7B985F: push    1; char
0x7B9861: lea     ecx, [esp+20Ch+var_1BC]
0x7B9865: push    offset aDataTextures_6; "Data\\Textures\\Effects\\WindowEnvironm"...
0x7B986A: push    ecx; int
0x7B986B: call    sub_7B8200
0x7B9870: add     esp, 10h
0x7B9873: mov     edi, eax
0x7B9875: mov     eax, ds:0B43100h
0x7B987A: cmp     eax, [edi]
0x7B987C: mov     [esp+204h+var_4], 9
0x7B9887: jz      short loc_7B98C0
0x7B9889: test    eax, eax
0x7B988B: jz      short loc_7B98AB
0x7B988D: mov     esi, eax
0x7B988F: add     eax, 4
0x7B9892: push    eax; lpAddend
0x7B9893: call    dword ptr ds:0A2807Ch
0x7B9899: test    eax, eax
0x7B989B: jnz     short loc_7B98AB
0x7B989D: test    esi, esi
0x7B989F: jz      short loc_7B98AB
0x7B98A1: mov     edx, [esi]
0x7B98A3: mov     eax, [edx]
0x7B98A5: push    1
0x7B98A7: mov     ecx, esi
0x7B98A9: call    eax
0x7B98AB: mov     eax, [edi]
0x7B98AD: test    eax, eax
0x7B98AF: mov     ds:0B43100h, eax
0x7B98B4: jz      short loc_7B98C0
0x7B98B6: add     eax, 4
0x7B98B9: push    eax; lpAddend
0x7B98BA: call    dword ptr ds:0A28078h
0x7B98C0: mov     esi, [esp+204h+var_1BC]
0x7B98C4: test    esi, esi
0x7B98C6: mov     [esp+204h+var_4], ebx
0x7B98CD: jz      short loc_7B98EB
0x7B98CF: lea     ecx, [esi+4]
0x7B98D2: push    ecx; lpAddend
0x7B98D3: call    dword ptr ds:0A2807Ch
0x7B98D9: test    eax, eax
0x7B98DB: jnz     short loc_7B98EB
0x7B98DD: test    esi, esi
0x7B98DF: jz      short loc_7B98EB
0x7B98E1: mov     edx, [esi]
0x7B98E3: mov     eax, [edx]
0x7B98E5: push    1
0x7B98E7: mov     ecx, esi
0x7B98E9: call    eax
0x7B98EB: push    1; char
0x7B98ED: push    1; char
0x7B98EF: lea     ecx, [esp+20Ch+var_1A8]
0x7B98F3: push    offset aDataTextures_7; "Data\\Textures\\Effects\\WindowEnvironm"...
0x7B98F8: push    ecx; int
0x7B98F9: call    sub_7B8200
0x7B98FE: add     esp, 10h
0x7B9901: mov     edi, eax
0x7B9903: mov     eax, ds:0B430E4h
0x7B9908: cmp     eax, [edi]
0x7B990A: mov     [esp+204h+var_4], 0Ah
0x7B9915: jz      short loc_7B994E
0x7B9917: test    eax, eax
0x7B9919: jz      short loc_7B9939
0x7B991B: mov     esi, eax
0x7B991D: add     eax, 4
0x7B9920: push    eax; lpAddend
0x7B9921: call    dword ptr ds:0A2807Ch
0x7B9927: test    eax, eax
0x7B9929: jnz     short loc_7B9939
0x7B992B: test    esi, esi
0x7B992D: jz      short loc_7B9939
0x7B992F: mov     edx, [esi]
0x7B9931: mov     eax, [edx]
0x7B9933: push    1
0x7B9935: mov     ecx, esi
0x7B9937: call    eax
0x7B9939: mov     eax, [edi]
0x7B993B: test    eax, eax
0x7B993D: mov     ds:0B430E4h, eax
0x7B9942: jz      short loc_7B994E
0x7B9944: add     eax, 4
0x7B9947: push    eax; lpAddend
0x7B9948: call    dword ptr ds:0A28078h
0x7B994E: mov     esi, [esp+204h+var_1A8]
0x7B9952: test    esi, esi
0x7B9954: mov     [esp+204h+var_4], ebx
0x7B995B: jz      short loc_7B9979
0x7B995D: lea     ecx, [esi+4]
0x7B9960: push    ecx; lpAddend
0x7B9961: call    dword ptr ds:0A2807Ch
0x7B9967: test    eax, eax
0x7B9969: jnz     short loc_7B9979
0x7B996B: test    esi, esi
0x7B996D: jz      short loc_7B9979
0x7B996F: mov     edx, [esi]
0x7B9971: mov     eax, [edx]
0x7B9973: push    1
0x7B9975: mov     ecx, esi
0x7B9977: call    eax
0x7B9979: push    70h ; 'p'; Size
0x7B997B: call    FormHeapAlloc
0x7B9980: add     esp, 4
0x7B9983: mov     [esp+204h+var_1BC], eax
0x7B9987: test    eax, eax
0x7B9989: mov     [esp+204h+var_4], 0Bh
0x7B9994: jz      short loc_7B99AE
0x7B9996: push    1
0x7B9998: push    1
0x7B999A: push    offset unk_B25E00
0x7B999F: push    4
0x7B99A1: push    4
0x7B99A3: mov     ecx, eax
0x7B99A5: call    NiPixelData__NiPixelData
0x7B99AA: mov     edi, eax
0x7B99AC: jmp     short loc_7B99B0
0x7B99AE: xor     edi, edi
0x7B99B0: mov     ecx, [edi+5Ch]
0x7B99B3: mov     ecx, [ecx]
0x7B99B5: add     ecx, [edi+50h]
0x7B99B8: cmp     byte ptr ds:0B42D40h, 0
0x7B99BF: mov     [esp+204h+var_4], ebx
0x7B99C6: jz      short loc_7B9A14
0x7B99C8: cmp     byte ptr ds:0B42F3Eh, 0
0x7B99CF: jz      short loc_7B9A14
0x7B99D1: cmp     dword ptr ds:0B42F48h, 2
0x7B99D8: jl      short loc_7B9A14
0x7B99DA: add     ecx, 2
0x7B99DD: mov     esi, 4
0x7B99E2: mov     bl, 0E6h ; 'æ'
0x7B99E4: mov     al, 0D4h ; 'Ô'
0x7B99E6: jmp     short loc_7B99F0
0x7B99E8: align 10h
0x7B99F0: mov     edx, 4
0x7B99F5: mov     [ecx-2], bl
0x7B99F8: mov     [ecx-1], al
0x7B99FB: mov     byte ptr [ecx], 0B8h ; '¸'
0x7B99FE: mov     byte ptr [ecx+1], 40h ; '@'
0x7B9A02: add     ecx, 4
0x7B9A05: sub     edx, 1
0x7B9A08: jnz     short loc_7B99F5
0x7B9A0A: sub     esi, 1
0x7B9A0D: jnz     short loc_7B99F0
0x7B9A0F: or      ebx, 0FFFFFFFFh
0x7B9A12: jmp     short loc_7B9A41
0x7B9A14: add     ecx, 2
0x7B9A17: mov     eax, 4
0x7B9A1C: lea     esp, [esp+0]
0x7B9A20: mov     edx, 4
0x7B9A25: mov     byte ptr [ecx-2], 0
0x7B9A29: mov     byte ptr [ecx-1], 0
0x7B9A2D: mov     byte ptr [ecx], 0
0x7B9A30: mov     byte ptr [ecx+1], 40h ; '@'
0x7B9A34: add     ecx, 4
0x7B9A37: sub     edx, 1
0x7B9A3A: jnz     short loc_7B9A25
0x7B9A3C: sub     eax, 1
0x7B9A3F: jnz     short loc_7B9A20
0x7B9A41: add     dword ptr [edi+68h], 1
0x7B9A45: push    offset dword_B256D0; a2
0x7B9A4A: push    edi; a1
0x7B9A4B: call    NiSourceTexture__LoadTexturePixelData
0x7B9A50: mov     esi, eax
0x7B9A52: mov     eax, ds:0B4311Ch
0x7B9A57: add     esp, 8
0x7B9A5A: cmp     eax, esi
0x7B9A5C: jz      short loc_7B9A99
0x7B9A5E: test    eax, eax
0x7B9A60: jz      short loc_7B9A80
0x7B9A62: mov     edi, eax
0x7B9A64: add     eax, 4
0x7B9A67: push    eax; lpAddend
0x7B9A68: call    dword ptr ds:0A2807Ch
0x7B9A6E: test    eax, eax
0x7B9A70: jnz     short loc_7B9A80
0x7B9A72: test    edi, edi
0x7B9A74: jz      short loc_7B9A80
0x7B9A76: mov     edx, [edi]
0x7B9A78: mov     eax, [edx]
0x7B9A7A: push    1
0x7B9A7C: mov     ecx, edi
0x7B9A7E: call    eax
0x7B9A80: test    esi, esi
0x7B9A82: mov     ds:0B4311Ch, esi
0x7B9A88: jz      short loc_7B9A9D
0x7B9A8A: add     esi, 4
0x7B9A8D: push    esi; lpAddend
0x7B9A8E: call    dword ptr ds:0A28078h
0x7B9A94: mov     eax, ds:0B4311Ch
0x7B9A99: test    eax, eax
0x7B9A9B: jnz     short loc_7B9AB1
0x7B9A9D: push    9E5h
0x7B9AA2: push    offset a_Bsshadermanag; ".\\BSShaderManager.cpp"
0x7B9AA7: push    0
0x7B9AA9: call    nullsub_return0_0arg
0x7B9AAE: add     esp, 0Ch
0x7B9AB1: push    70h ; 'p'; Size
0x7B9AB3: call    FormHeapAlloc
0x7B9AB8: add     esp, 4
0x7B9ABB: mov     [esp+204h+var_1BC], eax
0x7B9ABF: test    eax, eax
0x7B9AC1: mov     [esp+204h+var_4], 0Ch
0x7B9ACC: jz      short loc_7B9AE4
0x7B9ACE: push    1
0x7B9AD0: push    1
0x7B9AD2: push    offset unk_B25E00
0x7B9AD7: push    4
0x7B9AD9: push    4
0x7B9ADB: mov     ecx, eax
0x7B9ADD: call    NiPixelData__NiPixelData
0x7B9AE2: jmp     short loc_7B9AE6
0x7B9AE4: xor     eax, eax
0x7B9AE6: mov     ecx, [eax+5Ch]
0x7B9AE9: mov     ecx, [ecx]
0x7B9AEB: add     ecx, [eax+50h]
0x7B9AEE: mov     [esp+204h+var_4], ebx
0x7B9AF5: add     ecx, 2
0x7B9AF8: mov     esi, 4
0x7B9AFD: lea     ecx, [ecx+0]
0x7B9B00: mov     edx, 4
0x7B9B05: mov     byte ptr [ecx-2], 0
0x7B9B09: mov     byte ptr [ecx-1], 0
0x7B9B0D: mov     byte ptr [ecx], 0
0x7B9B10: mov     byte ptr [ecx+1], 0FFh
0x7B9B14: add     ecx, 4
0x7B9B17: sub     edx, 1
0x7B9B1A: jnz     short loc_7B9B05
0x7B9B1C: sub     esi, 1
0x7B9B1F: jnz     short loc_7B9B00
0x7B9B21: add     dword ptr [eax+68h], 1
0x7B9B25: push    offset dword_B256D0; a2
0x7B9B2A: push    eax; a1
0x7B9B2B: call    NiSourceTexture__LoadTexturePixelData
0x7B9B30: mov     esi, eax
0x7B9B32: mov     eax, ds:0B43120h
0x7B9B37: add     esp, 8
0x7B9B3A: cmp     eax, esi
0x7B9B3C: jz      short loc_7B9B79
0x7B9B3E: test    eax, eax
0x7B9B40: jz      short loc_7B9B60
0x7B9B42: mov     edi, eax
0x7B9B44: add     eax, 4
0x7B9B47: push    eax; lpAddend
0x7B9B48: call    dword ptr ds:0A2807Ch
0x7B9B4E: test    eax, eax
0x7B9B50: jnz     short loc_7B9B60
0x7B9B52: test    edi, edi
0x7B9B54: jz      short loc_7B9B60
0x7B9B56: mov     edx, [edi]
0x7B9B58: mov     eax, [edx]
0x7B9B5A: push    1
0x7B9B5C: mov     ecx, edi
0x7B9B5E: call    eax
0x7B9B60: test    esi, esi
0x7B9B62: mov     ds:0B43120h, esi
0x7B9B68: jz      short loc_7B9B7D
0x7B9B6A: add     esi, 4
0x7B9B6D: push    esi; lpAddend
0x7B9B6E: call    dword ptr ds:0A28078h
0x7B9B74: mov     eax, ds:0B43120h
0x7B9B79: test    eax, eax
0x7B9B7B: jnz     short loc_7B9B91
0x7B9B7D: push    9F6h
0x7B9B82: push    offset a_Bsshadermanag; ".\\BSShaderManager.cpp"
0x7B9B87: push    0
0x7B9B89: call    nullsub_return0_0arg
0x7B9B8E: add     esp, 0Ch
0x7B9B91: push    offset aDataTextures_8; "Data\\Textures\\Effects\\"
0x7B9B96: lea     ecx, [esp+208h+Src]
0x7B9B9D: push    offset aSeyereflection; "%seyereflection.dds"
0x7B9BA2: push    ecx
0x7B9BA3: call    __sprintf
0x7B9BA8: mov     edx, ds:0B43104h
0x7B9BAE: push    offset dword_B256D0
0x7B9BB3: push    edx
0x7B9BB4: lea     eax, [esp+218h+Src]
0x7B9BBB: push    eax
0x7B9BBC: mov     ecx, eax
0x7B9BBE: push    ecx
0x7B9BBF: mov     edx, eax
0x7B9BC1: push    edx
0x7B9BC2: push    eax
0x7B9BC3: push    ecx
0x7B9BC4: push    edx
0x7B9BC5: call    sub_720F80
0x7B9BCA: mov     esi, eax
0x7B9BCC: mov     eax, ds:0B43114h
0x7B9BD1: add     esp, 2Ch
0x7B9BD4: cmp     eax, esi
0x7B9BD6: jz      short loc_7B9C13
0x7B9BD8: test    eax, eax
0x7B9BDA: jz      short loc_7B9BFA
0x7B9BDC: mov     edi, eax
0x7B9BDE: add     eax, 4
0x7B9BE1: push    eax; lpAddend
0x7B9BE2: call    dword ptr ds:0A2807Ch
0x7B9BE8: test    eax, eax
0x7B9BEA: jnz     short loc_7B9BFA
0x7B9BEC: test    edi, edi
0x7B9BEE: jz      short loc_7B9BFA
0x7B9BF0: mov     eax, [edi]
0x7B9BF2: mov     edx, [eax]
0x7B9BF4: push    1
0x7B9BF6: mov     ecx, edi
0x7B9BF8: call    edx
0x7B9BFA: test    esi, esi
0x7B9BFC: mov     ds:0B43114h, esi
0x7B9C02: jz      short loc_7B9C17
0x7B9C04: add     esi, 4
0x7B9C07: push    esi; lpAddend
0x7B9C08: call    dword ptr ds:0A28078h
0x7B9C0E: mov     eax, ds:0B43114h
0x7B9C13: test    eax, eax
0x7B9C15: jnz     short loc_7B9C2B
0x7B9C17: push    0A00h
0x7B9C1C: push    offset a_Bsshadermanag; ".\\BSShaderManager.cpp"
0x7B9C21: push    0
0x7B9C23: call    nullsub_return0_0arg
0x7B9C28: add     esp, 0Ch
0x7B9C2B: push    offset aDataTextures_8; "Data\\Textures\\Effects\\"
0x7B9C30: lea     eax, [esp+208h+Src]
0x7B9C37: push    offset aSreflection_dd; "%sreflection.dds"
0x7B9C3C: push    eax
0x7B9C3D: call    __sprintf
0x7B9C42: mov     ecx, ds:0B43104h
0x7B9C48: push    offset dword_B256D0
0x7B9C4D: push    ecx
0x7B9C4E: lea     edx, [esp+218h+Src]
0x7B9C55: push    edx
0x7B9C56: mov     eax, edx
0x7B9C58: push    eax
0x7B9C59: mov     ecx, edx
0x7B9C5B: push    ecx
0x7B9C5C: push    edx
0x7B9C5D: push    eax
0x7B9C5E: push    ecx
0x7B9C5F: call    sub_720F80
0x7B9C64: mov     esi, eax
0x7B9C66: mov     eax, ds:0B430F4h
0x7B9C6B: add     esp, 2Ch
0x7B9C6E: cmp     eax, esi
0x7B9C70: jz      short loc_7B9CAD
0x7B9C72: test    eax, eax
0x7B9C74: jz      short loc_7B9C94
0x7B9C76: mov     edi, eax
0x7B9C78: add     eax, 4
0x7B9C7B: push    eax; lpAddend
0x7B9C7C: call    dword ptr ds:0A2807Ch
0x7B9C82: test    eax, eax
0x7B9C84: jnz     short loc_7B9C94
0x7B9C86: test    edi, edi
0x7B9C88: jz      short loc_7B9C94
0x7B9C8A: mov     edx, [edi]
0x7B9C8C: mov     eax, [edx]
0x7B9C8E: push    1
0x7B9C90: mov     ecx, edi
0x7B9C92: call    eax
0x7B9C94: test    esi, esi
0x7B9C96: mov     ds:0B430F4h, esi
0x7B9C9C: jz      short loc_7B9CB1
0x7B9C9E: add     esi, 4
0x7B9CA1: push    esi; lpAddend
0x7B9CA2: call    dword ptr ds:0A28078h
0x7B9CA8: mov     eax, ds:0B430F4h
0x7B9CAD: test    eax, eax
0x7B9CAF: jnz     short loc_7B9CC5
0x7B9CB1: push    0A05h
0x7B9CB6: push    offset a_Bsshadermanag; ".\\BSShaderManager.cpp"
0x7B9CBB: push    0
0x7B9CBD: call    nullsub_return0_0arg
0x7B9CC2: add     esp, 0Ch
0x7B9CC5: push    offset aDataTextures_8; "Data\\Textures\\Effects\\"
0x7B9CCA: lea     ecx, [esp+208h+Src]
0x7B9CD1: push    offset aSaniso_dds; "%saniso.dds"
0x7B9CD6: push    ecx
0x7B9CD7: call    __sprintf
0x7B9CDC: push    1; char
0x7B9CDE: lea     edx, [esp+214h+Src]
0x7B9CE5: push    offset dword_B256D0; int
0x7B9CEA: push    edx; Src
0x7B9CEB: call    NiSourceTexture__LoadTextureByFilename
0x7B9CF0: mov     esi, eax
0x7B9CF2: mov     eax, ds:0B430F8h
0x7B9CF7: add     esp, 18h
0x7B9CFA: cmp     eax, esi
0x7B9CFC: jz      short loc_7B9D34
0x7B9CFE: test    eax, eax
0x7B9D00: jz      short loc_7B9D20
0x7B9D02: mov     edi, eax
0x7B9D04: add     eax, 4
0x7B9D07: push    eax; lpAddend
0x7B9D08: call    dword ptr ds:0A2807Ch
0x7B9D0E: test    eax, eax
0x7B9D10: jnz     short loc_7B9D20
0x7B9D12: test    edi, edi
0x7B9D14: jz      short loc_7B9D20
0x7B9D16: mov     eax, [edi]
0x7B9D18: mov     edx, [eax]
0x7B9D1A: push    1
0x7B9D1C: mov     ecx, edi
0x7B9D1E: call    edx
0x7B9D20: test    esi, esi
0x7B9D22: mov     ds:0B430F8h, esi
0x7B9D28: jz      short loc_7B9D34
0x7B9D2A: add     esi, 4
0x7B9D2D: push    esi; lpAddend
0x7B9D2E: call    dword ptr ds:0A28078h
0x7B9D34: push    offset aDataTextures_8; "Data\\Textures\\Effects\\"
0x7B9D39: lea     eax, [esp+208h+Src]
0x7B9D40: push    offset aSblooddecal_dd; "%sblooddecal.dds"
0x7B9D45: push    eax
0x7B9D46: call    __sprintf
0x7B9D4B: push    1; char
0x7B9D4D: lea     ecx, [esp+214h+Src]
0x7B9D54: push    offset dword_B256D0; int
0x7B9D59: push    ecx; Src
0x7B9D5A: call    NiSourceTexture__LoadTextureByFilename
0x7B9D5F: mov     esi, eax
0x7B9D61: mov     eax, ds:0B43128h
0x7B9D66: add     esp, 18h
0x7B9D69: cmp     eax, esi
0x7B9D6B: jz      short loc_7B9DA3
0x7B9D6D: test    eax, eax
0x7B9D6F: jz      short loc_7B9D8F
0x7B9D71: mov     edi, eax
0x7B9D73: add     eax, 4
0x7B9D76: push    eax; lpAddend
0x7B9D77: call    dword ptr ds:0A2807Ch
0x7B9D7D: test    eax, eax
0x7B9D7F: jnz     short loc_7B9D8F
0x7B9D81: test    edi, edi
0x7B9D83: jz      short loc_7B9D8F
0x7B9D85: mov     edx, [edi]
0x7B9D87: mov     eax, [edx]
0x7B9D89: push    1
0x7B9D8B: mov     ecx, edi
0x7B9D8D: call    eax
0x7B9D8F: test    esi, esi
0x7B9D91: mov     ds:0B43128h, esi
0x7B9D97: jz      short loc_7B9DA3
0x7B9D99: add     esi, 4
0x7B9D9C: push    esi; lpAddend
0x7B9D9D: call    dword ptr ds:0A28078h
0x7B9DA3: cmp     dword ptr ds:0B430E8h, 0
0x7B9DAA: jnz     short loc_7B9E1B
0x7B9DAC: push    offset aDataTextures_8; "Data\\Textures\\Effects\\"
0x7B9DB1: lea     ecx, [esp+208h+Src]
0x7B9DB8: push    offset aSterrainnoise_; "%sterrainnoise.dds"
0x7B9DBD: push    ecx
0x7B9DBE: call    __sprintf
0x7B9DC3: push    1; char
0x7B9DC5: lea     edx, [esp+214h+Src]
0x7B9DCC: push    offset dword_B256D0; int
0x7B9DD1: push    edx; Src
0x7B9DD2: call    NiSourceTexture__LoadTextureByFilename
0x7B9DD7: mov     esi, eax
0x7B9DD9: mov     eax, ds:0B430E8h
0x7B9DDE: add     esp, 18h
0x7B9DE1: cmp     eax, esi
0x7B9DE3: jz      short loc_7B9E1B
0x7B9DE5: test    eax, eax
0x7B9DE7: jz      short loc_7B9E07
0x7B9DE9: mov     edi, eax
0x7B9DEB: add     eax, 4
0x7B9DEE: push    eax; lpAddend
0x7B9DEF: call    dword ptr ds:0A2807Ch
0x7B9DF5: test    eax, eax
0x7B9DF7: jnz     short loc_7B9E07
0x7B9DF9: test    edi, edi
0x7B9DFB: jz      short loc_7B9E07
0x7B9DFD: mov     eax, [edi]
0x7B9DFF: mov     edx, [eax]
0x7B9E01: push    1
0x7B9E03: mov     ecx, edi
0x7B9E05: call    edx
0x7B9E07: test    esi, esi
0x7B9E09: mov     ds:0B430E8h, esi
0x7B9E0F: jz      short loc_7B9E1B
0x7B9E11: add     esi, 4
0x7B9E14: push    esi; lpAddend
0x7B9E15: call    dword ptr ds:0A28078h
0x7B9E1B: push    70h ; 'p'; Size
0x7B9E1D: call    FormHeapAlloc
0x7B9E22: add     esp, 4
0x7B9E25: mov     [esp+204h+var_1BC], eax
0x7B9E29: test    eax, eax
0x7B9E2B: mov     [esp+204h+var_4], 0Dh
0x7B9E36: jz      short loc_7B9E56
0x7B9E38: push    1
0x7B9E3A: push    1
0x7B9E3C: push    offset unk_B25E48
0x7B9E41: push    80h ; '€'
0x7B9E46: push    80h ; '€'
0x7B9E4B: mov     ecx, eax
0x7B9E4D: call    NiPixelData__NiPixelData
0x7B9E52: mov     ebx, eax
0x7B9E54: jmp     short loc_7B9E58
0x7B9E56: xor     ebx, ebx
0x7B9E58: mov     eax, [ebx+5Ch]
0x7B9E5B: mov     eax, [eax]
0x7B9E5D: add     eax, [ebx+50h]
0x7B9E60: mov     [esp+204h+var_4], 0FFFFFFFFh
0x7B9E6B: mov     [esp+204h+var_1AC], 0
0x7B9E73: lea     esi, [eax+2]
0x7B9E76: fld     qword ptr ds:0A8F550h
0x7B9E7C: xor     edi, edi
0x7B9E7E: fld1
0x7B9E80: mov     [esp+204h+var_1CC], edi
0x7B9E84: fild    [esp+204h+var_1AC]
0x7B9E88: fstp    [esp+204h+var_1A0]
0x7B9E8C: fld     [esp+204h+var_1A0]
0x7B9E90: jmp     short loc_7B9EA2
0x7B9E92: fld1
0x7B9E94: fld     [esp+204h+var_1A0]
0x7B9E98: fld     qword ptr ds:0A8F550h
0x7B9E9E: fxch    st(2)
0x7B9EA0: fxch    st(1)
0x7B9EA2: fild    [esp+204h+var_1CC]
0x7B9EA6: fstp    [esp+204h+var_1BC]
0x7B9EAA: fld     [esp+204h+var_1BC]
0x7B9EAE: fcom    st(3)
0x7B9EB0: fnstsw  ax
0x7B9EB2: test    ah, 5
0x7B9EB5: jp      short loc_7B9EC7
0x7B9EB7: fdiv    st, st(3)
0x7B9EB9: fld1
0x7B9EBB: fld     st
0x7B9EBD: fsubrp  st(2), st
0x7B9EBF: fxch    st(1)
0x7B9EC1: fstp    [esp+204h+var_1B4]
0x7B9EC5: jmp     short loc_7B9ED1
0x7B9EC7: fsub    st, st(3)
0x7B9EC9: fdiv    st, st(3)
0x7B9ECB: fstp    [esp+204h+var_1B4]
0x7B9ECF: fld1
0x7B9ED1: fxch    st(1)
0x7B9ED3: fcom    st(3)
0x7B9ED5: fnstsw  ax
0x7B9ED7: test    ah, 5
0x7B9EDA: jp      short loc_7B9EE4
0x7B9EDC: fdivrp  st(3), st
0x7B9EDE: fld     st
0x7B9EE0: fsubrp  st(3), st
0x7B9EE2: jmp     short loc_7B9EE8
0x7B9EE4: fsub    st, st(3)
0x7B9EE6: fdivrp  st(3), st
0x7B9EE8: fxch    st(2)
0x7B9EEA: fstp    [esp+204h+var_1B8]
0x7B9EEE: fld     [esp+204h+var_1B8]
0x7B9EF2: fld     [esp+204h+var_1B4]
0x7B9EF6: fmul    st, st
0x7B9EF8: fld     st(1)
0x7B9EFA: fmulp   st(2), st
0x7B9EFC: faddp   st(1), st
0x7B9EFE: fstp    [esp+204h+var_1BC]
0x7B9F02: fld     [esp+204h+var_1BC]
0x7B9F06: fcom    st(2)
0x7B9F08: fnstsw  ax
0x7B9F0A: test    ah, 41h
0x7B9F0D: jnz     short loc_7B9F17
0x7B9F0F: fxch    st(1)
0x7B9F11: fst     [esp+204h+var_1B8]
0x7B9F15: jmp     short loc_7B9F1D
0x7B9F17: fst     [esp+204h+var_1B8]
0x7B9F1B: fxch    st(1)
0x7B9F1D: fld     [esp+204h+var_1B8]
0x7B9F21: fcomp   qword ptr ds:0A2FC68h
0x7B9F27: fnstsw  ax
0x7B9F29: test    ah, 5
0x7B9F2C: jp      short loc_7B9F38
0x7B9F2E: fstp    st(1)
0x7B9F30: fstp    st(1)
0x7B9F32: fstp    st
0x7B9F34: fldz
0x7B9F36: jmp     short loc_7B9F49
0x7B9F38: fxch    st(2)
0x7B9F3A: fcomp   st(1)
0x7B9F3C: fnstsw  ax
0x7B9F3E: test    ah, 5
0x7B9F41: jp      short loc_7B9F47
0x7B9F43: fstp    st
0x7B9F45: jmp     short loc_7B9F49
0x7B9F47: fstp    st(1)
0x7B9F49: push    0
0x7B9F4B: fstp    [esp+208h+var_1C0]
0x7B9F4F: call    sub_404F00
0x7B9F54: fld     [esp+208h+var_1C0]
0x7B9F58: add     esp, 4
0x7B9F5B: cmp     eax, 1
0x7B9F5E: jnz     short loc_7B9F64
0x7B9F60: fld1
0x7B9F62: fsubrp  st(1), st
0x7B9F64: fstp    [esp+204h+var_1BC]
0x7B9F68: sub     esp, 8
0x7B9F6B: fld     [esp+20Ch+var_1BC]
0x7B9F6F: fmul    qword ptr ds:0A3DDD8h
0x7B9F75: fstp    [esp+20Ch+var_1BC]
0x7B9F79: fld     [esp+20Ch+var_1BC]
0x7B9F7D: fstp    [esp+20Ch+var_20C]; double
0x7B9F80: call    _floor
0x7B9F85: fnstcw  word ptr [esp+20Ch+var_1CC]
0x7B9F89: add     edi, 1
0x7B9F8C: movzx   eax, word ptr [esp+20Ch+var_1CC]
0x7B9F91: or      eax, 0C00h
0x7B9F96: mov     [esp+20Ch+var_1BC], eax
0x7B9F9A: add     esp, 8
0x7B9F9D: fldcw   word ptr [esp+204h+var_1BC]
0x7B9FA1: add     esi, 3
0x7B9FA4: cmp     edi, 80h ; '€'
0x7B9FAA: fistp   [esp+204h+var_1BC]
0x7B9FAE: mov     al, byte ptr [esp+204h+var_1BC]
0x7B9FB2: mov     [esi-5], al
0x7B9FB5: mov     [esi-4], al
0x7B9FB8: mov     [esi-3], al
0x7B9FBB: fldcw   word ptr [esp+204h+var_1CC]
0x7B9FBF: mov     [esp+204h+var_1CC], edi
0x7B9FC3: jl      loc_7B9E92
0x7B9FC9: mov     eax, [esp+204h+var_1AC]
0x7B9FCD: add     eax, 1
0x7B9FD0: cmp     eax, 80h ; '€'
0x7B9FD5: mov     [esp+204h+var_1AC], eax
0x7B9FD9: jl      loc_7B9E76
0x7B9FDF: add     dword ptr [ebx+68h], 1
0x7B9FE3: push    offset dword_B256D0; a2
0x7B9FE8: push    ebx; a1
0x7B9FE9: call    NiSourceTexture__LoadTexturePixelData
0x7B9FEE: mov     esi, eax
0x7B9FF0: mov     eax, ds:0B43110h
0x7B9FF5: add     esp, 8
0x7B9FF8: cmp     eax, esi
0x7B9FFA: jz      short loc_7BA038
0x7B9FFC: test    eax, eax
0x7B9FFE: jz      short loc_7BA01E
0x7BA000: mov     edi, eax
0x7BA002: add     eax, 4
0x7BA005: push    eax; lpAddend
0x7BA006: call    dword ptr ds:0A2807Ch
0x7BA00C: test    eax, eax
0x7BA00E: jnz     short loc_7BA01E
0x7BA010: test    edi, edi
0x7BA012: jz      short loc_7BA01E
0x7BA014: mov     edx, [edi]
0x7BA016: mov     eax, [edx]
0x7BA018: push    1
0x7BA01A: mov     ecx, edi
0x7BA01C: call    eax
0x7BA01E: test    esi, esi
0x7BA020: mov     eax, esi
0x7BA022: mov     ds:0B43110h, eax
0x7BA027: jz      short loc_7BA038
0x7BA029: add     esi, 4
0x7BA02C: push    esi; lpAddend
0x7BA02D: call    dword ptr ds:0A28078h
0x7BA033: mov     eax, ds:0B43110h
0x7BA038: mov     esi, ds:0B430D4h
0x7BA03E: cmp     esi, eax
0x7BA040: jz      short loc_7BA07A
0x7BA042: test    esi, esi
0x7BA044: jz      short loc_7BA067
0x7BA046: lea     ecx, [esi+4]
0x7BA049: push    ecx; lpAddend
0x7BA04A: call    dword ptr ds:0A2807Ch
0x7BA050: test    eax, eax
0x7BA052: jnz     short loc_7BA062
0x7BA054: test    esi, esi
0x7BA056: jz      short loc_7BA062
0x7BA058: mov     edx, [esi]
0x7BA05A: mov     eax, [edx]
0x7BA05C: push    1
0x7BA05E: mov     ecx, esi
0x7BA060: call    eax
0x7BA062: mov     eax, ds:0B43110h
0x7BA067: test    eax, eax
0x7BA069: mov     ds:0B430D4h, eax
0x7BA06E: jz      short loc_7BA07A
0x7BA070: add     eax, 4
0x7BA073: push    eax; lpAddend
0x7BA074: call    dword ptr ds:0A28078h
0x7BA07A: call    sub_7A98E0
0x7BA07F: mov     edi, eax
0x7BA081: mov     eax, ds:0B43118h
0x7BA086: cmp     eax, edi
0x7BA088: jz      short loc_7BA0C0
0x7BA08A: test    eax, eax
0x7BA08C: jz      short loc_7BA0AC
0x7BA08E: mov     esi, eax
0x7BA090: add     eax, 4
0x7BA093: push    eax; lpAddend
0x7BA094: call    dword ptr ds:0A2807Ch
0x7BA09A: test    eax, eax
0x7BA09C: jnz     short loc_7BA0AC
0x7BA09E: test    esi, esi
0x7BA0A0: jz      short loc_7BA0AC
0x7BA0A2: mov     edx, [esi]
0x7BA0A4: mov     eax, [edx]
0x7BA0A6: push    1
0x7BA0A8: mov     ecx, esi
0x7BA0AA: call    eax
0x7BA0AC: test    edi, edi
0x7BA0AE: mov     ds:0B43118h, edi
0x7BA0B4: jz      short loc_7BA0C0
0x7BA0B6: add     edi, 4
0x7BA0B9: push    edi; lpAddend
0x7BA0BA: call    dword ptr ds:0A28078h
0x7BA0C0: mov     ecx, [esp+204h+var_C]
0x7BA0C7: mov     large fs:0, ecx
0x7BA0CE: pop     ecx
0x7BA0CF: pop     edi
0x7BA0D0: pop     esi
0x7BA0D1: pop     ebx
0x7BA0D2: mov     ecx, [esp+1F4h+var_44]
0x7BA0D9: xor     ecx, esp
0x7BA0DB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7BA0E0: mov     esp, ebp
0x7BA0E2: pop     ebp
0x7BA0E3: retn
