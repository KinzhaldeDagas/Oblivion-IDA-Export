0x724110: push    ecx
0x724111: push    esi
0x724112: mov     esi, ecx
0x724114: movzx   eax, word ptr [esi+0B6h]
0x72411B: push    edi
0x72411C: mov     edi, [esp+0Ch+arg_4]
0x724120: cmp     edi, eax
0x724122: mov     [esp+0Ch+var_4], 0
0x72412A: mov     dword ptr [esi+0E8h], 1
0x724134: jnb     short loc_724142
0x724136: push    edi
0x724137: lea     ecx, [esi+0ECh]
0x72413D: call    sub_405020
0x724142: push    edi
0x724143: mov     edi, [esp+10h+arg_0]
0x724147: push    edi
0x724148: mov     ecx, esi
0x72414A: call    NiNode__RemoveObjectAt
0x72414F: mov     eax, [esi+0E0h]
0x724155: cmp     eax, 0FFFFFFFFh
0x724158: jle     short loc_72417B
0x72415A: movzx   ecx, word ptr [esi+0B6h]
0x724161: cmp     eax, ecx
0x724163: jge     short loc_724171
0x724165: mov     edx, [esi+0B0h]
0x72416B: cmp     dword ptr [edx+eax*4], 0
0x72416F: jnz     short loc_72417B
0x724171: mov     dword ptr [esi+0E0h], 0FFFFFFFFh
0x72417B: mov     eax, edi
0x72417D: pop     edi
0x72417E: pop     esi
0x72417F: pop     ecx
0x724180: retn    8
