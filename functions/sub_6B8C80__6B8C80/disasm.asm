0x6B8C80: push    0FFFFFFFFh
0x6B8C82: push    offset SEH_6B8C80
0x6B8C87: mov     eax, large fs:0
0x6B8C8D: push    eax
0x6B8C8E: push    ecx
0x6B8C8F: push    esi
0x6B8C90: mov     eax, ds:0B30AACh
0x6B8C95: xor     eax, esp
0x6B8C97: push    eax
0x6B8C98: lea     eax, [esp+18h+var_C]
0x6B8C9C: mov     large fs:0, eax
0x6B8CA2: mov     esi, ecx
0x6B8CA4: mov     [esp+18h+var_10], esi
0x6B8CA8: xor     eax, eax
0x6B8CAA: mov     [esi], eax
0x6B8CAC: mov     [esi+4], ax
0x6B8CB0: mov     [esi+6], ax
0x6B8CB4: mov     [esi+0Ch], eax
0x6B8CB7: mov     [esi+10h], eax
0x6B8CBA: push    eax; a3
0x6B8CBB: push    offset EmptyString; a2
0x6B8CC0: mov     [esp+20h+var_4], eax
0x6B8CC4: mov     [esi+1Ch], eax
0x6B8CC7: mov     [esi+14h], eax
0x6B8CCA: mov     [esi+24h], eax
0x6B8CCD: mov     [esi+18h], eax
0x6B8CD0: call    BSStringT_Set
0x6B8CD5: mov     eax, esi
0x6B8CD7: mov     ecx, [esp+18h+var_C]
0x6B8CDB: mov     large fs:0, ecx
0x6B8CE2: pop     ecx
0x6B8CE3: pop     esi
0x6B8CE4: add     esp, 10h
0x6B8CE7: retn
