0x88E880: push    0FFFFFFFFh
0x88E882: push    offset SEH_88E880
0x88E887: mov     eax, large fs:0
0x88E88D: push    eax
0x88E88E: push    ecx
0x88E88F: push    ebx
0x88E890: push    ebp
0x88E891: push    esi
0x88E892: push    edi
0x88E893: mov     eax, ds:0B30AACh
0x88E898: xor     eax, esp
0x88E89A: push    eax
0x88E89B: lea     eax, [esp+24h+var_C]
0x88E89F: mov     large fs:0, eax
0x88E8A5: mov     esi, ecx
0x88E8A7: mov     edi, [esp+24h+arg_0]
0x88E8AB: mov     ebx, [edi+10h]
0x88E8AE: test    ebx, ebx
0x88E8B0: mov     [esp+24h+var_10], ebx
0x88E8B4: jz      short loc_88E8C0
0x88E8B6: lea     eax, [ebx+4]
0x88E8B9: push    eax; lpAddend
0x88E8BA: call    dword ptr ds:0A28078h
0x88E8C0: push    0
0x88E8C2: mov     ecx, edi
0x88E8C4: mov     [esp+28h+var_4], 0
0x88E8CC: call    sub_897670
0x88E8D1: push    ebx
0x88E8D2: mov     ecx, esi
0x88E8D4: call    sub_897670
0x88E8D9: fld     dword ptr [edi+18h]
0x88E8DC: mov     ebp, [esi]
0x88E8DE: fstp    [esp+24h+arg_0]
0x88E8E2: fld     [esp+24h+arg_0]
0x88E8E6: mov     ecx, edi
0x88E8E8: fstp    dword ptr [esi+18h]
0x88E8EB: fld     dword ptr [edi+14h]
0x88E8EE: fstp    [esp+24h+arg_0]
0x88E8F2: fld     [esp+24h+arg_0]
0x88E8F6: fstp    dword ptr [esi+14h]
0x88E8F9: mov     eax, [edi+20h]
0x88E8FC: mov     [esi+20h], eax
0x88E8FF: call    sub_452A60
0x88E904: mov     edx, [ebp+4Ch]
0x88E907: push    eax
0x88E908: mov     ecx, esi
0x88E90A: call    edx
0x88E90C: test    ebx, ebx
0x88E90E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x88E916: jz      short loc_88E930
0x88E918: lea     eax, [ebx+4]
0x88E91B: push    eax; lpAddend
0x88E91C: call    dword ptr ds:0A2807Ch
0x88E922: test    eax, eax
0x88E924: jnz     short loc_88E930
0x88E926: mov     edx, [ebx]
0x88E928: mov     eax, [edx]
0x88E92A: push    1
0x88E92C: mov     ecx, ebx
0x88E92E: call    eax
0x88E930: mov     ecx, dword ptr [esp+24h+var_C]
0x88E934: mov     large fs:0, ecx
0x88E93B: pop     ecx
0x88E93C: pop     edi
0x88E93D: pop     esi
0x88E93E: pop     ebp
0x88E93F: pop     ebx
0x88E940: add     esp, 10h
0x88E943: retn    4
