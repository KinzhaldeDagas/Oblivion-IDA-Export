0x7A34F0: push    0FFFFFFFFh
0x7A34F2: push    offset SEH_7A34F0
0x7A34F7: mov     eax, large fs:0
0x7A34FD: push    eax
0x7A34FE: sub     esp, 1Ch
0x7A3501: push    esi
0x7A3502: mov     eax, ds:0B30AACh
0x7A3507: xor     eax, esp
0x7A3509: push    eax
0x7A350A: lea     eax, [esp+30h+var_C]
0x7A350E: mov     large fs:0, eax
0x7A3514: mov     esi, ecx
0x7A3516: mov     eax, [esp+30h+arg_0]
0x7A351A: push    0FFFFFFFFh
0x7A351C: push    0
0x7A351E: push    eax
0x7A351F: lea     ecx, [esp+3Ch+var_28]
0x7A3523: mov     [esp+3Ch+var_10], 0Fh
0x7A352B: mov     [esp+3Ch+var_14], 0
0x7A3533: mov     byte ptr [esp+3Ch+var_24], 0
0x7A3538: call    sub_414420
0x7A353D: push    0FFFFFFFFh
0x7A353F: push    0
0x7A3541: lea     ecx, [esp+38h+var_28]
0x7A3545: push    ecx
0x7A3546: lea     ecx, [esi+24h]
0x7A3549: mov     [esp+3Ch+var_4], 0
0x7A3551: call    sub_414420
0x7A3556: cmp     [esp+30h+var_10], 10h
0x7A355B: jb      short loc_7A356A
0x7A355D: mov     edx, [esp+30h+var_24]
0x7A3561: push    edx
0x7A3562: call    FormHeapFree
0x7A3567: add     esp, 4
0x7A356A: mov     ecx, [esp+30h+var_C]
0x7A356E: mov     large fs:0, ecx
0x7A3575: pop     ecx
0x7A3576: pop     esi
0x7A3577: add     esp, 28h
0x7A357A: retn    4
