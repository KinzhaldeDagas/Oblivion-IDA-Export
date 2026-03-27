0x5255A0: fldz
0x5255A2: sub     esp, 8
0x5255A5: push    ebx
0x5255A6: push    ebp
0x5255A7: xor     eax, eax
0x5255A9: push    esi
0x5255AA: push    edi
0x5255AB: mov     edi, ecx
0x5255AD: mov     [edi+0ECh], eax
0x5255B3: mov     [edi+0F0h], eax
0x5255B9: mov     [edi+0F4h], eax
0x5255BF: mov     [edi+0F8h], eax
0x5255C5: mov     [edi+0FCh], eax
0x5255CB: mov     [edi+100h], al
0x5255D1: fstp    dword ptr [edi+1CCh]
0x5255D7: xor     ebp, ebp
0x5255D9: mov     [edi+1C8h], ebp
0x5255DF: mov     [edi+1D0h], ebp
0x5255E5: mov     ecx, ds:0B33B00h
0x5255EB: call    sub_45A500
0x5255F0: test    al, al
0x5255F2: jnz     short loc_525662
0x5255F4: mov     esi, [edi+1D8h]
0x5255FA: lea     ebx, [edi+1D8h]
0x525600: cmp     esi, ebp
0x525602: mov     ebp, ds:0A2807Ch
0x525608: jz      short loc_525628
0x52560A: lea     eax, [esi+4]
0x52560D: push    eax; lpAddend
0x52560E: call    ebp ; InterlockedDecrement
0x525610: test    eax, eax
0x525612: jnz     short loc_525622
0x525614: test    esi, esi
0x525616: jz      short loc_525622
0x525618: mov     edx, [esi]
0x52561A: mov     eax, [edx]
0x52561C: push    1
0x52561E: mov     ecx, esi
0x525620: call    eax
0x525622: mov     dword ptr [ebx], 0
0x525628: push    ebx
0x525629: lea     ecx, [edi+1D4h]
0x52562F: call    sub_55E2A0
0x525634: mov     esi, [edi+1DCh]
0x52563A: test    esi, esi
0x52563C: jz      short loc_525660
0x52563E: lea     ecx, [esi+4]
0x525641: push    ecx; lpAddend
0x525642: call    ebp ; InterlockedDecrement
0x525644: test    eax, eax
0x525646: jnz     short loc_525656
0x525648: test    esi, esi
0x52564A: jz      short loc_525656
0x52564C: mov     edx, [esi]
0x52564E: mov     eax, [edx]
0x525650: push    1
0x525652: mov     ecx, esi
0x525654: call    eax
0x525656: mov     dword ptr [edi+1DCh], 0
0x525660: xor     ebp, ebp
0x525662: mov     edx, [edi]
0x525664: mov     eax, [edx+128h]
0x52566A: push    45h ; 'E'
0x52566C: mov     ecx, edi
0x52566E: mov     word ptr [edi+1E0h], 0FFh
0x525677: mov     [edi+104h], ebp
0x52567D: mov     [edi+1E4h], ebp
0x525683: mov     dword ptr [edi+1E8h], 19324Bh
0x52568D: call    eax
0x52568F: test    eax, eax
0x525691: lea     eax, [edi+168h]
0x525697: jnz     short loc_52569F
0x525699: lea     eax, [edi+108h]
0x52569F: push    eax
0x5256A0: call    sub_5538D0
0x5256A5: push    eax
0x5256A6: call    sub_5528F0
0x5256AB: add     esp, 8
0x5256AE: lea     esi, [edi+114h]
0x5256B4: mov     [esp+18h+var_8], 2
0x5256BC: lea     esp, [esp+0]
0x5256C0: mov     ebx, 2
0x5256C5: cmp     [esi-0Ch], ebp
0x5256C8: jz      short loc_5256F7
0x5256CA: mov     eax, [esi]
0x5256CC: cmp     eax, ebp
0x5256CE: jz      short loc_5256DA
0x5256D0: mov     ecx, [esi+4]
0x5256D3: sub     ecx, eax
0x5256D5: sar     ecx, 2
0x5256D8: jnz     short loc_5256DF
0x5256DA: call    __invalid_parameter_noinfo
0x5256DF: mov     edx, [esi-8]
0x5256E2: imul    edx, [esi-0Ch]
0x5256E6: mov     eax, [esi]
0x5256E8: add     edx, edx
0x5256EA: add     edx, edx
0x5256EC: push    edx
0x5256ED: push    ebp
0x5256EE: push    eax
0x5256EF: call    __memset
0x5256F4: add     esp, 0Ch
0x5256F7: cmp     [esi+54h], ebp
0x5256FA: jz      short loc_52572B
0x5256FC: mov     eax, [esi+60h]
0x5256FF: cmp     eax, ebp
0x525701: jz      short loc_52570D
0x525703: mov     ecx, [esi+64h]
0x525706: sub     ecx, eax
0x525708: sar     ecx, 2
0x52570B: jnz     short loc_525712
0x52570D: call    __invalid_parameter_noinfo
0x525712: mov     edx, [esi+58h]
0x525715: imul    edx, [esi+54h]
0x525719: mov     eax, [esi+60h]
0x52571C: add     edx, edx
0x52571E: add     edx, edx
0x525720: push    edx
0x525721: push    ebp
0x525722: push    eax
0x525723: call    __memset
0x525728: add     esp, 0Ch
0x52572B: add     esi, 18h
0x52572E: sub     ebx, 1
0x525731: jnz     short loc_5256C5
0x525733: sub     [esp+18h+var_8], 1
0x525738: jnz     short loc_5256C0
0x52573A: mov     eax, 5050505h
0x52573F: mov     [edi+0ECh], eax
0x525745: mov     [edi+0F0h], eax
0x52574B: mov     [edi+0F4h], eax
0x525751: mov     [edi+0F8h], eax
0x525757: mov     [edi+0FCh], eax
0x52575D: mov     ecx, edi; this
0x52575F: mov     [edi+100h], al
0x525765: call    j_TESForm_InitializeComponents
0x52576A: mov     edx, [edi+24h]
0x52576D: mov     eax, [edx+50h]
0x525770: and     dword ptr [edi+28h], 0FFFFFDFFh
0x525777: lea     ecx, [edi+24h]
0x52577A: push    10h
0x52577C: call    eax
0x52577E: mov     dword ptr [edi+84h], 32h ; '2'
0x525788: pop     edi
0x525789: pop     esi
0x52578A: pop     ebp
0x52578B: pop     ebx
0x52578C: add     esp, 8
0x52578F: retn
