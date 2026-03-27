0x6DA4C0: push    0FFFFFFFFh
0x6DA4C2: push    offset SEH_6E3B20
0x6DA4C7: mov     eax, large fs:0
0x6DA4CD: push    eax
0x6DA4CE: push    esi
0x6DA4CF: push    edi
0x6DA4D0: mov     eax, ds:0B30AACh
0x6DA4D5: xor     eax, esp
0x6DA4D7: push    eax
0x6DA4D8: lea     eax, [esp+18h+var_C]
0x6DA4DC: mov     large fs:0, eax
0x6DA4E2: mov     edi, ecx
0x6DA4E4: fld     [esp+18h+arg_4]
0x6DA4E8: sub     esp, 8
0x6DA4EB: fstp    [esp+20h+var_1C]
0x6DA4EF: fld     [esp+20h+arg_0]
0x6DA4F3: fstp    [esp+20h+var_20]
0x6DA4F6: call    sub_6EBA60
0x6DA4FB: mov     ecx, [edi+18h]
0x6DA4FE: test    ecx, ecx
0x6DA500: mov     esi, eax
0x6DA502: jz      short loc_6DA569
0x6DA504: fld     [esp+18h+arg_4]
0x6DA508: sub     esp, 8
0x6DA50B: fstp    [esp+20h+var_1C]; float
0x6DA50F: lea     eax, [esp+20h+arg_4]
0x6DA513: fld     [esp+20h+arg_0]
0x6DA517: fstp    [esp+20h+var_20]; float
0x6DA51A: push    eax; int
0x6DA51B: call    sub_6D9EA0
0x6DA520: mov     ecx, [esp+18h+arg_4]
0x6DA524: push    ecx
0x6DA525: mov     ecx, esi
0x6DA527: mov     [esp+1Ch+var_4], 0
0x6DA52F: call    sub_6DABA0
0x6DA534: mov     edi, [esp+18h+arg_4]
0x6DA538: test    edi, edi
0x6DA53A: mov     dword ptr [esi+1Ch], 0
0x6DA541: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6DA549: jz      short loc_6DA567
0x6DA54B: lea     edx, [edi+4]
0x6DA54E: push    edx; lpAddend
0x6DA54F: call    dword ptr ds:0A2807Ch
0x6DA555: test    eax, eax
0x6DA557: jnz     short loc_6DA567
0x6DA559: test    edi, edi
0x6DA55B: jz      short loc_6DA567
0x6DA55D: mov     eax, [edi]
0x6DA55F: mov     edx, [eax]
0x6DA561: push    1
0x6DA563: mov     ecx, edi
0x6DA565: call    edx
0x6DA567: mov     eax, esi
0x6DA569: mov     ecx, dword ptr [esp+18h+var_C]
0x6DA56D: mov     large fs:0, ecx
0x6DA574: pop     ecx
0x6DA575: pop     edi
0x6DA576: pop     esi
0x6DA577: add     esp, 0Ch
0x6DA57A: retn    8
