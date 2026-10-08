0x8BE120: push    0FFFFFFFFh
0x8BE122: push    offset ??1bhkAngularDashpotAction@@UAE@XZ_SEH
0x8BE127: mov     eax, large fs:0
0x8BE12D: push    eax
0x8BE12E: push    ecx
0x8BE12F: push    esi
0x8BE130: mov     eax, ds:0B30AACh
0x8BE135: xor     eax, esp
0x8BE137: push    eax
0x8BE138: lea     eax, [esp+18h+var_C]
0x8BE13C: mov     large fs:0, eax
0x8BE142: mov     esi, ecx
0x8BE144: mov     [esp+18h+var_10], esi
0x8BE148: mov     dword ptr [esi], offset ??_7bhkDashpotAction@@6B@; const bhkDashpotAction::`vftable'
0x8BE14E: mov     [esp+18h+var_4], 0
0x8BE156: call    sub_89D700
0x8BE15B: sub     dword ptr ds:0BA8070h, 1
0x8BE162: mov     ecx, esi; this
0x8BE164: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8BE16C: call    ??1bhkBinaryAction@@UAE@XZ; bhkBinaryAction::~bhkBinaryAction(void)
0x8BE171: mov     ecx, [esp+18h+var_C]
0x8BE175: mov     large fs:0, ecx
0x8BE17C: pop     ecx
0x8BE17D: pop     esi
0x8BE17E: add     esp, 10h
0x8BE181: retn
0x9D7300: mov     ecx, [ebp-10h]; this
0x9D7303: jmp     ??1bhkBinaryAction@@UAE@XZ; bhkBinaryAction::~bhkBinaryAction(void)
0x9D7308: mov     edx, [esp+arg_4]
0x9D730C: lea     eax, [edx-8]
0x9D730F: mov     ecx, [edx-0Ch]
0x9D7312: xor     ecx, eax
0x9D7314: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D7319: mov     eax, offset stru_AFEF64
0x9D731E: jmp     ___CxxFrameHandler3
