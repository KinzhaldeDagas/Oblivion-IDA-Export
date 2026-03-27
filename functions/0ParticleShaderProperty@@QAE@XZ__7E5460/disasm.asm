0x7E5460: push    0FFFFFFFFh
0x7E5462: push    offset ??0ParticleShaderProperty@@QAE@XZ_SEH
0x7E5467: mov     eax, large fs:0
0x7E546D: push    eax
0x7E546E: sub     esp, 14h
0x7E5471: push    ebx
0x7E5472: push    ebp
0x7E5473: push    esi
0x7E5474: push    edi
0x7E5475: mov     eax, ds:0B30AACh
0x7E547A: xor     eax, esp
0x7E547C: push    eax
0x7E547D: lea     eax, [esp+34h+var_C]
0x7E5481: mov     large fs:0, eax
0x7E5487: mov     esi, ecx
0x7E5489: mov     [esp+34h+var_20], esi
0x7E548D: call    ??0BSShaderProperty@@QAE@XZ; BSShaderProperty::BSShaderProperty(void)
0x7E5492: fldz
0x7E5494: mov     dword ptr [esi], offset ??_7ParticleShaderProperty@@6B@; const ParticleShaderProperty::`vftable'
0x7E549A: fst     dword ptr [esi+0B8h]
0x7E54A0: fst     dword ptr [esi+0BCh]
0x7E54A6: xor     ebp, ebp
0x7E54A8: fst     dword ptr [esi+0C0h]
0x7E54AE: mov     [esp+34h+var_4], ebp
0x7E54B2: fst     dword ptr [esi+0C4h]
0x7E54B8: fst     dword ptr [esi+0C8h]
0x7E54BE: fst     dword ptr [esi+0CCh]
0x7E54C4: fst     dword ptr [esi+0D0h]
0x7E54CA: fst     dword ptr [esi+0D4h]
0x7E54D0: fst     dword ptr [esi+0D8h]
0x7E54D6: fst     dword ptr [esi+0DCh]
0x7E54DC: fst     dword ptr [esi+0E0h]
0x7E54E2: fstp    dword ptr [esi+0E4h]
0x7E54E8: mov     [esi+10Ch], ebp
0x7E54EE: push    0Ah
0x7E54F0: lea     ebx, [esi+110h]
0x7E54F6: push    0Ah
0x7E54F8: mov     ecx, ebx
0x7E54FA: mov     byte ptr [esp+3Ch+var_4], 1
0x7E54FF: call    sub_4B2D30
0x7E5504: mov     edi, [esi+10Ch]
0x7E550A: cmp     edi, ebp
0x7E550C: mov     byte ptr [esp+34h+var_4], 2
0x7E5511: jz      short loc_7E5535
0x7E5513: lea     eax, [edi+4]
0x7E5516: push    eax; lpAddend
0x7E5517: call    dword ptr ds:0A2807Ch
0x7E551D: test    eax, eax
0x7E551F: jnz     short loc_7E552F
0x7E5521: cmp     edi, ebp
0x7E5523: jz      short loc_7E552F
0x7E5525: mov     edx, [edi]
0x7E5527: mov     eax, [edx]
0x7E5529: push    1
0x7E552B: mov     ecx, edi
0x7E552D: call    eax
0x7E552F: mov     [esi+10Ch], ebp
0x7E5535: fld1
0x7E5537: mov     [esi+7Ch], ebp
0x7E553A: fst     dword ptr [esi+80h]
0x7E5540: mov     [esi+70h], ebp
0x7E5543: fldz
0x7E5545: mov     byte ptr [esi+78h], 1
0x7E5549: fst     dword ptr [esi+0F8h]
0x7E554F: fst     dword ptr [esi+84h]
0x7E5555: fst     dword ptr [esi+88h]
0x7E555B: fst     dword ptr [esi+8Ch]
0x7E5561: fst     dword ptr [esi+90h]
0x7E5567: fst     [esp+34h+var_1C]
0x7E556B: fst     [esp+34h+var_18]
0x7E556F: mov     ecx, [esp+34h+var_1C]
0x7E5573: fst     [esp+34h+var_14]
0x7E5577: mov     edx, [esp+34h+var_18]
0x7E557B: fst     [esp+34h+var_1C]
0x7E557F: mov     eax, [esp+34h+var_14]
0x7E5583: fst     [esp+34h+var_18]
0x7E5587: mov     [esi+94h], ecx
0x7E558D: fst     [esp+34h+var_14]
0x7E5591: mov     ecx, [esp+34h+var_1C]
0x7E5595: fst     [esp+34h+var_1C]
0x7E5599: mov     [esi+98h], edx
0x7E559F: mov     edx, [esp+34h+var_18]
0x7E55A3: fst     [esp+34h+var_18]
0x7E55A7: mov     [esi+0A0h], ecx
0x7E55AD: mov     ecx, [esp+34h+var_1C]
0x7E55B1: mov     [esi+9Ch], eax
0x7E55B7: mov     eax, [esp+34h+var_14]
0x7E55BB: fst     [esp+34h+var_14]
0x7E55BF: mov     [esi+0A4h], edx
0x7E55C5: fst     [esp+34h+var_10]
0x7E55C9: mov     edx, [esp+34h+var_18]
0x7E55CD: fst     [esp+34h+var_1C]
0x7E55D1: mov     [esi+0B8h], ecx
0x7E55D7: fst     [esp+34h+var_18]
0x7E55DB: mov     ecx, [esp+34h+var_10]
0x7E55DF: mov     [esi+0A8h], eax
0x7E55E5: mov     eax, [esp+34h+var_14]
0x7E55E9: fst     [esp+34h+var_14]
0x7E55ED: mov     [esi+0BCh], edx
0x7E55F3: fst     [esp+34h+var_10]
0x7E55F7: mov     edx, [esp+34h+var_1C]
0x7E55FB: fst     [esp+34h+var_1C]
0x7E55FF: mov     [esi+0C0h], eax
0x7E5605: mov     eax, [esp+34h+var_18]
0x7E5609: fst     [esp+34h+var_18]
0x7E560D: mov     [esi+0C8h], edx
0x7E5613: mov     edx, [esp+34h+var_10]
0x7E5617: mov     [esi+0C4h], ecx
0x7E561D: mov     ecx, [esp+34h+var_14]
0x7E5621: fst     [esp+34h+var_14]
0x7E5625: mov     [esi+0CCh], eax
0x7E562B: fstp    [esp+34h+var_10]
0x7E562F: mov     eax, [esp+34h+var_1C]
0x7E5633: mov     [esi+0D0h], ecx
0x7E5639: fstp    dword ptr [esi+124h]
0x7E563F: mov     ecx, [esp+34h+var_18]
0x7E5643: mov     [esi+0D8h], eax
0x7E5649: mov     eax, [esp+34h+var_10]
0x7E564D: mov     [esi+0D4h], edx
0x7E5653: mov     edx, [esp+34h+var_14]
0x7E5657: mov     [esi+0DCh], ecx
0x7E565D: mov     [esi+0E0h], edx
0x7E5663: mov     ecx, ebx
0x7E5665: mov     [esi+0E4h], eax
0x7E566B: call    sub_477EF0
0x7E5670: call    sub_7E48E0
0x7E5675: mov     [esi+120h], ebp
0x7E567B: call    sub_7E2D60
0x7E5680: xor     ecx, ecx
0x7E5682: mov     edi, eax
0x7E5684: mov     edx, 20h ; ' '
0x7E5689: mul     edx
0x7E568B: seto    cl
0x7E568E: neg     ecx
0x7E5690: or      ecx, eax
0x7E5692: push    ecx; Size
0x7E5693: call    FormHeapAlloc
0x7E5698: mov     [esi+6Ch], eax
0x7E569B: shl     edi, 5
0x7E569E: push    edi
0x7E569F: push    ebp
0x7E56A0: push    eax
0x7E56A1: call    __memset
0x7E56A6: add     esp, 10h
0x7E56A9: add     dword ptr ds:0B46048h, 1
0x7E56B0: mov     eax, esi
0x7E56B2: mov     ecx, dword ptr [esp+34h+var_C]
0x7E56B6: mov     large fs:0, ecx
0x7E56BD: pop     ecx
0x7E56BE: pop     edi
0x7E56BF: pop     esi
0x7E56C0: pop     ebp
0x7E56C1: pop     ebx
0x7E56C2: add     esp, 20h
0x7E56C5: retn
