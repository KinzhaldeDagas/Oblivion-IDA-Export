0x8738A0: push    0FFFFFFFFh
0x8738A2: push    offset SEH_882120
0x8738A7: mov     eax, large fs:0
0x8738AD: push    eax
0x8738AE: push    ebx
0x8738AF: push    ebp
0x8738B0: push    esi
0x8738B1: push    edi
0x8738B2: mov     eax, ds:0B30AACh
0x8738B7: xor     eax, esp
0x8738B9: push    eax
0x8738BA: lea     eax, [esp+20h+var_C]
0x8738BE: mov     large fs:0, eax
0x8738C4: mov     edi, ecx
0x8738C6: mov     eax, [esp+20h+arg_8]
0x8738CA: mov     ebx, [eax+0Ch]
0x8738CD: mov     esi, ds:0B47624h
0x8738D3: push    ebx
0x8738D4: call    sub_848E50
0x8738D9: mov     edx, [edi]
0x8738DB: mov     eax, [esp+20h+arg_0]
0x8738DF: mov     edx, [edx+0BCh]
0x8738E5: push    0
0x8738E7: push    ebx
0x8738E8: push    eax
0x8738E9: mov     ecx, edi
0x8738EB: call    edx
0x8738ED: mov     eax, [esi+24h]
0x8738F0: mov     ebp, [esp+20h+arg_C]
0x8738F4: mov     ebx, [eax]
0x8738F6: mov     edx, [ebp+0]
0x8738F9: mov     eax, [edx+88h]
0x8738FF: push    0
0x873901: mov     ecx, ebp
0x873903: mov     [esp+24h+arg_8], ebx
0x873907: call    eax
0x873909: mov     ebx, [ebx+4]
0x87390C: cmp     ebx, eax
0x87390E: mov     [esp+20h+arg_0], eax
0x873912: jz      short loc_87394D
0x873914: test    ebx, ebx
0x873916: jz      short loc_873938
0x873918: lea     ecx, [ebx+4]
0x87391B: push    ecx; lpAddend
0x87391C: call    dword ptr ds:0A2807Ch
0x873922: test    eax, eax
0x873924: jnz     short loc_873934
0x873926: test    ebx, ebx
0x873928: jz      short loc_873934
0x87392A: mov     edx, [ebx]
0x87392C: mov     eax, [edx]
0x87392E: push    1
0x873930: mov     ecx, ebx
0x873932: call    eax
0x873934: mov     eax, [esp+20h+arg_0]
0x873938: test    eax, eax
0x87393A: mov     ecx, [esp+20h+arg_8]
0x87393E: mov     [ecx+4], eax
0x873941: jz      short loc_87394D
0x873943: add     eax, 4
0x873946: push    eax; lpAddend
0x873947: call    dword ptr ds:0A28078h
0x87394D: mov     edx, [esi+24h]
0x873950: mov     ebx, [edx+4]
0x873953: push    0
0x873955: push    ebp
0x873956: mov     ecx, edi
0x873958: mov     [esp+28h+arg_8], ebx
0x87395C: call    sub_848FD0
0x873961: mov     ebx, [ebx+4]
0x873964: cmp     ebx, eax
0x873966: mov     [esp+20h+arg_0], eax
0x87396A: jz      short loc_8739A5
0x87396C: test    ebx, ebx
0x87396E: jz      short loc_873990
0x873970: lea     eax, [ebx+4]
0x873973: push    eax; lpAddend
0x873974: call    dword ptr ds:0A2807Ch
0x87397A: test    eax, eax
0x87397C: jnz     short loc_87398C
0x87397E: test    ebx, ebx
0x873980: jz      short loc_87398C
0x873982: mov     edx, [ebx]
0x873984: mov     eax, [edx]
0x873986: push    1
0x873988: mov     ecx, ebx
0x87398A: call    eax
0x87398C: mov     eax, [esp+20h+arg_0]
0x873990: test    eax, eax
0x873992: mov     ecx, [esp+20h+arg_8]
0x873996: mov     [ecx+4], eax
0x873999: jz      short loc_8739A5
0x87399B: add     eax, 4
0x87399E: push    eax; lpAddend
0x87399F: call    dword ptr ds:0A28078h
0x8739A5: mov     edx, [esi+24h]
0x8739A8: mov     eax, [edx+0Ch]
0x8739AB: mov     edx, [ebp+0]
0x8739AE: mov     [esp+20h+arg_8], eax
0x8739B2: mov     eax, [edx+90h]
0x8739B8: push    0
0x8739BA: mov     ecx, ebp
0x8739BC: call    eax
0x8739BE: mov     ecx, [esp+20h+arg_8]
0x8739C2: mov     ebp, [ecx+4]
0x8739C5: mov     ebx, eax
0x8739C7: cmp     ebp, ebx
0x8739C9: jz      short loc_873A01
0x8739CB: test    ebp, ebp
0x8739CD: jz      short loc_8739EC
0x8739CF: lea     edx, [ebp+4]
0x8739D2: push    edx; lpAddend
0x8739D3: call    dword ptr ds:0A2807Ch
0x8739D9: test    eax, eax
0x8739DB: jnz     short loc_8739EC
0x8739DD: test    ebp, ebp
0x8739DF: jz      short loc_8739EC
0x8739E1: mov     eax, [ebp+0]
0x8739E4: mov     edx, [eax]
0x8739E6: push    1
0x8739E8: mov     ecx, ebp
0x8739EA: call    edx
0x8739EC: test    ebx, ebx
0x8739EE: mov     eax, [esp+20h+arg_8]
0x8739F2: mov     [eax+4], ebx
0x8739F5: jz      short loc_873A01
0x8739F7: add     ebx, 4
0x8739FA: push    ebx; lpAddend
0x8739FB: call    dword ptr ds:0A28078h
0x873A01: mov     ecx, [esi+24h]
0x873A04: mov     ebp, [ecx+10h]
0x873A07: mov     eax, ds:0B43110h
0x873A0C: mov     ebx, [ebp+4]
0x873A0F: cmp     ebx, eax
0x873A11: mov     ecx, eax
0x873A13: mov     [esp+20h+arg_8], ecx
0x873A17: jz      short loc_873A4E
0x873A19: test    ebx, ebx
0x873A1B: jz      short loc_873A3D
0x873A1D: lea     edx, [ebx+4]
0x873A20: push    edx; lpAddend
0x873A21: call    dword ptr ds:0A2807Ch
0x873A27: test    eax, eax
0x873A29: jnz     short loc_873A39
0x873A2B: test    ebx, ebx
0x873A2D: jz      short loc_873A39
0x873A2F: mov     eax, [ebx]
0x873A31: mov     edx, [eax]
0x873A33: push    1
0x873A35: mov     ecx, ebx
0x873A37: call    edx
0x873A39: mov     ecx, [esp+20h+arg_8]
0x873A3D: test    ecx, ecx
0x873A3F: mov     [ebp+4], ecx
0x873A42: jz      short loc_873A4E
0x873A44: add     ecx, 4
0x873A47: push    ecx; lpAddend
0x873A48: call    dword ptr ds:0A28078h
0x873A4E: mov     ebx, 1
0x873A53: add     [esi+60h], ebx
0x873A56: mov     [esp+20h+arg_8], esi
0x873A5A: mov     ecx, [edi+38h]
0x873A5D: lea     eax, [esp+20h+arg_8]
0x873A61: push    eax
0x873A62: push    ecx
0x873A63: lea     ecx, [edi+40h]
0x873A66: mov     [esp+28h+var_4], 0
0x873A6E: call    sub_76CE40
0x873A73: or      eax, 0FFFFFFFFh
0x873A76: add     [esi+60h], eax
0x873A79: mov     [esp+20h+var_4], eax
0x873A7D: jnz     short loc_873A86
0x873A7F: mov     ecx, esi
0x873A81: call    sub_7604D0
0x873A86: add     [edi+38h], ebx
0x873A89: mov     ecx, [esp+20h+var_C]
0x873A8D: mov     large fs:0, ecx
0x873A94: pop     ecx
0x873A95: pop     edi
0x873A96: pop     esi
0x873A97: pop     ebp
0x873A98: pop     ebx
0x873A99: add     esp, 0Ch
0x873A9C: retn    10h
