0x477B60: sub     esp, 0Ch
0x477B63: push    ebx
0x477B64: mov     ebx, [esp+10h+arg_0]
0x477B68: push    esi
0x477B69: push    edi
0x477B6A: push    ebx
0x477B6B: mov     esi, ecx
0x477B6D: call    sub_51AA00
0x477B72: lea     ecx, [eax+eax*8]
0x477B75: add     ecx, ecx
0x477B77: mov     edx, ds:dword_B102E8[ecx+ecx]
0x477B7E: add     ecx, ecx
0x477B80: mov     edi, edx
0x477B82: add     esp, 4
0x477B85: sub     edi, 5
0x477B88: jz      short loc_477B96
0x477B8A: sub     edi, 1
0x477B8D: jnz     short loc_477B98
0x477B8F: mov     edx, 3
0x477B94: jmp     short loc_477B98
0x477B96: xor     edx, edx
0x477B98: cmp     eax, 0FFh
0x477B9D: jz      ActorAnimData_PlayAnimGroup___def_477BB5
0x477BA3: mov     ecx, ds:dword_B102EC[ecx]
0x477BA9: cmp     ecx, 7; switch 8 cases
0x477BAC: ja      short ActorAnimData_PlayAnimGroup___def_477BB5
0x477BAE: movzx   eax, ds:byte_477C38[ecx]
0x477BB5: jmp     ds:jpt_477BB5[eax*4]; switch jump
0x477BBC: mov     eax, [esp+18h+arg_4]; jumptable 00477BB5 cases 0,1
0x477BC0: sub     eax, 0
0x477BC3: jz      short loc_477BEC
0x477BC5: sub     eax, 1
0x477BC8: jnz     short ActorAnimData_PlayAnimGroup___def_477BB5
0x477BCA: mov     ecx, [esp+18h+arg_8]
0x477BCE: mov     word ptr [esi+edx*2+70h], 0FFh
0x477BD5: push    0FFFFFFFFh
0x477BD7: mov     [esi+edx*4+5Ch], ecx
0x477BDB: push    ebx
0x477BDC: mov     ecx, esi
0x477BDE: call    sub_476260
0x477BE3: push    1
0x477BE5: lea     edx, [esp+1Ch+var_C]
0x477BE9: push    edx
0x477BEA: jmp     short loc_477C13
0x477BEC: mov     eax, [esp+18h+arg_8]
0x477BF0: mov     [esi+edx*2+70h], bx
0x477BF5: pop     edi
0x477BF6: mov     [esi+edx*4+7Ch], eax
0x477BFA: pop     esi
0x477BFB: pop     ebx
0x477BFC: add     esp, 0Ch
0x477BFF: retn    0Ch
0x477C02: push    0FFFFFFFFh; jumptable 00477BB5 cases 2-7
0x477C04: push    ebx
0x477C05: mov     ecx, esi
0x477C07: call    sub_476260
0x477C0C: push    1; int
0x477C0E: lea     ecx, [esp+1Ch+var_C]
0x477C12: push    ecx; int
0x477C13: fld     dword ptr [esi+94h]
0x477C19: push    ecx
0x477C1A: mov     ecx, esi
0x477C1C: fstp    [esp+24h+var_24]; float
0x477C1F: call    sub_471230
