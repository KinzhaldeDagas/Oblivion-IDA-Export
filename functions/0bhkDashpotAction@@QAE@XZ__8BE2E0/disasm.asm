0x8BE2E0: push    0FFFFFFFFh
0x8BE2E2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8BE2E7: mov     eax, large fs:0
0x8BE2ED: push    eax
0x8BE2EE: push    ecx
0x8BE2EF: push    ebp
0x8BE2F0: push    esi
0x8BE2F1: push    edi
0x8BE2F2: mov     eax, ds:0B30AACh
0x8BE2F7: xor     eax, esp
0x8BE2F9: push    eax
0x8BE2FA: lea     eax, [esp+20h+var_C]
0x8BE2FE: mov     large fs:0, eax
0x8BE304: mov     edi, ecx
0x8BE306: push    offset stru_BA7C80; lpCriticalSection
0x8BE30B: call    dword ptr ds:0A2806Ch
0x8BE311: call    dword ptr ds:0A2808Ch
0x8BE317: mov     ebp, 1
0x8BE31C: add     ds:0BA7CFCh, ebp
0x8BE322: push    10h; Size
0x8BE324: mov     ds:0BA7CF8h, eax
0x8BE329: call    FormHeapAlloc
0x8BE32E: mov     esi, eax
0x8BE330: add     esp, 4
0x8BE333: mov     [esp+20h+var_10], esi
0x8BE337: test    esi, esi
0x8BE339: mov     [esp+20h+var_4], 0
0x8BE341: jz      short loc_8BE377
0x8BE343: mov     ecx, esi; this
0x8BE345: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BE34A: mov     dword ptr [esi], offset ??_7bhkAction@@6B@; const bhkAction::`vftable'
0x8BE350: mov     dword ptr [esi+0Ch], 0
0x8BE357: add     ds:0BA7D00h, ebp
0x8BE35D: mov     dword ptr [esi], offset ??_7bhkBinaryAction@@6B@; const bhkBinaryAction::`vftable'
0x8BE363: add     ds:0BA7D40h, ebp
0x8BE369: mov     dword ptr [esi], offset ??_7bhkDashpotAction@@6B@; const bhkDashpotAction::`vftable'
0x8BE36F: add     ds:0BA8070h, ebp
0x8BE375: jmp     short loc_8BE379
0x8BE377: xor     esi, esi
0x8BE379: mov     ecx, [esp+20h+arg_0]
0x8BE37D: mov     eax, [edi]
0x8BE37F: mov     edx, [eax+88h]
0x8BE385: push    ecx
0x8BE386: push    esi
0x8BE387: mov     ecx, edi
0x8BE389: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8BE391: call    edx
0x8BE393: sub     ds:0BA7CFCh, ebp
0x8BE399: jnz     short loc_8BE3A5
0x8BE39B: mov     dword ptr ds:0BA7CF8h, 0
0x8BE3A5: push    offset stru_BA7C80; lpCriticalSection
0x8BE3AA: call    dword ptr ds:0A28074h
0x8BE3B0: mov     eax, esi
0x8BE3B2: mov     ecx, dword ptr [esp+20h+var_C]
0x8BE3B6: mov     large fs:0, ecx
0x8BE3BD: pop     ecx
0x8BE3BE: pop     edi
0x8BE3BF: pop     esi
0x8BE3C0: pop     ebp
0x8BE3C1: add     esp, 10h
0x8BE3C4: retn    4
