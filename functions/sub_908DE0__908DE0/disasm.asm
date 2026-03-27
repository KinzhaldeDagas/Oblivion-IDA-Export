0x908DE0: push    ebp
0x908DE1: mov     ebp, esp
0x908DE3: and     esp, 0FFFFFFF0h
0x908DE6: sub     esp, 4A4h
0x908DEC: mov     eax, ds:0B30AACh
0x908DF1: mov     ecx, large fs:2Ch
0x908DF8: mov     edx, ds:0BA9DE4h
0x908DFE: push    ebx
0x908DFF: push    esi
0x908E00: mov     [esp+4ACh+var_4], eax
0x908E07: mov     eax, [ecx+edx*4]
0x908E0A: mov     esi, [eax+1A4h]
0x908E10: push    edi
0x908E11: cmp     esi, [eax+1A8h]
0x908E17: jnb     short loc_908E44
0x908E19: mov     esi, eax
0x908E1B: mov     ecx, [esi+1A4h]
0x908E21: mov     dword ptr [ecx], offset aLtbvtree; "LtBvTree"
0x908E27: mov     dword ptr [ecx+0Ch], offset aQuerytree; "QueryTree"
0x908E2E: rdtsc
0x908E30: mov     [esp+4B0h+var_49C], eax
0x908E34: mov     eax, [esp+4B0h+var_49C]
0x908E38: mov     [ecx+4], eax
0x908E3B: add     ecx, 10h
0x908E3E: mov     [esi+1A4h], ecx
0x908E44: mov     esi, [ebp+arg_0]
0x908E47: mov     ecx, [esi+8]
0x908E4A: mov     ebx, [ebp+arg_4]
0x908E4D: mov     edx, [ebx+8]
0x908E50: push    ecx
0x908E51: push    edx
0x908E52: lea     ecx, [esp+4B8h+var_460]
0x908E56: call    sub_8B1FF0
0x908E5B: mov     edi, [ebp+arg_8]
0x908E5E: mov     ecx, [esi]
0x908E60: mov     eax, [ecx]
0x908E62: lea     edx, [esp+4B0h+var_480]
0x908E66: push    edx
0x908E67: mov     edx, [edi+8]
0x908E6A: push    edx
0x908E6B: lea     edx, [esp+4B8h+var_460]
0x908E6F: push    edx
0x908E70: call    dword ptr [eax+0Ch]
0x908E73: mov     ebx, [ebx]
0x908E75: lea     eax, [esp+4B0h+var_414]
0x908E7C: mov     [esp+4B0h+var_420], eax
0x908E83: lea     eax, [esp+4B0h+var_420]
0x908E8A: push    eax
0x908E8B: lea     ecx, [esp+4B4h+var_480]
0x908E8F: mov     [esp+4B4h+var_41C], 0
0x908E9A: mov     [esp+4B4h+var_418], 80000080h
0x908EA5: mov     edx, [ebx]
0x908EA7: push    ecx
0x908EA8: mov     ecx, ebx
0x908EAA: call    dword ptr [edx+24h]
0x908EAD: mov     edx, ds:0BA9DE4h
0x908EB3: mov     ecx, large fs:2Ch
0x908EBA: mov     eax, [ecx+edx*4]
0x908EBD: mov     edx, [eax+1A4h]
0x908EC3: cmp     edx, [eax+1A8h]
0x908EC9: jnb     short loc_908EFD
0x908ECB: mov     eax, ds:0BA9DE4h
0x908ED0: mov     ecx, [ecx+eax*4]
0x908ED3: mov     [esp+4B0h+var_498], ecx
0x908ED7: mov     ecx, [ecx+1A4h]
0x908EDD: mov     dword ptr [ecx], offset aStnarrowphase; "StNarrowPhase"
0x908EE3: rdtsc
0x908EE5: mov     [esp+4B0h+var_49C], eax
0x908EE9: mov     edx, [esp+4B0h+var_49C]
0x908EED: mov     eax, [esp+4B0h+var_498]
0x908EF1: mov     [ecx+4], edx
0x908EF4: add     ecx, 0Ch
0x908EF7: mov     [eax+1A4h], ecx
0x908EFD: mov     ecx, [esi]
0x908EFF: mov     edx, [ecx]
0x908F01: call    dword ptr [edx+8]
0x908F04: mov     esi, [esp+4B0h+var_420]
0x908F0B: mov     ecx, [ebp+arg_4]
0x908F0E: mov     ebx, [ebx+0Ch]
0x908F11: mov     [esp+4B0h+var_498], eax
0x908F15: mov     eax, [esp+4B0h+var_41C]
0x908F1C: lea     eax, [esi+eax*4]
0x908F1F: cmp     esi, eax
0x908F21: mov     [esp+4B0h+var_484], ecx
0x908F25: mov     ecx, [ecx+8]
0x908F28: mov     [esp+4B0h+var_49C], eax
0x908F2C: mov     [esp+4B0h+var_488], ecx
0x908F30: jz      loc_908FB7
0x908F36: mov     eax, [esi]
0x908F38: mov     ecx, [edi+4]
0x908F3B: mov     edx, [ecx]
0x908F3D: push    eax
0x908F3E: mov     eax, [ebp+arg_4]
0x908F41: push    ebx
0x908F42: push    eax
0x908F43: mov     eax, [ebp+arg_0]
0x908F46: push    eax
0x908F47: push    edi
0x908F48: lea     eax, [esp+4C4h+var_491]
0x908F4C: push    eax
0x908F4D: call    dword ptr [edx]
0x908F4F: cmp     byte ptr [eax], 0
0x908F52: jz      short loc_908FA5
0x908F54: mov     ecx, [esi]
0x908F56: mov     edx, [ebx]
0x908F58: lea     eax, [esp+4B0h+var_210]
0x908F5F: push    eax
0x908F60: push    ecx
0x908F61: mov     ecx, ebx
0x908F63: call    dword ptr [edx+28h]
0x908F66: mov     ecx, [esi]
0x908F68: mov     [esp+4B0h+var_48C], ecx
0x908F6C: mov     [esp+4B0h+var_490], eax
0x908F70: mov     edx, [eax]
0x908F72: mov     ecx, eax
0x908F74: call    dword ptr [edx+8]
0x908F77: mov     edx, [esp+4B0h+var_498]
0x908F7B: mov     ecx, [edi]
0x908F7D: shl     edx, 5
0x908F80: add     edx, ecx
0x908F82: movzx   eax, byte ptr [edx+eax+190h]
0x908F8A: mov     edx, [ebp+arg_C]
0x908F8D: push    edx
0x908F8E: push    edi
0x908F8F: lea     edx, [esp+4B8h+var_490]
0x908F93: push    edx
0x908F94: mov     edx, [ebp+arg_0]
0x908F97: lea     eax, [eax+eax*4]
0x908F9A: push    edx
0x908F9B: call    dword ptr [ecx+eax*4+998h]
0x908FA2: add     esp, 10h
0x908FA5: mov     eax, [esp+4B0h+var_49C]
0x908FA9: add     esi, 4
0x908FAC: cmp     esi, eax
0x908FAE: jnz     short loc_908F36
0x908FB0: mov     esi, [esp+4B0h+var_420]
0x908FB7: mov     edi, large fs:2Ch
0x908FBE: mov     ebx, ds:0BA9DE4h
0x908FC4: mov     eax, [edi+ebx*4]
0x908FC7: mov     ecx, [eax+1A4h]
0x908FCD: cmp     ecx, [eax+1A8h]
0x908FD3: jnb     short loc_909000
0x908FD5: mov     esi, eax
0x908FD7: mov     ecx, [esi+1A4h]
0x908FDD: mov     dword ptr [ecx], offset aLt_0; "lt"
0x908FE3: rdtsc
0x908FE5: mov     [esp+4B0h+var_498], eax
0x908FE9: mov     edx, [esp+4B0h+var_498]
0x908FED: mov     [ecx+4], edx
0x908FF0: add     ecx, 0Ch
0x908FF3: mov     [esi+1A4h], ecx
0x908FF9: mov     esi, [esp+4B0h+var_420]
0x909000: mov     edx, [esp+4B0h+var_418]
0x909007: test    edx, edx
0x909009: js      short loc_909031
0x90900B: mov     eax, [edi+ebx*4]
0x90900E: mov     eax, [eax+19Ch]
0x909014: test    eax, eax
0x909016: jnz     short loc_90901D
0x909018: mov     eax, ds:0BA7D9Ch
0x90901D: and     edx, 3FFFFFFFh
0x909023: push    14h
0x909025: shl     edx, 2
0x909028: push    edx
0x909029: push    esi
0x90902A: mov     ecx, eax
0x90902C: call    sub_8A75D0
0x909031: mov     ecx, [esp+4B0h+var_4]
0x909038: call    @__security_check_cookie@4; __security_check_cookie(x)
0x90903D: pop     edi
0x90903E: pop     esi
0x90903F: pop     ebx
0x909040: mov     esp, ebp
0x909042: pop     ebp
0x909043: retn
