0x8BE7F0: push    0FFFFFFFFh
0x8BE7F2: push    offset ??1bhkMouseSpringAction@@UAE@XZ_SEH
0x8BE7F7: mov     eax, large fs:0
0x8BE7FD: push    eax
0x8BE7FE: push    ecx
0x8BE7FF: push    esi
0x8BE800: mov     eax, ds:0B30AACh
0x8BE805: xor     eax, esp
0x8BE807: push    eax
0x8BE808: lea     eax, [esp+18h+var_C]
0x8BE80C: mov     large fs:0, eax
0x8BE812: mov     esi, ecx
0x8BE814: mov     [esp+18h+var_10], esi
0x8BE818: mov     dword ptr [esi], offset ??_7bhkMotorAction@@6B@; const bhkMotorAction::`vftable'
0x8BE81E: mov     [esp+18h+var_4], 0
0x8BE826: call    sub_89D700
0x8BE82B: sub     dword ptr ds:0BA807Ch, 1
0x8BE832: mov     ecx, esi; this
0x8BE834: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8BE83C: call    ??1bhkUnaryAction@@UAE@XZ; bhkUnaryAction::~bhkUnaryAction(void)
0x8BE841: mov     ecx, [esp+18h+var_C]
0x8BE845: mov     large fs:0, ecx
0x8BE84C: pop     ecx
0x8BE84D: pop     esi
0x8BE84E: add     esp, 10h
0x8BE851: retn
