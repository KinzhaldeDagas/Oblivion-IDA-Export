0x52F790: push    0FFFFFFFFh
0x52F792: push    offset SEH_71BE30
0x52F797: mov     eax, large fs:0
0x52F79D: push    eax
0x52F79E: push    ebx
0x52F79F: push    ebp
0x52F7A0: push    esi
0x52F7A1: push    edi
0x52F7A2: mov     eax, ds:0B30AACh
0x52F7A7: xor     eax, esp
0x52F7A9: push    eax
0x52F7AA: lea     eax, [esp+20h+var_C]
0x52F7AE: mov     large fs:0, eax
0x52F7B4: mov     esi, ecx
0x52F7B6: mov     eax, [esp+20h+a7]
0x52F7BA: mov     ecx, [esp+20h+a6]
0x52F7BE: mov     edx, [esp+20h+a4]
0x52F7C2: mov     ebp, [esp+20h+a3]
0x52F7C6: push    eax; a7
0x52F7C7: push    ecx; a6
0x52F7C8: push    1; a5
0x52F7CA: push    edx; a4
0x52F7CB: push    ebp; a3
0x52F7CC: lea     eax, [esp+34h+a7]
0x52F7D0: push    eax; a2
0x52F7D1: mov     ecx, esi; this
0x52F7D3: call    sub_52F010
0x52F7D8: mov     edi, eax
0x52F7DA: test    edi, edi
0x52F7DC: jz      short loc_52F80D
0x52F7DE: push    1Ch; Size
0x52F7E0: call    FormHeapAlloc
0x52F7E5: mov     ebx, eax
0x52F7E7: add     esp, 4
0x52F7EA: mov     [esp+20h+a6], ebx
0x52F7EE: xor     eax, eax
0x52F7F0: cmp     ebx, eax
0x52F7F2: mov     [esp+20h+var_4], eax
0x52F7F6: jz      short loc_52F80F
0x52F7F8: push    ebp
0x52F7F9: push    edi
0x52F7FA: push    esi
0x52F7FB: push    edi
0x52F7FC: mov     ecx, esi
0x52F7FE: call    sub_52F570
0x52F803: push    eax
0x52F804: mov     ecx, ebx
0x52F806: call    sub_6B80D0
0x52F80B: jmp     short loc_52F80F
0x52F80D: xor     eax, eax
0x52F80F: mov     ecx, [esp+20h+var_C]
0x52F813: mov     large fs:0, ecx
0x52F81A: pop     ecx
0x52F81B: pop     edi
0x52F81C: pop     esi
0x52F81D: pop     ebp
0x52F81E: pop     ebx
0x52F81F: add     esp, 0Ch
0x52F822: retn    10h
