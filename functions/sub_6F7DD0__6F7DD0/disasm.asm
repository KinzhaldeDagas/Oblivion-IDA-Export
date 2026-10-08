0x6F7DD0: push    0FFFFFFFFh; Oblivion runtime_error constructor from the 28-byte SpeedTree small string: constructs std::exception, installs runtime_error vftable, initializes SSO state, and copies the message.
0x6F7DD2: push    offset SEH_6F7DD0
0x6F7DD7: mov     eax, large fs:0
0x6F7DDD: push    eax
0x6F7DDE: push    ecx
0x6F7DDF: push    esi
0x6F7DE0: mov     eax, ds:0B30AACh
0x6F7DE5: xor     eax, esp
0x6F7DE7: push    eax
0x6F7DE8: lea     eax, [esp+18h+var_C]
0x6F7DEC: mov     large fs:0, eax
0x6F7DF2: mov     esi, ecx
0x6F7DF4: mov     [esp+18h+var_10], esi
0x6F7DF8: call    ??0exception@std@@QAE@XZ; std::exception::exception(void)
0x6F7DFD: xor     eax, eax
0x6F7DFF: lea     ecx, [esi+0Ch]; this
0x6F7E02: mov     dword ptr [esi], offset ??_7runtime_error@std@@6B@; const std::runtime_error::`vftable'
0x6F7E08: push    0FFFFFFFFh; count
0x6F7E0A: mov     [ecx+14h], eax
0x6F7E0D: mov     dword ptr [ecx+18h], 0Fh
0x6F7E14: push    eax; offset
0x6F7E15: mov     [esp+20h+var_4], eax
0x6F7E19: mov     [ecx+4], al
0x6F7E1C: mov     eax, [esp+20h+source]
0x6F7E20: push    eax; source
0x6F7E21: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F7E26: mov     eax, esi
0x6F7E28: mov     ecx, [esp+18h+var_C]
0x6F7E2C: mov     large fs:0, ecx
0x6F7E33: pop     ecx
0x6F7E34: pop     esi
0x6F7E35: add     esp, 10h
0x6F7E38: retn    4
0x9C8E50: mov     ecx, [ebp-10h]; this
0x9C8E53: jmp     ??1exception@std@@UAE@XZ; std::exception::~exception(void)
0x9C8E58: mov     edx, [esp+arg_4]
0x9C8E5C: lea     eax, [edx-8]
0x9C8E5F: mov     ecx, [edx-0Ch]
0x9C8E62: xor     ecx, eax
0x9C8E64: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8E69: mov     eax, offset stru_AF1740
0x9C8E6E: jmp     ___CxxFrameHandler3
