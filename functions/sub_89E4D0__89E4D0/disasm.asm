0x89E4D0: push    0FFFFFFFFh
0x89E4D2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x89E4D7: mov     eax, large fs:0
0x89E4DD: push    eax
0x89E4DE: push    ecx
0x89E4DF: push    ebp
0x89E4E0: push    esi
0x89E4E1: push    edi
0x89E4E2: mov     eax, ds:0B30AACh
0x89E4E7: xor     eax, esp
0x89E4E9: push    eax
0x89E4EA: lea     eax, [esp+20h+var_C]
0x89E4EE: mov     large fs:0, eax
0x89E4F4: mov     edi, ecx
0x89E4F6: push    offset stru_BA7C80; lpCriticalSection
0x89E4FB: call    dword ptr ds:0A2806Ch
0x89E501: call    dword ptr ds:0A2808Ch
0x89E507: mov     ebp, 1
0x89E50C: add     ds:0BA7CFCh, ebp
0x89E512: push    10h; Size
0x89E514: mov     ds:0BA7CF8h, eax
0x89E519: call    FormHeapAlloc
0x89E51E: mov     esi, eax
0x89E520: add     esp, 4
0x89E523: mov     [esp+20h+var_10], esi
0x89E527: test    esi, esi
0x89E529: mov     [esp+20h+var_4], 0
0x89E531: jz      short loc_89E567
0x89E533: mov     ecx, esi; this
0x89E535: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x89E53A: mov     dword ptr [esi], offset ??_7bhkAction@@6B@; const bhkAction::`vftable'
0x89E540: mov     dword ptr [esi+0Ch], 0
0x89E547: add     ds:0BA7D00h, ebp
0x89E54D: mov     dword ptr [esi], offset ??_7bhkUnaryAction@@6B@; const bhkUnaryAction::`vftable'
0x89E553: add     ds:0BA7D0Ch, ebp
0x89E559: mov     dword ptr [esi], offset ??_7bhkMouseSpringAction@@6B@; const bhkMouseSpringAction::`vftable'
0x89E55F: add     ds:0BA7D18h, ebp
0x89E565: jmp     short loc_89E569
0x89E567: xor     esi, esi
0x89E569: mov     eax, [esp+20h+arg_0]
0x89E56D: push    eax
0x89E56E: push    esi
0x89E56F: mov     ecx, edi
0x89E571: mov     [esp+28h+var_4], 0FFFFFFFFh
0x89E579: call    sub_89E1A0
0x89E57E: sub     ds:0BA7CFCh, ebp
0x89E584: jnz     short loc_89E590
0x89E586: mov     dword ptr ds:0BA7CF8h, 0
0x89E590: push    offset stru_BA7C80; lpCriticalSection
0x89E595: call    dword ptr ds:0A28074h
0x89E59B: mov     eax, esi
0x89E59D: mov     ecx, [esp+20h+var_C]
0x89E5A1: mov     large fs:0, ecx
0x89E5A8: pop     ecx
0x89E5A9: pop     edi
0x89E5AA: pop     esi
0x89E5AB: pop     ebp
0x89E5AC: add     esp, 10h
0x89E5AF: retn    4
