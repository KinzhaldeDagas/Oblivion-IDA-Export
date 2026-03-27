0x707E90: mov     eax, [esp+arg_4]
0x707E94: push    ebx
0x707E95: push    ebp
0x707E96: mov     ebp, [esp+8+arg_0]
0x707E9A: push    esi
0x707E9B: push    edi
0x707E9C: push    eax
0x707E9D: push    ebp
0x707E9E: mov     ebx, ecx
0x707EA0: call    sub_700300
0x707EA5: mov     cx, [ebx+18h]
0x707EA9: mov     [ebp+18h], cx
0x707EAD: lea     esi, [ebx+30h]
0x707EB0: lea     edi, [ebp+30h]
0x707EB3: mov     ecx, 0Dh
0x707EB8: rep movsd
0x707EBA: cmp     dword ptr [ebx+0A4h], 0
0x707EC1: jz      short loc_707ED7
0x707EC3: mov     edx, [esp+10h+arg_4]
0x707EC7: push    edx
0x707EC8: lea     eax, [ebx+98h]
0x707ECE: push    eax
0x707ECF: push    ebp
0x707ED0: mov     ecx, ebx
0x707ED2: call    sub_707E40
0x707ED7: mov     ebx, [ebx+0A8h]
0x707EDD: test    ebx, ebx
0x707EDF: jz      short loc_707EF7
0x707EE1: mov     edx, [ebx]
0x707EE3: mov     eax, [esp+10h+arg_4]
0x707EE7: mov     edx, [edx+18h]
0x707EEA: push    eax
0x707EEB: mov     ecx, ebx
0x707EED: call    edx
0x707EEF: push    eax
0x707EF0: mov     ecx, ebp
0x707EF2: call    sub_435CE0
0x707EF7: pop     edi
0x707EF8: pop     esi
0x707EF9: pop     ebp
0x707EFA: pop     ebx
0x707EFB: retn    8
