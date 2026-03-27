0x6BE840: push    ebx
0x6BE841: mov     ebx, [esp+4+arg_0]
0x6BE845: push    esi
0x6BE846: push    edi
0x6BE847: xor     edi, edi
0x6BE849: lea     esi, [ebx+30h]
0x6BE84C: lea     esp, [esp+0]
0x6BE850: mov     eax, [esi]
0x6BE852: test    eax, eax
0x6BE854: jz      short loc_6BE870
0x6BE856: movzx   edx, byte ptr [edi+ebx+2Ch]
0x6BE85B: mov     ecx, [esi-10h]
0x6BE85E: push    edx
0x6BE85F: mov     edx, [esi-1Ch]
0x6BE862: push    edx
0x6BE863: push    eax
0x6BE864: mov     eax, ds:0B3D410h[ecx*4]
0x6BE86B: call    eax ; dword_B3D410
0x6BE86D: add     esp, 0Ch
0x6BE870: add     edi, 1
0x6BE873: add     esi, 4
0x6BE876: cmp     edi, 3
0x6BE879: jb      short loc_6BE850
0x6BE87B: pop     edi
0x6BE87C: pop     esi
0x6BE87D: pop     ebx
0x6BE87E: retn
