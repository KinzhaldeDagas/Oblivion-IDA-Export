0x675740: sub     esp, 8
0x675743: push    ebx
0x675744: push    ebp
0x675745: push    esi
0x675746: push    edi
0x675747: xor     edi, edi
0x675749: mov     esi, ecx
0x67574B: xor     ebp, ebp
0x67574D: mov     [esp+18h+var_4], esi
0x675751: mov     [esp+18h+var_8], ebp
0x675755: test    ebp, ebp
0x675757: jnz     short loc_67575C
0x675759: push    ebp
0x67575A: jmp     short loc_67576E
0x67575C: cmp     ebp, 1
0x67575F: jnz     short loc_675764
0x675761: push    ebp
0x675762: jmp     short loc_67576E
0x675764: cmp     ebp, 2
0x675767: jnz     short loc_67576C
0x675769: push    ebp
0x67576A: jmp     short loc_67576E
0x67576C: push    3; a2
0x67576E: mov     ecx, esi; this
0x675770: call    sub_673A50
0x675775: mov     ecx, eax; this
0x675777: call    sub_7616D0
0x67577C: mov     ebx, eax
0x67577E: test    ebx, ebx
0x675780: jz      loc_675842
0x675786: mov     ecx, [ebx]
0x675788: test    ecx, ecx
0x67578A: jz      loc_675842
0x675790: mov     eax, [ecx]
0x675792: mov     edx, [eax+190h]
0x675798: call    edx
0x67579A: test    al, al
0x67579C: jz      loc_67582F
0x6757A2: mov     ebp, [ebx]
0x6757A4: test    ebp, ebp
0x6757A6: jz      loc_67582F
0x6757AC: mov     ecx, ebp
0x6757AE: call    sub_5E0380
0x6757B3: mov     esi, eax
0x6757B5: test    esi, esi
0x6757B7: jz      short loc_67582F
0x6757B9: cmp     byte ptr [esi+20h], 0Fh
0x6757BD: jnz     short loc_67582F
0x6757BF: mov     eax, [esp+18h+arg_0]
0x6757C3: push    eax
0x6757C4: mov     ecx, esi
0x6757C6: call    sub_606AD0
0x6757CB: test    al, al
0x6757CD: jz      short loc_67582F
0x6757CF: test    edi, edi
0x6757D1: jnz     short loc_6757EC
0x6757D3: push    8; Size
0x6757D5: call    FormHeapAlloc
0x6757DA: add     esp, 4
0x6757DD: test    eax, eax
0x6757DF: jz      short loc_6757E8
0x6757E1: mov     [eax], edi
0x6757E3: mov     [eax+4], edi
0x6757E6: jmp     short loc_6757EA
0x6757E8: xor     eax, eax
0x6757EA: mov     edi, eax
0x6757EC: cmp     [esp+18h+arg_4], 0
0x6757F1: jz      short loc_675802
0x6757F3: mov     ecx, [esp+18h+arg_0]
0x6757F7: push    ebp
0x6757F8: push    ecx
0x6757F9: mov     ecx, esi
0x6757FB: call    sub_606B50
0x675800: jmp     short loc_67582F
0x675802: cmp     dword ptr [edi], 0
0x675805: jz      short loc_67582D
0x675807: push    8; Size
0x675809: call    FormHeapAlloc
0x67580E: add     esp, 4
0x675811: test    eax, eax
0x675813: jz      short loc_675822
0x675815: mov     edx, [edi]
0x675817: mov     [eax], edx
0x675819: mov     dword ptr [eax+4], 0
0x675820: jmp     short loc_675824
0x675822: xor     eax, eax
0x675824: mov     ecx, [edi+4]
0x675827: mov     [eax+4], ecx
0x67582A: mov     [edi+4], eax
0x67582D: mov     [edi], ebp
0x67582F: mov     ebx, [ebx+4]
0x675832: test    ebx, ebx
0x675834: mov     ebp, [esp+18h+var_8]
0x675838: mov     esi, [esp+18h+var_4]
0x67583C: jnz     loc_675786
0x675842: add     ebp, 1
0x675845: cmp     ebp, 4
0x675848: mov     [esp+18h+var_8], ebp
0x67584C: jl      loc_675755
0x675852: cmp     [esp+18h+arg_4], 0
0x675857: jz      short loc_67586E
0x675859: push    edi
0x67585A: call    FormHeapFree
0x67585F: add     esp, 4
0x675862: pop     edi
0x675863: pop     esi
0x675864: pop     ebp
0x675865: xor     eax, eax
0x675867: pop     ebx
0x675868: add     esp, 8
0x67586B: retn    8
0x67586E: mov     eax, edi
0x675870: pop     edi
0x675871: pop     esi
0x675872: pop     ebp
0x675873: pop     ebx
0x675874: add     esp, 8
0x675877: retn    8
