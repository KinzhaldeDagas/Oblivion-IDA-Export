0x8BDF00: push    esi
0x8BDF01: mov     esi, ecx
0x8BDF03: cmp     dword ptr [esi+0Ch], 0
0x8BDF07: jnz     short loc_8BDF41
0x8BDF09: push    30h ; '0'; Size
0x8BDF0B: call    FormHeapAlloc
0x8BDF10: add     esp, 4
0x8BDF13: test    eax, eax
0x8BDF15: jz      short loc_8BDF20
0x8BDF17: mov     ecx, eax
0x8BDF19: call    sub_8BDE80
0x8BDF1E: jmp     short loc_8BDF22
0x8BDF20: xor     eax, eax
0x8BDF22: cmp     dword ptr [esi+8], 0
0x8BDF26: mov     [esi+0Ch], eax
0x8BDF29: jz      short loc_8BDF33
0x8BDF2B: push    eax
0x8BDF2C: mov     ecx, esi
0x8BDF2E: call    sub_8BDC60
0x8BDF33: mov     eax, [esp+4+arg_0]
0x8BDF37: mov     byte ptr [eax], 1
0x8BDF3A: mov     eax, [esi+0Ch]
0x8BDF3D: pop     esi
0x8BDF3E: retn    4
0x8BDF41: mov     ecx, [esp+4+arg_0]
0x8BDF45: mov     byte ptr [ecx], 0
0x8BDF48: mov     eax, [esi+0Ch]
0x8BDF4B: pop     esi
0x8BDF4C: retn    4
