0x74ABF0: push    ebx
0x74ABF1: push    ebp
0x74ABF2: push    esi
0x74ABF3: mov     ebx, 1
0x74ABF8: test    ds:0B40890h, bl
0x74ABFE: push    edi
0x74ABFF: mov     esi, ecx
0x74AC01: jnz     short loc_74AC20
0x74AC03: or      ds:0B40890h, ebx
0x74AC09: push    offset sub_A26CC0; void (__cdecl *)()
0x74AC0E: mov     dword ptr ds:0B4088Ch, 0
0x74AC18: call    _atexit
0x74AC1D: add     esp, 4
0x74AC20: movzx   ecx, word ptr [esi+0Ah]
0x74AC24: mov     eax, [esp+10h+arg_0]
0x74AC28: cmp     eax, ecx
0x74AC2A: mov     ebp, [esp+10h+arg_4]
0x74AC2E: jb      short loc_74AC48
0x74AC30: lea     edx, [eax+1]
0x74AC33: mov     [esi+0Ah], dx
0x74AC37: mov     ecx, [ebp+0]
0x74AC3A: cmp     ecx, ds:0B4088Ch
0x74AC40: jz      short loc_74AC6C
0x74AC42: add     [esi+0Ch], bx
0x74AC46: jmp     short loc_74AC6C
0x74AC48: mov     ecx, ds:0B4088Ch
0x74AC4E: cmp     [ebp+0], ecx
0x74AC51: mov     edx, [esi+4]
0x74AC54: jz      short loc_74AC61
0x74AC56: cmp     [edx+eax*4], ecx
0x74AC59: jnz     short loc_74AC6C
0x74AC5B: add     [esi+0Ch], bx
0x74AC5F: jmp     short loc_74AC6C
0x74AC61: cmp     [edx+eax*4], ecx
0x74AC64: jz      short loc_74AC6C
0x74AC66: add     word ptr [esi+0Ch], 0FFFFh
0x74AC6C: mov     ecx, [esi+4]
0x74AC6F: mov     esi, [ecx+eax*4]
0x74AC72: cmp     esi, [ebp+0]
0x74AC75: lea     edi, [ecx+eax*4]
0x74AC78: jz      short loc_74ACAC
0x74AC7A: test    esi, esi
0x74AC7C: jz      short loc_74AC99
0x74AC7E: lea     edx, [esi+4]
0x74AC81: push    edx; lpAddend
0x74AC82: call    dword ptr ds:0A2807Ch
0x74AC88: test    eax, eax
0x74AC8A: jnz     short loc_74AC99
0x74AC8C: test    esi, esi
0x74AC8E: jz      short loc_74AC99
0x74AC90: mov     eax, [esi]
0x74AC92: mov     edx, [eax]
0x74AC94: push    ebx
0x74AC95: mov     ecx, esi
0x74AC97: call    edx
0x74AC99: mov     eax, [ebp+0]
0x74AC9C: test    eax, eax
0x74AC9E: mov     [edi], eax
0x74ACA0: jz      short loc_74ACAC
0x74ACA2: add     eax, 4
0x74ACA5: push    eax; lpAddend
0x74ACA6: call    dword ptr ds:0A28078h
0x74ACAC: pop     edi
0x74ACAD: pop     esi
0x74ACAE: pop     ebp
0x74ACAF: pop     ebx
0x74ACB0: retn    8
