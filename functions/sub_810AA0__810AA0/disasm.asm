0x810AA0: push    esi; SpeedTreeBranchShader branch-pass setup: iterates global branch pass table dword_B47790..dword_B477FC and applies vtable +0x94 helper to each pass slot.
0x810AA1: push    edi
0x810AA2: mov     edi, ecx
0x810AA4: mov     esi, offset unk_B47790
0x810AA9: lea     esp, [esp+0]
0x810AB0: mov     ecx, [esi]
0x810AB2: mov     eax, [edi]
0x810AB4: mov     edx, [eax+94h]
0x810ABA: push    ecx
0x810ABB: mov     ecx, edi
0x810ABD: call    edx
0x810ABF: add     esi, 4
0x810AC2: cmp     esi, offset stru_B47800
0x810AC8: jl      short loc_810AB0
0x810ACA: pop     edi
0x810ACB: pop     esi
0x810ACC: retn
