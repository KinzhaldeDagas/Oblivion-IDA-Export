0x8B76E0: push    0FFFFFFFFh
0x8B76E2: push    offset SEH_8C5340
0x8B76E7: mov     eax, large fs:0
0x8B76ED: push    eax
0x8B76EE: push    ebx
0x8B76EF: push    esi
0x8B76F0: push    edi
0x8B76F1: mov     eax, ds:0B30AACh
0x8B76F6: xor     eax, esp
0x8B76F8: push    eax
0x8B76F9: lea     eax, [esp+1Ch+var_C]
0x8B76FD: mov     large fs:0, eax
0x8B7703: mov     edi, ecx
0x8B7705: mov     ebx, [esp+1Ch+arg_0]
0x8B7709: test    ebx, ebx
0x8B770B: jz      short loc_8B777F
0x8B770D: mov     ecx, ds:0BA7D98h
0x8B7713: mov     eax, [ecx]
0x8B7715: mov     edx, [eax+10h]
0x8B7718: push    24h ; '$'
0x8B771A: push    90h
0x8B771F: call    edx
0x8B7721: mov     word ptr [eax+4], 90h
0x8B7727: mov     [esp+1Ch+arg_0], eax
0x8B772B: mov     ecx, [ebx+8]
0x8B772E: mov     edx, [ebx+4]
0x8B7731: push    ecx
0x8B7732: push    edx
0x8B7733: mov     ecx, eax
0x8B7735: mov     [esp+24h+var_4], 0
0x8B773D: call    sub_8F5300
0x8B7742: mov     esi, eax
0x8B7744: mov     eax, [edi]
0x8B7746: mov     edx, [eax+4Ch]
0x8B7749: push    esi
0x8B774A: mov     ecx, edi
0x8B774C: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8B7754: call    edx
0x8B7756: cmp     word ptr [esi+4], 0
0x8B775B: jz      short loc_8B7775
0x8B775D: add     word ptr [esi+6], 0FFFFh
0x8B7762: movzx   eax, word ptr [esi+6]
0x8B7766: test    ax, ax
0x8B7769: jnz     short loc_8B7775
0x8B776B: mov     eax, [esi]
0x8B776D: mov     edx, [eax]
0x8B776F: push    1
0x8B7771: mov     ecx, esi
0x8B7773: call    edx
0x8B7775: mov     eax, [edi]
0x8B7777: mov     edx, [eax+7Ch]
0x8B777A: push    ebx
0x8B777B: mov     ecx, edi
0x8B777D: call    edx
0x8B777F: mov     ecx, [esp+1Ch+var_C]
0x8B7783: mov     large fs:0, ecx
0x8B778A: pop     ecx
0x8B778B: pop     edi
0x8B778C: pop     esi
0x8B778D: pop     ebx
0x8B778E: add     esp, 0Ch
0x8B7791: retn    4
