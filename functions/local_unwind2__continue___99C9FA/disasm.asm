0x99C9FA: lea     esi, [esi+esi*2]
0x99C9FD: mov     ecx, [ebx+esi*4]
0x99CA00: mov     [esp+arg_8], ecx
0x99CA04: mov     [eax+0Ch], ecx
0x99CA07: cmp     dword ptr [ebx+esi*4+4], 0
0x99CA0C: jnz     short __local_unwind2____lu_continue
0x99CA0E: push    101h
0x99CA13: mov     eax, [ebx+esi*4+8]
0x99CA17: call    __NLG_Notify
0x99CA1C: mov     eax, [ebx+esi*4+8]
0x99CA20: call    __NLG_Call
