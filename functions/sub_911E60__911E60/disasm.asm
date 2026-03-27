0x911E60: push    0FFFFFFFFh
0x911E62: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x911E67: mov     eax, large fs:0
0x911E6D: push    eax
0x911E6E: push    ecx
0x911E6F: push    ebp
0x911E70: push    esi
0x911E71: push    edi
0x911E72: mov     eax, ds:0B30AACh
0x911E77: xor     eax, esp
0x911E79: push    eax
0x911E7A: lea     eax, [esp+20h+var_C]
0x911E7E: mov     large fs:0, eax
0x911E84: mov     edi, ecx
0x911E86: push    offset stru_BA7C80; lpCriticalSection
0x911E8B: call    dword ptr ds:0A2806Ch
0x911E91: call    dword ptr ds:0A2808Ch
0x911E97: mov     ebp, 1
0x911E9C: add     ds:0BA7CFCh, ebp
0x911EA2: push    10h; Size
0x911EA4: mov     ds:0BA7CF8h, eax
0x911EA9: call    FormHeapAlloc
0x911EAE: mov     esi, eax
0x911EB0: add     esp, 4
0x911EB3: mov     [esp+20h+var_10], esi
0x911EB7: test    esi, esi
0x911EB9: mov     [esp+20h+var_4], 0
0x911EC1: jz      short loc_911EEB
0x911EC3: mov     ecx, esi; this
0x911EC5: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x911ECA: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x911ED0: mov     dword ptr [esi+0Ch], 0
0x911ED7: add     ds:0BA7D4Ch, ebp
0x911EDD: mov     dword ptr [esi], offset ??_7bhkGenericConstraint@@6B@; const bhkGenericConstraint::`vftable'
0x911EE3: add     ds:0BA8354h, ebp
0x911EE9: jmp     short loc_911EED
0x911EEB: xor     esi, esi
0x911EED: mov     eax, [esp+20h+arg_0]
0x911EF1: push    eax
0x911EF2: push    esi
0x911EF3: mov     ecx, edi
0x911EF5: mov     [esp+28h+var_4], 0FFFFFFFFh
0x911EFD: call    sub_8A0860
0x911F02: sub     ds:0BA7CFCh, ebp
0x911F08: jnz     short loc_911F14
0x911F0A: mov     dword ptr ds:0BA7CF8h, 0
0x911F14: push    offset stru_BA7C80; lpCriticalSection
0x911F19: call    dword ptr ds:0A28074h
0x911F1F: mov     eax, esi
0x911F21: mov     ecx, [esp+20h+var_C]
0x911F25: mov     large fs:0, ecx
0x911F2C: pop     ecx
0x911F2D: pop     edi
0x911F2E: pop     esi
0x911F2F: pop     ebp
0x911F30: add     esp, 10h
0x911F33: retn    4
