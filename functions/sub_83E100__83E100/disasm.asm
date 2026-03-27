0x83E100: push    0FFFFFFFFh
0x83E102: push    offset SEH_882120
0x83E107: mov     eax, large fs:0
0x83E10D: push    eax
0x83E10E: push    ebx
0x83E10F: push    ebp
0x83E110: push    esi
0x83E111: push    edi
0x83E112: mov     eax, ds:0B30AACh
0x83E117: xor     eax, esp
0x83E119: push    eax
0x83E11A: lea     eax, [esp+20h+var_C]
0x83E11E: mov     large fs:0, eax
0x83E124: mov     esi, ecx
0x83E126: mov     edi, [esp+20h+arg_8]
0x83E12A: mov     eax, [edi+10h]
0x83E12D: mov     ebx, ds:0B45838h
0x83E133: push    eax
0x83E134: call    sub_848DA0
0x83E139: mov     edi, [edi+0Ch]
0x83E13C: push    edi
0x83E13D: mov     ecx, esi
0x83E13F: call    sub_848E50
0x83E144: mov     ecx, [esp+20h+arg_0]
0x83E148: mov     eax, [esi]
0x83E14A: mov     edx, [eax+0BCh]
0x83E150: push    0
0x83E152: push    edi
0x83E153: push    ecx
0x83E154: mov     ecx, esi
0x83E156: call    edx
0x83E158: mov     eax, [ebx+24h]
0x83E15B: mov     edi, [esp+20h+arg_C]
0x83E15F: mov     ebp, [eax]
0x83E161: mov     edx, [edi]
0x83E163: mov     eax, [edx+88h]
0x83E169: push    0
0x83E16B: mov     ecx, edi
0x83E16D: mov     [esp+24h+arg_8], ebp
0x83E171: call    eax
0x83E173: mov     ebp, [ebp+4]
0x83E176: cmp     ebp, eax
0x83E178: mov     [esp+20h+arg_0], eax
0x83E17C: jz      short loc_83E1B8
0x83E17E: test    ebp, ebp
0x83E180: jz      short loc_83E1A3
0x83E182: lea     ecx, [ebp+4]
0x83E185: push    ecx; lpAddend
0x83E186: call    dword ptr ds:0A2807Ch
0x83E18C: test    eax, eax
0x83E18E: jnz     short loc_83E19F
0x83E190: test    ebp, ebp
0x83E192: jz      short loc_83E19F
0x83E194: mov     edx, [ebp+0]
0x83E197: mov     eax, [edx]
0x83E199: push    1
0x83E19B: mov     ecx, ebp
0x83E19D: call    eax
0x83E19F: mov     eax, [esp+20h+arg_0]
0x83E1A3: test    eax, eax
0x83E1A5: mov     ecx, [esp+20h+arg_8]
0x83E1A9: mov     [ecx+4], eax
0x83E1AC: jz      short loc_83E1B8
0x83E1AE: add     eax, 4
0x83E1B1: push    eax; lpAddend
0x83E1B2: call    dword ptr ds:0A28078h
0x83E1B8: mov     edx, [esp+20h+arg_8]
0x83E1BC: push    edi
0x83E1BD: push    edx
0x83E1BE: mov     ecx, esi
0x83E1C0: call    sub_848FA0
0x83E1C5: mov     eax, [ebx+24h]
0x83E1C8: mov     ebp, [eax+4]
0x83E1CB: push    0
0x83E1CD: push    edi
0x83E1CE: mov     ecx, esi
0x83E1D0: mov     [esp+28h+arg_8], ebp
0x83E1D4: call    sub_848FD0
0x83E1D9: mov     ebp, [ebp+4]
0x83E1DC: cmp     ebp, eax
0x83E1DE: mov     [esp+20h+arg_0], eax
0x83E1E2: jz      short loc_83E21E
0x83E1E4: test    ebp, ebp
0x83E1E6: jz      short loc_83E209
0x83E1E8: lea     ecx, [ebp+4]
0x83E1EB: push    ecx; lpAddend
0x83E1EC: call    dword ptr ds:0A2807Ch
0x83E1F2: test    eax, eax
0x83E1F4: jnz     short loc_83E205
0x83E1F6: test    ebp, ebp
0x83E1F8: jz      short loc_83E205
0x83E1FA: mov     edx, [ebp+0]
0x83E1FD: mov     eax, [edx]
0x83E1FF: push    1
0x83E201: mov     ecx, ebp
0x83E203: call    eax
0x83E205: mov     eax, [esp+20h+arg_0]
0x83E209: test    eax, eax
0x83E20B: mov     ecx, [esp+20h+arg_8]
0x83E20F: mov     [ecx+4], eax
0x83E212: jz      short loc_83E21E
0x83E214: add     eax, 4
0x83E217: push    eax; lpAddend
0x83E218: call    dword ptr ds:0A28078h
0x83E21E: mov     edx, [esp+20h+arg_8]
0x83E222: push    edi
0x83E223: push    edx
0x83E224: mov     ecx, esi
0x83E226: call    sub_848FA0
0x83E22B: mov     eax, [ebx+24h]
0x83E22E: mov     ebp, [eax+10h]
0x83E231: mov     edx, [edi]
0x83E233: mov     eax, [edx+90h]
0x83E239: push    0
0x83E23B: mov     ecx, edi
0x83E23D: mov     [esp+24h+arg_8], ebp
0x83E241: call    eax
0x83E243: mov     ebp, [ebp+4]
0x83E246: cmp     ebp, eax
0x83E248: mov     [esp+20h+arg_0], eax
0x83E24C: jz      short loc_83E288
0x83E24E: test    ebp, ebp
0x83E250: jz      short loc_83E273
0x83E252: lea     ecx, [ebp+4]
0x83E255: push    ecx; lpAddend
0x83E256: call    dword ptr ds:0A2807Ch
0x83E25C: test    eax, eax
0x83E25E: jnz     short loc_83E26F
0x83E260: test    ebp, ebp
0x83E262: jz      short loc_83E26F
0x83E264: mov     edx, [ebp+0]
0x83E267: mov     eax, [edx]
0x83E269: push    1
0x83E26B: mov     ecx, ebp
0x83E26D: call    eax
0x83E26F: mov     eax, [esp+20h+arg_0]
0x83E273: test    eax, eax
0x83E275: mov     ecx, [esp+20h+arg_8]
0x83E279: mov     [ecx+4], eax
0x83E27C: jz      short loc_83E288
0x83E27E: add     eax, 4
0x83E281: push    eax; lpAddend
0x83E282: call    dword ptr ds:0A28078h
0x83E288: mov     edx, [esp+20h+arg_8]
0x83E28C: push    edi
0x83E28D: push    edx
0x83E28E: mov     ecx, esi
0x83E290: call    sub_848FA0
0x83E295: mov     ecx, [ebx+24h]
0x83E298: mov     edi, [ecx+18h]
0x83E29B: mov     eax, ds:0B43108h
0x83E2A0: mov     ebp, [edi+4]
0x83E2A3: add     edi, 4
0x83E2A6: cmp     ebp, eax
0x83E2A8: mov     [esp+20h+arg_8], eax
0x83E2AC: jz      short loc_83E2E3
0x83E2AE: test    ebp, ebp
0x83E2B0: jz      short loc_83E2D3
0x83E2B2: lea     edx, [ebp+4]
0x83E2B5: push    edx; lpAddend
0x83E2B6: call    dword ptr ds:0A2807Ch
0x83E2BC: test    eax, eax
0x83E2BE: jnz     short loc_83E2CF
0x83E2C0: test    ebp, ebp
0x83E2C2: jz      short loc_83E2CF
0x83E2C4: mov     eax, [ebp+0]
0x83E2C7: mov     edx, [eax]
0x83E2C9: push    1
0x83E2CB: mov     ecx, ebp
0x83E2CD: call    edx
0x83E2CF: mov     eax, [esp+20h+arg_8]
0x83E2D3: test    eax, eax
0x83E2D5: mov     [edi], eax
0x83E2D7: jz      short loc_83E2E3
0x83E2D9: add     eax, 4
0x83E2DC: push    eax; lpAddend
0x83E2DD: call    dword ptr ds:0A28078h
0x83E2E3: mov     eax, [ebx+24h]
0x83E2E6: mov     ebp, [eax+1Ch]
0x83E2E9: mov     eax, ds:0B4310Ch
0x83E2EE: mov     edi, [ebp+4]
0x83E2F1: cmp     edi, eax
0x83E2F3: mov     ecx, eax
0x83E2F5: mov     [esp+20h+arg_8], ecx
0x83E2F9: jz      short loc_83E330
0x83E2FB: test    edi, edi
0x83E2FD: jz      short loc_83E31F
0x83E2FF: lea     ecx, [edi+4]
0x83E302: push    ecx; lpAddend
0x83E303: call    dword ptr ds:0A2807Ch
0x83E309: test    eax, eax
0x83E30B: jnz     short loc_83E31B
0x83E30D: test    edi, edi
0x83E30F: jz      short loc_83E31B
0x83E311: mov     edx, [edi]
0x83E313: mov     eax, [edx]
0x83E315: push    1
0x83E317: mov     ecx, edi
0x83E319: call    eax
0x83E31B: mov     ecx, [esp+20h+arg_8]
0x83E31F: test    ecx, ecx
0x83E321: mov     [ebp+4], ecx
0x83E324: jz      short loc_83E330
0x83E326: add     ecx, 4
0x83E329: push    ecx; lpAddend
0x83E32A: call    dword ptr ds:0A28078h
0x83E330: mov     edi, 1
0x83E335: add     [ebx+60h], edi
0x83E338: mov     [esp+20h+arg_8], ebx
0x83E33C: mov     edx, [esi+38h]
0x83E33F: lea     ecx, [esp+20h+arg_8]
0x83E343: push    ecx
0x83E344: push    edx
0x83E345: lea     ecx, [esi+40h]
0x83E348: mov     [esp+28h+var_4], 0
0x83E350: call    sub_76CE40
0x83E355: or      eax, 0FFFFFFFFh
0x83E358: add     [ebx+60h], eax
0x83E35B: mov     [esp+20h+var_4], eax
0x83E35F: jnz     short loc_83E368
0x83E361: mov     ecx, ebx
0x83E363: call    sub_7604D0
0x83E368: add     [esi+38h], edi
0x83E36B: mov     ecx, [esp+20h+var_C]
0x83E36F: mov     large fs:0, ecx
0x83E376: pop     ecx
0x83E377: pop     edi
0x83E378: pop     esi
0x83E379: pop     ebp
0x83E37A: pop     ebx
0x83E37B: add     esp, 0Ch
0x83E37E: retn    10h
