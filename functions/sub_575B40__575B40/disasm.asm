0x575B40: sub     esp, 4D4h
0x575B46: mov     eax, ds:0B30AACh
0x575B4B: xor     eax, esp
0x575B4D: mov     [esp+4D4h+var_4], eax
0x575B54: mov     eax, [esp+4D4h+arg_4]
0x575B5B: push    ebx
0x575B5C: push    ebp
0x575B5D: mov     ebp, [esp+4DCh+arg_0]
0x575B64: xor     ebx, ebx
0x575B66: cmp     [ebp+0], ebx
0x575B69: mov     [esp+4DCh+var_4AC], ecx
0x575B6D: mov     [esp+4DCh+var_4C8], eax
0x575B71: jz      loc_5763EC
0x575B77: cmp     [eax+8], ebx
0x575B7A: mov     edx, 7FFFFFFFh
0x575B7F: jg      short loc_575B84
0x575B81: mov     [eax+8], edx
0x575B84: cmp     [eax+0Ch], ebx
0x575B87: jg      short loc_575B8C
0x575B89: mov     [eax+0Ch], edx
0x575B8C: cmp     [eax+14h], ebx
0x575B8F: jg      short loc_575B94
0x575B91: mov     [eax+14h], edx
0x575B94: cmp     dword ptr [ecx+8], 3
0x575B98: mov     [esp+4DCh+var_49C], ebx
0x575B9C: jnz     short loc_575BA6
0x575B9E: mov     [esp+4DCh+var_49C], 6
0x575BA6: mov     eax, [ecx+38h]
0x575BA9: fld     dword ptr [eax+850h]
0x575BAF: mov     [esp+4DCh+var_4A8], ebx
0x575BB3: mov     [esp+4DCh+var_498], ebx
0x575BB7: mov     [esp+4DCh+var_48C], ebx
0x575BBB: mov     [esp+4DCh+var_4BC], ebx
0x575BBF: call    Double_To_SInt32
0x575BC4: mov     [esp+4DCh+var_4C0], eax
0x575BC8: movzx   eax, word ptr [ebp+4]
0x575BCC: cmp     ax, 0FFFFh
0x575BD0: mov     [esp+4DCh+var_4B8], 1
0x575BD8: jnz     short loc_575BF1
0x575BDA: mov     eax, [ebp+0]
0x575BDD: lea     edx, [eax+1]
0x575BE0: mov     cl, [eax]
0x575BE2: add     eax, 1
0x575BE5: test    cl, cl
0x575BE7: jnz     short loc_575BE0
0x575BE9: sub     eax, edx
0x575BEB: mov     [esp+4DCh+var_4A4], eax
0x575BEF: jmp     short loc_575BF8
0x575BF1: movzx   ecx, ax
0x575BF4: mov     [esp+4DCh+var_4A4], ecx
0x575BF8: mov     edx, [esp+4DCh+var_4C8]
0x575BFC: mov     eax, [edx+14h]
0x575BFF: push    esi
0x575C00: mov     esi, [esp+4E0h+var_4A4]
0x575C04: push    edi
0x575C05: push    1
0x575C07: add     esi, 4
0x575C0A: push    esi
0x575C0B: mov     ecx, offset FormHeap
0x575C10: mov     [esp+4ECh+var_488], eax
0x575C14: call    j_MemoryHeap_Alloc
0x575C19: push    esi
0x575C1A: mov     edi, eax
0x575C1C: push    0
0x575C1E: push    edi
0x575C1F: mov     [esp+4F0h+var_4C4], edi
0x575C23: call    __memset
0x575C28: add     esp, 0Ch
0x575C2B: push    1
0x575C2D: push    esi
0x575C2E: mov     ecx, offset FormHeap
0x575C33: mov     dword ptr [esp+4ECh+var_490], edi
0x575C37: call    j_MemoryHeap_Alloc
0x575C3C: push    esi
0x575C3D: mov     edi, eax
0x575C3F: push    0
0x575C41: push    edi
0x575C42: call    __memset
0x575C47: mov     ecx, [ebp+0]
0x575C4A: mov     edx, [esp+4F0h+var_4C4]
0x575C4E: push    ecx
0x575C4F: push    offset aS; "%s"
0x575C54: push    edx
0x575C55: call    __sprintf
0x575C5A: xor     eax, eax
0x575C5C: add     esp, 18h
0x575C5F: xor     dl, dl
0x575C61: cmp     [esp+4E4h+var_4A4], eax
0x575C65: mov     [esp+4E4h+Src], eax
0x575C69: mov     [esp+4E4h+var_4B0], esi
0x575C6D: mov     [esp+4E4h+var_4D1], bl
0x575C71: mov     [esp+4E4h+var_404], bl
0x575C78: mov     [esp+4E4h+var_4CC], eax
0x575C7C: jbe     loc_575E5F
0x575C82: mov     ebp, [esp+4E4h+var_4C4]
0x575C86: mov     ecx, [esp+4E4h+var_4CC]
0x575C8A: mov     al, [ecx+ebp]
0x575C8D: cmp     al, 26h ; '&'
0x575C8F: lea     esi, [ecx+ebp]
0x575C92: mov     [esp+4E4h+var_494], esi
0x575C96: jnz     loc_575E3C
0x575C9C: xor     eax, eax
0x575C9E: cmp     [ecx+ebp+1], bl
0x575CA2: jz      short loc_575CD9
0x575CA4: mov     ebp, [esp+4E4h+var_4C8]
0x575CA8: cmp     eax, 7Fh
0x575CAB: jge     short loc_575CD0
0x575CAD: mov     cl, [esi+eax]
0x575CB0: cmp     cl, 3Bh ; ';'
0x575CB3: jz      short loc_575CD0
0x575CB5: cmp     cl, 0Ah
0x575CB8: jz      short loc_575CD0
0x575CBA: cmp     cl, [ebp+1Ch]
0x575CBD: jz      short loc_575CD0
0x575CBF: mov     cl, [esi+eax+1]
0x575CC3: mov     [esp+eax+4E4h+var_484], cl
0x575CC7: add     eax, 1
0x575CCA: cmp     [esi+eax+1], bl
0x575CCE: jnz     short loc_575CA8
0x575CD0: test    eax, eax
0x575CD2: jz      short loc_575CD9
0x575CD4: add     eax, 0FFFFFFFFh
0x575CD7: jmp     short loc_575CDB
0x575CD9: xor     eax, eax
0x575CDB: mov     [esp+eax+4E4h+var_484], bl
0x575CDF: lea     eax, [esp+4E4h+var_484]
0x575CE3: lea     edx, [eax+1]
0x575CE6: mov     cl, [eax]
0x575CE8: add     eax, 1
0x575CEB: test    cl, cl
0x575CED: jnz     short loc_575CE6
0x575CEF: sub     eax, edx
0x575CF1: add     eax, 2
0x575CF4: mov     [esp+4E4h+var_4A0], eax
0x575CF8: mov     eax, ds:0B35574h
0x575CFD: lea     edx, [esp+4E4h+var_484]
0x575D01: push    edx
0x575D02: mov     edx, [eax+4]
0x575D05: mov     ecx, offset dword_B35574
0x575D0A: xor     ebp, ebp
0x575D0C: call    edx
0x575D0E: mov     ecx, ds:0B3557Ch
0x575D14: mov     esi, [ecx+eax*4]
0x575D17: test    esi, esi
0x575D19: jz      short loc_575D48
0x575D1B: jmp     short loc_575D20
0x575D1D: align 10h
0x575D20: mov     edx, [esi+4]
0x575D23: push    edx
0x575D24: mov     edx, ds:0B35574h
0x575D2A: lea     eax, [esp+4ECh+var_488]
0x575D2E: push    eax
0x575D2F: mov     eax, [edx+8]
0x575D32: mov     ecx, offset dword_B35574
0x575D37: call    eax
0x575D39: test    al, al
0x575D3B: jnz     short loc_575D45
0x575D3D: mov     esi, [esi]
0x575D3F: test    esi, esi
0x575D41: jnz     short loc_575D20
0x575D43: jmp     short loc_575D48
0x575D45: mov     ebp, [esi+8]
0x575D48: xor     esi, esi
0x575D4A: lea     ebx, [ebx+0]
0x575D50: cmp     ds:0B399D0h[esi*4], ebp
0x575D57: jz      short loc_575D61
0x575D59: add     esi, 1
0x575D5C: cmp     esi, 1Dh
0x575D5F: jl      short loc_575D50
0x575D61: cmp     esi, 1Dh
0x575D64: jnz     short loc_575DB9
0x575D66: xor     esi, esi
0x575D68: jmp     short loc_575D70
0x575D6A: align 10h
0x575D70: mov     eax, ds:0B399D0h[esi*4]
0x575D77: test    eax, eax
0x575D79: jz      short loc_575D7F
0x575D7B: mov     eax, [eax]
0x575D7D: jmp     short loc_575D81
0x575D7F: xor     eax, eax
0x575D81: lea     ecx, [esp+4F0h+var_490]
0x575D85: push    ecx; unsigned __int8 *
0x575D86: push    eax; unsigned __int8 *
0x575D87: call    __mbscmp
0x575D8C: add     esp, 8
0x575D8F: test    eax, eax
0x575D91: jz      short loc_575DB6
0x575D93: add     esi, 1
0x575D96: cmp     esi, 1Dh
0x575D99: jl      short loc_575D70
0x575D9B: mov     edx, [esp+4F0h+var_4A0]
0x575D9F: mov     eax, [esp+4F0h+var_4DC]
0x575DA3: mov     cl, [edx]
0x575DA5: mov     [eax+edi], cl
0x575DA8: add     eax, 1
0x575DAB: mov     [esp+4F0h+var_4DC], eax
0x575DAF: mov     dl, 1
0x575DB1: jmp     loc_575E4A
0x575DB6: cmp     esi, 1Dh
0x575DB9: jge     short loc_575D9B
0x575DBB: lea     edx, [esp+4F0h+var_410]
0x575DC2: push    edx
0x575DC3: push    esi
0x575DC4: call    sub_57C240
0x575DC9: lea     eax, [esp+4F8h+var_410]
0x575DD0: add     esp, 8
0x575DD3: lea     edx, [eax+1]
0x575DD6: mov     cl, [eax]
0x575DD8: add     eax, 1
0x575DDB: test    cl, cl
0x575DDD: jnz     short loc_575DD6
0x575DDF: sub     eax, edx
0x575DE1: mov     esi, eax
0x575DE3: sub     eax, [esp+4F0h+var_4AC]
0x575DE7: jz      short loc_575E01
0x575DE9: mov     ecx, [esp+4F0h+var_4BC]
0x575DED: add     ecx, eax
0x575DEF: push    ecx; NewSize
0x575DF0: mov     [esp+4F4h+var_4BC], ecx
0x575DF4: push    edi; Src
0x575DF5: mov     ecx, offset FormHeap
0x575DFA: call    MemoryHeap_Reallocate
0x575DFF: mov     edi, eax
0x575E01: xor     eax, eax
0x575E03: test    esi, esi
0x575E05: jbe     short loc_575E28
0x575E07: mov     ebp, [esp+4F0h+var_4DC]
0x575E0B: jmp     short loc_575E10
0x575E0D: align 10h
0x575E10: mov     cl, [esp+eax+4F0h+var_410]
0x575E17: mov     [edi+ebp], cl
0x575E1A: add     eax, 1
0x575E1D: add     ebp, 1
0x575E20: cmp     eax, esi
0x575E22: jb      short loc_575E10
0x575E24: mov     [esp+4F0h+var_4DC], ebp
0x575E28: mov     edx, [esp+4F0h+var_4D8]
0x575E2C: mov     eax, [esp+4F0h+var_4AC]
0x575E30: lea     ecx, [edx+eax-1]
0x575E34: mov     [esp+4F0h+var_4D8], ecx
0x575E38: mov     dl, 1
0x575E3A: jmp     short loc_575E4A
0x575E3C: mov     ecx, [esp+4E4h+Src]
0x575E40: mov     [ecx+edi], al
0x575E43: add     ecx, 1
0x575E46: mov     [esp+4E4h+Src], ecx
0x575E4A: mov     eax, [esp+4F0h+var_4D8]
0x575E4E: add     eax, 1
0x575E51: cmp     eax, [esp+4F0h+var_4B0]
0x575E55: mov     [esp+4F0h+var_4D8], eax
0x575E59: jb      loc_575C82
0x575E5F: test    dl, dl
0x575E61: mov     eax, [esp+4F0h+var_4DC]
0x575E65: mov     [eax+edi], bl
0x575E68: jz      short loc_575E9C
0x575E6A: mov     edx, [esp+4F0h+Src]
0x575E6E: mov     [esp+4F0h+var_4B0], eax
0x575E72: add     eax, 4
0x575E75: push    eax; NewSize
0x575E76: push    edx; Src
0x575E77: mov     ecx, offset FormHeap
0x575E7C: call    MemoryHeap_Reallocate
0x575E81: mov     edx, eax
0x575E83: mov     [esp+4F0h+var_49C], edx
0x575E87: mov     eax, edi
0x575E89: sub     edx, edi
0x575E8B: jmp     short loc_575E90
0x575E8D: align 10h
0x575E90: mov     cl, [eax]
0x575E92: mov     [edx+eax], cl
0x575E95: add     eax, 1
0x575E98: test    cl, cl
0x575E9A: jnz     short loc_575E90
0x575E9C: xor     esi, esi
0x575E9E: cmp     [esp+4F0h+var_4B0], esi
0x575EA2: mov     [edi], bl
0x575EA4: mov     [esp+4F0h+var_4AC], esi
0x575EA8: jbe     loc_5762C8
0x575EAE: mov     ebp, 4
0x575EB3: mov     [esp+4F0h+var_4DC], ebp
0x575EB7: mov     [esp+4F0h+var_4D8], 6
0x575EBF: mov     [esp+4F0h+Src], 3
0x575EC7: jmp     short loc_575ED0
0x575EC9: align 10h
0x575ED0: mov     eax, [esp+4F0h+var_4AC]
0x575ED4: mov     ecx, [esp+4F0h+var_49C]
0x575ED8: mov     al, [eax+ecx]
0x575EDB: test    al, al
0x575EDD: jz      loc_5762C8
0x575EE3: cmp     al, 0Bh
0x575EE5: jz      loc_576273
0x575EEB: mov     edx, [esp+1Ch]
0x575EEF: mov     cl, [edx+1Ch]
0x575EF2: cmp     al, cl
0x575EF4: mov     byte ptr [esp+4F0h+var_4C0+3], cl
0x575EF8: jnz     short loc_575F6B
0x575EFA: mov     eax, 1
0x575EFF: add     [esp+4F0h+Src], eax
0x575F03: add     [esp+4F0h+var_4D8], eax
0x575F07: mov     [esi+edi], cl
0x575F0A: add     esi, eax
0x575F0C: add     ebp, eax
0x575F0E: cmp     esi, [esp+4F0h+var_4BC]
0x575F12: mov     [esp+4F0h+var_4DC], ebp
0x575F16: jb      short loc_575F2A
0x575F18: push    ebp; NewSize
0x575F19: push    edi; Src
0x575F1A: mov     ecx, offset FormHeap
0x575F1F: call    MemoryHeap_Reallocate
0x575F24: mov     edi, eax
0x575F26: mov     [esp+4F0h+var_4BC], ebp
0x575F2A: mov     eax, [esp+4F0h+var_4B8]
0x575F2E: mov     ecx, [eax+38h]
0x575F31: fld     dword ptr [ecx]
0x575F33: fiadd   [esp+4F0h+var_4A8]
0x575F37: fiadd   [esp+4F0h+var_4CC]
0x575F3B: call    Double_To_SInt32
0x575F40: mov     ecx, [esp+1Ch]
0x575F44: push    ebx
0x575F45: add     ecx, 20h ; ' '
0x575F48: mov     [esp+4F4h+var_4CC], eax
0x575F4C: call    BSSimpleList_PushBack
0x575F51: cmp     [esp+4F0h+var_4C8], ebx
0x575F55: jg      short loc_575F5B
0x575F57: mov     [esp+4F0h+var_4C8], ebx
0x575F5B: xor     ebx, ebx
0x575F5D: add     [esp+4F0h+var_4C4], 1
0x575F62: mov     [esp+4F0h+var_4B4], ebx
0x575F66: jmp     loc_57625E
0x575F6B: cmp     al, 9
0x575F6D: jnz     short loc_575F8A
0x575F6F: mov     eax, 1B4E81B5h
0x575F74: imul    ebx
0x575F76: sar     edx, 3
0x575F79: mov     eax, edx
0x575F7B: shr     eax, 1Fh
0x575F7E: lea     ebx, [edx+eax+1]
0x575F82: imul    ebx, 4Bh ; 'K'
0x575F85: jmp     loc_576273
0x575F8A: mov     [esp+4F0h+var_4DE], al
0x575F8E: movzx   eax, al
0x575F91: add     eax, 0FFFFFF6Fh; switch 4 cases
0x575F96: cmp     eax, 3
0x575F99: ja      short def_575F9B
0x575F9B: jmp     ds:jpt_575F9B[eax*4]; switch jump
0x575FA2: mov     [esp+4F0h+var_4DE], 27h ; '''; jumptable 00575F9B cases 145,146
0x575FA7: jmp     short def_575F9B
0x575FA9: mov     [esp+4F0h+var_4DE], 22h ; '"'; jumptable 00575F9B cases 147,148
