0x5009E0: sub     esp, 208h
0x5009E6: mov     eax, ds:0B30AACh
0x5009EB: xor     eax, esp
0x5009ED: mov     [esp+208h+var_4], eax
0x5009F4: push    ebx
0x5009F5: mov     ebx, [esp+20Ch+arg_1C]
0x5009FC: mov     edx, [esp+20Ch+l]
0x500A03: mov     [esp+20Ch+a3], ebx
0x500A07: mov     ebx, ds:0A4B830h
0x500A0D: mov     ecx, [esp+20Ch+arg_4]
0x500A14: mov     eax, [esp+20Ch+a1]
0x500A1B: mov     dword ptr [esp+20Ch+var_204], ebx
0x500A1F: mov     ebx, ds:0A4B834h
0x500A25: push    ebp
0x500A26: mov     ebp, [esp+210h+arg_10]
0x500A2D: mov     [esp+210h+var_200], ebx
0x500A31: mov     ebx, ds:0A4B838h
0x500A37: push    esi
0x500A38: mov     esi, [esp+214h+a4]
0x500A3F: mov     [esp+214h+var_1FC], ebx
0x500A43: mov     bx, ds:0A4B83Ch
0x500A4A: push    edi
0x500A4B: mov     edi, [esp+218h+arg_C]
0x500A52: mov     [esp+218h+var_1F8], bx
0x500A57: mov     bl, ds:0A4B83Eh
0x500A5D: mov     [esp+218h+var_1F6], bl
0x500A61: lea     ebx, [esp+218h+var_204]
0x500A65: push    ebx; UInt16
0x500A66: push    edx; l
0x500A67: mov     edx, [esp+220h+a3]
0x500A6B: push    ebp; a6
0x500A6C: push    edi; a5
0x500A6D: push    esi; a4
0x500A6E: push    edx; a3
0x500A6F: push    ecx; a2
0x500A70: push    eax; a1
0x500A71: call    Script_ExtractArgs
0x500A76: add     esp, 20h
0x500A79: test    al, al
0x500A7B: pop     edi
0x500A7C: pop     esi
0x500A7D: pop     ebp
0x500A7E: pop     ebx
0x500A7F: jnz     short loc_500AB3
0x500A81: mov     eax, ds:0A4B830h
0x500A86: mov     ecx, ds:0A4B834h
0x500A8C: mov     edx, ds:0A4B838h
0x500A92: mov     dword ptr [esp+208h+var_204], eax
0x500A96: mov     ax, ds:0A4B83Ch
0x500A9C: mov     [esp+208h+var_200], ecx
0x500AA0: mov     cl, ds:0A4B83Eh
0x500AA6: mov     [esp+208h+var_1FC], edx
0x500AAA: mov     [esp+208h+var_1F8], ax
0x500AAF: mov     [esp+208h+var_1F6], cl
0x500AB3: push    offset aThisFunctionOn; "This function only works in MEM_DEBUG"
0x500AB8: call    Interface_ConsolePrint
0x500ABD: mov     ecx, [esp+20Ch+var_4]
0x500AC4: add     esp, 4
0x500AC7: xor     ecx, esp
0x500AC9: mov     al, 1
0x500ACB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x500AD0: add     esp, 208h
0x500AD6: retn
