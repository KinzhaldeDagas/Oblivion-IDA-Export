0x8B0750: push    ebp
0x8B0751: mov     ebp, esp
0x8B0753: and     esp, 0FFFFFFF0h
0x8B0756: push    0FFFFFFFFh
0x8B0758: push    offset SEH_8B0750
0x8B075D: mov     eax, large fs:0
0x8B0763: push    eax
0x8B0764: sub     esp, 18h
0x8B0767: push    ebx
0x8B0768: push    esi
0x8B0769: push    edi
0x8B076A: mov     eax, ds:0B30AACh
0x8B076F: xor     eax, esp
0x8B0771: push    eax
0x8B0772: lea     eax, [esp+34h+var_C]
0x8B0776: mov     large fs:0, eax
0x8B077C: mov     edi, [ebp+arg_0]
0x8B077F: test    edi, edi
0x8B0781: mov     [esp+34h+var_1C], ecx
0x8B0785: mov     [esp+34h+var_18], edi
0x8B0789: jz      loc_8B08C9
0x8B078F: mov     ecx, ds:0BA7D98h
0x8B0795: mov     eax, [ecx]
0x8B0797: mov     edx, [eax+10h]
0x8B079A: push    24h ; '$'
0x8B079C: push    70h ; 'p'
0x8B079E: call    edx
0x8B07A0: mov     esi, eax
0x8B07A2: mov     word ptr [esi+4], 70h ; 'p'
0x8B07A8: mov     [esp+34h+var_20], esi
0x8B07AC: add     edi, 10h
0x8B07AF: push    edi
0x8B07B0: mov     ecx, esi
0x8B07B2: mov     [esp+38h+var_4], 0
0x8B07BA: call    sub_8F01A0
0x8B07BF: mov     dword ptr [esi], offset ??_7hkBSHeightFieldShape@@6B@; const hkBSHeightFieldShape::`vftable'
0x8B07C5: mov     eax, [edi+20h]
0x8B07C8: mov     [esi+60h], eax
0x8B07CB: mov     ecx, ds:0BA7D98h
0x8B07D1: mov     edx, [ecx]
0x8B07D3: mov     eax, [edx+10h]
0x8B07D6: push    24h ; '$'
0x8B07D8: or      edi, 0FFFFFFFFh
0x8B07DB: push    18h
0x8B07DD: mov     [esp+3Ch+var_4], edi
0x8B07E1: call    eax
0x8B07E3: mov     word ptr [eax+4], 18h
0x8B07E9: mov     [esp+34h+var_20], eax
0x8B07ED: fld     dword ptr ds:0B2EFC4h
0x8B07F3: push    ecx
0x8B07F4: fstp    [esp+38h+var_38]
0x8B07F7: push    esi
0x8B07F8: mov     ecx, eax
0x8B07FA: mov     [esp+3Ch+var_4], 1
0x8B0802: call    sub_8F0C10
0x8B0807: mov     ecx, ds:0BA7D98h
0x8B080D: mov     edx, [ecx]
0x8B080F: push    24h ; '$'
0x8B0811: mov     ebx, eax
0x8B0813: mov     eax, [edx+10h]
0x8B0816: push    14h
0x8B0818: mov     [esp+3Ch+var_4], edi
0x8B081C: call    eax
0x8B081E: mov     word ptr [eax+4], 14h
0x8B0824: mov     [esp+34h+var_20], eax
0x8B0828: push    ecx
0x8B0829: mov     ecx, esp
0x8B082B: mov     [esp+38h+var_14], esp
0x8B082F: mov     byte ptr [ecx], 1
0x8B0832: push    ebx
0x8B0833: mov     ecx, eax
0x8B0835: mov     [esp+3Ch+var_4], 2
0x8B083D: call    sub_8F0590
0x8B0842: mov     ecx, [esp+34h+var_1C]
0x8B0846: mov     edi, eax
0x8B0848: mov     byte ptr [edi+10h], 0
0x8B084C: mov     edx, [ecx]
0x8B084E: mov     eax, [edx+4Ch]
0x8B0851: push    edi
0x8B0852: mov     [esp+38h+var_4], 0FFFFFFFFh
0x8B085A: call    eax
0x8B085C: cmp     word ptr [edi+4], 0
0x8B0861: jz      short loc_8B087B
0x8B0863: add     word ptr [edi+6], 0FFFFh
0x8B0868: movzx   eax, word ptr [edi+6]
0x8B086C: test    ax, ax
0x8B086F: jnz     short loc_8B087B
0x8B0871: mov     edx, [edi]
0x8B0873: mov     eax, [edx]
0x8B0875: push    1
0x8B0877: mov     ecx, edi
0x8B0879: call    eax
0x8B087B: cmp     word ptr [ebx+4], 0
0x8B0880: jz      short loc_8B089A
0x8B0882: add     word ptr [ebx+6], 0FFFFh
0x8B0887: movzx   eax, word ptr [ebx+6]
0x8B088B: test    ax, ax
0x8B088E: jnz     short loc_8B089A
0x8B0890: mov     edx, [ebx]
0x8B0892: mov     eax, [edx]
0x8B0894: push    1
0x8B0896: mov     ecx, ebx
0x8B0898: call    eax
0x8B089A: cmp     word ptr [esi+4], 0
0x8B089F: jz      short loc_8B08B9
0x8B08A1: add     word ptr [esi+6], 0FFFFh
0x8B08A6: movzx   eax, word ptr [esi+6]
0x8B08AA: test    ax, ax
0x8B08AD: jnz     short loc_8B08B9
0x8B08AF: mov     edx, [esi]
0x8B08B1: mov     eax, [edx]
0x8B08B3: push    1
0x8B08B5: mov     ecx, esi
0x8B08B7: call    eax
0x8B08B9: mov     ecx, [esp+34h+var_1C]
0x8B08BD: mov     edx, [ecx]
0x8B08BF: mov     eax, [esp+34h+var_18]
0x8B08C3: mov     edx, [edx+7Ch]
0x8B08C6: push    eax
0x8B08C7: call    edx
0x8B08C9: mov     ecx, [esp+34h+var_C]
0x8B08CD: mov     large fs:0, ecx
0x8B08D4: pop     ecx
0x8B08D5: pop     edi
0x8B08D6: pop     esi
0x8B08D7: pop     ebx
0x8B08D8: mov     esp, ebp
0x8B08DA: pop     ebp
0x8B08DB: retn    4
