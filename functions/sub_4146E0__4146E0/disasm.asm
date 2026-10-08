0x4146E0: push    0FFFFFFFFh
0x4146E2: push    offset SEH_6F7DD0
0x4146E7: mov     eax, large fs:0
0x4146ED: push    eax
0x4146EE: push    ecx
0x4146EF: push    esi
0x4146F0: mov     eax, ___security_cookie
0x4146F5: xor     eax, esp
0x4146F7: push    eax
0x4146F8: lea     eax, [esp+18h+var_C]
0x4146FC: mov     large fs:0, eax
0x414702: mov     esi, ecx
0x414704: mov     [esp+18h+var_10], esi
0x414708: call    ??0exception@std@@QAE@XZ; std::exception::exception(void)
0x41470D: xor     eax, eax
0x41470F: lea     ecx, [esi+0Ch]; this
0x414712: mov     dword ptr [esi], offset ??_7logic_error@std@@6B@; const std::logic_error::`vftable'
0x414718: push    0FFFFFFFFh; count
0x41471A: mov     [ecx+14h], eax
0x41471D: mov     dword ptr [ecx+18h], 0Fh
0x414724: push    eax; offset
0x414725: mov     [esp+20h+var_4], eax
0x414729: mov     [ecx+4], al
0x41472C: mov     eax, [esp+20h+source]
0x414730: push    eax; source
0x414731: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x414736: mov     eax, esi
0x414738: mov     ecx, [esp+18h+var_C]
0x41473C: mov     large fs:0, ecx
0x414743: pop     ecx
0x414744: pop     esi
0x414745: add     esp, 10h
0x414748: retn    4
0x9C8E50: mov     ecx, [ebp-10h]; this
0x9C8E53: jmp     ??1exception@std@@UAE@XZ; std::exception::~exception(void)
0x9C8E58: mov     edx, [esp+arg_4]
0x9C8E5C: lea     eax, [edx-8]
0x9C8E5F: mov     ecx, [edx-0Ch]
0x9C8E62: xor     ecx, eax
0x9C8E64: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8E69: mov     eax, offset stru_AF1740
0x9C8E6E: jmp     ___CxxFrameHandler3
