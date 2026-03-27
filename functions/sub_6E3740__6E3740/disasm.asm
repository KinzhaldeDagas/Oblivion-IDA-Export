0x6E3740: push    ebx
0x6E3741: push    ebp
0x6E3742: push    esi
0x6E3743: push    edi
0x6E3744: mov     edi, [esp+10h+arg_0]
0x6E3748: push    edi
0x6E3749: mov     esi, ecx
0x6E374B: call    nullsub_returnvVoid_1arg
0x6E3750: mov     eax, [edi+220h]
0x6E3756: mov     edx, [eax+8]
0x6E3759: push    1
0x6E375B: lea     ecx, [esp+14h+arg_0]
0x6E375F: push    ecx
0x6E3760: mov     ebp, 4
0x6E3765: push    ebp
0x6E3766: lea     ebx, [esi+8]
0x6E3769: push    ebx
0x6E376A: push    eax
0x6E376B: mov     [esp+24h+arg_0], ebp
0x6E376F: call    edx
0x6E3771: add     esp, 14h
0x6E3774: cmp     dword ptr [ebx], 0
0x6E3777: jbe     short loc_6E37AD
0x6E3779: mov     eax, [edi+220h]
0x6E377F: mov     edx, [eax+8]
0x6E3782: push    1
0x6E3784: lea     ecx, [esp+14h+arg_0]
0x6E3788: push    ecx
0x6E3789: mov     [esp+18h+arg_0], ebp
0x6E378D: push    4
0x6E378F: lea     ebp, [esi+10h]
0x6E3792: push    ebp
0x6E3793: push    eax
0x6E3794: call    edx
0x6E3796: mov     ecx, [ebx]
0x6E3798: mov     edx, [esi+0Ch]
0x6E379B: mov     eax, [ebp+0]
0x6E379E: mov     eax, ds:0B3D5C0h[eax*4]
0x6E37A5: push    ecx
0x6E37A6: push    edx
0x6E37A7: push    edi
0x6E37A8: call    eax ; dword_B3D5C0
0x6E37AA: add     esp, 20h
0x6E37AD: pop     edi
0x6E37AE: pop     esi
0x6E37AF: pop     ebp
0x6E37B0: pop     ebx
0x6E37B1: retn    4
