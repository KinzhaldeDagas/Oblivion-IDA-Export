0x7A7560: push    0FFFFFFFFh; Oblivion Normal constructor. Initializes the PosGen layout, reuses the static Normal sx/sfx/xi tables when available or builds them symmetrically once, then increments the shared instance count.
0x7A7562: push    offset SEH_7A7560
0x7A7567: mov     eax, large fs:0
0x7A756D: push    eax
0x7A756E: push    ecx
0x7A756F: push    esi
0x7A7570: mov     eax, ds:0B30AACh
0x7A7575: xor     eax, esp
0x7A7577: push    eax
0x7A7578: lea     eax, [esp+18h+var_C]
0x7A757C: mov     large fs:0, eax
0x7A7582: mov     esi, ecx
0x7A7584: mov     [esp+18h+var_10], esi
0x7A7588: fldz
0x7A758A: xor     eax, eax
0x7A758C: fstp    dword ptr [esi+4]
0x7A758F: mov     byte ptr [esi+10h], 1
0x7A7593: mov     [esi+8], eax
0x7A7596: mov     [esi+0Ch], eax
0x7A7599: mov     dword ptr [esi], offset ??_7Normal@@6B@; const Normal::`vftable'
0x7A759F: cmp     ds:0B42C9Ch, eax
0x7A75A5: mov     [esp+18h+var_4], eax
0x7A75A9: jz      short loc_7A75CA
0x7A75AB: mov     [esi+10h], al
0x7A75AE: fld     dword ptr ds:0B42C98h
0x7A75B4: fstp    dword ptr [esi+4]
0x7A75B7: mov     eax, ds:0B42A88h
0x7A75BC: mov     [esi+8], eax
0x7A75BF: mov     ecx, ds:0B42A8Ch
0x7A75C5: mov     [esi+0Ch], ecx
0x7A75C8: jmp     short loc_7A75ED
0x7A75CA: push    1; symmetric
0x7A75CC: mov     ecx, esi; this
0x7A75CE: call    OB_PosGen_Build_010201A0; Oblivion PosGen::Build. Allocates sx/sfx as two 60-float tables, integrates density with 0.01 symmetric or 0.02 positive increments, enforces a 50..59 sample span, and records xi for rejection sampling.
0x7A75D3: fld     dword ptr [esi+4]
0x7A75D6: fstp    dword ptr ds:0B42C98h
0x7A75DC: mov     edx, [esi+8]
0x7A75DF: mov     ds:0B42A88h, edx
0x7A75E5: mov     eax, [esi+0Ch]
0x7A75E8: mov     ds:0B42A8Ch, eax
0x7A75ED: mov     eax, esi
0x7A75EF: add     dword ptr ds:0B42C9Ch, 1
0x7A75F6: mov     ecx, [esp+18h+var_C]
0x7A75FA: mov     large fs:0, ecx
0x7A7601: pop     ecx
0x7A7602: pop     esi
0x7A7603: add     esp, 10h
0x7A7606: retn
0x7A6DD0: push    esi
0x7A6DD1: mov     esi, ecx
0x7A6DD3: cmp     byte ptr [esi+10h], 0
0x7A6DD7: mov     dword ptr [esi], offset ??_7PosGen@@6B@; const PosGen::`vftable'
0x7A6DDD: jnz     short loc_7A6DF4
0x7A6DDF: mov     eax, [esi+8]
0x7A6DE2: push    eax
0x7A6DE3: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A6DE8: mov     ecx, [esi+0Ch]
0x7A6DEB: push    ecx
0x7A6DEC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A6DF1: add     esp, 8
0x7A6DF4: mov     dword ptr [esi], offset ??_7Random@@6B@; const Random::`vftable'
0x7A6DFA: pop     esi
0x7A6DFB: retn
0x9CCD80: mov     ecx, [ebp-10h]
0x9CCD83: jmp     loc_7A6DD0
0x9CCD88: mov     edx, [esp+arg_4]
0x9CCD8C: lea     eax, [edx-8]
0x9CCD8F: mov     ecx, [edx-0Ch]
0x9CCD92: xor     ecx, eax
0x9CCD94: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCD99: mov     eax, offset stru_AF6180
0x9CCD9E: jmp     ___CxxFrameHandler3
