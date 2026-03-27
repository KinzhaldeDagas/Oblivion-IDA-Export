0x4CB790: push    esi
0x4CB791: push    edi
0x4CB792: mov     edi, ecx
0x4CB794: push    edi; a2
0x4CB795: mov     ecx, offset stru_B35C80; this
0x4CB79A: call    sub_496EA0
0x4CB79F: push    0
0x4CB7A1: lea     esi, [edi+48h]
0x4CB7A4: push    esi
0x4CB7A5: mov     ecx, offset ActorProcessManager_ptr
0x4CB7AA: call    sub_6786A0
0x4CB7AF: push    edi; a2
0x4CB7B0: mov     ecx, offset stru_B35C80; this
0x4CB7B5: call    sub_496F50
0x4CB7BA: push    edi; a2
0x4CB7BB: mov     ecx, offset stru_B35C80; this
0x4CB7C0: call    sub_496EA0
0x4CB7C5: test    esi, esi
0x4CB7C7: jz      short loc_4CB7E2
0x4CB7C9: lea     esp, [esp+0]
0x4CB7D0: mov     ecx, [esi]
0x4CB7D2: test    ecx, ecx
0x4CB7D4: jz      short loc_4CB7DB
0x4CB7D6: call    sub_4DC100
0x4CB7DB: mov     esi, [esi+4]
0x4CB7DE: test    esi, esi
0x4CB7E0: jnz     short loc_4CB7D0
0x4CB7E2: push    edi; a2
0x4CB7E3: mov     ecx, offset stru_B35C80; this
0x4CB7E8: call    sub_496F50
0x4CB7ED: pop     edi
0x4CB7EE: pop     esi
0x4CB7EF: retn
