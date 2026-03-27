0x8BF050: push    0FFFFFFFFh
0x8BF052: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8BF057: mov     eax, large fs:0
0x8BF05D: push    eax
0x8BF05E: push    ecx
0x8BF05F: push    ebp
0x8BF060: push    esi
0x8BF061: push    edi
0x8BF062: mov     eax, ds:0B30AACh
0x8BF067: xor     eax, esp
0x8BF069: push    eax
0x8BF06A: lea     eax, [esp+20h+var_C]
0x8BF06E: mov     large fs:0, eax
0x8BF074: mov     edi, ecx
0x8BF076: push    offset stru_BA7C80; lpCriticalSection
0x8BF07B: call    dword ptr ds:0A2806Ch
0x8BF081: call    dword ptr ds:0A2808Ch
0x8BF087: mov     ebp, 1
0x8BF08C: add     ds:0BA7CFCh, ebp
0x8BF092: push    10h; Size
0x8BF094: mov     ds:0BA7CF8h, eax
0x8BF099: call    FormHeapAlloc
0x8BF09E: mov     esi, eax
0x8BF0A0: add     esp, 4
0x8BF0A3: mov     [esp+20h+var_10], esi
0x8BF0A7: test    esi, esi
0x8BF0A9: mov     [esp+20h+var_4], 0
0x8BF0B1: jz      short loc_8BF0DB
0x8BF0B3: mov     ecx, esi; this
0x8BF0B5: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BF0BA: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8BF0C0: mov     dword ptr [esi+0Ch], 0
0x8BF0C7: add     ds:0BA7D4Ch, ebp
0x8BF0CD: mov     dword ptr [esi], offset ??_7bhkMalleableConstraint@@6B@; const bhkMalleableConstraint::`vftable'
0x8BF0D3: add     ds:0BA8088h, ebp
0x8BF0D9: jmp     short loc_8BF0DD
0x8BF0DB: xor     esi, esi
0x8BF0DD: mov     eax, [esp+20h+arg_0]
0x8BF0E1: push    eax
0x8BF0E2: push    esi
0x8BF0E3: mov     ecx, edi
0x8BF0E5: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8BF0ED: call    sub_8A0860
0x8BF0F2: sub     ds:0BA7CFCh, ebp
0x8BF0F8: jnz     short loc_8BF104
0x8BF0FA: mov     dword ptr ds:0BA7CF8h, 0
0x8BF104: push    offset stru_BA7C80; lpCriticalSection
0x8BF109: call    dword ptr ds:0A28074h
0x8BF10F: mov     eax, esi
0x8BF111: mov     ecx, [esp+20h+var_C]
0x8BF115: mov     large fs:0, ecx
0x8BF11C: pop     ecx
0x8BF11D: pop     edi
0x8BF11E: pop     esi
0x8BF11F: pop     ebp
0x8BF120: add     esp, 10h
0x8BF123: retn    4
