0x8DBF80: push    ebx
0x8DBF81: mov     ebx, [esp+4+arg_4]
0x8DBF85: push    esi
0x8DBF86: mov     esi, [esp+8+arg_0]
0x8DBF8A: push    edi
0x8DBF8B: mov     [ebx+0Ch], esi
0x8DBF8E: mov     edi, [esi+98h]
0x8DBF94: dec     edi
0x8DBF95: js      short loc_8DBFB5
0x8DBF97: jmp     short loc_8DBFA0
0x8DBF99: align 10h
0x8DBFA0: mov     eax, [esi+94h]
0x8DBFA6: mov     ecx, [eax+edi*4]
0x8DBFA9: test    ecx, ecx
0x8DBFAB: jz      short loc_8DBFB2
0x8DBFAD: mov     edx, [ecx]
0x8DBFAF: push    ebx
0x8DBFB0: call    dword ptr [edx]
0x8DBFB2: dec     edi
0x8DBFB3: jns     short loc_8DBFA0
0x8DBFB5: mov     edx, [esi+98h]
0x8DBFBB: dec     edx
0x8DBFBC: js      short loc_8DBFFE
0x8DBFBE: mov     edi, edi
0x8DBFC0: mov     eax, [esi+94h]
0x8DBFC6: cmp     dword ptr [eax+edx*4], 0
0x8DBFCA: jnz     short loc_8DBFFB
0x8DBFCC: mov     ebx, [esi+98h]
0x8DBFD2: dec     ebx
0x8DBFD3: mov     ecx, ebx
0x8DBFD5: cmp     edx, ecx
0x8DBFD7: mov     [esi+98h], ebx
0x8DBFDD: mov     eax, edx
0x8DBFDF: jge     short loc_8DBFFB
0x8DBFE1: mov     ecx, [esi+94h]
0x8DBFE7: mov     edi, [ecx+eax*4+4]
0x8DBFEB: lea     ecx, [ecx+eax*4]
0x8DBFEE: mov     [ecx], edi
0x8DBFF0: mov     ecx, [esi+98h]
0x8DBFF6: inc     eax
0x8DBFF7: cmp     eax, ecx
0x8DBFF9: jl      short loc_8DBFE1
0x8DBFFB: dec     edx
0x8DBFFC: jns     short loc_8DBFC0
0x8DBFFE: pop     edi
0x8DBFFF: pop     esi
0x8DC000: pop     ebx
0x8DC001: retn
