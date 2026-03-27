0x67CC60: sub     esp, 8
0x67CC63: mov     eax, ecx
0x67CC65: mov     [esp+8+var_4], eax
0x67CC69: mov     eax, [eax]
0x67CC6B: test    eax, eax
0x67CC6D: mov     cl, 1
0x67CC6F: jz      loc_67CD9F
0x67CC75: push    ebx
0x67CC76: push    ebp
0x67CC77: push    esi
0x67CC78: push    edi
0x67CC79: mov     [esp+18h+var_5], cl
0x67CC7D: mov     edi, eax
0x67CC7F: nop
0x67CC80: mov     ebp, [edi]
0x67CC82: test    ebp, ebp
0x67CC84: jz      loc_67CD6E
0x67CC8A: cmp     [esp+18h+var_5], 0
0x67CC8F: mov     esi, [ebp+0]
0x67CC92: jz      short loc_67CCA9
0x67CC94: mov     eax, [esi]
0x67CC96: mov     edx, [eax+334h]
0x67CC9C: push    0
0x67CC9E: mov     ecx, esi
0x67CCA0: call    edx
0x67CCA2: test    al, al
0x67CCA4: setz    [esp+18h+var_5]
0x67CCA9: push    1
0x67CCAB: mov     ecx, esi
0x67CCAD: xor     bl, bl
0x67CCAF: call    sub_5E6CD0
0x67CCB4: test    al, al
0x67CCB6: jz      short loc_67CCED
0x67CCB8: mov     ecx, [esi+58h]
0x67CCBB: mov     eax, [ecx]
0x67CCBD: mov     edx, [eax+184h]
0x67CCC3: call    edx
0x67CCC5: cmp     [eax+50h], bl
0x67CCC8: jz      short loc_67CCED
0x67CCCA: push    0
0x67CCCC: push    esi
0x67CCCD: mov     ecx, eax
0x67CCCF: call    sub_628140
0x67CCD4: push    eax
0x67CCD5: mov     ecx, esi
0x67CCD7: call    TesObjectREF_GetDistance
0x67CCDC: fld     dword ptr ds:0B37028h
0x67CCE2: fcompp
0x67CCE4: fnstsw  ax
0x67CCE6: test    ah, 5
0x67CCE9: jp      short loc_67CCED
0x67CCEB: mov     bl, 1
0x67CCED: cmp     esi, ds:0B333C4h
0x67CCF3: jz      short loc_67CD63
0x67CCF5: mov     eax, [esi]
0x67CCF7: mov     edx, [eax+198h]
0x67CCFD: push    0
0x67CCFF: mov     ecx, esi
0x67CD01: call    edx
0x67CD03: test    al, al
0x67CD05: jnz     short loc_67CD21
0x67CD07: mov     esi, [esi+8]
0x67CD0A: mov     eax, esi
0x67CD0C: shr     eax, 5
0x67CD0F: test    al, 1
0x67CD11: jnz     short loc_67CD21
0x67CD13: mov     ecx, esi
0x67CD15: shr     ecx, 0Bh
0x67CD18: test    cl, 1
0x67CD1B: jnz     short loc_67CD21
0x67CD1D: test    bl, bl
0x67CD1F: jz      short loc_67CD63
0x67CD21: mov     eax, [edi+4]
0x67CD24: test    eax, eax
0x67CD26: jz      short loc_67CD4C
0x67CD28: mov     edx, [eax+4]
0x67CD2B: mov     [edi+4], edx
0x67CD2E: mov     ecx, [eax]
0x67CD30: push    eax
0x67CD31: mov     [edi], ecx
0x67CD33: call    FormHeapFree
0x67CD38: add     esp, 4
0x67CD3B: push    ebp
0x67CD3C: call    FormHeapFree
0x67CD41: mov     edx, [esp+1Ch+var_4]
0x67CD45: mov     edi, [edx]
0x67CD47: add     esp, 4
0x67CD4A: jmp     short loc_67CD66
0x67CD4C: push    ebp
0x67CD4D: mov     dword ptr [edi], 0
0x67CD53: call    FormHeapFree
0x67CD58: mov     edx, [esp+1Ch+var_4]
0x67CD5C: mov     edi, [edx]
0x67CD5E: add     esp, 4
0x67CD61: jmp     short loc_67CD66
0x67CD63: mov     edi, [edi+4]
0x67CD66: test    edi, edi
0x67CD68: jnz     loc_67CC80
0x67CD6E: cmp     [esp+18h+var_5], 0
0x67CD73: pop     edi
0x67CD74: pop     esi
0x67CD75: pop     ebp
0x67CD76: pop     ebx
0x67CD77: jnz     short loc_67CD99
0x67CD79: mov     eax, [esp+8+var_4]
0x67CD7D: mov     eax, [eax]
0x67CD7F: test    eax, eax
0x67CD81: jz      short loc_67CD99
0x67CD83: xor     ecx, ecx
0x67CD85: cmp     dword ptr [eax], 0
0x67CD88: jz      short loc_67CD8D
0x67CD8A: add     ecx, 1
0x67CD8D: mov     eax, [eax+4]
0x67CD90: test    eax, eax
0x67CD92: jnz     short loc_67CD85
0x67CD94: cmp     ecx, 1
0x67CD97: ja      short loc_67CDA5
0x67CD99: xor     al, al
0x67CD9B: add     esp, 8
0x67CD9E: retn
0x67CD9F: mov     al, cl
0x67CDA1: add     esp, 8
0x67CDA4: retn
0x67CDA5: mov     al, 1
0x67CDA7: add     esp, 8
0x67CDAA: retn
