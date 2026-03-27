0x984886: push    ebp
0x984887: mov     ebp, esp
0x984889: sub     esp, 0Ch
0x98488C: push    ebx
0x98488D: push    edi
0x98488E: mov     edi, [ebp+File]
0x984891: xor     ebx, ebx
0x984893: cmp     edi, ebx
0x984895: jnz     short loc_9848B7
0x984897: call    __errno
0x98489C: push    ebx
0x98489D: push    ebx
0x98489E: push    ebx
0x98489F: push    ebx
0x9848A0: push    ebx
0x9848A1: mov     dword ptr [eax], 16h
0x9848A7: call    __invalid_parameter
0x9848AC: add     esp, 14h
0x9848AF: or      eax, 0FFFFFFFFh
0x9848B2: jmp     loc_984A1A
0x9848B7: push    edi; File
0x9848B8: call    __fileno
0x9848BD: cmp     [edi+4], ebx
0x9848C0: pop     ecx
0x9848C1: mov     [ebp+var_4], eax
0x9848C4: jge     short loc_9848C9
0x9848C6: mov     [edi+4], ebx
0x9848C9: push    1; int
0x9848CB: push    ebx; int
0x9848CC: push    eax; int
0x9848CD: call    __lseek
0x9848D2: add     esp, 0Ch
0x9848D5: cmp     eax, ebx
0x9848D7: mov     [ebp+var_8], eax
0x9848DA: jl      short loc_9848AF
0x9848DC: mov     edx, [edi+0Ch]
0x9848DF: test    dx, 108h
0x9848E4: jnz     short loc_9848EE
0x9848E6: sub     eax, [edi+4]
0x9848E9: jmp     loc_984A1A
0x9848EE: mov     eax, [edi]
0x9848F0: mov     ecx, [edi+8]
0x9848F3: push    esi
0x9848F4: mov     esi, eax
0x9848F6: sub     esi, ecx
0x9848F8: test    dl, 3
0x9848FB: mov     [ebp+var_C], esi
0x9848FE: jz      short loc_984941
0x984900: mov     esi, [ebp+var_4]
0x984903: mov     edx, [ebp+var_4]
0x984906: and     esi, 1Fh
0x984909: imul    esi, 28h ; '('
0x98490C: sar     edx, 5
0x98490F: mov     edx, ds:0BAAAC0h[edx*4]
0x984916: test    byte ptr [edx+esi+4], 80h
0x98491B: jz      short loc_984934
0x98491D: mov     edx, ecx
0x98491F: cmp     edx, eax
0x984921: jnb     short loc_984934
0x984923: mov     esi, eax
0x984925: cmp     byte ptr [edx], 0Ah
0x984928: jnz     short loc_98492F
0x98492A: inc     [ebp+var_C]
0x98492D: xor     ebx, ebx
0x98492F: inc     edx
0x984930: cmp     edx, esi
0x984932: jb      short loc_984925
0x984934: cmp     [ebp+var_8], ebx
0x984937: jnz     short loc_984955
0x984939: mov     eax, [ebp+var_C]
0x98493C: jmp     loc_984A19
0x984941: test    dl, dl
0x984943: js      short loc_984934
0x984945: call    __errno
0x98494A: mov     dword ptr [eax], 16h
0x984950: jmp     loc_9849DB
0x984955: test    byte ptr [edi+0Ch], 1
0x984959: jz      loc_984A11
0x98495F: mov     edx, [edi+4]
0x984962: cmp     edx, ebx
0x984964: jnz     short loc_98496E
0x984966: mov     [ebp+var_C], ebx
0x984969: jmp     loc_984A11
0x98496E: mov     esi, [ebp+var_4]
0x984971: mov     ebx, [ebp+var_4]
0x984974: and     esi, 1Fh
0x984977: imul    esi, 28h ; '('
0x98497A: sub     eax, ecx
0x98497C: add     eax, edx
0x98497E: sar     ebx, 5
0x984981: lea     ebx, ds:0BAAAC0h[ebx*4]
0x984988: mov     [ebp+File], eax
0x98498B: mov     eax, [ebx]
0x98498D: test    byte ptr [eax+esi+4], 80h
0x984992: jz      short loc_984A0B
0x984994: push    2; int
0x984996: push    0; int
0x984998: push    [ebp+var_4]; int
0x98499B: call    __lseek
0x9849A0: add     esp, 0Ch
0x9849A3: cmp     eax, [ebp+var_8]
0x9849A6: jnz     short loc_9849C7
0x9849A8: mov     eax, [edi+8]
0x9849AB: mov     ecx, [ebp+File]
0x9849AE: add     ecx, eax
0x9849B0: jmp     short loc_9849BB
0x9849B2: cmp     byte ptr [eax], 0Ah
0x9849B5: jnz     short loc_9849BA
0x9849B7: inc     [ebp+File]
0x9849BA: inc     eax
0x9849BB: cmp     eax, ecx
0x9849BD: jb      short loc_9849B2
0x9849BF: test    word ptr [edi+0Ch], 2000h
0x9849C5: jmp     short loc_984A06
0x9849C7: push    0; int
0x9849C9: push    [ebp+var_8]; int
0x9849CC: push    [ebp+var_4]; int
0x9849CF: call    __lseek
0x9849D4: add     esp, 0Ch
0x9849D7: test    eax, eax
0x9849D9: jge     short loc_9849E0
0x9849DB: or      eax, 0FFFFFFFFh
0x9849DE: jmp     short loc_984A19
0x9849E0: mov     eax, 200h
0x9849E5: cmp     [ebp+File], eax
0x9849E8: ja      short loc_9849F9
0x9849EA: mov     ecx, [edi+0Ch]
0x9849ED: test    cl, 8
0x9849F0: jz      short loc_9849F9
0x9849F2: test    cx, 400h
0x9849F7: jz      short loc_9849FC
0x9849F9: mov     eax, [edi+18h]
0x9849FC: mov     [ebp+File], eax
0x9849FF: mov     eax, [ebx]
0x984A01: test    byte ptr [eax+esi+4], 4
0x984A06: jz      short loc_984A0B
0x984A08: inc     [ebp+File]
0x984A0B: mov     eax, [ebp+File]
0x984A0E: sub     [ebp+var_8], eax
0x984A11: mov     eax, [ebp+var_C]
0x984A14: mov     ecx, [ebp+var_8]
0x984A17: add     eax, ecx
0x984A19: pop     esi
0x984A1A: pop     edi
0x984A1B: pop     ebx
0x984A1C: leave
0x984A1D: retn
