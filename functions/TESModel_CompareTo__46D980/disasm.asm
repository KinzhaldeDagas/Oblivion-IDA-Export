0x46D980: mov     eax, [esp+arg_0]
0x46D984: push    ebx
0x46D985: push    edi
0x46D986: push    0; int
0x46D988: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x46D98D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46D992: push    0; int
0x46D994: push    eax; void *
0x46D995: mov     ebx, ecx
0x46D997: call    OblivionDynamicCast
0x46D99C: mov     edi, eax
0x46D99E: add     esp, 14h
0x46D9A1: test    edi, edi
0x46D9A3: jnz     short loc_46D9AC
0x46D9A5: pop     edi
0x46D9A6: mov     al, 1
0x46D9A8: pop     ebx
0x46D9A9: retn    4
0x46D9AC: movzx   eax, word ptr [ebx+8]
0x46D9B0: cmp     ax, 0FFFFh
0x46D9B4: jnz     short loc_46D9CD
0x46D9B6: mov     eax, [ebx+4]
0x46D9B9: lea     edx, [eax+1]
0x46D9BC: lea     esp, [esp+0]
0x46D9C0: mov     cl, [eax]
0x46D9C2: add     eax, 1
0x46D9C5: test    cl, cl
0x46D9C7: jnz     short loc_46D9C0
0x46D9C9: sub     eax, edx
0x46D9CB: jmp     short loc_46D9D0
0x46D9CD: movzx   eax, ax
0x46D9D0: test    eax, eax
0x46D9D2: jnz     short loc_46D9F8
0x46D9D4: movzx   eax, word ptr [edi+8]
0x46D9D8: cmp     ax, 0FFFFh
0x46D9DC: jnz     short loc_46D9F1
0x46D9DE: mov     eax, [edi+4]
0x46D9E1: lea     edx, [eax+1]
0x46D9E4: mov     cl, [eax]
0x46D9E6: add     eax, 1
0x46D9E9: test    cl, cl
0x46D9EB: jnz     short loc_46D9E4
0x46D9ED: sub     eax, edx
0x46D9EF: jmp     short loc_46D9F4
0x46D9F1: movzx   eax, ax
0x46D9F4: test    eax, eax
0x46D9F6: jz      short loc_46DA6F
0x46D9F8: movzx   eax, word ptr [ebx+8]
0x46D9FC: cmp     ax, 0FFFFh
0x46DA00: push    esi
0x46DA01: jnz     short loc_46DA1F
0x46DA03: mov     eax, [ebx+4]
0x46DA06: lea     edx, [eax+1]
0x46DA09: lea     esp, [esp+0]
0x46DA10: mov     cl, [eax]
0x46DA12: add     eax, 1
0x46DA15: test    cl, cl
0x46DA17: jnz     short loc_46DA10
0x46DA19: sub     eax, edx
0x46DA1B: mov     esi, eax
0x46DA1D: jmp     short loc_46DA22
0x46DA1F: movzx   esi, ax
0x46DA22: movzx   eax, word ptr [edi+8]
0x46DA26: cmp     ax, 0FFFFh
0x46DA2A: jnz     short loc_46DA3F
0x46DA2C: mov     eax, [edi+4]
0x46DA2F: lea     edx, [eax+1]
0x46DA32: mov     cl, [eax]
0x46DA34: add     eax, 1
0x46DA37: test    cl, cl
0x46DA39: jnz     short loc_46DA32
0x46DA3B: sub     eax, edx
0x46DA3D: jmp     short loc_46DA42
0x46DA3F: movzx   eax, ax
0x46DA42: cmp     esi, eax
0x46DA44: pop     esi
0x46DA45: jnz     loc_46D9A5
0x46DA4B: mov     edx, [edi]
0x46DA4D: mov     eax, [edx+14h]
0x46DA50: mov     ecx, edi
0x46DA52: call    eax
0x46DA54: mov     edx, [ebx]
0x46DA56: push    eax; Str2
0x46DA57: mov     eax, [edx+14h]
0x46DA5A: mov     ecx, ebx
0x46DA5C: call    eax
0x46DA5E: push    eax; Str1
0x46DA5F: call    __strcmp
0x46DA64: add     esp, 8
0x46DA67: test    eax, eax
0x46DA69: jnz     loc_46D9A5
0x46DA6F: fld     dword ptr [ebx+0Ch]
0x46DA72: fld     dword ptr [edi+0Ch]
0x46DA75: fucompp
0x46DA77: fnstsw  ax
0x46DA79: test    ah, 44h
0x46DA7C: jp      loc_46D9A5
0x46DA82: pop     edi
0x46DA83: xor     al, al
0x46DA85: pop     ebx
0x46DA86: retn    4
