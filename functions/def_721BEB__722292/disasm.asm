0x722292: lea     ecx, [esp+arg_44]; jumptable 00721BEB default case
0x722296: push    ecx
0x722297: lea     edx, [esp+4+arg_108]
0x72229E: push    edx
0x72229F: mov     ecx, ebp
0x7222A1: call    NiMAtrix33_Multiply
0x7222A6: mov     edi, ebp
0x7222A8: mov     ecx, 9
0x7222AD: mov     esi, eax
0x7222AF: rep movsd
0x7222B1: xor     esi, esi
0x7222B3: cmp     [ebx+0B6h], si
0x7222BA: pop     ebp
0x7222BB: jbe     short loc_7222FC
0x7222BD: lea     ecx, [ecx+0]
0x7222C0: mov     eax, [ebx+0B0h]
0x7222C6: mov     ecx, [eax+esi*4]
0x7222C9: test    ecx, ecx
0x7222CB: jz      short loc_7222EE
0x7222CD: movzx   eax, byte ptr [ebx+0DCh]
0x7222D4: fld     dword ptr [ebx+0E0h]
0x7222DA: mov     edx, [ecx]
0x7222DC: mov     edx, [edx+60h]
0x7222DF: shr     al, 3
0x7222E2: and     eax, 0FFFFFF01h
0x7222E7: push    eax
0x7222E8: push    ecx
0x7222E9: fstp    [esp+4+var_4]
0x7222EC: call    edx
0x7222EE: movzx   eax, word ptr [ebx+0B6h]
0x7222F5: add     esi, 1
0x7222F8: cmp     esi, eax
0x7222FA: jb      short loc_7222C0
0x7222FC: pop     edi
0x7222FD: pop     esi
0x7222FE: pop     ebx
0x7222FF: add     esp, 130h
0x722305: retn    4
