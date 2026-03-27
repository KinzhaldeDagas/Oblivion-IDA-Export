0x5376E0: push    ebx
0x5376E1: push    ebp
0x5376E2: mov     ebp, [esp+8+arg_0]
0x5376E6: mov     eax, [ebp+28h]
0x5376E9: push    esi
0x5376EA: push    edi
0x5376EB: push    eax
0x5376EC: xor     bl, bl
0x5376EE: call    sub_536110
0x5376F3: mov     ecx, [ebp+20h]
0x5376F6: push    ecx
0x5376F7: mov     esi, eax
0x5376F9: call    sub_536110
0x5376FE: add     esp, 8
0x537701: test    esi, esi
0x537703: mov     edi, eax
0x537705: jz      short loc_537756
0x537707: test    edi, edi
0x537709: jz      short loc_537756
0x53770B: mov     edx, [edi]
0x53770D: mov     eax, [edx+190h]
0x537713: mov     ecx, edi
0x537715: call    eax
0x537717: test    al, al
0x537719: jz      short loc_537756
0x53771B: push    esi
0x53771C: call    sub_536F20
0x537721: mov     ecx, eax
0x537723: add     esp, 4
0x537726: test    ecx, ecx
0x537728: jz      short loc_537756
0x53772A: cmp     [esp+10h+arg_4], 0
0x53772F: jnz     short loc_537745
0x537731: push    0
0x537733: push    edi
0x537734: push    esi
0x537735: push    ebp
0x537736: call    sub_536C30
0x53773B: pop     edi
0x53773C: pop     esi
0x53773D: test    eax, eax
0x53773F: pop     ebp
0x537740: setnz   al
0x537743: pop     ebx
0x537744: retn
0x537745: mov     edx, [ebp+28h]
0x537748: push    edi
0x537749: push    edx
0x53774A: call    sub_5375F0
0x53774F: pop     edi
0x537750: pop     esi
0x537751: pop     ebp
0x537752: mov     al, 1
0x537754: pop     ebx
0x537755: retn
0x537756: pop     edi
0x537757: pop     esi
0x537758: pop     ebp
0x537759: mov     al, bl
0x53775B: pop     ebx
0x53775C: retn
