0x8BFF20: push    0FFFFFFFFh
0x8BFF22: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8BFF27: mov     eax, large fs:0
0x8BFF2D: push    eax
0x8BFF2E: push    ecx
0x8BFF2F: push    ebp
0x8BFF30: push    esi
0x8BFF31: push    edi
0x8BFF32: mov     eax, ds:0B30AACh
0x8BFF37: xor     eax, esp
0x8BFF39: push    eax
0x8BFF3A: lea     eax, [esp+20h+var_C]
0x8BFF3E: mov     large fs:0, eax
0x8BFF44: mov     edi, ecx
0x8BFF46: push    offset stru_BA7C80; lpCriticalSection
0x8BFF4B: call    dword ptr ds:0A2806Ch
0x8BFF51: call    dword ptr ds:0A2808Ch
0x8BFF57: mov     ebp, 1
0x8BFF5C: add     ds:0BA7CFCh, ebp
0x8BFF62: push    10h; Size
0x8BFF64: mov     ds:0BA7CF8h, eax
0x8BFF69: call    FormHeapAlloc
0x8BFF6E: mov     esi, eax
0x8BFF70: add     esp, 4
0x8BFF73: mov     [esp+20h+var_10], esi
0x8BFF77: test    esi, esi
0x8BFF79: mov     [esp+20h+var_4], 0
0x8BFF81: jz      short loc_8BFFAB
0x8BFF83: mov     ecx, esi; this
0x8BFF85: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BFF8A: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8BFF90: mov     dword ptr [esi+0Ch], 0
0x8BFF97: add     ds:0BA7D4Ch, ebp
0x8BFF9D: mov     dword ptr [esi], offset ??_7bhkWheelConstraint@@6B@; const bhkWheelConstraint::`vftable'
0x8BFFA3: add     ds:0BA80A0h, ebp
0x8BFFA9: jmp     short loc_8BFFAD
0x8BFFAB: xor     esi, esi
0x8BFFAD: mov     eax, [esp+20h+arg_0]
0x8BFFB1: push    eax
0x8BFFB2: push    esi
0x8BFFB3: mov     ecx, edi
0x8BFFB5: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8BFFBD: call    sub_8A0860
0x8BFFC2: sub     ds:0BA7CFCh, ebp
0x8BFFC8: jnz     short loc_8BFFD4
0x8BFFCA: mov     dword ptr ds:0BA7CF8h, 0
0x8BFFD4: push    offset stru_BA7C80; lpCriticalSection
0x8BFFD9: call    dword ptr ds:0A28074h
0x8BFFDF: mov     eax, esi
0x8BFFE1: mov     ecx, [esp+20h+var_C]
0x8BFFE5: mov     large fs:0, ecx
0x8BFFEC: pop     ecx
0x8BFFED: pop     edi
0x8BFFEE: pop     esi
0x8BFFEF: pop     ebp
0x8BFFF0: add     esp, 10h
0x8BFFF3: retn    4
