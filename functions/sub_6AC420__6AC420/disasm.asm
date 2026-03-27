0x6AC420: push    0FFFFFFFFh
0x6AC422: push    offset SEH_6AC420
0x6AC427: mov     eax, large fs:0
0x6AC42D: push    eax
0x6AC42E: sub     esp, 18h
0x6AC431: push    ebx
0x6AC432: push    ebp
0x6AC433: push    esi
0x6AC434: push    edi
0x6AC435: mov     eax, ds:0B30AACh
0x6AC43A: xor     eax, esp
0x6AC43C: push    eax
0x6AC43D: lea     eax, [esp+38h+var_C]
0x6AC441: mov     large fs:0, eax
0x6AC447: mov     ebp, ecx
0x6AC449: xor     ebx, ebx
0x6AC44B: mov     [esp+38h+var_20], ebx
0x6AC44F: mov     [esp+38h+var_24], ebx
0x6AC453: mov     eax, [esp+38h+arg_0]
0x6AC457: mov     edi, [eax+3Ch]
0x6AC45A: cmp     edi, ebx
0x6AC45C: mov     [esp+38h+var_4], ebx
0x6AC460: mov     [esp+38h+var_1C], edi
0x6AC464: jz      short loc_6AC470
0x6AC466: lea     ecx, [edi+4]
0x6AC469: push    ecx; lpAddend
0x6AC46A: call    dword ptr ds:0A28078h
0x6AC470: cmp     edi, ebx
0x6AC472: mov     byte ptr [esp+38h+var_4], 1
0x6AC477: jz      loc_6AC5D4
0x6AC47D: cmp     byte ptr ds:0B16178h, 0
0x6AC484: jz      loc_6AC5D4
0x6AC48A: mov     ecx, [ebp+304h]
0x6AC490: call    sub_6A9030
0x6AC495: cmp     eax, ebx
0x6AC497: mov     [esp+38h+arg_0], eax
0x6AC49B: jz      loc_6AC594
0x6AC4A1: lea     edx, [esp+38h+var_24]
0x6AC4A5: push    edx
0x6AC4A6: lea     eax, [esp+3Ch+var_18]
0x6AC4AA: push    eax
0x6AC4AB: lea     ecx, [esp+40h+arg_0]
0x6AC4AF: push    ecx
0x6AC4B0: mov     ecx, [ebp+304h]
0x6AC4B6: call    sub_7B2600
0x6AC4BB: mov     ebx, [esp+38h+var_24]
0x6AC4BF: cmp     ebx, edi
0x6AC4C1: jnz     loc_6AC589
0x6AC4C7: mov     edi, [esp+38h+var_18]
0x6AC4CB: mov     ecx, [ebp+300h]
0x6AC4D1: lea     edx, [esp+38h+var_20]
0x6AC4D5: push    edx
0x6AC4D6: push    edi
0x6AC4D7: call    NiTMap_GetAt
0x6AC4DC: mov     esi, [esp+38h+var_20]
0x6AC4E0: test    esi, esi
0x6AC4E2: jz      loc_6AC585
0x6AC4E8: mov     eax, [esi]
0x6AC4EA: or      eax, 100h
0x6AC4EF: mov     [esi], eax
0x6AC4F1: mov     ecx, [ebp+304h]
0x6AC4F7: push    edi
0x6AC4F8: call    NiTMap_RemoveAt
0x6AC4FD: test    ebx, ebx
0x6AC4FF: jz      short loc_6AC50A
0x6AC501: push    ebx
0x6AC502: call    sub_6F9710
0x6AC507: add     esp, 4
0x6AC50A: fld     [esp+38h+arg_4]
0x6AC50E: fcom    qword ptr ds:0A77188h
0x6AC514: fnstsw  ax
0x6AC516: test    ah, 5
0x6AC519: jp      short loc_6AC526
0x6AC51B: mov     ecx, esi
0x6AC51D: fstp    st
0x6AC51F: call    sub_6B6AC0
0x6AC524: jmp     short loc_6AC559
0x6AC526: fmul    qword ptr ds:0A2FC70h
0x6AC52C: mov     ecx, ebp
0x6AC52E: fnstcw  word ptr [esp+38h+arg_0]
0x6AC532: movzx   eax, word ptr [esp+38h+arg_0]
0x6AC537: or      eax, 0C00h
0x6AC53C: mov     dword ptr [esp+38h+var_14], eax
0x6AC540: fldcw   word ptr [esp+38h+var_14]
0x6AC544: fistp   [esp+38h+var_14]
0x6AC548: mov     eax, dword ptr [esp+38h+var_14]
0x6AC54C: push    eax
0x6AC54D: push    1
0x6AC54F: fldcw   word ptr [esp+40h+arg_0]
0x6AC553: push    edi
0x6AC554: call    sub_6AB8D0
0x6AC559: mov     ecx, [ebp+304h]
0x6AC55F: mov     edx, [ecx+4]
0x6AC562: xor     eax, eax
0x6AC564: test    edx, edx
0x6AC566: jbe     short loc_6AC57F
0x6AC568: mov     esi, [ecx+8]
0x6AC56B: mov     ecx, esi
0x6AC56D: lea     ecx, [ecx+0]
0x6AC570: cmp     dword ptr [ecx], 0
0x6AC573: jnz     short loc_6AC5CF
0x6AC575: add     eax, 1
0x6AC578: add     ecx, 4
0x6AC57B: cmp     eax, edx
0x6AC57D: jb      short loc_6AC570
0x6AC57F: xor     eax, eax
0x6AC581: mov     [esp+38h+arg_0], eax
0x6AC585: mov     edi, [esp+38h+var_1C]
0x6AC589: cmp     [esp+38h+arg_0], 0
0x6AC58E: jnz     loc_6AC4A1
0x6AC594: mov     esi, ds:0A2807Ch
0x6AC59A: lea     ecx, [edi+4]
0x6AC59D: push    ecx; lpAddend
0x6AC59E: mov     byte ptr [esp+3Ch+var_4], 0
0x6AC5A3: call    esi ; InterlockedDecrement
0x6AC5A5: test    eax, eax
0x6AC5A7: jnz     short loc_6AC5B3
0x6AC5A9: mov     edx, [edi]
0x6AC5AB: mov     eax, [edx]
0x6AC5AD: push    1
0x6AC5AF: mov     ecx, edi
0x6AC5B1: call    eax
0x6AC5B3: test    ebx, ebx
0x6AC5B5: mov     [esp+38h+var_4], 0FFFFFFFFh
0x6AC5BD: jz      short loc_6AC5F5
0x6AC5BF: lea     ecx, [ebx+4]
0x6AC5C2: push    ecx; lpAddend
0x6AC5C3: call    esi ; InterlockedDecrement
0x6AC5C5: test    eax, eax
0x6AC5C7: jnz     short loc_6AC5F5
0x6AC5C9: mov     edx, [ebx]
0x6AC5CB: mov     ecx, ebx
0x6AC5CD: jmp     short loc_6AC5EF
0x6AC5CF: mov     eax, [esi+eax*4]
0x6AC5D2: jmp     short loc_6AC581
0x6AC5D4: cmp     edi, ebx
0x6AC5D6: mov     byte ptr [esp+38h+var_4], 0
0x6AC5DB: jz      short loc_6AC5F5
0x6AC5DD: lea     ecx, [edi+4]
0x6AC5E0: push    ecx; lpAddend
0x6AC5E1: call    dword ptr ds:0A2807Ch
0x6AC5E7: test    eax, eax
0x6AC5E9: jnz     short loc_6AC5F5
0x6AC5EB: mov     edx, [edi]
0x6AC5ED: mov     ecx, edi
0x6AC5EF: mov     eax, [edx]
0x6AC5F1: push    1
0x6AC5F3: call    eax
0x6AC5F5: mov     ecx, dword ptr [esp+38h+var_C]
0x6AC5F9: mov     large fs:0, ecx
0x6AC600: pop     ecx
0x6AC601: pop     edi
0x6AC602: pop     esi
0x6AC603: pop     ebp
0x6AC604: pop     ebx
0x6AC605: add     esp, 24h
0x6AC608: retn    8
