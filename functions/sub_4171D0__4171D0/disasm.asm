0x4171D0: push    esi
0x4171D1: mov     esi, ecx
0x4171D3: mov     dword ptr [esi], offset ??_7logic_error@std@@6B@; const std::logic_error::`vftable'
0x4171D9: cmp     dword ptr [esi+24h], 10h
0x4171DD: jb      short loc_4171EB
0x4171DF: mov     eax, [esi+10h]
0x4171E2: push    eax
0x4171E3: call    FormHeapFree
0x4171E8: add     esp, 4
0x4171EB: xor     eax, eax
0x4171ED: mov     dword ptr [esi+24h], 0Fh
0x4171F4: mov     [esi+20h], eax
0x4171F7: mov     ecx, esi; this
0x4171F9: mov     [esi+10h], al
0x4171FC: call    ??1exception@std@@UAE@XZ; std::exception::~exception(void)
0x417201: test    [esp+4+arg_0], 1
0x417206: jz      short loc_417211
0x417208: push    esi
0x417209: call    FormHeapFree
0x41720E: add     esp, 4
0x417211: mov     eax, esi
0x417213: pop     esi
0x417214: retn    4
