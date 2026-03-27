0x8BDD80: push    0FFFFFFFFh
0x8BDD82: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8BDD87: mov     eax, large fs:0
0x8BDD8D: push    eax
0x8BDD8E: push    ecx
0x8BDD8F: push    ebp
0x8BDD90: push    esi
0x8BDD91: push    edi
0x8BDD92: mov     eax, ds:0B30AACh
0x8BDD97: xor     eax, esp
0x8BDD99: push    eax
0x8BDD9A: lea     eax, [esp+20h+var_C]
0x8BDD9E: mov     large fs:0, eax
0x8BDDA4: mov     edi, ecx
0x8BDDA6: push    offset stru_BA7C80; lpCriticalSection
0x8BDDAB: call    dword ptr ds:0A2806Ch
0x8BDDB1: call    dword ptr ds:0A2808Ch
0x8BDDB7: mov     ebp, 1
0x8BDDBC: add     ds:0BA7CFCh, ebp
0x8BDDC2: push    10h; Size
0x8BDDC4: mov     ds:0BA7CF8h, eax
0x8BDDC9: call    FormHeapAlloc
0x8BDDCE: mov     esi, eax
0x8BDDD0: add     esp, 4
0x8BDDD3: mov     [esp+20h+var_10], esi
0x8BDDD7: test    esi, esi
0x8BDDD9: mov     [esp+20h+var_4], 0
0x8BDDE1: jz      short loc_8BDE17
0x8BDDE3: mov     ecx, esi; this
0x8BDDE5: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BDDEA: mov     dword ptr [esi], offset ??_7bhkAction@@6B@; const bhkAction::`vftable'
0x8BDDF0: mov     dword ptr [esi+0Ch], 0
0x8BDDF7: add     ds:0BA7D00h, ebp
0x8BDDFD: mov     dword ptr [esi], offset ??_7bhkBinaryAction@@6B@; const bhkBinaryAction::`vftable'
0x8BDE03: add     ds:0BA7D40h, ebp
0x8BDE09: mov     dword ptr [esi], offset ??_7bhkAngularDashpotAction@@6B@; const bhkAngularDashpotAction::`vftable'
0x8BDE0F: add     ds:0BA8064h, ebp
0x8BDE15: jmp     short loc_8BDE19
0x8BDE17: xor     esi, esi
0x8BDE19: mov     ecx, [esp+20h+arg_0]
0x8BDE1D: mov     eax, [edi]
0x8BDE1F: mov     edx, [eax+88h]
0x8BDE25: push    ecx
0x8BDE26: push    esi
0x8BDE27: mov     ecx, edi
0x8BDE29: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8BDE31: call    edx
0x8BDE33: sub     ds:0BA7CFCh, ebp
0x8BDE39: jnz     short loc_8BDE45
0x8BDE3B: mov     dword ptr ds:0BA7CF8h, 0
0x8BDE45: push    offset stru_BA7C80; lpCriticalSection
0x8BDE4A: call    dword ptr ds:0A28074h
0x8BDE50: mov     eax, esi
0x8BDE52: mov     ecx, dword ptr [esp+20h+var_C]
0x8BDE56: mov     large fs:0, ecx
0x8BDE5D: pop     ecx
0x8BDE5E: pop     edi
0x8BDE5F: pop     esi
0x8BDE60: pop     ebp
0x8BDE61: add     esp, 10h
0x8BDE64: retn    4
