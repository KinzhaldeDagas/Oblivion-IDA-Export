0x789190: push    0FFFFFFFFh
0x789192: push    offset SEH_789190
0x789197: mov     eax, large fs:0
0x78919D: push    eax
0x78919E: sub     esp, 90h
0x7891A4: push    ebx
0x7891A5: push    ebp
0x7891A6: push    esi
0x7891A7: push    edi
0x7891A8: mov     eax, ds:0B30AACh
0x7891AD: xor     eax, esp
0x7891AF: push    eax
0x7891B0: lea     eax, [esp+0B0h+var_C]
0x7891B7: mov     large fs:0, eax
0x7891BD: mov     ebp, ecx
0x7891BF: xor     ebx, ebx
0x7891C1: cmp     byte ptr [esp+0B0h+arg_4], bl
0x7891C8: mov     [esp+0B0h+var_9C], ebx
0x7891CC: jz      short loc_789221
0x7891CE: call    __errno
0x7891D3: mov     eax, [eax]
0x7891D5: push    eax; int
0x7891D6: call    _strerror
0x7891DB: mov     esi, eax
0x7891DD: mov     edi, 0Fh
0x7891E2: mov     ecx, esi
0x7891E4: add     esp, 4
0x7891E7: mov     [esp+0B0h+var_64], edi
0x7891EB: mov     [esp+0B0h+var_68], ebx
0x7891EF: mov     byte ptr [esp+0B0h+var_78], bl
0x7891F3: lea     edx, [ecx+1]
0x7891F6: mov     al, [ecx]
0x7891F8: add     ecx, 1
0x7891FB: cmp     al, bl
0x7891FD: jnz     short loc_7891F6
0x7891FF: sub     ecx, edx
0x789201: push    ecx; MaxCount
0x789202: push    esi; Src
0x789203: lea     ecx, [esp+0B8h+var_7C]
0x789207: call    sub_414500
0x78920C: lea     esi, [esp+0B0h+var_7C]
0x789210: mov     [esp+0B0h+var_4], ebx
0x789217: mov     [esp+0B0h+var_9C], 1
0x78921F: jmp     short loc_789258
0x789221: push    ebx; MaxCount
0x789222: mov     edi, 0Fh
0x789227: push    offset EmptyString; Src
0x78922C: lea     ecx, [esp+0B8h+var_98]
0x789230: mov     [esp+0B8h+var_80], edi
0x789234: mov     [esp+0B8h+var_84], ebx
0x789238: mov     byte ptr [esp+0B8h+var_94], bl
0x78923C: call    sub_414500
0x789241: lea     esi, [esp+0B0h+var_98]
0x789245: mov     [esp+0B0h+var_4], 1
0x789250: mov     [esp+0B0h+var_9C], 2
0x789258: mov     ecx, [esp+0B0h+arg_0]
0x78925F: push    offset unk_A8BA64; Src
0x789264: push    ecx; int
0x789265: lea     edx, [esp+0B8h+var_28]
0x78926C: push    edx; int
0x78926D: call    sub_6F8D30
0x789272: push    esi
0x789273: push    eax
0x789274: lea     eax, [esp+0C4h+var_60]
0x789278: push    eax
0x789279: mov     [esp+0C8h+var_4], 2
0x789284: call    sub_6F8430
0x789289: push    offset word_A61E98; Src
0x78928E: push    eax; int
0x78928F: lea     ecx, [esp+0D0h+var_44]
0x789296: push    ecx; int
0x789297: mov     byte ptr [esp+0D4h+var_4], 3
0x78929F: call    sub_6F8D30
0x7892A4: add     esp, 24h
0x7892A7: push    eax
0x7892A8: mov     ecx, ebp
0x7892AA: mov     byte ptr [esp+0B4h+var_4], 4
0x7892B2: call    sub_6F7DD0
0x7892B7: mov     esi, 10h
0x7892BC: cmp     [esp+0B0h+var_2C], esi
0x7892C3: jb      short loc_7892D2
0x7892C5: mov     edx, [esp+0B0h+var_40]
0x7892C9: push    edx
0x7892CA: call    FormHeapFree
0x7892CF: add     esp, 4
0x7892D2: cmp     [esp+0B0h+var_48], esi
0x7892D6: mov     [esp+0B0h+var_2C], edi
0x7892DD: mov     [esp+0B0h+var_30], ebx
0x7892E4: mov     byte ptr [esp+0B0h+var_40], bl
0x7892E8: jb      short loc_7892F7
0x7892EA: mov     eax, [esp+0B0h+var_5C]
0x7892EE: push    eax
0x7892EF: call    FormHeapFree
0x7892F4: add     esp, 4
0x7892F7: cmp     [esp+0B0h+var_10], esi
0x7892FE: mov     [esp+0B0h+var_48], edi
0x789302: mov     [esp+0B0h+var_4C], ebx
0x789306: mov     byte ptr [esp+0B0h+var_5C], bl
0x78930A: jb      short loc_78931C
0x78930C: mov     ecx, [esp+0B0h+var_24]
0x789313: push    ecx
0x789314: call    FormHeapFree
0x789319: add     esp, 4
0x78931C: test    byte ptr [esp+0B0h+var_9C], 2
0x789321: mov     [esp+0B0h+var_10], edi
0x789328: mov     [esp+0B0h+var_14], ebx
0x78932F: mov     byte ptr [esp+0B0h+var_24], bl
0x789336: jz      short loc_78935C
0x789338: and     [esp+0B0h+var_9C], 0FFFFFFFDh
0x78933D: cmp     [esp+0B0h+var_80], esi
0x789341: jb      short loc_789350
0x789343: mov     edx, [esp+0B0h+var_94]
0x789347: push    edx
0x789348: call    FormHeapFree
0x78934D: add     esp, 4
0x789350: mov     [esp+0B0h+var_80], edi
0x789354: mov     [esp+0B0h+var_84], ebx
0x789358: mov     byte ptr [esp+0B0h+var_94], bl
0x78935C: test    byte ptr [esp+0B0h+var_9C], 1
0x789361: jz      short loc_789376
0x789363: cmp     [esp+0B0h+var_64], esi
0x789367: jb      short loc_789376
0x789369: mov     eax, [esp+0B0h+var_78]
0x78936D: push    eax
0x78936E: call    FormHeapFree
0x789373: add     esp, 4
0x789376: mov     dword ptr [ebp+0], offset ??_7IdvFileError@@6B@; const IdvFileError::`vftable'
0x78937D: mov     eax, ebp
0x78937F: mov     ecx, [esp+0B0h+var_C]
0x789386: mov     large fs:0, ecx
0x78938D: pop     ecx
0x78938E: pop     edi
0x78938F: pop     esi
0x789390: pop     ebp
0x789391: pop     ebx
0x789392: add     esp, 9Ch
0x789398: retn    8
