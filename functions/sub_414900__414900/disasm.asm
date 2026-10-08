0x414900: push    0FFFFFFFFh; Oblivion 1.2.0.416: std::logic_error copy constructor. Copies the 0x0C-byte std::exception base, installs the logic_error vftable, initializes the 28-byte SSO message at +0x0C, then assigns the source message.
0x414902: push    offset SEH_6F85B0
0x414907: mov     eax, large fs:0
0x41490D: push    eax
0x41490E: push    ecx
0x41490F: push    esi
0x414910: push    edi
0x414911: mov     eax, ___security_cookie
0x414916: xor     eax, esp
0x414918: push    eax
0x414919: lea     eax, [esp+1Ch+var_C]
0x41491D: mov     large fs:0, eax
0x414923: mov     esi, ecx
0x414925: mov     [esp+1Ch+var_10], esi
0x414929: mov     edi, [esp+1Ch+other]
0x41492D: push    edi; struct std::exception *
0x41492E: call    ??0exception@std@@QAE@ABV01@@Z; std::exception::exception(std::exception const &)
0x414933: xor     eax, eax
0x414935: push    0FFFFFFFFh; count
0x414937: lea     ecx, [esi+0Ch]; this
0x41493A: mov     dword ptr [esi], offset ??_7logic_error@std@@6B@; const std::logic_error::`vftable'
0x414940: push    eax; offset
0x414941: add     edi, 0Ch
0x414944: mov     dword ptr [ecx+18h], 0Fh
0x41494B: mov     [ecx+14h], eax
0x41494E: push    edi; source
0x41494F: mov     [esp+28h+var_4], eax
0x414953: mov     [ecx+4], al
0x414956: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x41495B: mov     eax, esi
0x41495D: mov     ecx, [esp+1Ch+var_C]
0x414961: mov     large fs:0, ecx
0x414968: pop     ecx
0x414969: pop     edi
0x41496A: pop     esi
0x41496B: add     esp, 10h
0x41496E: retn    4
0x9C8F40: mov     ecx, [ebp-10h]; this
0x9C8F43: jmp     ??1exception@std@@UAE@XZ; std::exception::~exception(void)
0x9C8F48: mov     edx, [esp+arg_4]
0x9C8F4C: lea     eax, [edx-0Ch]
0x9C8F4F: mov     ecx, [edx-10h]
0x9C8F52: xor     ecx, eax
0x9C8F54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8F59: mov     eax, offset stru_AF1850
0x9C8F5E: jmp     ___CxxFrameHandler3
