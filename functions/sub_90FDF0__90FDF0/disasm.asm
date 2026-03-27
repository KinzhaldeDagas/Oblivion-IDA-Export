0x90FDF0: push    ebp
0x90FDF1: mov     ebp, esp
0x90FDF3: and     esp, 0FFFFFFF0h
0x90FDF6: sub     esp, 0Ch
0x90FDF9: mov     eax, [ebp+arg_8]
0x90FDFC: mov     edx, [ebp+arg_0]
0x90FDFF: push    esi
0x90FE00: mov     esi, ecx
0x90FE02: mov     ecx, [ebp+arg_4]
0x90FE05: push    eax
0x90FE06: push    ecx
0x90FE07: push    edx
0x90FE08: mov     ecx, esi
0x90FE0A: call    sub_8E7B70
0x90FE0F: mov     dword ptr [esi], offset off_A9CB64
0x90FE15: mov     dword ptr [esi+30h], 3DCCCCCDh
0x90FE1C: mov     dword ptr [esi+34h], 3C23D70Ah
0x90FE23: xorps   xmm0, xmm0
0x90FE26: movaps  xmmword ptr [esi+20h], xmm0
0x90FE2A: mov     dword ptr [esi+2Ch], 3F800000h
0x90FE31: mov     eax, esi
0x90FE33: pop     esi
0x90FE34: mov     esp, ebp
0x90FE36: pop     ebp
0x90FE37: retn    0Ch
