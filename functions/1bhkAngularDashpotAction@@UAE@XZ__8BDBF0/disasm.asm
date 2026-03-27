0x8BDBF0: push    0FFFFFFFFh
0x8BDBF2: push    offset ??1bhkAngularDashpotAction@@UAE@XZ_SEH
0x8BDBF7: mov     eax, large fs:0
0x8BDBFD: push    eax
0x8BDBFE: push    ecx
0x8BDBFF: push    esi
0x8BDC00: mov     eax, ds:0B30AACh
0x8BDC05: xor     eax, esp
0x8BDC07: push    eax
0x8BDC08: lea     eax, [esp+18h+var_C]
0x8BDC0C: mov     large fs:0, eax
0x8BDC12: mov     esi, ecx
0x8BDC14: mov     [esp+18h+var_10], esi
0x8BDC18: mov     dword ptr [esi], offset ??_7bhkAngularDashpotAction@@6B@; const bhkAngularDashpotAction::`vftable'
0x8BDC1E: mov     [esp+18h+var_4], 0
0x8BDC26: call    sub_89D700
0x8BDC2B: sub     dword ptr ds:0BA8064h, 1
0x8BDC32: mov     ecx, esi; this
0x8BDC34: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8BDC3C: call    ??1bhkBinaryAction@@UAE@XZ; bhkBinaryAction::~bhkBinaryAction(void)
0x8BDC41: mov     ecx, [esp+18h+var_C]
0x8BDC45: mov     large fs:0, ecx
0x8BDC4C: pop     ecx
0x8BDC4D: pop     esi
0x8BDC4E: add     esp, 10h
0x8BDC51: retn
