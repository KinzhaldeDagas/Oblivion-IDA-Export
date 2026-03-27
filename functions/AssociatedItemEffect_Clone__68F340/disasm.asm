0x68F340: push    0FFFFFFFFh
0x68F342: push    offset SEH_8C8970
0x68F347: mov     eax, large fs:0
0x68F34D: push    eax
0x68F34E: push    ecx
0x68F34F: push    esi
0x68F350: push    edi
0x68F351: mov     eax, ds:0B30AACh
0x68F356: xor     eax, esp
0x68F358: push    eax
0x68F359: lea     eax, [esp+1Ch+var_C]
0x68F35D: mov     large fs:0, eax
0x68F363: mov     esi, ecx
0x68F365: push    3Ch ; '<'; Size
0x68F367: call    FormHeapAlloc
0x68F36C: add     esp, 4
0x68F36F: mov     [esp+1Ch+var_10], eax
0x68F373: xor     edi, edi
0x68F375: cmp     eax, edi
0x68F377: mov     [esp+1Ch+var_4], edi
0x68F37B: jz      short loc_68F392
0x68F37D: mov     ecx, [esi+0Ch]
0x68F380: mov     edx, [esi+8]
0x68F383: push    ecx; int
0x68F384: mov     ecx, [esi+24h]
0x68F387: push    edx; int
0x68F388: push    ecx; int
0x68F389: mov     ecx, eax; this
0x68F38B: call    AssociatedItemEffect_constr
0x68F390: mov     edi, eax
0x68F392: mov     edx, [esi]
0x68F394: mov     eax, [edx+2Ch]
0x68F397: push    edi
0x68F398: mov     ecx, esi
0x68F39A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x68F3A2: call    eax
0x68F3A4: mov     eax, edi
0x68F3A6: mov     ecx, dword ptr [esp+1Ch+var_C]
0x68F3AA: mov     large fs:0, ecx
0x68F3B1: pop     ecx
0x68F3B2: pop     edi
0x68F3B3: pop     esi
0x68F3B4: add     esp, 10h
0x68F3B7: retn
