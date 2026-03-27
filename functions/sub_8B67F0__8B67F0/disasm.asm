0x8B67F0: push    0FFFFFFFFh
0x8B67F2: push    offset SEH_8C8970
0x8B67F7: mov     eax, large fs:0
0x8B67FD: push    eax
0x8B67FE: push    ecx
0x8B67FF: push    esi
0x8B6800: push    edi
0x8B6801: mov     eax, ds:0B30AACh
0x8B6806: xor     eax, esp
0x8B6808: push    eax
0x8B6809: lea     eax, [esp+1Ch+var_C]
0x8B680D: mov     large fs:0, eax
0x8B6813: mov     esi, ecx
0x8B6815: push    offset stru_BA7C80; lpCriticalSection
0x8B681A: call    dword ptr ds:0A2806Ch
0x8B6820: call    dword ptr ds:0A2808Ch
0x8B6826: add     dword ptr ds:0BA7CFCh, 1
0x8B682D: push    14h; Size
0x8B682F: mov     ds:0BA7CF8h, eax
0x8B6834: call    FormHeapAlloc
0x8B6839: add     esp, 4
0x8B683C: mov     [esp+1Ch+var_10], eax
0x8B6840: test    eax, eax
0x8B6842: mov     [esp+1Ch+var_4], 0
0x8B684A: jz      short loc_8B6857
0x8B684C: mov     ecx, eax
0x8B684E: call    sub_8B6650
0x8B6853: mov     edi, eax
0x8B6855: jmp     short loc_8B6859
0x8B6857: xor     edi, edi
0x8B6859: mov     ecx, [esp+1Ch+arg_0]
0x8B685D: mov     eax, [esi]
0x8B685F: mov     edx, [eax+80h]
0x8B6865: push    ecx
0x8B6866: push    edi
0x8B6867: mov     ecx, esi
0x8B6869: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8B6871: call    edx
0x8B6873: sub     dword ptr ds:0BA7CFCh, 1
0x8B687A: jnz     short loc_8B6886
0x8B687C: mov     dword ptr ds:0BA7CF8h, 0
0x8B6886: push    offset stru_BA7C80; lpCriticalSection
0x8B688B: call    dword ptr ds:0A28074h
0x8B6891: mov     eax, edi
0x8B6893: mov     ecx, dword ptr [esp+1Ch+var_C]
0x8B6897: mov     large fs:0, ecx
0x8B689E: pop     ecx
0x8B689F: pop     edi
0x8B68A0: pop     esi
0x8B68A1: add     esp, 10h
0x8B68A4: retn    4
