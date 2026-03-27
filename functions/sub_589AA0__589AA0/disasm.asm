0x589AA0: push    ecx
0x589AA1: push    esi
0x589AA2: push    edi
0x589AA3: mov     edi, ecx
0x589AA5: mov     esi, [edi+24h]
0x589AA8: test    esi, esi
0x589AAA: jz      short loc_589B0B
0x589AAC: call    sub_589890
0x589AB1: cmp     dword ptr [esi+1Ch], 0
0x589AB5: jz      short loc_589B04
0x589AB7: push    3
0x589AB9: call    nullsub_returnTrue_0arg
0x589ABE: mov     ecx, [esi+1Ch]
0x589AC1: mov     eax, [ecx]
0x589AC3: mov     eax, [eax+88h]
0x589AC9: add     esp, 4
0x589ACC: push    esi
0x589ACD: lea     edx, [esp+10h+var_4]
0x589AD1: push    edx
0x589AD2: call    eax
0x589AD4: mov     eax, dword ptr [esp+0Ch+var_4]
0x589AD8: test    eax, eax
0x589ADA: jz      short loc_589AFA
0x589ADC: mov     esi, eax
0x589ADE: add     eax, 4
0x589AE1: push    eax; lpAddend
0x589AE2: call    dword ptr ds:0A2807Ch
0x589AE8: test    eax, eax
0x589AEA: jnz     short loc_589AFA
0x589AEC: test    esi, esi
0x589AEE: jz      short loc_589AFA
0x589AF0: mov     edx, [esi]
0x589AF2: mov     eax, [edx]
0x589AF4: push    1
0x589AF6: mov     ecx, esi
0x589AF8: call    eax
0x589AFA: push    2
0x589AFC: call    nullsub_returnTrue_0arg
0x589B01: add     esp, 4
0x589B04: mov     dword ptr [edi+24h], 0
0x589B0B: pop     edi
0x589B0C: pop     esi
0x589B0D: pop     ecx
0x589B0E: retn
