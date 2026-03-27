0x8F8030: mov     ecx, ds:0BA7D98h
0x8F8036: mov     eax, [ecx]
0x8F8038: push    esi
0x8F8039: push    1Ch
0x8F803B: push    2Ch ; ','
0x8F803D: call    dword ptr [eax+10h]
0x8F8040: mov     ecx, [esp+4+arg_C]
0x8F8044: mov     esi, eax
0x8F8046: mov     [esi+8], ecx
0x8F8049: mov     ecx, [esp+4+arg_4]
0x8F804D: or      edx, 0FFFFFFFFh
0x8F8050: mov     word ptr [esi+4], 2Ch ; ','
0x8F8056: mov     word ptr [esi+6], 1
0x8F805C: mov     dword ptr [esi], offset off_A9B63C
0x8F8062: mov     [esi+1Ch], edx
0x8F8065: mov     [esi+20h], edx
0x8F8068: mov     [esi+24h], edx
0x8F806B: mov     [esi+28h], edx
0x8F806E: mov     edx, [ecx]
0x8F8070: lea     eax, [esi+0Ch]
0x8F8073: push    eax
0x8F8074: add     edx, 10h
0x8F8077: push    edx
0x8F8078: call    sub_8D1DB0
0x8F807D: add     esp, 8
0x8F8080: mov     eax, esi
0x8F8082: pop     esi
0x8F8083: retn
