0x8AB440: push    ebp
0x8AB441: mov     ebp, esp
0x8AB443: and     esp, 0FFFFFFF0h
0x8AB446: sub     esp, 54h
0x8AB449: mov     eax, ds:0B30AACh
0x8AB44E: xor     eax, esp
0x8AB450: mov     [esp+54h+var_4], eax
0x8AB454: mov     eax, [ebp+arg_4]
0x8AB457: push    ebx
0x8AB458: mov     ebx, [ebp+arg_0]
0x8AB45B: test    ebx, ebx
0x8AB45D: push    esi
0x8AB45E: push    edi
0x8AB45F: mov     [esp+60h+var_44], ebx
0x8AB463: mov     [esp+60h+var_4C], eax
0x8AB467: mov     [esp+60h+var_48], 0
0x8AB46F: jz      loc_8AB6F5
0x8AB475: push    ebx
0x8AB476: call    sub_497420
0x8AB47B: mov     edi, eax
0x8AB47D: add     esp, 4
0x8AB480: test    edi, edi
0x8AB482: jz      loc_8AB61C
0x8AB488: mov     ecx, edi
0x8AB48A: call    sub_88F040
0x8AB48F: mov     ecx, [edi+10h]
0x8AB492: xor     eax, eax
0x8AB494: test    ecx, ecx
0x8AB496: jz      short loc_8AB4AD
0x8AB498: mov     ecx, [ecx+8]
0x8AB49B: test    ecx, ecx
0x8AB49D: jz      short loc_8AB4AB
0x8AB49F: lea     eax, [ecx+14h]
0x8AB4A2: test    eax, eax
0x8AB4A4: jz      short loc_8AB4AB
0x8AB4A6: mov     eax, [eax+1Ch]
0x8AB4A9: jmp     short loc_8AB4AD
0x8AB4AB: xor     eax, eax
0x8AB4AD: shr     eax, 8
0x8AB4B0: and     eax, 1Fh
0x8AB4B3: fld     dword ptr ds:0B2EEE8h[eax*4]
0x8AB4BA: push    offset dword_BA7F3C
0x8AB4BF: mov     ecx, ebx
0x8AB4C1: fstp    [esp+64h+var_50]
0x8AB4C5: call    sub_700010
0x8AB4CA: mov     esi, eax
0x8AB4CC: test    esi, esi
0x8AB4CE: jz      loc_8AB69D
0x8AB4D4: fldz
0x8AB4D6: fcomp   [esp+60h+var_50]
0x8AB4DA: fnstsw  ax
0x8AB4DC: test    ah, 41h
0x8AB4DF: jp      loc_8AB69D
0x8AB4E5: cmp     byte ptr [ebp+arg_10], 0
0x8AB4E9: jnz     loc_8AB60A
0x8AB4EF: fld     dword ptr [edi+14h]
0x8AB4F2: mov     ecx, esi
0x8AB4F4: fstp    [esp+60h+var_40]
0x8AB4F8: fld     dword ptr [edi+18h]
0x8AB4FB: fstp    [esp+60h+var_48]
0x8AB4FF: call    sub_8AA7F0
0x8AB504: cmp     dword ptr [esi+50h], 0
0x8AB508: mov     dword ptr [esi+60h], 2
0x8AB50F: jnz     loc_8AB5B3
0x8AB515: push    offset sub_8AA460
0x8AB51A: push    2
0x8AB51C: push    0Ch
0x8AB51E: lea     ecx, [esp+6Ch+var_30]
0x8AB522: push    ecx
0x8AB523: call    sub_401080
0x8AB528: fld     [esp+60h+var_40]
0x8AB52C: fstp    [esp+60h+var_2C]
0x8AB530: push    2
0x8AB532: fld     [esp+64h+var_48]
0x8AB536: lea     ecx, [esi+40h]
0x8AB539: fstp    [esp+64h+var_28]
0x8AB53D: fldz
0x8AB53F: fst     [esp+64h+var_30]
0x8AB543: fst     [esp+64h+var_20]
0x8AB547: fstp    [esp+64h+var_1C]
0x8AB54B: fld     [esp+64h+var_50]
0x8AB54F: fstp    [esp+64h+var_24]
0x8AB553: call    sub_8AA480
0x8AB558: lea     edi, [esp+60h+var_30]
0x8AB55C: mov     ebx, 2
0x8AB561: push    edi
0x8AB562: mov     ecx, esi
0x8AB564: call    sub_8AB000
0x8AB569: add     edi, 0Ch
0x8AB56C: sub     ebx, 1
0x8AB56F: jnz     short loc_8AB561
0x8AB571: fld     [ebp+arg_C]
0x8AB574: mov     dx, [esi+8]
0x8AB578: mov     eax, [esi]
0x8AB57A: fstp    dword ptr [esi+14h]
0x8AB57D: fld     [esp+60h+var_50]
0x8AB581: and     dx, 0FEF5h
0x8AB586: fstp    dword ptr [esi+18h]
0x8AB589: or      dx, 0C5h
0x8AB58E: fldz
0x8AB590: mov     [esi+8], dx
0x8AB594: mov     edx, [eax+4Ch]
0x8AB597: fstp    dword ptr [esi+10h]
0x8AB59A: fld1
0x8AB59C: push    ecx
0x8AB59D: fstp    dword ptr [esi+0Ch]
0x8AB5A0: mov     ecx, esi
0x8AB5A2: fld     dword ptr ds:0A7DEB4h
0x8AB5A8: fchs
0x8AB5AA: fstp    [esp+64h+var_64]
0x8AB5AD: call    edx
0x8AB5AF: mov     ebx, [esp+60h+var_44]
0x8AB5B3: push    offset unk_BA8000
0x8AB5B8: mov     ecx, ebx
0x8AB5BA: call    sub_700010
0x8AB5BF: test    eax, eax
0x8AB5C1: jnz     loc_8AB69D
0x8AB5C7: fld     dword ptr ds:0B2EC5Ch
0x8AB5CD: push    ecx
0x8AB5CE: mov     ecx, [esp+64h+var_4C]
0x8AB5D2: fstp    [esp+64h+var_64]; float
0x8AB5D5: lea     eax, [esp+64h+var_3C]
0x8AB5D9: push    eax; int
0x8AB5DA: call    sub_4707B0
0x8AB5DF: fld     dword ptr ds:0B2EC60h
0x8AB5E5: push    ecx
0x8AB5E6: lea     ecx, [esp+64h+var_3C]
0x8AB5EA: fstp    [esp+64h+var_64]; float
0x8AB5ED: push    ecx
0x8AB5EE: lea     edx, [esp+68h+var_30]
0x8AB5F2: push    edx
0x8AB5F3: call    sub_4529E0
0x8AB5F8: add     esp, 8
0x8AB5FB: push    eax; int
0x8AB5FC: push    ebx; int
0x8AB5FD: call    sub_8B8590
0x8AB602: add     esp, 0Ch
0x8AB605: jmp     loc_8AB69D
0x8AB60A: mov     eax, [edi]
0x8AB60C: mov     edx, [eax+70h]
0x8AB60F: push    0
0x8AB611: push    1
0x8AB613: mov     ecx, edi
0x8AB615: call    edx
0x8AB617: jmp     loc_8AB69D
0x8AB61C: push    ebx
0x8AB61D: call    sub_47FAC0
0x8AB622: add     esp, 4
0x8AB625: test    eax, eax
0x8AB627: jz      short loc_8AB69D
0x8AB629: mov     esi, [eax+10h]
0x8AB62C: test    esi, esi
0x8AB62E: jz      short loc_8AB69D
0x8AB630: lea     eax, [esp+60h+var_44]
0x8AB634: push    eax
0x8AB635: mov     ecx, esi
0x8AB637: call    sub_497340
0x8AB63C: mov     ecx, [eax]
0x8AB63E: and     ecx, 1F00h
0x8AB644: cmp     ecx, 1600h
0x8AB64A: jnz     short loc_8AB69D
0x8AB64C: mov     edx, [esi]
0x8AB64E: mov     eax, [edx+9Ch]
0x8AB654: push    1
0x8AB656: mov     ecx, esi
0x8AB658: call    eax
0x8AB65A: cmp     byte ptr [ebp+arg_10], 0
0x8AB65E: jnz     short loc_8AB69D
0x8AB660: fld     dword ptr ds:0B2EC5Ch
0x8AB666: push    ecx
0x8AB667: lea     ecx, [esp+64h+var_3C]
0x8AB66B: fstp    [esp+64h+var_64]; float
0x8AB66E: push    ecx; int
0x8AB66F: mov     ecx, [esp+68h+var_4C]
0x8AB673: call    sub_4707B0
0x8AB678: lea     edx, [esp+60h+var_3C]
0x8AB67C: push    edx
0x8AB67D: lea     eax, [esp+64h+var_30]
0x8AB681: push    eax
0x8AB682: call    sub_4529E0
0x8AB687: fld     dword ptr ds:0B2E2E0h
0x8AB68D: add     esp, 8
0x8AB690: push    eax; int
0x8AB691: push    ecx
0x8AB692: mov     ecx, [esi+8]
0x8AB695: fstp    [esp+68h+var_68]; float
0x8AB698: call    sub_5377B0
0x8AB69D: mov     edx, [ebx]
0x8AB69F: mov     eax, [edx+8]
0x8AB6A2: mov     ecx, ebx
0x8AB6A4: call    eax
0x8AB6A6: mov     edi, eax
0x8AB6A8: test    edi, edi
0x8AB6AA: jz      short loc_8AB6F5
0x8AB6AC: movzx   eax, word ptr [edi+0B6h]
0x8AB6B3: xor     esi, esi
0x8AB6B5: test    eax, eax
0x8AB6B7: jbe     short loc_8AB6F5
0x8AB6B9: cmp     eax, esi
0x8AB6BB: mov     ebx, [ebp+arg_8]
0x8AB6BE: ja      short loc_8AB6C4
0x8AB6C0: xor     eax, eax
0x8AB6C2: jmp     short loc_8AB6CD
0x8AB6C4: mov     ecx, [edi+0B0h]
0x8AB6CA: mov     eax, [ecx+esi*4]
0x8AB6CD: mov     edx, [ebp+arg_10]
0x8AB6D0: fld     [ebp+arg_C]
0x8AB6D3: push    edx; int
0x8AB6D4: push    ecx
0x8AB6D5: mov     ecx, [esp+68h+var_4C]
0x8AB6D9: fstp    [esp+68h+var_68]; float
0x8AB6DC: push    ebx; int
0x8AB6DD: push    ecx; int
0x8AB6DE: push    eax; int
0x8AB6DF: call    sub_8AB440
0x8AB6E4: movzx   eax, word ptr [edi+0B6h]
0x8AB6EB: add     esi, 1
0x8AB6EE: add     esp, 14h
0x8AB6F1: cmp     eax, esi
0x8AB6F3: ja      short loc_8AB6C4
0x8AB6F5: mov     ecx, [esp+60h+var_4]
0x8AB6F9: pop     edi
0x8AB6FA: pop     esi
0x8AB6FB: pop     ebx
0x8AB6FC: xor     ecx, esp
0x8AB6FE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8AB703: mov     esp, ebp
0x8AB705: pop     ebp
0x8AB706: retn
