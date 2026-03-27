0x796790: push    ebx
0x796791: push    ebp
0x796792: mov     ebp, [esp+8+arg_4]
0x796796: test    ebp, ebp
0x796798: push    esi
0x796799: mov     esi, ecx
0x79679B: jz      short loc_7967A3
0x79679D: cmp     ebp, [esp+0Ch+arg_C]
0x7967A1: jz      short loc_7967A8
0x7967A3: call    __invalid_parameter_noinfo
0x7967A8: mov     ebx, [esp+0Ch+arg_8]
0x7967AC: mov     eax, [esp+0Ch+arg_10]
0x7967B0: cmp     ebx, eax
0x7967B2: jz      short loc_7967D9
0x7967B4: mov     ecx, [esi+8]
0x7967B7: push    edi
0x7967B8: push    ebx
0x7967B9: push    ecx
0x7967BA: push    eax
0x7967BB: call    sub_795CE0
0x7967C0: mov     edx, [esp+1Ch+arg_0]
0x7967C4: push    edx
0x7967C5: mov     edi, eax
0x7967C7: mov     eax, [esi+8]
0x7967CA: push    esi
0x7967CB: push    eax
0x7967CC: push    edi
0x7967CD: call    sub_794FC0
0x7967D2: add     esp, 1Ch
0x7967D5: mov     [esi+8], edi
0x7967D8: pop     edi
0x7967D9: mov     eax, [esp+0Ch+arg_0]
0x7967DD: pop     esi
0x7967DE: mov     [eax], ebp
0x7967E0: pop     ebp
0x7967E1: mov     [eax+4], ebx
0x7967E4: pop     ebx
0x7967E5: retn    14h
