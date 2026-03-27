0x75F5E0: push    esi
0x75F5E1: mov     esi, [esp+4+arg_0]
0x75F5E5: test    esi, esi
0x75F5E7: push    edi
0x75F5E8: mov     edi, ecx
0x75F5EA: jz      short loc_75F618
0x75F5EC: mov     eax, [esi]
0x75F5EE: mov     edx, [eax+4]
0x75F5F1: mov     ecx, esi
0x75F5F3: call    edx
0x75F5F5: test    eax, eax
0x75F5F7: jz      short loc_75F60E
0x75F5F9: lea     esp, [esp+0]
0x75F600: cmp     eax, offset dword_B3CFBC
0x75F605: jz      short loc_75F63D
0x75F607: mov     eax, [eax+4]
0x75F60A: test    eax, eax
0x75F60C: jnz     short loc_75F600
0x75F60E: xor     al, al
0x75F610: neg     al
0x75F612: sbb     eax, eax
0x75F614: and     eax, esi
0x75F616: mov     esi, eax
0x75F618: mov     eax, [edi]
0x75F61A: mov     edx, [eax+0ACh]
0x75F620: lea     ecx, [esp+8+arg_0]
0x75F624: push    ecx
0x75F625: mov     ecx, edi
0x75F627: call    edx
0x75F629: fld     [esp+8+arg_0]
0x75F62D: push    ecx
0x75F62E: mov     ecx, esi
0x75F630: fstp    [esp+0Ch+var_C]; float
0x75F633: call    sub_6D2B70
0x75F638: pop     edi
0x75F639: pop     esi
0x75F63A: retn    8
0x75F63D: mov     al, 1
0x75F63F: jmp     short loc_75F610
