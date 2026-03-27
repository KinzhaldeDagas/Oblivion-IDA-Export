0x8C0A70: push    0FFFFFFFFh
0x8C0A72: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8C0A77: mov     eax, large fs:0
0x8C0A7D: push    eax
0x8C0A7E: push    ecx
0x8C0A7F: push    ebp
0x8C0A80: push    esi
0x8C0A81: push    edi
0x8C0A82: mov     eax, ds:0B30AACh
0x8C0A87: xor     eax, esp
0x8C0A89: push    eax
0x8C0A8A: lea     eax, [esp+20h+var_C]
0x8C0A8E: mov     large fs:0, eax
0x8C0A94: mov     edi, ecx
0x8C0A96: push    offset stru_BA7C80; lpCriticalSection
0x8C0A9B: call    dword ptr ds:0A2806Ch
0x8C0AA1: call    dword ptr ds:0A2808Ch
0x8C0AA7: mov     ebp, 1
0x8C0AAC: add     ds:0BA7CFCh, ebp
0x8C0AB2: push    10h; Size
0x8C0AB4: mov     ds:0BA7CF8h, eax
0x8C0AB9: call    FormHeapAlloc
0x8C0ABE: mov     esi, eax
0x8C0AC0: add     esp, 4
0x8C0AC3: mov     [esp+20h+var_10], esi
0x8C0AC7: test    esi, esi
0x8C0AC9: mov     [esp+20h+var_4], 0
0x8C0AD1: jz      short loc_8C0AFB
0x8C0AD3: mov     ecx, esi; this
0x8C0AD5: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C0ADA: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C0AE0: mov     dword ptr [esi+0Ch], 0
0x8C0AE7: add     ds:0BA7D4Ch, ebp
0x8C0AED: mov     dword ptr [esi], offset ??_7bhkRagdollConstraint@@6B@; const bhkRagdollConstraint::`vftable'
0x8C0AF3: add     ds:0BA80B8h, ebp
0x8C0AF9: jmp     short loc_8C0AFD
0x8C0AFB: xor     esi, esi
0x8C0AFD: mov     eax, [esp+20h+arg_0]
0x8C0B01: push    eax
0x8C0B02: push    esi
0x8C0B03: mov     ecx, edi
0x8C0B05: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8C0B0D: call    sub_8A0860
0x8C0B12: sub     ds:0BA7CFCh, ebp
0x8C0B18: jnz     short loc_8C0B24
0x8C0B1A: mov     dword ptr ds:0BA7CF8h, 0
0x8C0B24: push    offset stru_BA7C80; lpCriticalSection
0x8C0B29: call    dword ptr ds:0A28074h
0x8C0B2F: mov     eax, esi
0x8C0B31: mov     ecx, [esp+20h+var_C]
0x8C0B35: mov     large fs:0, ecx
0x8C0B3C: pop     ecx
0x8C0B3D: pop     edi
0x8C0B3E: pop     esi
0x8C0B3F: pop     ebp
0x8C0B40: add     esp, 10h
0x8C0B43: retn    4
