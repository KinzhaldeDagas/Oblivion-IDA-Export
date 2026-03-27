0x8408F0: push    0FFFFFFFFh
0x8408F2: push    offset SEH_882120
0x8408F7: mov     eax, large fs:0
0x8408FD: push    eax
0x8408FE: push    ebx
0x8408FF: push    ebp
0x840900: push    esi
0x840901: push    edi
0x840902: mov     eax, ds:0B30AACh
0x840907: xor     eax, esp
0x840909: push    eax
0x84090A: lea     eax, [esp+20h+var_C]
0x84090E: mov     large fs:0, eax
0x840914: mov     edi, ecx
0x840916: mov     ebp, [esp+20h+arg_8]
0x84091A: mov     esi, [ebp+0Ch]
0x84091D: mov     ebx, ds:0B458D8h
0x840923: push    esi
0x840924: call    sub_848E50
0x840929: mov     ebp, [ebp+10h]
0x84092C: mov     ecx, [esp+20h+arg_0]
0x840930: mov     eax, [edi]
0x840932: mov     edx, [eax+0BCh]
0x840938: push    ebp
0x840939: push    esi
0x84093A: push    ecx
0x84093B: mov     ecx, edi
0x84093D: call    edx
0x84093F: mov     esi, [esp+20h+arg_C]
0x840943: mov     eax, [esi+0A8h]
0x840949: mov     ds:0B46628h, eax
0x84094E: mov     ecx, [esi+0ACh]
0x840954: mov     ds:0B4662Ch, ecx
0x84095A: mov     edx, [esi+0B0h]
0x840960: mov     ds:0B46630h, edx
0x840966: mov     eax, [esi+0B4h]
0x84096C: mov     ds:0B46634h, eax
0x840971: mov     ecx, [ebx+24h]
0x840974: mov     ebp, [ecx]
0x840976: mov     edx, [esi]
0x840978: mov     eax, [edx+88h]
0x84097E: push    0
0x840980: mov     ecx, esi
0x840982: mov     [esp+24h+arg_8], ebp
0x840986: call    eax
0x840988: mov     ebp, [ebp+4]
0x84098B: cmp     ebp, eax
0x84098D: mov     [esp+20h+arg_0], eax
0x840991: jz      short loc_8409CD
0x840993: test    ebp, ebp
0x840995: jz      short loc_8409B8
0x840997: lea     ecx, [ebp+4]
0x84099A: push    ecx; lpAddend
0x84099B: call    dword ptr ds:0A2807Ch
0x8409A1: test    eax, eax
0x8409A3: jnz     short loc_8409B4
0x8409A5: test    ebp, ebp
0x8409A7: jz      short loc_8409B4
0x8409A9: mov     edx, [ebp+0]
0x8409AC: mov     eax, [edx]
0x8409AE: push    1
0x8409B0: mov     ecx, ebp
0x8409B2: call    eax
0x8409B4: mov     eax, [esp+20h+arg_0]
0x8409B8: test    eax, eax
0x8409BA: mov     ecx, [esp+20h+arg_8]
0x8409BE: mov     [ecx+4], eax
0x8409C1: jz      short loc_8409CD
0x8409C3: add     eax, 4
0x8409C6: push    eax; lpAddend
0x8409C7: call    dword ptr ds:0A28078h
0x8409CD: mov     edx, [esp+20h+arg_8]
0x8409D1: push    esi
0x8409D2: push    edx
0x8409D3: mov     ecx, edi
0x8409D5: call    sub_848FA0
0x8409DA: mov     eax, [ebx+24h]
0x8409DD: mov     ebp, [eax+4]
0x8409E0: push    0
0x8409E2: push    esi
0x8409E3: mov     ecx, edi
0x8409E5: mov     [esp+28h+arg_8], ebp
0x8409E9: call    sub_848FD0
0x8409EE: mov     ebp, [ebp+4]
0x8409F1: cmp     ebp, eax
0x8409F3: mov     [esp+20h+arg_0], eax
0x8409F7: jz      short loc_840A33
0x8409F9: test    ebp, ebp
0x8409FB: jz      short loc_840A1E
0x8409FD: lea     ecx, [ebp+4]
0x840A00: push    ecx; lpAddend
0x840A01: call    dword ptr ds:0A2807Ch
0x840A07: test    eax, eax
0x840A09: jnz     short loc_840A1A
0x840A0B: test    ebp, ebp
0x840A0D: jz      short loc_840A1A
0x840A0F: mov     edx, [ebp+0]
0x840A12: mov     eax, [edx]
0x840A14: push    1
0x840A16: mov     ecx, ebp
0x840A18: call    eax
0x840A1A: mov     eax, [esp+20h+arg_0]
0x840A1E: test    eax, eax
0x840A20: mov     ecx, [esp+20h+arg_8]
0x840A24: mov     [ecx+4], eax
0x840A27: jz      short loc_840A33
0x840A29: add     eax, 4
0x840A2C: push    eax; lpAddend
0x840A2D: call    dword ptr ds:0A28078h
0x840A33: mov     edx, [esp+20h+arg_8]
0x840A37: push    esi
0x840A38: push    edx
0x840A39: mov     ecx, edi
0x840A3B: call    sub_848FA0
0x840A40: mov     eax, [ebx+24h]
0x840A43: mov     ebp, [eax+10h]
0x840A46: mov     edx, [esi]
0x840A48: mov     eax, [edx+88h]
0x840A4E: push    1
0x840A50: mov     ecx, esi
0x840A52: mov     [esp+24h+arg_8], ebp
0x840A56: call    eax
0x840A58: mov     ebp, [ebp+4]
0x840A5B: cmp     ebp, eax
0x840A5D: mov     [esp+20h+arg_0], eax
0x840A61: jz      short loc_840A9D
0x840A63: test    ebp, ebp
0x840A65: jz      short loc_840A88
0x840A67: lea     ecx, [ebp+4]
0x840A6A: push    ecx; lpAddend
0x840A6B: call    dword ptr ds:0A2807Ch
0x840A71: test    eax, eax
0x840A73: jnz     short loc_840A84
0x840A75: test    ebp, ebp
0x840A77: jz      short loc_840A84
0x840A79: mov     edx, [ebp+0]
0x840A7C: mov     eax, [edx]
0x840A7E: push    1
0x840A80: mov     ecx, ebp
0x840A82: call    eax
0x840A84: mov     eax, [esp+20h+arg_0]
0x840A88: test    eax, eax
0x840A8A: mov     ecx, [esp+20h+arg_8]
0x840A8E: mov     [ecx+4], eax
0x840A91: jz      short loc_840A9D
0x840A93: add     eax, 4
0x840A96: push    eax; lpAddend
0x840A97: call    dword ptr ds:0A28078h
0x840A9D: mov     edx, [esp+20h+arg_8]
0x840AA1: push    esi
0x840AA2: push    edx
0x840AA3: mov     ecx, edi
0x840AA5: call    sub_848FA0
0x840AAA: mov     esi, 1
0x840AAF: add     [ebx+60h], esi
0x840AB2: mov     [esp+20h+arg_8], ebx
0x840AB6: mov     ecx, [edi+38h]
0x840AB9: lea     eax, [esp+20h+arg_8]
0x840ABD: push    eax
0x840ABE: push    ecx
0x840ABF: lea     ecx, [edi+40h]
0x840AC2: mov     [esp+28h+var_4], 0
0x840ACA: call    sub_76CE40
0x840ACF: or      eax, 0FFFFFFFFh
0x840AD2: add     [ebx+60h], eax
0x840AD5: mov     [esp+20h+var_4], eax
0x840AD9: jnz     short loc_840AE2
0x840ADB: mov     ecx, ebx
0x840ADD: call    sub_7604D0
0x840AE2: add     [edi+38h], esi
0x840AE5: mov     ecx, [esp+20h+var_C]
0x840AE9: mov     large fs:0, ecx
0x840AF0: pop     ecx
0x840AF1: pop     edi
0x840AF2: pop     esi
0x840AF3: pop     ebp
0x840AF4: pop     ebx
0x840AF5: add     esp, 0Ch
0x840AF8: retn    10h
