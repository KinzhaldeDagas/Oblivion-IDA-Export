0x98F4F6: mov     eax, [esp+arg_2C]
0x98F4FA: mov     ebx, [eax+8]
0x98F4FD: mov     ecx, [esp+arg_28]
0x98F501: xor     ebx, [ecx]
0x98F503: mov     esi, [eax+0Ch]
0x98F506: cmp     esi, 0FFFFFFFEh
0x98F509: jz      short __local_unwind4____lu_done
0x98F50B: mov     edx, [esp+arg_30]
0x98F50F: cmp     edx, 0FFFFFFFEh
0x98F512: jz      short loc_98F518
0x98F514: cmp     esi, edx
0x98F516: jbe     short __local_unwind4____lu_done
0x98F518: lea     esi, [esi+esi*2]
0x98F51B: lea     ebx, [ebx+esi*4+10h]
0x98F51F: mov     ecx, [ebx]
0x98F521: mov     [eax+0Ch], ecx
0x98F524: cmp     dword ptr [ebx+4], 0
0x98F528: jnz     short __local_unwind4____lu_top
0x98F52A: push    101h
0x98F52F: mov     eax, [ebx+8]
0x98F532: call    __NLG_Notify
0x98F537: mov     ecx, 1
0x98F53C: mov     eax, [ebx+8]
0x98F53F: call    __NLG_Call
0x98F544: jmp     short __local_unwind4____lu_top
