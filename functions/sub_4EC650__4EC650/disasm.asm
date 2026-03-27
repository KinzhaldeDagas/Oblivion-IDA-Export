0x4EC650: push    0FFFFFFFFh
0x4EC652: push    offset SEH_4EC740
0x4EC657: mov     eax, large fs:0
0x4EC65D: push    eax
0x4EC65E: push    ecx
0x4EC65F: push    ebx
0x4EC660: push    ebp
0x4EC661: push    esi
0x4EC662: push    edi
0x4EC663: mov     eax, ds:0B30AACh
0x4EC668: xor     eax, esp
0x4EC66A: push    eax
0x4EC66B: lea     eax, [esp+24h+var_C]
0x4EC66F: mov     large fs:0, eax
0x4EC675: mov     esi, ecx
0x4EC677: mov     [esp+24h+var_10], esi
0x4EC67B: xor     edi, edi
0x4EC67D: mov     [esi+4], edi
0x4EC680: mov     [esp+24h+var_4], edi
0x4EC684: mov     [esi+2Ch], edi
0x4EC687: fldz
0x4EC689: mov     eax, [esp+24h+arg_0]
0x4EC68D: fst     dword ptr [esi+48h]
0x4EC690: mov     ebp, ds:0A2807Ch
0x4EC696: fst     dword ptr [esi+4Ch]
0x4EC699: fstp    dword ptr [esi+44h]
0x4EC69C: mov     [esi], eax
0x4EC69E: mov     [esi+30h], edi
0x4EC6A1: mov     [esi+34h], edi
0x4EC6A4: mov     [esi+38h], edi
0x4EC6A7: mov     [esi+3Ch], edi
0x4EC6AA: mov     [esi+14h], edi
0x4EC6AD: mov     [esi+24h], edi
0x4EC6B0: mov     [esi+20h], edi
0x4EC6B3: mov     [esi+40h], edi
0x4EC6B6: mov     [esi+50h], edi
0x4EC6B9: mov     [esi+54h], edi
0x4EC6BC: mov     [esi+58h], edi
0x4EC6BF: mov     [esi+5Ch], edi
0x4EC6C2: mov     [esi+0Ch], di
0x4EC6C6: mov     [esi+0Eh], di
0x4EC6CA: mov     [esi+10h], di
0x4EC6CE: mov     [esi+12h], di
0x4EC6D2: mov     dword ptr [esi+8], 5
0x4EC6D9: mov     ebx, [esi+2Ch]
0x4EC6DC: cmp     ebx, edi
0x4EC6DE: mov     byte ptr [esp+24h+var_4], 1
0x4EC6E3: jz      short loc_4EC700
0x4EC6E5: lea     ecx, [ebx+4]
0x4EC6E8: push    ecx; lpAddend
0x4EC6E9: call    ebp ; InterlockedDecrement
0x4EC6EB: test    eax, eax
0x4EC6ED: jnz     short loc_4EC6FD
0x4EC6EF: cmp     ebx, edi
0x4EC6F1: jz      short loc_4EC6FD
0x4EC6F3: mov     edx, [ebx]
0x4EC6F5: mov     eax, [edx]
0x4EC6F7: push    1
0x4EC6F9: mov     ecx, ebx
0x4EC6FB: call    eax
0x4EC6FD: mov     [esi+2Ch], edi
0x4EC700: mov     ebx, [esi+4]
0x4EC703: cmp     ebx, edi
0x4EC705: jz      short loc_4EC722
0x4EC707: lea     ecx, [ebx+8]
0x4EC70A: push    ecx; lpAddend
0x4EC70B: call    ebp ; InterlockedDecrement
0x4EC70D: test    eax, eax
0x4EC70F: jnz     short loc_4EC71F
0x4EC711: cmp     ebx, edi
0x4EC713: jz      short loc_4EC71F
0x4EC715: mov     edx, [ebx]
0x4EC717: mov     eax, [edx]
0x4EC719: push    1
0x4EC71B: mov     ecx, ebx
0x4EC71D: call    eax
0x4EC71F: mov     [esi+4], edi
0x4EC722: mov     eax, esi
0x4EC724: mov     ecx, dword ptr [esp+24h+var_C]
0x4EC728: mov     large fs:0, ecx
0x4EC72F: pop     ecx
0x4EC730: pop     edi
0x4EC731: pop     esi
0x4EC732: pop     ebp
0x4EC733: pop     ebx
0x4EC734: add     esp, 10h
0x4EC737: retn    4
