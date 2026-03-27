0x8D8830: push    ebx
0x8D8831: push    ebp
0x8D8832: mov     ebx, ecx
0x8D8834: push    esi
0x8D8835: lea     ebp, [ebx+10h]
0x8D8838: push    edi
0x8D8839: mov     ecx, ebp; lpCriticalSection
0x8D883B: call    sub_8A7720
0x8D8840: mov     eax, [ebx+8]
0x8D8843: mov     ecx, [ebx+4]
0x8D8846: and     eax, 3FFFFFFFh
0x8D884B: cmp     ecx, eax
0x8D884D: jnz     short loc_8D885A
0x8D884F: push    14h
0x8D8851: push    ebx
0x8D8852: call    sub_8A6EE0
0x8D8857: add     esp, 8
0x8D885A: mov     eax, [ebx+4]
0x8D885D: mov     edx, [ebx]
0x8D885F: lea     ecx, [eax+eax*4]
0x8D8862: inc     eax
0x8D8863: mov     [ebx+4], eax
0x8D8866: mov     eax, [ebx+0Ch]
0x8D8869: inc     dword ptr [eax+84h]
0x8D886F: mov     edi, [esp+10h+arg_0]
0x8D8873: push    14h
0x8D8875: lea     esi, [edx+ecx*4]
0x8D8878: push    edi
0x8D8879: push    esi
0x8D887A: call    sub_8B1890
0x8D887F: movzx   eax, byte ptr [esi]
0x8D8882: add     esp, 0Ch
0x8D8885: dec     eax; switch 34 cases
0x8D8886: cmp     eax, 21h
0x8D8889: ja      def_8D888F; jumptable 008D888F default case, cases 20,31
0x8D888F: jmp     ds:jpt_8D888F[eax*4]; switch jump
0x8D8896: mov     eax, [esi+4]; jumptable 008D888F cases 5,12
0x8D8899: cmp     word ptr [eax+4], 0
0x8D889E: jz      short loc_8D88A4
0x8D88A0: inc     word ptr [eax+6]
0x8D88A4: mov     esi, [esi+8]
0x8D88A7: jmp     loc_8D8B44
0x8D88AC: movzx   eax, word ptr [esi+8]; jumptable 008D888F case 6
0x8D88B0: mov     ecx, ds:0BA7D98h
0x8D88B6: mov     edx, [ecx]
0x8D88B8: push    4
0x8D88BA: shl     eax, 2
0x8D88BD: push    eax
0x8D88BE: call    dword ptr [edx+10h]
0x8D88C1: mov     [esi+4], eax
0x8D88C4: movzx   ecx, word ptr [edi+8]
0x8D88C8: mov     edx, [edi+4]
0x8D88CB: shl     ecx, 2
0x8D88CE: push    ecx
0x8D88CF: push    edx
0x8D88D0: push    eax
0x8D88D1: call    sub_8B1890
0x8D88D6: movzx   ecx, word ptr [esi+8]
0x8D88DA: mov     eax, [esi+4]
0x8D88DD: lea     ecx, [eax+ecx*4]
0x8D88E0: add     esp, 0Ch
0x8D88E3: cmp     eax, ecx
0x8D88E5: jnb     def_8D888F; jumptable 008D888F default case, cases 20,31
0x8D88EB: jmp     short loc_8D88F0
0x8D88ED: align 10h
0x8D88F0: mov     edx, [eax]
0x8D88F2: cmp     word ptr [edx+4], 0
0x8D88F7: jz      short loc_8D88FD
0x8D88F9: inc     word ptr [edx+6]
0x8D88FD: add     eax, 4
0x8D8900: cmp     eax, ecx
0x8D8902: jb      short loc_8D88F0
0x8D8904: push    ebp; lpCriticalSection
0x8D8905: call    dword ptr ds:0A28074h
0x8D890B: pop     edi
0x8D890C: pop     esi
0x8D890D: pop     ebp
0x8D890E: pop     ebx
0x8D890F: retn    4
0x8D8912: movzx   eax, word ptr [esi+8]; jumptable 008D888F case 7
0x8D8916: mov     ecx, ds:0BA7D98h
0x8D891C: mov     edx, [ecx]
0x8D891E: push    4
0x8D8920: shl     eax, 2
0x8D8923: push    eax
0x8D8924: call    dword ptr [edx+10h]
0x8D8927: mov     [esi+4], eax
0x8D892A: movzx   ecx, word ptr [edi+8]
0x8D892E: mov     edx, [edi+4]
0x8D8931: shl     ecx, 2
0x8D8934: push    ecx
0x8D8935: push    edx
0x8D8936: push    eax
0x8D8937: call    sub_8B1890
0x8D893C: movzx   ecx, word ptr [esi+8]
0x8D8940: mov     eax, [esi+4]
0x8D8943: lea     ecx, [eax+ecx*4]
0x8D8946: add     esp, 0Ch
0x8D8949: cmp     eax, ecx
0x8D894B: jnb     def_8D888F; jumptable 008D888F default case, cases 20,31
0x8D8951: mov     edx, [eax]
0x8D8953: cmp     word ptr [edx+4], 0
0x8D8958: jz      short loc_8D895E
0x8D895A: inc     word ptr [edx+6]
0x8D895E: add     eax, 4
0x8D8961: cmp     eax, ecx
0x8D8963: jb      short loc_8D8951
0x8D8965: push    ebp; lpCriticalSection
0x8D8966: call    dword ptr ds:0A28074h
0x8D896C: pop     edi
0x8D896D: pop     esi
0x8D896E: pop     ebp
0x8D896F: pop     ebx
0x8D8970: retn    4
0x8D8973: movzx   eax, word ptr [esi+8]; jumptable 008D888F case 15
0x8D8977: mov     ecx, ds:0BA7D98h
0x8D897D: mov     edx, [ecx]
0x8D897F: push    4
0x8D8981: shl     eax, 2
0x8D8984: push    eax
0x8D8985: call    dword ptr [edx+10h]
0x8D8988: mov     [esi+4], eax
0x8D898B: movzx   ecx, word ptr [edi+8]
0x8D898F: mov     edx, [edi+4]
0x8D8992: shl     ecx, 2
0x8D8995: push    ecx
0x8D8996: push    edx
0x8D8997: push    eax
0x8D8998: call    sub_8B1890
0x8D899D: movzx   ecx, word ptr [esi+8]
0x8D89A1: mov     eax, [esi+4]
0x8D89A4: lea     ecx, [eax+ecx*4]
0x8D89A7: add     esp, 0Ch
0x8D89AA: cmp     eax, ecx
0x8D89AC: jnb     def_8D888F; jumptable 008D888F default case, cases 20,31
0x8D89B2: mov     edx, [eax]
0x8D89B4: cmp     word ptr [edx+4], 0
0x8D89B9: jz      short loc_8D89BF
0x8D89BB: inc     word ptr [edx+6]
0x8D89BF: add     eax, 4
0x8D89C2: cmp     eax, ecx
0x8D89C4: jb      short loc_8D89B2
0x8D89C6: push    ebp; lpCriticalSection
0x8D89C7: call    dword ptr ds:0A28074h
0x8D89CD: pop     edi
0x8D89CE: pop     esi
0x8D89CF: pop     ebp
0x8D89D0: pop     ebx
0x8D89D1: retn    4
0x8D89D4: movzx   eax, word ptr [esi+8]; jumptable 008D888F case 16
0x8D89D8: mov     ecx, ds:0BA7D98h
0x8D89DE: mov     edx, [ecx]
0x8D89E0: push    4
0x8D89E2: shl     eax, 2
0x8D89E5: push    eax
0x8D89E6: call    dword ptr [edx+10h]
0x8D89E9: mov     [esi+4], eax
0x8D89EC: movzx   ecx, word ptr [edi+8]
0x8D89F0: mov     edx, [edi+4]
0x8D89F3: shl     ecx, 2
0x8D89F6: push    ecx
0x8D89F7: push    edx
0x8D89F8: push    eax
0x8D89F9: call    sub_8B1890
0x8D89FE: movzx   ecx, word ptr [esi+8]
0x8D8A02: mov     eax, [esi+4]
0x8D8A05: lea     ecx, [eax+ecx*4]
0x8D8A08: add     esp, 0Ch
0x8D8A0B: cmp     eax, ecx
0x8D8A0D: jnb     def_8D888F; jumptable 008D888F default case, cases 20,31
0x8D8A13: mov     edx, [eax]
0x8D8A15: cmp     word ptr [edx+4], 0
0x8D8A1A: jz      short loc_8D8A20
0x8D8A1C: inc     word ptr [edx+6]
0x8D8A20: add     eax, 4
0x8D8A23: cmp     eax, ecx
0x8D8A25: jb      short loc_8D8A13
0x8D8A27: push    ebp; lpCriticalSection
0x8D8A28: call    dword ptr ds:0A28074h
0x8D8A2E: pop     edi
0x8D8A2F: pop     esi
0x8D8A30: pop     ebp
0x8D8A31: pop     ebx
0x8D8A32: retn    4
0x8D8A35: mov     eax, [esi+4]; jumptable 008D888F case 17
0x8D8A38: cmp     word ptr [eax+4], 0
0x8D8A3D: jz      short loc_8D8A43
0x8D8A3F: inc     word ptr [eax+6]
0x8D8A43: mov     ecx, ds:0BA7D98h
0x8D8A49: mov     edx, [ecx]
0x8D8A4B: push    24h ; '$'
0x8D8A4D: push    20h ; ' '
0x8D8A4F: call    dword ptr [edx+10h]
0x8D8A52: test    eax, eax
0x8D8A54: jz      short loc_8D8A9E
0x8D8A56: mov     edi, [edi+8]
0x8D8A59: mov     ebx, [edi]
0x8D8A5B: mov     edx, eax
0x8D8A5D: mov     [edx], ebx
0x8D8A5F: mov     ebx, [edi+4]
0x8D8A62: mov     [edx+4], ebx
0x8D8A65: mov     ebx, [edi+8]
0x8D8A68: mov     [edx+8], ebx
0x8D8A6B: lea     ecx, [edi+10h]
0x8D8A6E: mov     edi, [edi+0Ch]
0x8D8A71: mov     [edx+0Ch], edi
0x8D8A74: mov     edi, [ecx]
0x8D8A76: lea     edx, [eax+10h]
0x8D8A79: mov     [edx], edi
0x8D8A7B: mov     edi, [ecx+4]
0x8D8A7E: mov     [edx+4], edi
0x8D8A81: mov     edi, [ecx+8]
0x8D8A84: mov     [edx+8], edi
0x8D8A87: mov     ecx, [ecx+0Ch]
0x8D8A8A: mov     [edx+0Ch], ecx
0x8D8A8D: push    ebp; lpCriticalSection
0x8D8A8E: mov     [esi+8], eax
0x8D8A91: call    dword ptr ds:0A28074h
0x8D8A97: pop     edi
0x8D8A98: pop     esi
0x8D8A99: pop     ebp
0x8D8A9A: pop     ebx
0x8D8A9B: retn    4
0x8D8A9E: xor     eax, eax
0x8D8AA0: push    ebp; lpCriticalSection
0x8D8AA1: mov     [esi+8], eax
0x8D8AA4: call    dword ptr ds:0A28074h
0x8D8AAA: pop     edi
0x8D8AAB: pop     esi
0x8D8AAC: pop     ebp
0x8D8AAD: pop     ebx
0x8D8AAE: retn    4
0x8D8AB1: movzx   eax, word ptr [esi+8]; jumptable 008D888F case 22
0x8D8AB5: mov     ecx, ds:0BA7D98h
0x8D8ABB: mov     edx, [ecx]
0x8D8ABD: push    4
0x8D8ABF: shl     eax, 2
0x8D8AC2: push    eax
0x8D8AC3: call    dword ptr [edx+10h]
0x8D8AC6: mov     [esi+4], eax
0x8D8AC9: movzx   ecx, word ptr [edi+8]
0x8D8ACD: mov     edx, [edi+4]
0x8D8AD0: shl     ecx, 2
0x8D8AD3: push    ecx
0x8D8AD4: push    edx
0x8D8AD5: push    eax
0x8D8AD6: call    sub_8B1890
0x8D8ADB: movzx   ecx, word ptr [esi+8]
0x8D8ADF: mov     eax, [esi+4]
0x8D8AE2: lea     ecx, [eax+ecx*4]
0x8D8AE5: add     esp, 0Ch
0x8D8AE8: cmp     eax, ecx
0x8D8AEA: jnb     short def_8D888F; jumptable 008D888F default case, cases 20,31
0x8D8AEC: lea     esp, [esp+0]
0x8D8AF0: mov     edx, [eax]
0x8D8AF2: cmp     word ptr [edx+4], 0
0x8D8AF7: jz      short loc_8D8AFD
0x8D8AF9: inc     word ptr [edx+6]
0x8D8AFD: add     eax, 4
0x8D8B00: cmp     eax, ecx
0x8D8B02: jb      short loc_8D8AF0
0x8D8B04: push    ebp; lpCriticalSection
0x8D8B05: call    dword ptr ds:0A28074h
0x8D8B0B: pop     edi
0x8D8B0C: pop     esi
0x8D8B0D: pop     ebp
0x8D8B0E: pop     ebx
0x8D8B0F: retn    4
0x8D8B12: mov     esi, [esi+4]; jumptable 008D888F cases 29,30
0x8D8B15: cmp     word ptr [esi+4], 0
0x8D8B1A: jz      short loc_8D8B20
0x8D8B1C: inc     word ptr [esi+6]
0x8D8B20: dec     dword ptr [ebx+4]
0x8D8B23: mov     ebx, [ebx+0Ch]
0x8D8B26: mov     eax, [ebx+84h]
0x8D8B2C: dec     eax
0x8D8B2D: push    ebp; lpCriticalSection
0x8D8B2E: mov     [ebx+84h], eax
0x8D8B34: call    dword ptr ds:0A28074h
0x8D8B3A: pop     edi
0x8D8B3B: pop     esi
0x8D8B3C: pop     ebp
0x8D8B3D: pop     ebx
0x8D8B3E: retn    4
0x8D8B41: mov     esi, [esi+4]; jumptable 008D888F cases 1-4,8-11,13,14,18,19,21,23-28,32-34
0x8D8B44: cmp     word ptr [esi+4], 0
0x8D8B49: jz      short def_8D888F; jumptable 008D888F default case, cases 20,31
0x8D8B4B: inc     word ptr [esi+6]
0x8D8B4F: push    ebp; jumptable 008D888F default case, cases 20,31
0x8D8B50: call    dword ptr ds:0A28074h
0x8D8B56: pop     edi
0x8D8B57: pop     esi
0x8D8B58: pop     ebp
0x8D8B59: pop     ebx
0x8D8B5A: retn    4
