0x4CBDB0: cmp     [esp+arg_0], 0
0x4CBDB5: push    ebx
0x4CBDB6: mov     ebx, ecx
0x4CBDB8: jz      loc_4CBE4A
0x4CBDBE: push    edi
0x4CBDBF: push    ebx; a2
0x4CBDC0: mov     ecx, offset stru_B35C80; this
0x4CBDC5: call    sub_496EA0
0x4CBDCA: lea     edi, [ebx+48h]
0x4CBDCD: test    edi, edi
0x4CBDCF: jz      short loc_4CBE3E
0x4CBDD1: push    ebp
0x4CBDD2: push    esi
0x4CBDD3: mov     esi, [edi]
0x4CBDD5: test    esi, esi
0x4CBDD7: jz      short loc_4CBE35
0x4CBDD9: mov     eax, [esi+8]
0x4CBDDC: mov     ecx, eax
0x4CBDDE: shr     ecx, 0Bh
0x4CBDE1: test    cl, 1
0x4CBDE4: jnz     short loc_4CBE35
0x4CBDE6: shr     eax, 5
0x4CBDE9: test    al, 1
0x4CBDEB: jnz     short loc_4CBE35
0x4CBDED: mov     edx, [esi]
0x4CBDEF: mov     eax, [edx+170h]
0x4CBDF5: mov     ecx, esi
0x4CBDF7: call    eax
0x4CBDF9: cmp     byte ptr [eax+4], 18h
0x4CBDFD: jnz     short loc_4CBE35
0x4CBDFF: cmp     eax, ds:0B35EBCh
0x4CBE05: jz      short loc_4CBE35
0x4CBE07: mov     edx, [esi]
0x4CBE09: mov     eax, [edx+170h]
0x4CBE0F: mov     ecx, esi
0x4CBE11: call    eax
0x4CBE13: mov     ecx, esi; this
0x4CBE15: mov     ebp, eax
0x4CBE17: call    GetTeleportExtraData
0x4CBE1C: test    eax, eax
0x4CBE1E: jnz     short loc_4CBE2B
0x4CBE20: mov     ecx, ebp
0x4CBE22: call    sub_4B78E0
0x4CBE27: test    al, al
0x4CBE29: jz      short loc_4CBE35
0x4CBE2B: mov     ecx, [esp+10h+arg_0]
0x4CBE2F: push    esi
0x4CBE30: call    BSSimpleList_PushFront
0x4CBE35: mov     edi, [edi+4]
0x4CBE38: test    edi, edi
0x4CBE3A: jnz     short loc_4CBDD3
0x4CBE3C: pop     esi
0x4CBE3D: pop     ebp
0x4CBE3E: push    ebx; a2
0x4CBE3F: mov     ecx, offset stru_B35C80; this
0x4CBE44: call    sub_496F50
0x4CBE49: pop     edi
0x4CBE4A: pop     ebx
0x4CBE4B: retn    4
