0x849220: push    0FFFFFFFFh
0x849222: push    offset SEH_850610
0x849227: mov     eax, large fs:0
0x84922D: push    eax
0x84922E: push    ebx
0x84922F: push    esi
0x849230: push    edi
0x849231: mov     eax, ds:0B30AACh
0x849236: xor     eax, esp
0x849238: push    eax
0x849239: lea     eax, [esp+1Ch+var_C]
0x84923D: mov     large fs:0, eax
0x849243: mov     esi, ecx
0x849245: mov     eax, [esp+1Ch+arg_8]
0x849249: mov     eax, [eax+10h]
0x84924C: mov     edi, ds:0B455E0h
0x849252: push    eax
0x849253: call    sub_848C40
0x849258: test    edi, edi
0x84925A: mov     [esp+1Ch+arg_8], edi
0x84925E: mov     ebx, 1
0x849263: jz      short loc_849268
0x849265: add     [edi+60h], ebx
0x849268: mov     edx, [esi+38h]
0x84926B: lea     ecx, [esp+1Ch+arg_8]
0x84926F: push    ecx
0x849270: push    edx
0x849271: lea     ecx, [esi+40h]
0x849274: mov     [esp+24h+var_4], 0
0x84927C: call    sub_76CE40
0x849281: or      eax, 0FFFFFFFFh
0x849284: test    edi, edi
0x849286: mov     [esp+1Ch+var_4], eax
0x84928A: jz      short loc_849298
0x84928C: add     [edi+60h], eax
0x84928F: jnz     short loc_849298
0x849291: mov     ecx, edi
0x849293: call    sub_7604D0
0x849298: add     [esi+38h], ebx
0x84929B: mov     ecx, [esp+1Ch+var_C]
0x84929F: mov     large fs:0, ecx
0x8492A6: pop     ecx
0x8492A7: pop     edi
0x8492A8: pop     esi
0x8492A9: pop     ebx
0x8492AA: add     esp, 0Ch
0x8492AD: retn    10h
