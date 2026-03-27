0x89E300: push    0FFFFFFFFh
0x89E302: push    offset ??1bhkMouseSpringAction@@UAE@XZ_SEH
0x89E307: mov     eax, large fs:0
0x89E30D: push    eax
0x89E30E: push    ecx
0x89E30F: push    esi
0x89E310: mov     eax, ds:0B30AACh
0x89E315: xor     eax, esp
0x89E317: push    eax
0x89E318: lea     eax, [esp+18h+var_C]
0x89E31C: mov     large fs:0, eax
0x89E322: mov     esi, ecx
0x89E324: mov     [esp+18h+var_10], esi
0x89E328: mov     dword ptr [esi], offset ??_7bhkMouseSpringAction@@6B@; const bhkMouseSpringAction::`vftable'
0x89E32E: mov     [esp+18h+var_4], 0
0x89E336: call    sub_89D700
0x89E33B: sub     dword ptr ds:0BA7D18h, 1
0x89E342: mov     ecx, esi; this
0x89E344: mov     [esp+18h+var_4], 0FFFFFFFFh
0x89E34C: call    ??1bhkUnaryAction@@UAE@XZ; bhkUnaryAction::~bhkUnaryAction(void)
0x89E351: mov     ecx, [esp+18h+var_C]
0x89E355: mov     large fs:0, ecx
0x89E35C: pop     ecx
0x89E35D: pop     esi
0x89E35E: add     esp, 10h
0x89E361: retn
