0x87A930: push    0FFFFFFFFh
0x87A932: push    offset SEH_880560
0x87A937: mov     eax, large fs:0
0x87A93D: push    eax
0x87A93E: push    ebx
0x87A93F: push    ebp
0x87A940: push    esi
0x87A941: push    edi
0x87A942: mov     eax, ds:0B30AACh
0x87A947: xor     eax, esp
0x87A949: push    eax
0x87A94A: lea     eax, [esp+20h+var_C]
0x87A94E: mov     large fs:0, eax
0x87A954: mov     edi, ecx
0x87A956: mov     eax, [esp+20h+arg_8]
0x87A95A: mov     eax, [eax+10h]
0x87A95D: mov     edx, [edi]
0x87A95F: mov     edx, [edx+0BCh]
0x87A965: mov     esi, ds:0B47708h
0x87A96B: push    eax
0x87A96C: mov     eax, [esp+24h+arg_0]
0x87A970: push    0
0x87A972: push    eax
0x87A973: call    edx
0x87A975: mov     eax, [esi+24h]
0x87A978: mov     ecx, [esp+20h+arg_C]
0x87A97C: mov     ebx, [eax]
0x87A97E: push    0
0x87A980: push    ecx
0x87A981: mov     ecx, edi
0x87A983: mov     [esp+28h+arg_8], ebx
0x87A987: call    sub_848FD0
0x87A98C: mov     ebx, [ebx+4]
0x87A98F: mov     ebp, eax
0x87A991: cmp     ebx, ebp
0x87A993: jz      short loc_87A9CA
0x87A995: test    ebx, ebx
0x87A997: jz      short loc_87A9B5
0x87A999: lea     edx, [ebx+4]
0x87A99C: push    edx; lpAddend
0x87A99D: call    dword ptr ds:0A2807Ch
0x87A9A3: test    eax, eax
0x87A9A5: jnz     short loc_87A9B5
0x87A9A7: test    ebx, ebx
0x87A9A9: jz      short loc_87A9B5
0x87A9AB: mov     eax, [ebx]
0x87A9AD: mov     edx, [eax]
0x87A9AF: push    1
0x87A9B1: mov     ecx, ebx
0x87A9B3: call    edx
0x87A9B5: test    ebp, ebp
0x87A9B7: mov     eax, [esp+20h+arg_8]
0x87A9BB: mov     [eax+4], ebp
0x87A9BE: jz      short loc_87A9CA
0x87A9C0: add     ebp, 4
0x87A9C3: push    ebp; lpAddend
0x87A9C4: call    dword ptr ds:0A28078h
0x87A9CA: mov     ecx, [esi+24h]
0x87A9CD: mov     ebx, [ecx+4]
0x87A9D0: mov     ecx, [esp+20h+arg_C]
0x87A9D4: mov     edx, [ecx]
0x87A9D6: mov     eax, [edx+88h]
0x87A9DC: push    0
0x87A9DE: mov     [esp+24h+arg_8], ebx
0x87A9E2: call    eax
0x87A9E4: mov     ebx, [ebx+4]
0x87A9E7: mov     ebp, eax
0x87A9E9: cmp     ebx, ebp
0x87A9EB: jz      short loc_87AA22
0x87A9ED: test    ebx, ebx
0x87A9EF: jz      short loc_87AA0D
0x87A9F1: lea     ecx, [ebx+4]
0x87A9F4: push    ecx; lpAddend
0x87A9F5: call    dword ptr ds:0A2807Ch
0x87A9FB: test    eax, eax
0x87A9FD: jnz     short loc_87AA0D
0x87A9FF: test    ebx, ebx
0x87AA01: jz      short loc_87AA0D
0x87AA03: mov     edx, [ebx]
0x87AA05: mov     eax, [edx]
0x87AA07: push    1
0x87AA09: mov     ecx, ebx
0x87AA0B: call    eax
0x87AA0D: test    ebp, ebp
0x87AA0F: mov     ecx, [esp+20h+arg_8]
0x87AA13: mov     [ecx+4], ebp
0x87AA16: jz      short loc_87AA22
0x87AA18: add     ebp, 4
0x87AA1B: push    ebp; lpAddend
0x87AA1C: call    dword ptr ds:0A28078h
0x87AA22: mov     edx, [esi+24h]
0x87AA25: mov     ebp, [edx+0Ch]
0x87AA28: mov     eax, ds:0B43110h
0x87AA2D: mov     ebx, [ebp+4]
0x87AA30: cmp     ebx, eax
0x87AA32: mov     ecx, eax
0x87AA34: mov     [esp+20h+arg_C], ecx
0x87AA38: jz      short loc_87AA6F
0x87AA3A: test    ebx, ebx
0x87AA3C: jz      short loc_87AA5E
0x87AA3E: lea     eax, [ebx+4]
0x87AA41: push    eax; lpAddend
0x87AA42: call    dword ptr ds:0A2807Ch
0x87AA48: test    eax, eax
0x87AA4A: jnz     short loc_87AA5A
0x87AA4C: test    ebx, ebx
0x87AA4E: jz      short loc_87AA5A
0x87AA50: mov     edx, [ebx]
0x87AA52: mov     eax, [edx]
0x87AA54: push    1
0x87AA56: mov     ecx, ebx
0x87AA58: call    eax
0x87AA5A: mov     ecx, [esp+20h+arg_C]
0x87AA5E: test    ecx, ecx
0x87AA60: mov     [ebp+4], ecx
0x87AA63: jz      short loc_87AA6F
0x87AA65: add     ecx, 4
0x87AA68: push    ecx; lpAddend
0x87AA69: call    dword ptr ds:0A28078h
0x87AA6F: mov     ebx, 1
0x87AA74: add     [esi+60h], ebx
0x87AA77: mov     [esp+20h+arg_C], esi
0x87AA7B: mov     edx, [edi+38h]
0x87AA7E: lea     ecx, [esp+20h+arg_C]
0x87AA82: push    ecx
0x87AA83: push    edx
0x87AA84: lea     ecx, [edi+40h]
0x87AA87: mov     [esp+28h+var_4], 0
0x87AA8F: call    sub_76CE40
0x87AA94: or      eax, 0FFFFFFFFh
0x87AA97: add     [esi+60h], eax
0x87AA9A: mov     [esp+20h+var_4], eax
0x87AA9E: jnz     short loc_87AAA7
0x87AAA0: mov     ecx, esi
0x87AAA2: call    sub_7604D0
0x87AAA7: add     [edi+38h], ebx
0x87AAAA: mov     ecx, [esp+20h+var_C]
0x87AAAE: mov     large fs:0, ecx
0x87AAB5: pop     ecx
0x87AAB6: pop     edi
0x87AAB7: pop     esi
0x87AAB8: pop     ebp
0x87AAB9: pop     ebx
0x87AABA: add     esp, 0Ch
0x87AABD: retn    10h
