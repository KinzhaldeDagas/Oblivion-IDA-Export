0x4CED70: push    ebp
0x4CED71: mov     ebp, ecx
0x4CED73: push    edi
0x4CED74: push    ebp; a2
0x4CED75: mov     ecx, offset stru_B35C80; this
0x4CED7A: call    sub_496EA0
0x4CED7F: lea     edi, [ebp+48h]
0x4CED82: mov     eax, edi
0x4CED84: test    eax, eax
0x4CED86: jz      loc_4CEE74
0x4CED8C: push    ebx
0x4CED8D: push    esi
0x4CED8E: mov     edi, edi
0x4CED90: cmp     dword ptr [eax+4], 0
0x4CED94: jnz     short loc_4CED9F
0x4CED96: cmp     dword ptr [eax], 0
0x4CED99: jz      loc_4CEE72
0x4CED9F: mov     esi, [eax]
0x4CEDA1: cmp     esi, ds:0B333C4h
0x4CEDA7: jz      loc_4CEE38
0x4CEDAD: xor     bl, bl
0x4CEDAF: test    dword ptr [ebp+8], 400h
0x4CEDB6: jz      short loc_4CEDCB
0x4CEDB8: mov     eax, ds:0B33A98h
0x4CEDBD: test    eax, eax
0x4CEDBF: jz      short loc_4CEDCB
0x4CEDC1: cmp     [eax+0CD4h], bl
0x4CEDC7: jnz     short loc_4CEDCB
0x4CEDC9: mov     bl, 1
0x4CEDCB: mov     ecx, esi; this
0x4CEDCD: call    TESObjectREFR_IsPersistent?
0x4CEDD2: test    al, al
0x4CEDD4: jz      short loc_4CEDFB
0x4CEDD6: test    byte ptr [ebp+24h], 1
0x4CEDDA: jnz     short loc_4CEDFB
0x4CEDDC: test    bl, bl
0x4CEDDE: jnz     short loc_4CEDFB
0x4CEDE0: test    dword ptr [ebp+8], 400h
0x4CEDE7: jz      short loc_4CEDEF
0x4CEDE9: test    esi, esi
0x4CEDEB: jz      short loc_4CEE14
0x4CEDED: jmp     short loc_4CEE09
0x4CEDEF: mov     eax, [esi]
0x4CEDF1: mov     edx, [eax+194h]
0x4CEDF7: push    0
0x4CEDF9: jmp     short loc_4CEE10
0x4CEDFB: mov     eax, [esi]
0x4CEDFD: mov     edx, [eax+194h]
0x4CEE03: push    0
0x4CEE05: mov     ecx, esi
0x4CEE07: call    edx
0x4CEE09: mov     eax, [esi]
0x4CEE0B: mov     edx, [eax+10h]
0x4CEE0E: push    1
0x4CEE10: mov     ecx, esi
0x4CEE12: call    edx
0x4CEE14: mov     eax, [edi+4]
0x4CEE17: test    eax, eax
0x4CEE19: jz      short loc_4CEE30
0x4CEE1B: mov     ecx, [eax+4]
0x4CEE1E: mov     [edi+4], ecx
0x4CEE21: mov     edx, [eax]
0x4CEE23: push    eax
0x4CEE24: mov     [edi], edx
0x4CEE26: call    FormHeapFree
0x4CEE2B: add     esp, 4
0x4CEE2E: jmp     short loc_4CEE68
0x4CEE30: mov     dword ptr [edi], 0
0x4CEE36: jmp     short loc_4CEE68
0x4CEE38: mov     eax, [edi+4]
0x4CEE3B: test    eax, eax
0x4CEE3D: jz      short loc_4CEE54
0x4CEE3F: mov     ecx, [eax+4]
0x4CEE42: mov     [edi+4], ecx
0x4CEE45: mov     edx, [eax]
0x4CEE47: push    eax
0x4CEE48: mov     [edi], edx
0x4CEE4A: call    FormHeapFree
0x4CEE4F: add     esp, 4
0x4CEE52: jmp     short loc_4CEE5A
0x4CEE54: mov     dword ptr [edi], 0
0x4CEE5A: mov     eax, [esi]
0x4CEE5C: mov     edx, [eax+194h]
0x4CEE62: push    0
0x4CEE64: mov     ecx, esi
0x4CEE66: call    edx
0x4CEE68: mov     eax, edi
0x4CEE6A: test    eax, eax
0x4CEE6C: jnz     loc_4CED90
0x4CEE72: pop     esi
0x4CEE73: pop     ebx
0x4CEE74: push    ebp; a2
0x4CEE75: mov     ecx, offset stru_B35C80; this
0x4CEE7A: call    sub_496F50
0x4CEE7F: pop     edi
0x4CEE80: pop     ebp
0x4CEE81: retn
