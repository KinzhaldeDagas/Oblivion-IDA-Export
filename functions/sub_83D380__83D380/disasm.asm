0x83D380: push    0FFFFFFFFh
0x83D382: push    offset SEH_882120
0x83D387: mov     eax, large fs:0
0x83D38D: push    eax
0x83D38E: push    ebx
0x83D38F: push    ebp
0x83D390: push    esi
0x83D391: push    edi
0x83D392: mov     eax, ds:0B30AACh
0x83D397: xor     eax, esp
0x83D399: push    eax
0x83D39A: lea     eax, [esp+20h+var_C]
0x83D39E: mov     large fs:0, eax
0x83D3A4: mov     esi, ecx
0x83D3A6: mov     ebx, [esp+20h+arg_8]
0x83D3AA: mov     eax, [ebx+10h]
0x83D3AD: mov     edi, ds:0B45804h
0x83D3B3: push    eax
0x83D3B4: call    sub_848DA0
0x83D3B9: mov     ebx, [ebx+0Ch]
0x83D3BC: push    ebx
0x83D3BD: mov     ecx, esi
0x83D3BF: call    sub_848E50
0x83D3C4: mov     ecx, [esp+20h+arg_0]
0x83D3C8: mov     eax, [esi]
0x83D3CA: mov     edx, [eax+0BCh]
0x83D3D0: push    0
0x83D3D2: push    ebx
0x83D3D3: push    ecx
0x83D3D4: mov     ecx, esi
0x83D3D6: call    edx
0x83D3D8: mov     eax, [edi+24h]
0x83D3DB: mov     ebx, [esp+20h+arg_C]
0x83D3DF: mov     ebp, [eax]
0x83D3E1: mov     edx, [ebx]
0x83D3E3: mov     eax, [edx+88h]
0x83D3E9: push    0
0x83D3EB: mov     ecx, ebx
0x83D3ED: mov     [esp+24h+arg_8], ebp
0x83D3F1: call    eax
0x83D3F3: mov     ebp, [ebp+4]
0x83D3F6: cmp     ebp, eax
0x83D3F8: mov     [esp+20h+arg_0], eax
0x83D3FC: jz      short loc_83D438
0x83D3FE: test    ebp, ebp
0x83D400: jz      short loc_83D423
0x83D402: lea     ecx, [ebp+4]
0x83D405: push    ecx; lpAddend
0x83D406: call    dword ptr ds:0A2807Ch
0x83D40C: test    eax, eax
0x83D40E: jnz     short loc_83D41F
0x83D410: test    ebp, ebp
0x83D412: jz      short loc_83D41F
0x83D414: mov     edx, [ebp+0]
0x83D417: mov     eax, [edx]
0x83D419: push    1
0x83D41B: mov     ecx, ebp
0x83D41D: call    eax
0x83D41F: mov     eax, [esp+20h+arg_0]
0x83D423: test    eax, eax
0x83D425: mov     ecx, [esp+20h+arg_8]
0x83D429: mov     [ecx+4], eax
0x83D42C: jz      short loc_83D438
0x83D42E: add     eax, 4
0x83D431: push    eax; lpAddend
0x83D432: call    dword ptr ds:0A28078h
0x83D438: mov     edx, [esp+20h+arg_8]
0x83D43C: push    ebx
0x83D43D: push    edx
0x83D43E: mov     ecx, esi
0x83D440: call    sub_848FA0
0x83D445: mov     eax, [edi+24h]
0x83D448: mov     ebp, [eax+4]
0x83D44B: push    0
0x83D44D: push    ebx
0x83D44E: mov     ecx, esi
0x83D450: mov     [esp+28h+arg_8], ebp
0x83D454: call    sub_848FD0
0x83D459: mov     ebp, [ebp+4]
0x83D45C: cmp     ebp, eax
0x83D45E: mov     [esp+20h+arg_0], eax
0x83D462: jz      short loc_83D49E
0x83D464: test    ebp, ebp
0x83D466: jz      short loc_83D489
0x83D468: lea     ecx, [ebp+4]
0x83D46B: push    ecx; lpAddend
0x83D46C: call    dword ptr ds:0A2807Ch
0x83D472: test    eax, eax
0x83D474: jnz     short loc_83D485
0x83D476: test    ebp, ebp
0x83D478: jz      short loc_83D485
0x83D47A: mov     edx, [ebp+0]
0x83D47D: mov     eax, [edx]
0x83D47F: push    1
0x83D481: mov     ecx, ebp
0x83D483: call    eax
0x83D485: mov     eax, [esp+20h+arg_0]
0x83D489: test    eax, eax
0x83D48B: mov     ecx, [esp+20h+arg_8]
0x83D48F: mov     [ecx+4], eax
0x83D492: jz      short loc_83D49E
0x83D494: add     eax, 4
0x83D497: push    eax; lpAddend
0x83D498: call    dword ptr ds:0A28078h
0x83D49E: mov     edx, [esp+20h+arg_8]
0x83D4A2: push    ebx
0x83D4A3: push    edx
0x83D4A4: mov     ecx, esi
0x83D4A6: call    sub_848FA0
0x83D4AB: mov     eax, [edi+24h]
0x83D4AE: mov     ebp, [eax+10h]
0x83D4B1: mov     edx, [ebx]
0x83D4B3: mov     eax, [edx+90h]
0x83D4B9: push    0
0x83D4BB: mov     ecx, ebx
0x83D4BD: mov     [esp+24h+arg_8], ebp
0x83D4C1: call    eax
0x83D4C3: mov     ebp, [ebp+4]
0x83D4C6: cmp     ebp, eax
0x83D4C8: mov     [esp+20h+arg_0], eax
0x83D4CC: jz      short loc_83D508
0x83D4CE: test    ebp, ebp
0x83D4D0: jz      short loc_83D4F3
0x83D4D2: lea     ecx, [ebp+4]
0x83D4D5: push    ecx; lpAddend
0x83D4D6: call    dword ptr ds:0A2807Ch
0x83D4DC: test    eax, eax
0x83D4DE: jnz     short loc_83D4EF
0x83D4E0: test    ebp, ebp
0x83D4E2: jz      short loc_83D4EF
0x83D4E4: mov     edx, [ebp+0]
0x83D4E7: mov     eax, [edx]
0x83D4E9: push    1
0x83D4EB: mov     ecx, ebp
0x83D4ED: call    eax
0x83D4EF: mov     eax, [esp+20h+arg_0]
0x83D4F3: test    eax, eax
0x83D4F5: mov     ecx, [esp+20h+arg_8]
0x83D4F9: mov     [ecx+4], eax
0x83D4FC: jz      short loc_83D508
0x83D4FE: add     eax, 4
0x83D501: push    eax; lpAddend
0x83D502: call    dword ptr ds:0A28078h
0x83D508: mov     edx, [esp+20h+arg_8]
0x83D50C: push    ebx
0x83D50D: push    edx
0x83D50E: mov     ecx, esi
0x83D510: call    sub_848FA0
0x83D515: mov     ebx, 1
0x83D51A: add     [edi+60h], ebx
0x83D51D: mov     [esp+20h+arg_8], edi
0x83D521: mov     ecx, [esi+38h]
0x83D524: lea     eax, [esp+20h+arg_8]
0x83D528: push    eax
0x83D529: push    ecx
0x83D52A: lea     ecx, [esi+40h]
0x83D52D: mov     [esp+28h+var_4], 0
0x83D535: call    sub_76CE40
0x83D53A: or      eax, 0FFFFFFFFh
0x83D53D: add     [edi+60h], eax
0x83D540: mov     [esp+20h+var_4], eax
0x83D544: jnz     short loc_83D54D
0x83D546: mov     ecx, edi
0x83D548: call    sub_7604D0
0x83D54D: add     [esi+38h], ebx
0x83D550: mov     ecx, [esp+20h+var_C]
0x83D554: mov     large fs:0, ecx
0x83D55B: pop     ecx
0x83D55C: pop     edi
0x83D55D: pop     esi
0x83D55E: pop     ebp
0x83D55F: pop     ebx
0x83D560: add     esp, 0Ch
0x83D563: retn    10h
