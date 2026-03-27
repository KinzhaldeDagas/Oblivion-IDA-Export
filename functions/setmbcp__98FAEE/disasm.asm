0x98FAEE: push    14h
0x98FAF0: push    offset stru_AFFF68
0x98FAF5: call    __SEH_prolog4
0x98FAFA: or      [ebp+var_20], 0FFFFFFFFh
0x98FAFE: call    __getptd
0x98FB03: mov     edi, eax
0x98FB05: mov     [ebp+var_24], edi
0x98FB08: call    ___updatetmbcinfo
0x98FB0D: mov     ebx, [edi+68h]
0x98FB10: mov     esi, [ebp+arg_0]
0x98FB13: call    ?getSystemCP@@YAHH@Z
0x98FB18: mov     [ebp+arg_0], eax
0x98FB1B: cmp     eax, [ebx+4]
0x98FB1E: jz      loc_98FC7B
0x98FB24: push    220h
0x98FB29: call    unknown_libname_72
0x98FB2E: pop     ecx
0x98FB2F: mov     ebx, eax
0x98FB31: test    ebx, ebx
0x98FB33: jz      __setmbcp___$LN28_2
0x98FB39: mov     ecx, 88h ; 'ˆ'
0x98FB3E: mov     esi, [edi+68h]
0x98FB41: mov     edi, ebx
0x98FB43: rep movsd
0x98FB45: and     dword ptr [ebx], 0
0x98FB48: push    ebx
0x98FB49: push    [ebp+arg_0]
0x98FB4C: call    __setmbcp_nolock
0x98FB51: pop     ecx
0x98FB52: pop     ecx
0x98FB53: mov     [ebp+var_20], eax
0x98FB56: test    eax, eax
0x98FB58: jnz     loc_98FC5A
0x98FB5E: mov     esi, [ebp+var_24]
0x98FB61: push    dword ptr [esi+68h]; lpAddend
0x98FB64: call    ds:InterlockedDecrement
0x98FB6A: test    eax, eax
0x98FB6C: jnz     short loc_98FB7F
0x98FB6E: mov     eax, [esi+68h]
0x98FB71: cmp     eax, offset dword_B31390
0x98FB76: jz      short loc_98FB7F
0x98FB78: push    eax; Memory
0x98FB79: call    _free
0x98FB7E: pop     ecx
0x98FB7F: mov     [esi+68h], ebx
0x98FB82: push    ebx; lpAddend
0x98FB83: mov     edi, ds:InterlockedIncrement
0x98FB89: call    edi ; InterlockedIncrement
0x98FB8B: test    byte ptr [esi+70h], 2
0x98FB8F: jnz     __setmbcp___$LN28_2
0x98FB95: test    byte ptr dword_B318B0, 1
0x98FB9C: jnz     __setmbcp___$LN28_2
0x98FBA2: push    0Dh
0x98FBA4: call    __lock
0x98FBA9: pop     ecx
0x98FBAA: and     [ebp+ms_exc.registration.TryLevel], 0
0x98FBAE: mov     eax, [ebx+4]
0x98FBB1: mov     dword_BAA614, eax
0x98FBB6: mov     eax, [ebx+8]
0x98FBB9: mov     dword_BAA618, eax
0x98FBBE: mov     eax, [ebx+0Ch]
0x98FBC1: mov     dword_BAA61C, eax
0x98FBC6: xor     eax, eax
0x98FBC8: mov     [ebp+var_1C], eax
0x98FBCB: cmp     eax, 5
0x98FBCE: jge     short loc_98FBE0
0x98FBD0: mov     cx, [ebx+eax*2+10h]
0x98FBD5: mov     word_BAA608[eax*2], cx
0x98FBDD: inc     eax
0x98FBDE: jmp     short loc_98FBC8
0x98FBE0: xor     eax, eax
0x98FBE2: mov     [ebp+var_1C], eax
0x98FBE5: cmp     eax, 101h
0x98FBEA: jge     short loc_98FBF9
0x98FBEC: mov     cl, [eax+ebx+1Ch]
0x98FBF0: mov     byte_B315B0[eax], cl
0x98FBF6: inc     eax
0x98FBF7: jmp     short loc_98FBE2
0x98FBF9: xor     eax, eax
0x98FBFB: mov     [ebp+var_1C], eax
0x98FBFE: cmp     eax, 100h
0x98FC03: jge     short loc_98FC15
0x98FC05: mov     cl, [eax+ebx+11Dh]
0x98FC0C: mov     byte_B316B8[eax], cl
0x98FC12: inc     eax
0x98FC13: jmp     short loc_98FBFB
0x98FC15: push    lpAddend; lpAddend
0x98FC1B: call    ds:InterlockedDecrement
0x98FC21: test    eax, eax
0x98FC23: jnz     short loc_98FC38
0x98FC25: mov     eax, lpAddend
0x98FC2A: cmp     eax, offset dword_B31390
0x98FC2F: jz      short loc_98FC38
0x98FC31: push    eax; Memory
0x98FC32: call    _free
0x98FC37: pop     ecx
0x98FC38: mov     lpAddend, ebx
0x98FC3E: push    ebx; lpAddend
0x98FC3F: call    edi ; InterlockedIncrement
0x98FC41: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98FC48: call    __setmbcp___$LN27_3
0x98FC4D: jmp     short __setmbcp___$LN28_2
0x98FC4F: push    0Dh
0x98FC51: call    __unlock
0x98FC56: pop     ecx
0x98FC57: retn
