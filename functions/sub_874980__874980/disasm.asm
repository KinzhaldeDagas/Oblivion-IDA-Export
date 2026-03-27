0x874980: push    0FFFFFFFFh
0x874982: push    offset SEH_882120
0x874987: mov     eax, large fs:0
0x87498D: push    eax
0x87498E: push    ebx
0x87498F: push    ebp
0x874990: push    esi
0x874991: push    edi
0x874992: mov     eax, ds:0B30AACh
0x874997: xor     eax, esp
0x874999: push    eax
0x87499A: lea     eax, [esp+20h+var_C]
0x87499E: mov     large fs:0, eax
0x8749A4: mov     edi, ecx
0x8749A6: mov     eax, [esp+20h+arg_8]
0x8749AA: mov     ebx, [eax+0Ch]
0x8749AD: mov     esi, ds:0B47644h
0x8749B3: push    ebx
0x8749B4: call    sub_848E50
0x8749B9: mov     edx, [edi]
0x8749BB: mov     eax, [esp+20h+arg_0]
0x8749BF: mov     edx, [edx+0BCh]
0x8749C5: push    0
0x8749C7: push    ebx
0x8749C8: push    eax
0x8749C9: mov     ecx, edi
0x8749CB: call    edx
0x8749CD: mov     eax, [esi+24h]
0x8749D0: mov     ebp, [esp+20h+arg_C]
0x8749D4: mov     ebx, [eax]
0x8749D6: mov     edx, [ebp+0]
0x8749D9: mov     eax, [edx+88h]
0x8749DF: push    0
0x8749E1: mov     ecx, ebp
0x8749E3: mov     [esp+24h+arg_8], ebx
0x8749E7: call    eax
0x8749E9: mov     ebx, [ebx+4]
0x8749EC: cmp     ebx, eax
0x8749EE: mov     [esp+20h+arg_0], eax
0x8749F2: jz      short loc_874A2D
0x8749F4: test    ebx, ebx
0x8749F6: jz      short loc_874A18
0x8749F8: lea     ecx, [ebx+4]
0x8749FB: push    ecx; lpAddend
0x8749FC: call    dword ptr ds:0A2807Ch
0x874A02: test    eax, eax
0x874A04: jnz     short loc_874A14
0x874A06: test    ebx, ebx
0x874A08: jz      short loc_874A14
0x874A0A: mov     edx, [ebx]
0x874A0C: mov     eax, [edx]
0x874A0E: push    1
0x874A10: mov     ecx, ebx
0x874A12: call    eax
0x874A14: mov     eax, [esp+20h+arg_0]
0x874A18: test    eax, eax
0x874A1A: mov     ecx, [esp+20h+arg_8]
0x874A1E: mov     [ecx+4], eax
0x874A21: jz      short loc_874A2D
0x874A23: add     eax, 4
0x874A26: push    eax; lpAddend
0x874A27: call    dword ptr ds:0A28078h
0x874A2D: mov     edx, [esi+24h]
0x874A30: mov     ebx, [edx+4]
0x874A33: push    0
0x874A35: push    ebp
0x874A36: mov     ecx, edi
0x874A38: mov     [esp+28h+arg_8], ebx
0x874A3C: call    sub_848FD0
0x874A41: mov     ebx, [ebx+4]
0x874A44: cmp     ebx, eax
0x874A46: mov     [esp+20h+arg_0], eax
0x874A4A: jz      short loc_874A85
0x874A4C: test    ebx, ebx
0x874A4E: jz      short loc_874A70
0x874A50: lea     eax, [ebx+4]
0x874A53: push    eax; lpAddend
0x874A54: call    dword ptr ds:0A2807Ch
0x874A5A: test    eax, eax
0x874A5C: jnz     short loc_874A6C
0x874A5E: test    ebx, ebx
0x874A60: jz      short loc_874A6C
0x874A62: mov     edx, [ebx]
0x874A64: mov     eax, [edx]
0x874A66: push    1
0x874A68: mov     ecx, ebx
0x874A6A: call    eax
0x874A6C: mov     eax, [esp+20h+arg_0]
0x874A70: test    eax, eax
0x874A72: mov     ecx, [esp+20h+arg_8]
0x874A76: mov     [ecx+4], eax
0x874A79: jz      short loc_874A85
0x874A7B: add     eax, 4
0x874A7E: push    eax; lpAddend
0x874A7F: call    dword ptr ds:0A28078h
0x874A85: mov     edx, [esi+24h]
0x874A88: mov     eax, [edx+0Ch]
0x874A8B: mov     edx, [ebp+0]
0x874A8E: mov     [esp+20h+arg_8], eax
0x874A92: mov     eax, [edx+90h]
0x874A98: push    0
0x874A9A: mov     ecx, ebp
0x874A9C: call    eax
0x874A9E: mov     ecx, [esp+20h+arg_8]
0x874AA2: mov     ebp, [ecx+4]
0x874AA5: mov     ebx, eax
0x874AA7: cmp     ebp, ebx
0x874AA9: jz      short loc_874AE1
0x874AAB: test    ebp, ebp
0x874AAD: jz      short loc_874ACC
0x874AAF: lea     edx, [ebp+4]
0x874AB2: push    edx; lpAddend
0x874AB3: call    dword ptr ds:0A2807Ch
0x874AB9: test    eax, eax
0x874ABB: jnz     short loc_874ACC
0x874ABD: test    ebp, ebp
0x874ABF: jz      short loc_874ACC
0x874AC1: mov     eax, [ebp+0]
0x874AC4: mov     edx, [eax]
0x874AC6: push    1
0x874AC8: mov     ecx, ebp
0x874ACA: call    edx
0x874ACC: test    ebx, ebx
0x874ACE: mov     eax, [esp+20h+arg_8]
0x874AD2: mov     [eax+4], ebx
0x874AD5: jz      short loc_874AE1
0x874AD7: add     ebx, 4
0x874ADA: push    ebx; lpAddend
0x874ADB: call    dword ptr ds:0A28078h
0x874AE1: mov     ecx, [esi+24h]
0x874AE4: mov     ebp, [ecx+10h]
0x874AE7: mov     eax, ds:0B43110h
0x874AEC: mov     ebx, [ebp+4]
0x874AEF: cmp     ebx, eax
0x874AF1: mov     ecx, eax
0x874AF3: mov     [esp+20h+arg_8], ecx
0x874AF7: jz      short loc_874B2E
0x874AF9: test    ebx, ebx
0x874AFB: jz      short loc_874B1D
0x874AFD: lea     edx, [ebx+4]
0x874B00: push    edx; lpAddend
0x874B01: call    dword ptr ds:0A2807Ch
0x874B07: test    eax, eax
0x874B09: jnz     short loc_874B19
0x874B0B: test    ebx, ebx
0x874B0D: jz      short loc_874B19
0x874B0F: mov     eax, [ebx]
0x874B11: mov     edx, [eax]
0x874B13: push    1
0x874B15: mov     ecx, ebx
0x874B17: call    edx
0x874B19: mov     ecx, [esp+20h+arg_8]
0x874B1D: test    ecx, ecx
0x874B1F: mov     [ebp+4], ecx
0x874B22: jz      short loc_874B2E
0x874B24: add     ecx, 4
0x874B27: push    ecx; lpAddend
0x874B28: call    dword ptr ds:0A28078h
0x874B2E: mov     ebx, 1
0x874B33: add     [esi+60h], ebx
0x874B36: mov     [esp+20h+arg_8], esi
0x874B3A: mov     ecx, [edi+38h]
0x874B3D: lea     eax, [esp+20h+arg_8]
0x874B41: push    eax
0x874B42: push    ecx
0x874B43: lea     ecx, [edi+40h]
0x874B46: mov     [esp+28h+var_4], 0
0x874B4E: call    sub_76CE40
0x874B53: or      eax, 0FFFFFFFFh
0x874B56: add     [esi+60h], eax
0x874B59: mov     [esp+20h+var_4], eax
0x874B5D: jnz     short loc_874B66
0x874B5F: mov     ecx, esi
0x874B61: call    sub_7604D0
0x874B66: add     [edi+38h], ebx
0x874B69: mov     ecx, [esp+20h+var_C]
0x874B6D: mov     large fs:0, ecx
0x874B74: pop     ecx
0x874B75: pop     edi
0x874B76: pop     esi
0x874B77: pop     ebp
0x874B78: pop     ebx
0x874B79: add     esp, 0Ch
0x874B7C: retn    10h
