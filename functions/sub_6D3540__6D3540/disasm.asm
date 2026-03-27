0x6D3540: push    ecx
0x6D3541: mov     ecx, [esp+4+arg_4]
0x6D3545: cmp     ecx, 4
0x6D3548: push    ebx
0x6D3549: push    esi
0x6D354A: push    edi
0x6D354B: jnz     short loc_6D35CC
0x6D354D: mov     eax, [esp+10h+arg_8]
0x6D3551: mov     edi, [eax]
0x6D3553: xor     ebx, ebx
0x6D3555: push    ebp
0x6D3556: movzx   esi, bl
0x6D3559: mov     eax, [edi+esi*4+14h]
0x6D355D: test    eax, eax
0x6D355F: mov     ecx, [edi+esi*4+30h]
0x6D3563: mov     ebp, [edi+esi*4+20h]
0x6D3567: mov     [esp+14h+var_4], ecx
0x6D356B: mov     [esp+14h+arg_4], eax
0x6D356F: jz      short loc_6D359C
0x6D3571: fld     [esp+14h+arg_14]
0x6D3575: sub     esp, 8
0x6D3578: fstp    [esp+1Ch+var_18]; float
0x6D357C: lea     edx, [esp+1Ch+arg_4]
0x6D3580: fld     [esp+1Ch+arg_10]
0x6D3584: lea     eax, [esp+1Ch+var_4]
0x6D3588: fstp    [esp+1Ch+var_1C]; float
0x6D358B: push    edx; int
0x6D358C: push    eax; int
0x6D358D: push    ebp; int
0x6D358E: push    0; int
0x6D3590: call    sub_6D3540
0x6D3595: mov     eax, [esp+2Ch+arg_4]
0x6D3599: add     esp, 18h
0x6D359C: mov     ecx, [esp+14h+var_4]
0x6D35A0: mov     [edi+esi*4+30h], ecx
0x6D35A4: mov     [edi+esi*4+14h], eax
0x6D35A8: mov     [edi+esi*4+20h], ebp
0x6D35AC: mov     dword ptr [edi+esi*4+3Ch], 0
0x6D35B4: mov     dl, ss:byte_B3D3E8[ebp]
0x6D35BA: add     ebx, 1
0x6D35BD: cmp     ebx, 3
0x6D35C0: mov     [esi+edi+2Ch], dl
0x6D35C4: jb      short loc_6D3556
0x6D35C6: pop     ebp
0x6D35C7: pop     edi
0x6D35C8: pop     esi
0x6D35C9: pop     ebx
0x6D35CA: pop     ecx
0x6D35CB: retn
0x6D35CC: mov     eax, [esp+10h+arg_0]
0x6D35D0: fld     [esp+10h+arg_10]
0x6D35D4: mov     edi, [esp+10h+arg_C]
0x6D35D8: cmp     dword ptr [edi], 1
0x6D35DB: mov     ebx, [esp+10h+arg_8]
0x6D35DF: lea     eax, [eax+eax*2]
0x6D35E2: lea     ecx, [ecx+eax*2]
0x6D35E5: mov     esi, ds:0B3D1A8h[ecx*4]
0x6D35EC: jnz     short loc_6D35FD
0x6D35EE: mov     edx, [ebx]
0x6D35F0: fld     dword ptr [edx]
0x6D35F2: fld     st(1)
0x6D35F4: fucompp
0x6D35F6: fnstsw  ax
0x6D35F8: test    ah, 44h
0x6D35FB: jnp     short loc_6D361C
0x6D35FD: push    edi
0x6D35FE: push    ebx
0x6D35FF: push    ecx
0x6D3600: fstp    [esp+1Ch+var_1C]
0x6D3603: call    esi ; dword_B3D1A8
0x6D3605: fld     [esp+1Ch+arg_14]
0x6D3609: add     esp, 0Ch
0x6D360C: push    edi
0x6D360D: push    ebx
0x6D360E: push    ecx
0x6D360F: fstp    [esp+1Ch+var_1C]
0x6D3612: call    esi ; dword_B3D1A8
0x6D3614: add     esp, 0Ch
0x6D3617: pop     edi
0x6D3618: pop     esi
0x6D3619: pop     ebx
0x6D361A: pop     ecx
0x6D361B: retn
0x6D361C: pop     edi
0x6D361D: fstp    st
0x6D361F: pop     esi
0x6D3620: pop     ebx
0x6D3621: pop     ecx
0x6D3622: retn
