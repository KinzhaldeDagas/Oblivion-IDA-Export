0x87A570: push    0FFFFFFFFh
0x87A572: push    offset SEH_880560
0x87A577: mov     eax, large fs:0
0x87A57D: push    eax
0x87A57E: push    ebx
0x87A57F: push    ebp
0x87A580: push    esi
0x87A581: push    edi
0x87A582: mov     eax, ds:0B30AACh
0x87A587: xor     eax, esp
0x87A589: push    eax
0x87A58A: lea     eax, [esp+20h+var_C]
0x87A58E: mov     large fs:0, eax
0x87A594: mov     ebx, ecx
0x87A596: mov     eax, [esp+20h+arg_8]
0x87A59A: mov     eax, [eax+10h]
0x87A59D: mov     edx, [ebx]
0x87A59F: mov     edx, [edx+0BCh]
0x87A5A5: mov     esi, ds:0B47700h
0x87A5AB: push    eax
0x87A5AC: mov     eax, [esp+24h+arg_0]
0x87A5B0: push    0
0x87A5B2: push    eax
0x87A5B3: call    edx
0x87A5B5: mov     eax, [esi+24h]
0x87A5B8: mov     ecx, [esp+20h+arg_C]
0x87A5BC: mov     edi, [eax]
0x87A5BE: push    0
0x87A5C0: push    ecx
0x87A5C1: mov     ecx, ebx
0x87A5C3: mov     [esp+28h+arg_8], edi
0x87A5C7: call    sub_848FD0
0x87A5CC: mov     edi, [edi+4]
0x87A5CF: mov     ebp, eax
0x87A5D1: cmp     edi, ebp
0x87A5D3: jz      short loc_87A60A
0x87A5D5: test    edi, edi
0x87A5D7: jz      short loc_87A5F5
0x87A5D9: lea     edx, [edi+4]
0x87A5DC: push    edx; lpAddend
0x87A5DD: call    dword ptr ds:0A2807Ch
0x87A5E3: test    eax, eax
0x87A5E5: jnz     short loc_87A5F5
0x87A5E7: test    edi, edi
0x87A5E9: jz      short loc_87A5F5
0x87A5EB: mov     eax, [edi]
0x87A5ED: mov     edx, [eax]
0x87A5EF: push    1
0x87A5F1: mov     ecx, edi
0x87A5F3: call    edx
0x87A5F5: test    ebp, ebp
0x87A5F7: mov     eax, [esp+20h+arg_8]
0x87A5FB: mov     [eax+4], ebp
0x87A5FE: jz      short loc_87A60A
0x87A600: add     ebp, 4
0x87A603: push    ebp; lpAddend
0x87A604: call    dword ptr ds:0A28078h
0x87A60A: mov     ecx, [esi+24h]
0x87A60D: mov     edi, [ecx+4]
0x87A610: mov     ecx, [esp+20h+arg_C]
0x87A614: mov     edx, [ecx]
0x87A616: mov     eax, [edx+88h]
0x87A61C: push    0
0x87A61E: mov     [esp+24h+arg_8], edi
0x87A622: call    eax
0x87A624: mov     edi, [edi+4]
0x87A627: mov     ebp, eax
0x87A629: cmp     edi, ebp
0x87A62B: jz      short loc_87A662
0x87A62D: test    edi, edi
0x87A62F: jz      short loc_87A64D
0x87A631: lea     ecx, [edi+4]
0x87A634: push    ecx; lpAddend
0x87A635: call    dword ptr ds:0A2807Ch
0x87A63B: test    eax, eax
0x87A63D: jnz     short loc_87A64D
0x87A63F: test    edi, edi
0x87A641: jz      short loc_87A64D
0x87A643: mov     edx, [edi]
0x87A645: mov     eax, [edx]
0x87A647: push    1
0x87A649: mov     ecx, edi
0x87A64B: call    eax
0x87A64D: test    ebp, ebp
0x87A64F: mov     ecx, [esp+20h+arg_8]
0x87A653: mov     [ecx+4], ebp
0x87A656: jz      short loc_87A662
0x87A658: add     ebp, 4
0x87A65B: push    ebp; lpAddend
0x87A65C: call    dword ptr ds:0A28078h
0x87A662: mov     edx, [esi+24h]
0x87A665: mov     ebp, [edx+10h]
0x87A668: mov     eax, ds:0B43108h
0x87A66D: mov     edi, [ebp+4]
0x87A670: add     ebp, 4
0x87A673: cmp     edi, eax
0x87A675: mov     [esp+20h+arg_C], eax
0x87A679: jz      short loc_87A6B0
0x87A67B: test    edi, edi
0x87A67D: jz      short loc_87A69F
0x87A67F: lea     eax, [edi+4]
0x87A682: push    eax; lpAddend
0x87A683: call    dword ptr ds:0A2807Ch
0x87A689: test    eax, eax
0x87A68B: jnz     short loc_87A69B
0x87A68D: test    edi, edi
0x87A68F: jz      short loc_87A69B
0x87A691: mov     edx, [edi]
0x87A693: mov     eax, [edx]
0x87A695: push    1
0x87A697: mov     ecx, edi
0x87A699: call    eax
0x87A69B: mov     eax, [esp+20h+arg_C]
0x87A69F: test    eax, eax
0x87A6A1: mov     [ebp+0], eax
0x87A6A4: jz      short loc_87A6B0
0x87A6A6: add     eax, 4
0x87A6A9: push    eax; lpAddend
0x87A6AA: call    dword ptr ds:0A28078h
0x87A6B0: mov     ecx, [esi+24h]
0x87A6B3: mov     ebp, [ecx+14h]
0x87A6B6: mov     eax, ds:0B4310Ch
0x87A6BB: mov     edi, [ebp+4]
0x87A6BE: cmp     edi, eax
0x87A6C0: mov     ecx, eax
0x87A6C2: mov     [esp+20h+arg_C], ecx
0x87A6C6: jz      short loc_87A6FD
0x87A6C8: test    edi, edi
0x87A6CA: jz      short loc_87A6EC
0x87A6CC: lea     edx, [edi+4]
0x87A6CF: push    edx; lpAddend
0x87A6D0: call    dword ptr ds:0A2807Ch
0x87A6D6: test    eax, eax
0x87A6D8: jnz     short loc_87A6E8
0x87A6DA: test    edi, edi
0x87A6DC: jz      short loc_87A6E8
0x87A6DE: mov     eax, [edi]
0x87A6E0: mov     edx, [eax]
0x87A6E2: push    1
0x87A6E4: mov     ecx, edi
0x87A6E6: call    edx
0x87A6E8: mov     ecx, [esp+20h+arg_C]
0x87A6EC: test    ecx, ecx
0x87A6EE: mov     [ebp+4], ecx
0x87A6F1: jz      short loc_87A6FD
0x87A6F3: add     ecx, 4
0x87A6F6: push    ecx; lpAddend
0x87A6F7: call    dword ptr ds:0A28078h
0x87A6FD: mov     edi, 1
0x87A702: add     [esi+60h], edi
0x87A705: mov     [esp+20h+arg_C], esi
0x87A709: mov     ecx, [ebx+38h]
0x87A70C: lea     eax, [esp+20h+arg_C]
0x87A710: push    eax
0x87A711: push    ecx
0x87A712: lea     ecx, [ebx+40h]
0x87A715: mov     [esp+28h+var_4], 0
0x87A71D: call    sub_76CE40
0x87A722: or      eax, 0FFFFFFFFh
0x87A725: add     [esi+60h], eax
0x87A728: mov     [esp+20h+var_4], eax
0x87A72C: jnz     short loc_87A735
0x87A72E: mov     ecx, esi
0x87A730: call    sub_7604D0
0x87A735: add     [ebx+38h], edi
0x87A738: mov     ecx, [esp+20h+var_C]
0x87A73C: mov     large fs:0, ecx
0x87A743: pop     ecx
0x87A744: pop     edi
0x87A745: pop     esi
0x87A746: pop     ebp
0x87A747: pop     ebx
0x87A748: add     esp, 0Ch
0x87A74B: retn    10h
