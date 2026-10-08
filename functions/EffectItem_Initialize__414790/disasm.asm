0x414790: push    0FFFFFFFFh
0x414792: push    offset SEH_7A28E0
0x414797: mov     eax, large fs:0
0x41479D: push    eax
0x41479E: sub     esp, 44h
0x4147A1: push    ebx
0x4147A2: push    esi
0x4147A3: mov     eax, ___security_cookie
0x4147A8: xor     eax, esp
0x4147AA: push    eax
0x4147AB: lea     eax, [esp+5Ch+var_C]
0x4147AF: mov     large fs:0, eax
0x4147B5: mov     esi, ecx
0x4147B7: mov     eax, [esp+5Ch+arg_0]
0x4147BB: xor     ebx, ebx
0x4147BD: mov     [esi+1Ch], eax
0x4147C0: mov     ecx, [eax+98h]
0x4147C6: mov     [esi], ecx
0x4147C8: mov     [esi+8], ebx
0x4147CB: mov     [esi+0Ch], ebx
0x4147CE: mov     [esi+4], ebx
0x9AB190: lea     ecx, [ebp-50h]; this
0x9AB193: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9AB198: mov     edx, [esp+arg_4]
0x9AB19C: lea     eax, [edx-4Ch]
0x9AB19F: mov     ecx, [edx-50h]
0x9AB1A2: xor     ecx, eax
0x9AB1A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB1A9: mov     eax, offset stru_AD80C8
0x9AB1AE: jmp     ___CxxFrameHandler3
