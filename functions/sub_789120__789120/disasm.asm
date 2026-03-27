0x789120: push    0FFFFFFFFh
0x789122: push    offset SEH_789120
0x789127: mov     eax, large fs:0
0x78912D: push    eax
0x78912E: push    esi
0x78912F: mov     eax, ds:0B30AACh
0x789134: xor     eax, esp
0x789136: push    eax
0x789137: lea     eax, [esp+14h+var_C]
0x78913B: mov     large fs:0, eax
0x789141: mov     esi, ecx
0x789143: xor     eax, eax
0x789145: push    0FFFFFFFFh
0x789147: mov     [esi+14h], eax
0x78914A: mov     dword ptr [esi+18h], 0Fh
0x789151: push    eax
0x789152: mov     [esp+1Ch+var_4], eax
0x789156: mov     [esi+4], al
0x789159: lea     eax, [esp+1Ch+arg_0]
0x78915D: push    eax
0x78915E: call    sub_414420
0x789163: cmp     [esp+14h+arg_18], 10h
0x789168: jb      short loc_789177
0x78916A: mov     ecx, [esp+14h+arg_4]
0x78916E: push    ecx
0x78916F: call    FormHeapFree
0x789174: add     esp, 4
0x789177: mov     eax, esi
0x789179: mov     ecx, [esp+14h+var_C]
0x78917D: mov     large fs:0, ecx
0x789184: pop     ecx
0x789185: pop     esi
0x789186: add     esp, 0Ch
0x789189: retn    1Ch
