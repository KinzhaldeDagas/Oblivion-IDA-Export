0x443F00: push    0FFFFFFFFh
0x443F02: push    offset BoundItemEffect_Link_SEH
0x443F07: mov     eax, large fs:0
0x443F0D: push    eax
0x443F0E: sub     esp, 0Ch
0x443F11: push    ebx
0x443F12: push    ebp
0x443F13: push    esi
0x443F14: push    edi
0x443F15: mov     eax, ds:0B30AACh
0x443F1A: xor     eax, esp
0x443F1C: push    eax
0x443F1D: lea     eax, [esp+2Ch+var_C]
0x443F21: mov     large fs:0, eax
0x443F27: mov     ebx, [esp+2Ch+a2]
0x443F2B: xor     esi, esi
0x443F2D: cmp     ebx, esi
0x443F2F: jz      loc_444043
0x443F35: lea     eax, [ecx+0A0h]
0x443F3B: cmp     eax, esi
0x443F3D: mov     [esp+2Ch+var_14], eax
0x443F41: jz      short loc_443F62
0x443F43: mov     ecx, [eax+4]
0x443F46: cmp     ecx, esi
0x443F48: jnz     short loc_443F4E
0x443F4A: cmp     [eax], esi
0x443F4C: jz      short loc_443F62
0x443F4E: mov     eax, [eax]
0x443F50: cmp     eax, esi
0x443F52: jz      short loc_443F5C
0x443F54: cmp     [eax], ebx
0x443F56: jz      loc_444043
0x443F5C: mov     eax, ecx
0x443F5E: cmp     eax, esi
0x443F60: jnz     short loc_443F43
0x443F62: push    8; Size
0x443F64: call    FormHeapAlloc
0x443F69: add     esp, 4
0x443F6C: mov     [esp+2Ch+var_18], eax
0x443F70: cmp     eax, esi
0x443F72: mov     [esp+2Ch+var_4], esi
0x443F76: jz      short loc_443F87
0x443F78: mov     ecx, eax
0x443F7A: call    sub_4418E0
0x443F7F: mov     edi, eax
0x443F81: mov     [esp+2Ch+var_18], edi
0x443F85: jmp     short loc_443F8D
0x443F87: mov     [esp+2Ch+var_18], esi
0x443F8B: mov     edi, esi
0x443F8D: or      ebp, 0FFFFFFFFh
0x443F90: push    ebx; a2
0x443F91: mov     ecx, edi; this
0x443F93: mov     [esp+30h+var_4], ebp
0x443F97: call    NiSmartPointer_Set??
0x443F9C: push    18h; Size
0x443F9E: call    FormHeapAlloc
0x443FA3: add     esp, 4
0x443FA6: mov     [esp+2Ch+var_10], eax
0x443FAA: cmp     eax, esi
0x443FAC: mov     [esp+2Ch+var_4], 1
0x443FB4: jz      short loc_443FD3
0x443FB6: push    offset sub_7016A0; a5
0x443FBB: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x443FC0: push    5; size
0x443FC2: lea     esi, [eax+4]
0x443FC5: push    4; a2
0x443FC7: push    esi; a1
0x443FC8: mov     dword ptr [eax], 5
0x443FCE: call    ArrayConstructor
0x443FD3: mov     [esp+2Ch+var_4], ebp
0x443FD7: mov     [edi+4], esi
0x443FDA: xor     ebp, ebp
0x443FDC: jmp     short loc_443FE8
0x443FDE: align 10h
0x443FE0: mov     ebx, [esp+2Ch+a2]
0x443FE4: mov     edi, [esp+2Ch+var_18]
0x443FE8: mov     ecx, ebx
0x443FEA: call    sub_700900
0x443FEF: mov     esi, [edi+4]
0x443FF2: mov     edi, [esi+ebp]
0x443FF5: add     esi, ebp
0x443FF7: mov     ebx, eax
0x443FF9: cmp     edi, ebx
0x443FFB: jz      short loc_44402D
0x443FFD: test    edi, edi
0x443FFF: jz      short loc_44401D
0x444001: lea     eax, [edi+4]
0x444004: push    eax; lpAddend
0x444005: call    dword ptr ds:0A2807Ch
0x44400B: test    eax, eax
0x44400D: jnz     short loc_44401D
0x44400F: test    edi, edi
0x444011: jz      short loc_44401D
0x444013: mov     edx, [edi]
0x444015: mov     eax, [edx]
0x444017: push    1
0x444019: mov     ecx, edi
0x44401B: call    eax
0x44401D: test    ebx, ebx
0x44401F: mov     [esi], ebx
0x444021: jz      short loc_44402D
0x444023: add     ebx, 4
0x444026: push    ebx; lpAddend
0x444027: call    dword ptr ds:0A28078h
0x44402D: add     ebp, 4
0x444030: cmp     ebp, 14h
0x444033: jl      short loc_443FE0
0x444035: mov     ecx, [esp+2Ch+var_18]
0x444039: push    ecx
0x44403A: mov     ecx, [esp+30h+var_14]
0x44403E: call    BSSimpleList_PushBack
0x444043: mov     ecx, dword ptr [esp+2Ch+var_C]
0x444047: mov     large fs:0, ecx
0x44404E: pop     ecx
0x44404F: pop     edi
0x444050: pop     esi
0x444051: pop     ebp
0x444052: pop     ebx
0x444053: add     esp, 18h
0x444056: retn    4
