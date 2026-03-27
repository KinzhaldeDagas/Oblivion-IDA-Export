0x540380: fldz
0x540382: push    esi
0x540383: mov     esi, ecx
0x540385: fstp    dword ptr [esi+0F4h]
0x54038B: mov     eax, [esi+0FCh]
0x540391: mov     ecx, [esi+2Ch]
0x540394: and     eax, 0FFFFFFF7h
0x540397: or      eax, 1
0x54039A: test    ecx, ecx
0x54039C: mov     dword ptr [esi+1Ch], 0
0x5403A3: mov     dword ptr [esi+14h], 0
0x5403AA: mov     dword ptr [esi+10h], 0
0x5403B1: mov     [esi+0FCh], eax
0x5403B7: jz      short loc_5403BE
0x5403B9: call    sub_53BBC0
0x5403BE: mov     ecx, [esi+38h]
0x5403C1: test    ecx, ecx
0x5403C3: pop     esi
0x5403C4: jz      short locret_5403CB
0x5403C6: jmp     sub_53D6C0
0x5403CB: retn
