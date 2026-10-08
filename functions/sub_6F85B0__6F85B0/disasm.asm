0x6F85B0: push    0FFFFFFFFh; Oblivion runtime_error copy constructor: copies the std::exception base, installs runtime_error vftable, initializes the embedded 28-byte SSO string, and copies the source message.
0x6F85B2: push    offset SEH_6F85B0
0x6F85B7: mov     eax, large fs:0
0x6F85BD: push    eax
0x6F85BE: push    ecx
0x6F85BF: push    esi
0x6F85C0: push    edi
0x6F85C1: mov     eax, ds:0B30AACh
0x6F85C6: xor     eax, esp
0x6F85C8: push    eax
0x6F85C9: lea     eax, [esp+1Ch+var_C]
0x6F85CD: mov     large fs:0, eax
0x6F85D3: mov     esi, ecx
0x6F85D5: mov     [esp+1Ch+var_10], esi
0x6F85D9: mov     edi, [esp+1Ch+source]
0x6F85DD: push    edi; struct std::exception *
0x6F85DE: call    ??0exception@std@@QAE@ABV01@@Z; std::exception::exception(std::exception const &)
0x6F85E3: xor     eax, eax
0x6F85E5: push    0FFFFFFFFh; count
0x6F85E7: lea     ecx, [esi+0Ch]; this
0x6F85EA: mov     dword ptr [esi], offset ??_7runtime_error@std@@6B@; const std::runtime_error::`vftable'
0x6F85F0: push    eax; offset
0x6F85F1: add     edi, 0Ch
0x6F85F4: mov     dword ptr [ecx+18h], 0Fh
0x6F85FB: mov     [ecx+14h], eax
0x6F85FE: push    edi; source
0x6F85FF: mov     [esp+28h+var_4], eax
0x6F8603: mov     [ecx+4], al
0x6F8606: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F860B: mov     eax, esi
0x6F860D: mov     ecx, [esp+1Ch+var_C]
0x6F8611: mov     large fs:0, ecx
0x6F8618: pop     ecx
0x6F8619: pop     edi
0x6F861A: pop     esi
0x6F861B: add     esp, 10h
0x6F861E: retn    4
0x9C8F40: mov     ecx, [ebp-10h]; this
0x9C8F43: jmp     ??1exception@std@@UAE@XZ; std::exception::~exception(void)
0x9C8F48: mov     edx, [esp+arg_4]
0x9C8F4C: lea     eax, [edx-0Ch]
0x9C8F4F: mov     ecx, [edx-10h]
0x9C8F52: xor     ecx, eax
0x9C8F54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8F59: mov     eax, offset stru_AF1850
0x9C8F5E: jmp     ___CxxFrameHandler3
