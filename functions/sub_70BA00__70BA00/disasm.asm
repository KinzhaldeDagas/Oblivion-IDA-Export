0x70BA00: push    ebx
0x70BA01: mov     ebx, [esp+4+arg_0]
0x70BA05: push    esi
0x70BA06: push    edi
0x70BA07: push    ebx
0x70BA08: mov     esi, ecx
0x70BA0A: call    sub_707AB0
0x70BA0F: mov     ecx, [ebx]
0x70BA11: lea     eax, [esp+0Ch+arg_0]
0x70BA15: push    eax
0x70BA16: push    esi
0x70BA17: call    NiTMap_GetAt
0x70BA1C: cmp     dword ptr [esi+0C8h], 0
0x70BA23: lea     eax, [esi+0BCh]
0x70BA29: jz      short loc_70BA36
0x70BA2B: mov     ecx, [esp+0Ch+arg_0]
0x70BA2F: push    ebx
0x70BA30: push    eax
0x70BA31: call    sub_70B4E0
0x70BA36: xor     edi, edi
0x70BA38: cmp     [esi+0B6h], di
0x70BA3F: jbe     short loc_70BA64
0x70BA41: mov     ecx, [esi+0B0h]
0x70BA47: mov     ecx, [ecx+edi*4]
0x70BA4A: test    ecx, ecx
0x70BA4C: jz      short loc_70BA56
0x70BA4E: mov     edx, [ecx]
0x70BA50: mov     eax, [edx+38h]
0x70BA53: push    ebx
0x70BA54: call    eax
0x70BA56: movzx   ecx, word ptr [esi+0B6h]
0x70BA5D: add     edi, 1
0x70BA60: cmp     edi, ecx
0x70BA62: jb      short loc_70BA41
0x70BA64: pop     edi
0x70BA65: pop     esi
0x70BA66: pop     ebx
0x70BA67: retn    4
