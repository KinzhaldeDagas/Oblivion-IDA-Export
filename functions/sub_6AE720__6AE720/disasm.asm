0x6AE720: sub     esp, 0Ch
0x6AE723: push    ebx
0x6AE724: mov     bl, byte ptr [esp+10h+arg_0]
0x6AE728: push    esi
0x6AE729: mov     esi, ecx
0x6AE72B: mov     al, [esi+0A5h]
0x6AE731: xor     al, bl
0x6AE733: jz      loc_6AE819
0x6AE739: test    bl, bl
0x6AE73B: mov     [esi+0A5h], bl
0x6AE741: fld     dword ptr ds:0B161B8h
0x6AE747: mov     [esp+14h+arg_0], 0
0x6AE74F: jz      short loc_6AE753
0x6AE751: fchs
0x6AE753: cmp     byte ptr ds:0B16178h, 0
0x6AE75A: fstp    [esp+14h+var_C]
0x6AE75E: push    edi
0x6AE75F: jz      short loc_6AE7D6
0x6AE761: mov     ecx, [esi+300h]
0x6AE767: call    sub_6A9030
0x6AE76C: test    eax, eax
0x6AE76E: mov     [esp+18h+var_8], eax
0x6AE772: jz      short loc_6AE7D6
0x6AE774: lea     ecx, [esp+18h+arg_0]
0x6AE778: push    ecx
0x6AE779: mov     ecx, [esi+300h]
0x6AE77F: lea     edx, [esp+1Ch+var_4]
0x6AE783: push    edx
0x6AE784: lea     eax, [esp+20h+var_8]
0x6AE788: push    eax
0x6AE789: call    sub_452600
0x6AE78E: mov     edi, [esp+18h+arg_0]
0x6AE792: test    dword ptr [edi], 1000h
0x6AE798: jz      short loc_6AE7A1
0x6AE79A: mov     ecx, edi
0x6AE79C: call    sub_6B6AC0
0x6AE7A1: test    byte ptr [edi], 20h
0x6AE7A4: jnz     short loc_6AE7CF
0x6AE7A6: mov     ecx, edi
0x6AE7A8: call    sub_6B6AF0
0x6AE7AD: test    al, al
0x6AE7AF: jz      short loc_6AE7CF
0x6AE7B1: mov     ecx, edi
0x6AE7B3: call    sub_6B6B90
0x6AE7B8: fadd    [esp+18h+var_C]
0x6AE7BC: push    ecx
0x6AE7BD: mov     ecx, edi
0x6AE7BF: fstp    [esp+1Ch+var_4]
0x6AE7C3: fld     [esp+1Ch+var_4]
0x6AE7C7: fstp    [esp+1Ch+var_1C]; float
0x6AE7CA: call    sub_6B6B20
0x6AE7CF: cmp     [esp+18h+var_8], 0
0x6AE7D4: jnz     short loc_6AE774
0x6AE7D6: mov     ecx, [esi+324h]
0x6AE7DC: test    ecx, ecx
0x6AE7DE: jz      short loc_6AE821
0x6AE7E0: test    bl, bl
0x6AE7E2: jnz     short loc_6AE825
0x6AE7E4: call    sub_6B7240
0x6AE7E9: mov     ecx, [esi+324h]
0x6AE7EF: call    sub_6B73C0
0x6AE7F4: mov     edi, [esi+324h]
0x6AE7FA: test    edi, edi
0x6AE7FC: jz      short loc_6AE80E
0x6AE7FE: mov     ecx, edi; this
0x6AE800: call    sub_6B73E0
0x6AE805: push    edi
0x6AE806: call    FormHeapFree
0x6AE80B: add     esp, 4
0x6AE80E: mov     dword ptr [esi+324h], 0
0x6AE818: pop     edi
0x6AE819: pop     esi
0x6AE81A: pop     ebx
0x6AE81B: add     esp, 0Ch
0x6AE81E: retn    4
0x6AE821: test    bl, bl
0x6AE823: jz      short loc_6AE818
0x6AE825: test    ecx, ecx
0x6AE827: jnz     short loc_6AE818
0x6AE829: push    1
0x6AE82B: push    11h
0x6AE82D: push    offset aAmbunderwaterl; "AMBUnderwaterLP"
0x6AE832: mov     ecx, esi
0x6AE834: call    PlaySound???
0x6AE839: test    eax, eax
0x6AE83B: mov     [esi+324h], eax
0x6AE841: jz      short loc_6AE818
0x6AE843: pop     edi
0x6AE844: pop     esi
0x6AE845: pop     ebx
0x6AE846: add     esp, 0Ch
0x6AE849: mov     [esp+arg_0], 1
0x6AE851: mov     ecx, eax
0x6AE853: jmp     sub_6B7190
