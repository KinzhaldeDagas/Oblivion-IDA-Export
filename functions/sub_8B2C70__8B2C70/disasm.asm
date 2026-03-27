0x8B2C70: push    0FFFFFFFFh
0x8B2C72: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8B2C77: mov     eax, large fs:0
0x8B2C7D: push    eax
0x8B2C7E: push    ecx
0x8B2C7F: push    ebp
0x8B2C80: push    esi
0x8B2C81: push    edi
0x8B2C82: mov     eax, ds:0B30AACh
0x8B2C87: xor     eax, esp
0x8B2C89: push    eax
0x8B2C8A: lea     eax, [esp+20h+var_C]
0x8B2C8E: mov     large fs:0, eax
0x8B2C94: mov     edi, ecx
0x8B2C96: push    offset stru_BA7C80; lpCriticalSection
0x8B2C9B: call    dword ptr ds:0A2806Ch
0x8B2CA1: call    dword ptr ds:0A2808Ch
0x8B2CA7: mov     ebp, 1
0x8B2CAC: add     ds:0BA7CFCh, ebp
0x8B2CB2: push    10h; Size
0x8B2CB4: mov     ds:0BA7CF8h, eax
0x8B2CB9: call    FormHeapAlloc
0x8B2CBE: mov     esi, eax
0x8B2CC0: add     esp, 4
0x8B2CC3: mov     [esp+20h+var_10], esi
0x8B2CC7: test    esi, esi
0x8B2CC9: mov     [esp+20h+var_4], 0
0x8B2CD1: jz      short loc_8B2CFB
0x8B2CD3: mov     ecx, esi; this
0x8B2CD5: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8B2CDA: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8B2CE0: mov     dword ptr [esi+0Ch], 0
0x8B2CE7: add     ds:0BA7D4Ch, ebp
0x8B2CED: mov     dword ptr [esi], offset ??_7bhkLimitedHingeConstraint@@6B@; const bhkLimitedHingeConstraint::`vftable'
0x8B2CF3: add     ds:0BA7FC8h, ebp
0x8B2CF9: jmp     short loc_8B2CFD
0x8B2CFB: xor     esi, esi
0x8B2CFD: mov     eax, [esp+20h+arg_0]
0x8B2D01: push    eax
0x8B2D02: push    esi
0x8B2D03: mov     ecx, edi
0x8B2D05: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8B2D0D: call    sub_8A0860
0x8B2D12: sub     ds:0BA7CFCh, ebp
0x8B2D18: jnz     short loc_8B2D24
0x8B2D1A: mov     dword ptr ds:0BA7CF8h, 0
0x8B2D24: push    offset stru_BA7C80; lpCriticalSection
0x8B2D29: call    dword ptr ds:0A28074h
0x8B2D2F: mov     eax, esi
0x8B2D31: mov     ecx, [esp+20h+var_C]
0x8B2D35: mov     large fs:0, ecx
0x8B2D3C: pop     ecx
0x8B2D3D: pop     edi
0x8B2D3E: pop     esi
0x8B2D3F: pop     ebp
0x8B2D40: add     esp, 10h
0x8B2D43: retn    4
