0x7A6FD0: push    0FFFFFFFFh; Oblivion Random::Next. Rejects an uninitialized seed, selects Buffer[int(Raw()*128)], replaces that entry with another Raw() result, and returns the prior buffered sample.
0x7A6FD2: push    offset SEH_7A28E0
0x7A6FD7: mov     eax, large fs:0
0x7A6FDD: push    eax
0x7A6FDE: sub     esp, 48h
0x7A6FE1: push    esi
0x7A6FE2: mov     eax, ds:0B30AACh
0x7A6FE7: xor     eax, esp
0x7A6FE9: push    eax
0x7A6FEA: lea     eax, [esp+5Ch+var_C]
0x7A6FEE: mov     large fs:0, eax
0x7A6FF4: fldz
0x7A6FF6: fcomp   qword ptr ds:0B42C90h
0x7A6FFC: fnstsw  ax
0x7A6FFE: test    ah, 44h
0x7A7001: jp      short loc_7A704D
0x7A7003: push    27h ; '''; count
0x7A7005: push    offset aRandomNumberGe; "Random number generator not initialised"
0x7A700A: lea     ecx, [esp+64h+var_50]; this
0x7A700E: mov     [esp+64h+var_50.capacity], 0Fh
0x7A7016: mov     [esp+64h+var_50.size], 0
0x7A701E: mov     byte ptr [esp+64h+var_50.storage], 0
0x7A7023: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A7028: lea     eax, [esp+5Ch+var_50]
0x7A702C: push    eax
0x7A702D: lea     ecx, [esp+60h+var_34]
0x7A7031: mov     [esp+60h+var_4], 0
0x7A7039: call    sub_4146E0
0x7A703E: push    offset __TI2?AVlogic_error@std@@; throw info for 'class std::logic_error'
0x7A7043: lea     ecx, [esp+60h+var_34]
0x7A7047: push    ecx
0x7A7048: call    ThrowException??
0x7A704D: call    OB_Random_Raw_010201A0; Oblivion Random::Raw Park-Miller step. Advances the shared integer seed with multiplier 16807 modulo 2147483647 and returns seed * 4.656612875e-10 as float.
0x7A7052: fmul    qword ptr ds:0A3F428h
0x7A7058: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x7A705D: mov     esi, eax
0x7A705F: fld     dword ptr ds:0B42A90h[esi*4]
0x7A7066: fstp    [esp+5Ch+var_54]
0x7A706A: call    OB_Random_Raw_010201A0; Oblivion Random::Raw Park-Miller step. Advances the shared integer seed with multiplier 16807 modulo 2147483647 and returns seed * 4.656612875e-10 as float.
0x7A706F: fstp    dword ptr ds:0B42A90h[esi*4]
0x7A7076: fld     [esp+5Ch+var_54]
0x7A707A: mov     ecx, [esp+5Ch+var_C]
0x7A707E: mov     large fs:0, ecx
0x7A7085: pop     ecx
0x7A7086: pop     esi
0x7A7087: add     esp, 54h
0x7A708A: retn
0x9AB190: lea     ecx, [ebp-50h]; this
0x9AB193: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9AB198: mov     edx, [esp+arg_4]
0x9AB19C: lea     eax, [edx-4Ch]
0x9AB19F: mov     ecx, [edx-50h]
0x9AB1A2: xor     ecx, eax
0x9AB1A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB1A9: mov     eax, offset stru_AD80C8
0x9AB1AE: jmp     ___CxxFrameHandler3
