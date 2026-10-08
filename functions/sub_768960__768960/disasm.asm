0x768960: mov     ecx, [ecx+0A94h]
0x768966: test    ecx, ecx
0x768968: jz      short locret_76896F
0x76896A: jmp     loc_77A9B0
0x76896F: retn    4
0x77A9B0: push    ebx
0x77A9B1: push    edi
0x77A9B2: mov     ebx, ecx
0x77A9B4: xor     edi, edi
0x77A9B6: cmp     [ebx+38h], edi
0x77A9B9: jbe     short loc_77AA02
0x77A9BB: push    esi
0x77A9BC: lea     esp, [esp+0]
0x77A9C0: mov     eax, [ebx+44h]
0x77A9C3: mov     esi, [eax+edi*4]
0x77A9C6: test    esi, esi
0x77A9C8: jz      short loc_77A9F9
0x77A9CA: add     dword ptr [esi+60h], 1
0x77A9CE: mov     ecx, esi
0x77A9D0: call    sub_75F9D0
0x77A9D5: test    eax, eax
0x77A9D7: jz      short loc_77A9EC
0x77A9D9: mov     ecx, [esp+0Ch+arg_0]
0x77A9DD: mov     edx, [eax]
0x77A9DF: mov     edx, [edx+98h]
0x77A9E5: push    0
0x77A9E7: push    ecx
0x77A9E8: mov     ecx, eax
0x77A9EA: call    edx
0x77A9EC: add     dword ptr [esi+60h], 0FFFFFFFFh
0x77A9F0: jnz     short loc_77A9F9
0x77A9F2: mov     ecx, esi
0x77A9F4: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x77A9F9: add     edi, 1
0x77A9FC: cmp     edi, [ebx+38h]
0x77A9FF: jb      short loc_77A9C0
0x77AA01: pop     esi
0x77AA02: pop     edi
0x77AA03: pop     ebx
0x77AA04: retn    4
