0x8BE980: push    0FFFFFFFFh
0x8BE982: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8BE987: mov     eax, large fs:0
0x8BE98D: push    eax
0x8BE98E: push    ecx
0x8BE98F: push    ebp
0x8BE990: push    esi
0x8BE991: push    edi
0x8BE992: mov     eax, ds:0B30AACh
0x8BE997: xor     eax, esp
0x8BE999: push    eax
0x8BE99A: lea     eax, [esp+20h+var_C]
0x8BE99E: mov     large fs:0, eax
0x8BE9A4: mov     edi, ecx
0x8BE9A6: push    offset stru_BA7C80; lpCriticalSection
0x8BE9AB: call    dword ptr ds:0A2806Ch
0x8BE9B1: call    dword ptr ds:0A2808Ch
0x8BE9B7: mov     ebp, 1
0x8BE9BC: add     ds:0BA7CFCh, ebp
0x8BE9C2: push    10h; Size
0x8BE9C4: mov     ds:0BA7CF8h, eax
0x8BE9C9: call    FormHeapAlloc
0x8BE9CE: mov     esi, eax
0x8BE9D0: add     esp, 4
0x8BE9D3: mov     [esp+20h+var_10], esi
0x8BE9D7: test    esi, esi
0x8BE9D9: mov     [esp+20h+var_4], 0
0x8BE9E1: jz      short loc_8BEA17
0x8BE9E3: mov     ecx, esi; this
0x8BE9E5: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BE9EA: mov     dword ptr [esi], offset ??_7bhkAction@@6B@; const bhkAction::`vftable'
0x8BE9F0: mov     dword ptr [esi+0Ch], 0
0x8BE9F7: add     ds:0BA7D00h, ebp
0x8BE9FD: mov     dword ptr [esi], offset ??_7bhkUnaryAction@@6B@; const bhkUnaryAction::`vftable'
0x8BEA03: add     ds:0BA7D0Ch, ebp
0x8BEA09: mov     dword ptr [esi], offset ??_7bhkMotorAction@@6B@; const bhkMotorAction::`vftable'
0x8BEA0F: add     ds:0BA807Ch, ebp
0x8BEA15: jmp     short loc_8BEA19
0x8BEA17: xor     esi, esi
0x8BEA19: mov     eax, [esp+20h+arg_0]
0x8BEA1D: push    eax
0x8BEA1E: push    esi
0x8BEA1F: mov     ecx, edi
0x8BEA21: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8BEA29: call    sub_89E1A0
0x8BEA2E: sub     ds:0BA7CFCh, ebp
0x8BEA34: jnz     short loc_8BEA40
0x8BEA36: mov     dword ptr ds:0BA7CF8h, 0
0x8BEA40: push    offset stru_BA7C80; lpCriticalSection
0x8BEA45: call    dword ptr ds:0A28074h
0x8BEA4B: mov     eax, esi
0x8BEA4D: mov     ecx, [esp+20h+var_C]
0x8BEA51: mov     large fs:0, ecx
0x8BEA58: pop     ecx
0x8BEA59: pop     edi
0x8BEA5A: pop     esi
0x8BEA5B: pop     ebp
0x8BEA5C: add     esp, 10h
0x8BEA5F: retn    4
