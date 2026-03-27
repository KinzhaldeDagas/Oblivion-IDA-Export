0x6D44F0: push    0FFFFFFFFh
0x6D44F2: push    offset SEH_6E3250
0x6D44F7: mov     eax, large fs:0
0x6D44FD: push    eax
0x6D44FE: push    esi
0x6D44FF: push    edi
0x6D4500: mov     eax, ds:0B30AACh
0x6D4505: xor     eax, esp
0x6D4507: push    eax
0x6D4508: lea     eax, [esp+18h+var_C]
0x6D450C: mov     large fs:0, eax
0x6D4512: mov     edi, ecx
0x6D4514: mov     esi, [esp+18h+arg_0]
0x6D4518: push    esi
0x6D4519: call    sub_75E480
0x6D451E: cmp     dword ptr [esi+0D8h], 0A010068h
0x6D4528: jnb     short loc_6D4575
0x6D452A: mov     ecx, esi
0x6D452C: call    sub_7124A0
0x6D4531: push    18h; Size
0x6D4533: mov     esi, eax
0x6D4535: call    FormHeapAlloc
0x6D453A: add     esp, 4
0x6D453D: mov     [esp+18h+arg_0], eax
0x6D4541: test    eax, eax
0x6D4543: mov     [esp+18h+var_4], 0
0x6D454B: jz      short loc_6D4557
0x6D454D: push    esi
0x6D454E: mov     ecx, eax
0x6D4550: call    sub_6E7F50
0x6D4555: jmp     short loc_6D4559
0x6D4557: xor     eax, eax
0x6D4559: lea     esi, [edi+3Ch]
0x6D455C: push    eax; a2
0x6D455D: mov     ecx, esi; this
0x6D455F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6D4567: call    NiSmartPointer_Set??
0x6D456C: mov     ecx, [esi]
0x6D456E: mov     eax, [ecx]
0x6D4570: mov     edx, [eax+7Ch]
0x6D4573: call    edx
0x6D4575: mov     ecx, [esp+18h+var_C]
0x6D4579: mov     large fs:0, ecx
0x6D4580: pop     ecx
0x6D4581: pop     edi
0x6D4582: pop     esi
0x6D4583: add     esp, 0Ch
0x6D4586: retn    4
