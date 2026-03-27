0x411FA0: push    0FFFFFFFFh
0x411FA2: push    offset ??1IntSeenData@@UAE@XZ_SEH
0x411FA7: mov     eax, large fs:0
0x411FAD: push    eax
0x411FAE: push    ecx
0x411FAF: push    esi
0x411FB0: mov     eax, ___security_cookie
0x411FB5: xor     eax, esp
0x411FB7: push    eax
0x411FB8: lea     eax, [esp+18h+var_C]
0x411FBC: mov     large fs:0, eax
0x411FC2: mov     esi, ecx
0x411FC4: mov     [esp+18h+var_10], esi
0x411FC8: mov     dword ptr [esi], offset ??_7IntSeenData@@6B@; const IntSeenData::`vftable'
0x411FCE: mov     ecx, [esi+28h]
0x411FD1: test    ecx, ecx
0x411FD3: mov     [esp+18h+var_4], 0
0x411FDB: jz      short loc_411FE5
0x411FDD: mov     eax, [ecx]
0x411FDF: mov     edx, [eax]
0x411FE1: push    1
0x411FE3: call    edx
0x411FE5: mov     dword ptr [esi], offset ??_7SeenData@@6B@; const SeenData::`vftable'
0x411FEB: mov     ecx, dword ptr [esp+18h+var_C]
0x411FEF: mov     large fs:0, ecx
0x411FF6: pop     ecx
0x411FF7: pop     esi
0x411FF8: add     esp, 10h
0x411FFB: retn
