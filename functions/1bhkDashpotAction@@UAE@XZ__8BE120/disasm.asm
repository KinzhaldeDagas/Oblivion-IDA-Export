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
