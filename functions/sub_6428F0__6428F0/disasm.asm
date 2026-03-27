0x6428F0: push    0FFFFFFFFh
0x6428F2: push    offset SEH_6428F0
0x6428F7: mov     eax, large fs:0
0x6428FD: push    eax
0x6428FE: push    ecx
0x6428FF: push    esi
0x642900: mov     eax, ds:0B30AACh
0x642905: xor     eax, esp
0x642907: push    eax
0x642908: lea     eax, [esp+18h+var_C]
0x64290C: mov     large fs:0, eax
0x642912: mov     esi, ecx
0x642914: mov     [esp+18h+var_10], esi
0x642918: push    0
0x64291A: call    sub_436FA0
0x64291F: mov     ecx, [esp+18h+arg_0]
0x642923: mov     edx, [esp+18h+arg_8]
0x642927: mov     eax, [esp+18h+arg_4]
0x64292B: mov     [esi+30h], ecx
0x64292E: push    edx
0x64292F: mov     ecx, esi
0x642931: mov     [esp+1Ch+var_4], 0
0x642939: mov     dword ptr [esi], offset ??_7LipTask@@6B@; const LipTask::`vftable'
0x64293F: mov     [esi+28h], eax
0x642942: mov     dword ptr [esi+2Ch], 0
0x642949: call    sub_434600
0x64294E: push    0
0x642950: push    4
0x642952: mov     ecx, esi
0x642954: call    sub_434CB0
0x642959: mov     eax, esi
0x64295B: mov     ecx, [esp+18h+var_C]
0x64295F: mov     large fs:0, ecx
0x642966: pop     ecx
0x642967: pop     esi
0x642968: add     esp, 10h
0x64296B: retn    0Ch
