0x7A71D0: push    0FFFFFFFFh; Oblivion PosGen::Build. Allocates sx/sfx as two 60-float tables, integrates density with 0.01 symmetric or 0.02 positive increments, enforces a 50..59 sample span, and records xi for rejection sampling.
0x7A71D2: push    offset SEH_7A71D0
0x7A71D7: mov     eax, large fs:0
0x7A71DD: push    eax
0x7A71DE: sub     esp, 94h
0x7A71E4: push    ebx
0x7A71E5: push    esi
0x7A71E6: push    edi
0x7A71E7: mov     eax, ds:0B30AACh
0x7A71EC: xor     eax, esp
0x7A71EE: push    eax
0x7A71EF: lea     eax, [esp+0B0h+var_C]
0x7A71F6: mov     large fs:0, eax
0x7A71FC: mov     esi, ecx
0x7A71FE: xor     ebx, ebx
0x7A7200: push    0F0h ; 'ð'; Size
0x7A7205: mov     [esi+10h], bl
0x7A7208: call    FormHeapAlloc
0x7A720D: push    0F0h ; 'ð'; Size
0x7A7212: mov     [esi+8], eax
0x7A7215: call    FormHeapAlloc
0x7A721A: fldz
0x7A721C: add     esp, 8
0x7A721F: fstp    [esp+0B0h+var_9C]
0x7A7223: cmp     [esp+0B0h+symmetric], bl
0x7A722A: mov     [esi+0Ch], eax
0x7A722D: jz      short loc_7A7237
0x7A722F: fld     dword ptr ds:0A34BA0h
0x7A7235: jmp     short loc_7A723D
0x7A7237: fld     dword ptr ds:0A57604h
0x7A723D: fstp    [esp+0B0h+var_98]
0x7A7241: xor     edi, edi
0x7A7243: mov     eax, [esi+8]
0x7A7246: fld     [esp+0B0h+var_9C]
0x7A724A: fst     dword ptr [eax+edi*4]
0x7A724D: mov     edx, [esi]
0x7A724F: mov     eax, [edx+0Ch]
0x7A7252: push    ecx
0x7A7253: mov     ecx, esi
0x7A7255: fstp    dword ptr [esp+0B4h+var_B4]
0x7A7258: call    eax
0x7A725A: fstp    [esp+0B0h+var_A0]
0x7A725E: fld     [esp+0B0h+var_A0]
0x7A7262: mov     ecx, [esi+0Ch]
0x7A7265: fst     dword ptr [ecx+edi*4]
0x7A7268: fldz
0x7A726A: fcomp   st(1)
0x7A726C: fnstsw  ax
0x7A726E: test    ah, 1
0x7A7271: jz      loc_7A7305
0x7A7277: fdivr   [esp+0B0h+var_98]
0x7A727B: add     edi, 1
0x7A727E: cmp     edi, 3Ch ; '<'
0x7A7281: fadd    [esp+0B0h+var_9C]
0x7A7285: fstp    [esp+0B0h+var_9C]
0x7A7289: jl      short loc_7A7243
0x7A728B: push    16h; count
0x7A728D: mov     esi, 0Fh
0x7A7292: push    offset aNewranAreaTooL; "Newran: area too large"
0x7A7297: lea     ecx, [esp+0B8h+source]; this
0x7A729B: mov     [esp+0B8h+source.capacity], esi
0x7A729F: mov     [esp+0B8h+source.size], ebx
0x7A72A3: mov     byte ptr [esp+0B8h+source.storage], bl
0x7A72A7: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A72AC: lea     ecx, [esp+0B0h+var_5C]; this
0x7A72B0: mov     [esp+0B0h+var_4], ebx
0x7A72B7: call    ??0exception@std@@QAE@XZ; std::exception::exception(void)
0x7A72BC: push    0FFFFFFFFh; count
0x7A72BE: push    ebx; offset
0x7A72BF: lea     ecx, [esp+0B8h+source]
0x7A72C3: push    ecx; source
0x7A72C4: lea     ecx, [esp+0BCh+var_50]; this
0x7A72C8: mov     byte ptr [esp+0BCh+var_4], 1
0x7A72D0: mov     [esp+0BCh+var_5C], offset ??_7runtime_error@std@@6B@; const std::runtime_error::`vftable'
0x7A72D8: mov     [esp+0BCh+var_50.capacity], esi
0x7A72DF: mov     [esp+0BCh+var_50.size], ebx
0x7A72E6: mov     byte ptr [esp+0BCh+var_50.storage], bl
0x7A72EA: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x7A72EF: push    offset __TI2?AVruntime_error@std@@; throw info for 'class std::runtime_error'
0x7A72F4: lea     edx, [esp+0B4h+var_5C]
0x7A72F8: push    edx
0x7A72F9: mov     byte ptr [esp+0B8h+var_4], bl
0x7A7300: call    ThrowException??
0x7A7305: cmp     edi, 32h ; '2'
0x7A7308: fstp    st
0x7A730A: mov     [esp+0B0h+var_A0], edi
0x7A730E: jge     short loc_7A735E
0x7A7310: push    16h; count
0x7A7312: push    offset aNewranAreaTooS; "Newran: area too small"
0x7A7317: lea     ecx, [esp+0B8h+message]; this
0x7A731B: mov     [esp+0B8h+message.capacity], 0Fh
0x7A7323: mov     [esp+0B8h+message.size], ebx
0x7A7327: mov     byte ptr [esp+0B8h+message.storage], bl
0x7A732B: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A7330: lea     edx, [esp+0B0h+message]
0x7A7334: push    edx; message
0x7A7335: lea     ecx, [esp+0B4h+var_34]; this
0x7A733C: mov     [esp+0B4h+var_4], 2
0x7A7347: call    OB_std_runtime_error_CtorFromString_010201A0; Oblivion runtime_error constructor from the 28-byte SpeedTree small string: constructs std::exception, installs runtime_error vftable, initializes SSO state, and copies the message.
0x7A734C: push    offset __TI2?AVruntime_error@std@@; throw info for 'class std::runtime_error'
0x7A7351: lea     eax, [esp+0B4h+var_34]
0x7A7358: push    eax
0x7A7359: call    ThrowException??
0x7A735E: cmp     [esp+0B0h+symmetric], bl
0x7A7365: jz      short loc_7A7372
0x7A7367: fild    [esp+0B0h+var_A0]
0x7A736B: fadd    st, st
0x7A736D: fstp    dword ptr [esi+4]
0x7A7370: jmp     short loc_7A7379
0x7A7372: fild    [esp+0B0h+var_A0]
0x7A7376: fstp    dword ptr [esi+4]
0x7A7379: mov     ecx, dword ptr [esp+0B0h+var_C]
0x7A7380: mov     large fs:0, ecx
0x7A7387: pop     ecx
0x7A7388: pop     edi
0x7A7389: pop     esi
0x7A738A: pop     ebx
0x7A738B: add     esp, 0A0h
0x7A7391: retn    4
0x9CCD40: lea     ecx, [ebp-78h]; this
0x9CCD43: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCD48: lea     ecx, [ebp-5Ch]; this
0x9CCD4B: jmp     ??1exception@std@@UAE@XZ; std::exception::~exception(void)
0x9CCD50: lea     ecx, [ebp-94h]; this
0x9CCD56: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCD5B: mov     edx, [esp+arg_4]
0x9CCD5F: lea     eax, [edx-0A0h]
0x9CCD65: mov     ecx, [edx-0A4h]
0x9CCD6B: xor     ecx, eax
0x9CCD6D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCD72: mov     eax, offset stru_AF6154
0x9CCD77: jmp     ___CxxFrameHandler3
