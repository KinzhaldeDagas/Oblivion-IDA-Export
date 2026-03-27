0x676A40: sub     esp, 10h
0x676A43: push    ebx
0x676A44: push    ebp
0x676A45: push    esi
0x676A46: push    edi
0x676A47: mov     [esp+20h+var_10], ecx
0x676A4B: xor     ebp, ebp
0x676A4D: lea     ecx, [ecx+0]
0x676A50: test    ebp, ebp
0x676A52: jnz     loc_676B1F
0x676A58: mov     ecx, [esp+20h+var_10]; this
0x676A5C: push    ebp; a2
0x676A5D: call    sub_673A50
0x676A62: mov     ecx, eax; this
0x676A64: call    sub_7616D0
0x676A69: mov     ebx, eax
0x676A6B: test    ebx, ebx
0x676A6D: jz      loc_676B1F
0x676A73: mov     ecx, [ebx]
0x676A75: test    ecx, ecx
0x676A77: jz      loc_676B1F
0x676A7D: mov     eax, [ecx]
0x676A7F: mov     edx, [eax+190h]
0x676A85: xor     esi, esi
0x676A87: call    edx
0x676A89: test    al, al
0x676A8B: jz      short loc_676A8F
0x676A8D: mov     esi, [ebx]
0x676A8F: test    esi, esi
0x676A91: mov     ebx, [ebx+4]
0x676A94: jz      loc_676B17
0x676A9A: mov     eax, [esi]
0x676A9C: mov     edx, [eax+380h]
0x676AA2: mov     ecx, esi
0x676AA4: call    edx
0x676AA6: test    eax, eax
0x676AA8: jnz     short loc_676B17
0x676AAA: push    eax
0x676AAB: mov     eax, ds:0B333C4h
0x676AB0: push    eax
0x676AB1: mov     ecx, esi
0x676AB3: call    TesObjectREF_GetDistance
0x676AB8: fcomp   dword ptr ds:0A47800h
0x676ABE: fnstsw  ax
0x676AC0: test    ah, 5
0x676AC3: jp      short loc_676B17
0x676AC5: mov     ecx, esi; this
0x676AC7: call    TESObjectREFR_GetParentCell
0x676ACC: mov     edi, eax
0x676ACE: test    edi, edi
0x676AD0: jz      short loc_676B17
0x676AD2: mov     edx, [esi]
0x676AD4: mov     eax, [edx+174h]
0x676ADA: mov     ecx, esi
0x676ADC: call    eax
0x676ADE: mov     edx, [eax]
0x676AE0: push    0; int
0x676AE2: push    0; float
0x676AE4: push    0; float
0x676AE6: push    edi; int
0x676AE7: sub     esp, 0Ch
0x676AEA: mov     ecx, esp
0x676AEC: mov     [ecx], edx
0x676AEE: mov     edx, [eax+4]
0x676AF1: mov     eax, [eax+8]
0x676AF4: mov     [ecx+4], edx
0x676AF7: mov     [ecx+8], eax
0x676AFA: lea     ecx, [esp+3Ch+var_C]
0x676AFE: push    ecx; int
0x676AFF: mov     ecx, esi
0x676B01: call    sub_5E2E20
0x676B06: mov     edx, [esi]
0x676B08: mov     edx, [edx+1CCh]
0x676B0E: lea     eax, [esp+20h+var_C]
0x676B12: push    eax
0x676B13: mov     ecx, esi
0x676B15: call    edx
0x676B17: test    ebx, ebx
0x676B19: jnz     loc_676A73
0x676B1F: add     ebp, 1
0x676B22: cmp     ebp, 4
0x676B25: jl      loc_676A50
0x676B2B: pop     edi
0x676B2C: pop     esi
0x676B2D: pop     ebp
0x676B2E: pop     ebx
0x676B2F: add     esp, 10h
0x676B32: retn
