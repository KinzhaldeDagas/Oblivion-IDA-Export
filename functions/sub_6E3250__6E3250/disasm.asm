0x6E3250: push    0FFFFFFFFh
0x6E3252: push    offset SEH_6E3250
0x6E3257: mov     eax, large fs:0
0x6E325D: push    eax
0x6E325E: push    esi
0x6E325F: push    edi
0x6E3260: mov     eax, ds:0B30AACh
0x6E3265: xor     eax, esp
0x6E3267: push    eax
0x6E3268: lea     eax, [esp+18h+var_C]
0x6E326C: mov     large fs:0, eax
0x6E3272: mov     edi, ecx
0x6E3274: mov     esi, [esp+18h+arg_0]
0x6E3278: push    esi
0x6E3279: call    sub_75E480
0x6E327E: cmp     dword ptr [esi+0D8h], 0A010068h
0x6E3288: jnb     short loc_6E32D5
0x6E328A: mov     ecx, esi
0x6E328C: call    sub_7124A0
0x6E3291: push    18h; Size
0x6E3293: mov     esi, eax
0x6E3295: call    FormHeapAlloc
0x6E329A: add     esp, 4
0x6E329D: mov     [esp+18h+arg_0], eax
0x6E32A1: test    eax, eax
0x6E32A3: mov     [esp+18h+var_4], 0
0x6E32AB: jz      short loc_6E32B7
0x6E32AD: push    esi
0x6E32AE: mov     ecx, eax
0x6E32B0: call    sub_6D2990
0x6E32B5: jmp     short loc_6E32B9
0x6E32B7: xor     eax, eax
0x6E32B9: lea     esi, [edi+3Ch]
0x6E32BC: push    eax; a2
0x6E32BD: mov     ecx, esi; this
0x6E32BF: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6E32C7: call    NiSmartPointer_Set??
0x6E32CC: mov     ecx, [esi]
0x6E32CE: mov     eax, [ecx]
0x6E32D0: mov     edx, [eax+7Ch]
0x6E32D3: call    edx
0x6E32D5: mov     ecx, [esp+18h+var_C]
0x6E32D9: mov     large fs:0, ecx
0x6E32E0: pop     ecx
0x6E32E1: pop     edi
0x6E32E2: pop     esi
0x6E32E3: add     esp, 0Ch
0x6E32E6: retn    4
