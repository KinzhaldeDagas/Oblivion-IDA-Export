0x8DC010: push    ebx
0x8DC011: mov     ebx, [esp+4+arg_4]
0x8DC015: push    esi
0x8DC016: mov     esi, [esp+8+arg_0]
0x8DC01A: push    edi
0x8DC01B: mov     [ebx+8], esi
0x8DC01E: mov     edi, [esi+98h]
0x8DC024: dec     edi
0x8DC025: js      short loc_8DC046
0x8DC027: jmp     short loc_8DC030
0x8DC029: align 10h
0x8DC030: mov     eax, [esi+94h]
0x8DC036: mov     ecx, [eax+edi*4]
0x8DC039: test    ecx, ecx
0x8DC03B: jz      short loc_8DC043
0x8DC03D: mov     edx, [ecx]
0x8DC03F: push    ebx
0x8DC040: call    dword ptr [edx+4]
0x8DC043: dec     edi
0x8DC044: jns     short loc_8DC030
0x8DC046: mov     edx, [esi+98h]
0x8DC04C: dec     edx
0x8DC04D: js      short loc_8DC08E
0x8DC04F: nop
0x8DC050: mov     eax, [esi+94h]
0x8DC056: cmp     dword ptr [eax+edx*4], 0
0x8DC05A: jnz     short loc_8DC08B
0x8DC05C: mov     ebx, [esi+98h]
0x8DC062: dec     ebx
0x8DC063: mov     ecx, ebx
0x8DC065: cmp     edx, ecx
0x8DC067: mov     [esi+98h], ebx
0x8DC06D: mov     eax, edx
0x8DC06F: jge     short loc_8DC08B
0x8DC071: mov     ecx, [esi+94h]
0x8DC077: mov     edi, [ecx+eax*4+4]
0x8DC07B: lea     ecx, [ecx+eax*4]
0x8DC07E: mov     [ecx], edi
0x8DC080: mov     ecx, [esi+98h]
0x8DC086: inc     eax
0x8DC087: cmp     eax, ecx
0x8DC089: jl      short loc_8DC071
0x8DC08B: dec     edx
0x8DC08C: jns     short loc_8DC050
0x8DC08E: pop     edi
0x8DC08F: pop     esi
0x8DC090: pop     ebx
0x8DC091: retn
