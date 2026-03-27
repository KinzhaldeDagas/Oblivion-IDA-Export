0x83B860: push    0FFFFFFFFh
0x83B862: push    offset SEH_882120
0x83B867: mov     eax, large fs:0
0x83B86D: push    eax
0x83B86E: push    ebx
0x83B86F: push    ebp
0x83B870: push    esi
0x83B871: push    edi
0x83B872: mov     eax, ds:0B30AACh
0x83B877: xor     eax, esp
0x83B879: push    eax
0x83B87A: lea     eax, [esp+20h+var_C]
0x83B87E: mov     large fs:0, eax
0x83B884: mov     edi, ecx
0x83B886: mov     eax, [esp+20h+arg_8]
0x83B88A: mov     esi, [eax+0Ch]
0x83B88D: mov     ebx, ds:0B457ACh
0x83B893: push    esi
0x83B894: call    sub_848E50
0x83B899: mov     edx, [edi]
0x83B89B: mov     eax, [esp+20h+arg_0]
0x83B89F: mov     edx, [edx+0BCh]
0x83B8A5: push    0
0x83B8A7: push    esi
0x83B8A8: push    eax
0x83B8A9: mov     ecx, edi
0x83B8AB: call    edx
0x83B8AD: mov     esi, [esp+20h+arg_C]
0x83B8B1: mov     eax, [esi+0A8h]
0x83B8B7: mov     ds:0B46628h, eax
0x83B8BC: mov     ecx, [esi+0ACh]
0x83B8C2: mov     ds:0B4662Ch, ecx
0x83B8C8: mov     edx, [esi+0B0h]
0x83B8CE: mov     ds:0B46630h, edx
0x83B8D4: mov     eax, [esi+0B4h]
0x83B8DA: mov     ds:0B46634h, eax
0x83B8DF: mov     ecx, [ebx+24h]
0x83B8E2: mov     ebp, [ecx]
0x83B8E4: mov     edx, [esi]
0x83B8E6: mov     eax, [edx+88h]
0x83B8EC: push    0
0x83B8EE: mov     ecx, esi
0x83B8F0: mov     [esp+24h+arg_8], ebp
0x83B8F4: call    eax
0x83B8F6: mov     ebp, [ebp+4]
0x83B8F9: cmp     ebp, eax
0x83B8FB: mov     [esp+20h+arg_0], eax
0x83B8FF: jz      short loc_83B93B
0x83B901: test    ebp, ebp
0x83B903: jz      short loc_83B926
0x83B905: lea     ecx, [ebp+4]
0x83B908: push    ecx; lpAddend
0x83B909: call    dword ptr ds:0A2807Ch
0x83B90F: test    eax, eax
0x83B911: jnz     short loc_83B922
0x83B913: test    ebp, ebp
0x83B915: jz      short loc_83B922
0x83B917: mov     edx, [ebp+0]
0x83B91A: mov     eax, [edx]
0x83B91C: push    1
0x83B91E: mov     ecx, ebp
0x83B920: call    eax
0x83B922: mov     eax, [esp+20h+arg_0]
0x83B926: test    eax, eax
0x83B928: mov     ecx, [esp+20h+arg_8]
0x83B92C: mov     [ecx+4], eax
0x83B92F: jz      short loc_83B93B
0x83B931: add     eax, 4
0x83B934: push    eax; lpAddend
0x83B935: call    dword ptr ds:0A28078h
0x83B93B: mov     edx, [esp+20h+arg_8]
0x83B93F: push    esi
0x83B940: push    edx
0x83B941: mov     ecx, edi
0x83B943: call    sub_848FA0
0x83B948: mov     eax, [ebx+24h]
0x83B94B: mov     ebp, [eax+4]
0x83B94E: push    0
0x83B950: push    esi
0x83B951: mov     ecx, edi
0x83B953: mov     [esp+28h+arg_8], ebp
0x83B957: call    sub_848FD0
0x83B95C: mov     ebp, [ebp+4]
0x83B95F: cmp     ebp, eax
0x83B961: mov     [esp+20h+arg_0], eax
0x83B965: jz      short loc_83B9A1
0x83B967: test    ebp, ebp
0x83B969: jz      short loc_83B98C
0x83B96B: lea     ecx, [ebp+4]
0x83B96E: push    ecx; lpAddend
0x83B96F: call    dword ptr ds:0A2807Ch
0x83B975: test    eax, eax
0x83B977: jnz     short loc_83B988
0x83B979: test    ebp, ebp
0x83B97B: jz      short loc_83B988
0x83B97D: mov     edx, [ebp+0]
0x83B980: mov     eax, [edx]
0x83B982: push    1
0x83B984: mov     ecx, ebp
0x83B986: call    eax
0x83B988: mov     eax, [esp+20h+arg_0]
0x83B98C: test    eax, eax
0x83B98E: mov     ecx, [esp+20h+arg_8]
0x83B992: mov     [ecx+4], eax
0x83B995: jz      short loc_83B9A1
0x83B997: add     eax, 4
0x83B99A: push    eax; lpAddend
0x83B99B: call    dword ptr ds:0A28078h
0x83B9A1: mov     edx, [esp+20h+arg_8]
0x83B9A5: push    esi
0x83B9A6: push    edx
0x83B9A7: mov     ecx, edi
0x83B9A9: call    sub_848FA0
0x83B9AE: mov     eax, [ebx+24h]
0x83B9B1: mov     ebp, [eax+10h]
0x83B9B4: mov     edx, [esi]
0x83B9B6: mov     eax, [edx+88h]
0x83B9BC: push    1
0x83B9BE: mov     ecx, esi
0x83B9C0: mov     [esp+24h+arg_8], ebp
0x83B9C4: call    eax
0x83B9C6: mov     ebp, [ebp+4]
0x83B9C9: cmp     ebp, eax
0x83B9CB: mov     [esp+20h+arg_0], eax
0x83B9CF: jz      short loc_83BA0B
0x83B9D1: test    ebp, ebp
0x83B9D3: jz      short loc_83B9F6
0x83B9D5: lea     ecx, [ebp+4]
0x83B9D8: push    ecx; lpAddend
0x83B9D9: call    dword ptr ds:0A2807Ch
0x83B9DF: test    eax, eax
0x83B9E1: jnz     short loc_83B9F2
0x83B9E3: test    ebp, ebp
0x83B9E5: jz      short loc_83B9F2
0x83B9E7: mov     edx, [ebp+0]
0x83B9EA: mov     eax, [edx]
0x83B9EC: push    1
0x83B9EE: mov     ecx, ebp
0x83B9F0: call    eax
0x83B9F2: mov     eax, [esp+20h+arg_0]
0x83B9F6: test    eax, eax
0x83B9F8: mov     ecx, [esp+20h+arg_8]
0x83B9FC: mov     [ecx+4], eax
0x83B9FF: jz      short loc_83BA0B
0x83BA01: add     eax, 4
0x83BA04: push    eax; lpAddend
0x83BA05: call    dword ptr ds:0A28078h
0x83BA0B: mov     edx, [esp+20h+arg_8]
0x83BA0F: push    esi
0x83BA10: push    edx
0x83BA11: mov     ecx, edi
0x83BA13: call    sub_848FA0
0x83BA18: mov     esi, 1
0x83BA1D: add     [ebx+60h], esi
0x83BA20: mov     [esp+20h+arg_8], ebx
0x83BA24: mov     ecx, [edi+38h]
0x83BA27: lea     eax, [esp+20h+arg_8]
0x83BA2B: push    eax
0x83BA2C: push    ecx
0x83BA2D: lea     ecx, [edi+40h]
0x83BA30: mov     [esp+28h+var_4], 0
0x83BA38: call    sub_76CE40
0x83BA3D: or      eax, 0FFFFFFFFh
0x83BA40: add     [ebx+60h], eax
0x83BA43: mov     [esp+20h+var_4], eax
0x83BA47: jnz     short loc_83BA50
0x83BA49: mov     ecx, ebx
0x83BA4B: call    sub_7604D0
0x83BA50: add     [edi+38h], esi
0x83BA53: mov     ecx, [esp+20h+var_C]
0x83BA57: mov     large fs:0, ecx
0x83BA5E: pop     ecx
0x83BA5F: pop     edi
0x83BA60: pop     esi
0x83BA61: pop     ebp
0x83BA62: pop     ebx
0x83BA63: add     esp, 0Ch
0x83BA66: retn    10h
