0x6F6230: push    0FFFFFFFFh
0x6F6232: push    offset SEH_6F6230
0x6F6237: mov     eax, large fs:0
0x6F623D: push    eax
0x6F623E: push    ecx
0x6F623F: push    ebx
0x6F6240: push    ebp
0x6F6241: push    esi
0x6F6242: push    edi
0x6F6243: mov     eax, ds:0B30AACh
0x6F6248: xor     eax, esp
0x6F624A: push    eax
0x6F624B: lea     eax, [esp+24h+var_C]
0x6F624F: mov     large fs:0, eax
0x6F6255: mov     esi, ecx
0x6F6257: mov     eax, [esi+3Ch]
0x6F625A: xor     ebx, ebx
0x6F625C: cmp     eax, ebx
0x6F625E: mov     [esp+24h+var_4], ebx
0x6F6262: jz      short loc_6F626D
0x6F6264: push    eax; File
0x6F6265: call    _fclose
0x6F626A: add     esp, 4
0x6F626D: push    ebx; MaxCount
0x6F626E: lea     edi, [esi+4]
0x6F6271: push    offset EmptyString; Src
0x6F6276: mov     ecx, edi
0x6F6278: call    sub_414500
0x6F627D: mov     eax, [esp+24h+Filename]
0x6F6281: mov     ebp, 10h
0x6F6286: cmp     [esp+24h+arg_18], ebp
0x6F628A: mov     [esi+3Ch], ebx
0x6F628D: jnb     short loc_6F6293
0x6F628F: lea     eax, [esp+24h+Filename]
0x6F6293: push    offset aWb; "wb"
0x6F6298: push    eax; Filename
0x6F6299: call    _fopen
0x6F629E: add     esp, 8
0x6F62A1: cmp     eax, ebx
0x6F62A3: mov     [esi+3Ch], eax
0x6F62A6: jnz     short loc_6F62EF
0x6F62A8: sub     esp, 1Ch
0x6F62AB: mov     ecx, esp
0x6F62AD: mov     [esp+40h+var_10], esp
0x6F62B1: push    0FFFFFFFFh
0x6F62B3: push    ebx
0x6F62B4: lea     eax, [esp+48h+arg_0]
0x6F62B8: mov     dword ptr [ecx+18h], 0Fh
0x6F62BF: mov     [ecx+14h], ebx
0x6F62C2: push    eax
0x6F62C3: mov     [ecx+4], bl
0x6F62C6: call    sub_414420
0x6F62CB: push    5; int
0x6F62CD: call    sub_6F6BF0
0x6F62D2: add     esp, 20h
0x6F62D5: cmp     [esp+24h+arg_18], ebp
0x6F62D9: jb      short loc_6F62E8
0x6F62DB: mov     ecx, [esp+24h+Filename]
0x6F62DF: push    ecx
0x6F62E0: call    FormHeapFree
0x6F62E5: add     esp, 4
0x6F62E8: xor     al, al
0x6F62EA: jmp     loc_6F6396
0x6F62EF: cmp     [esi+38h], ebp
0x6F62F2: mov     ecx, [esi+34h]
0x6F62F5: jb      short loc_6F62FC
0x6F62F7: mov     eax, [esi+24h]
0x6F62FA: jmp     short loc_6F62FF
0x6F62FC: lea     eax, [esi+24h]
0x6F62FF: push    1; int
0x6F6301: push    ecx; Size
0x6F6302: push    eax; int
0x6F6303: mov     ecx, esi
0x6F6305: call    sub_6F5FD0
0x6F630A: test    al, al
0x6F630C: jnz     short loc_6F6372
0x6F630E: sub     esp, 1Ch
0x6F6311: mov     ecx, esp
0x6F6313: mov     [esp+40h+var_10], esp
0x6F6317: push    0FFFFFFFFh
0x6F6319: push    ebx
0x6F631A: lea     edx, [esp+48h+arg_0]
0x6F631E: mov     dword ptr [ecx+18h], 0Fh
0x6F6325: mov     [ecx+14h], ebx
0x6F6328: push    edx
0x6F6329: mov     [ecx+4], bl
0x6F632C: call    sub_414420
0x6F6331: push    5; int
0x6F6333: call    sub_6F6BF0
0x6F6338: mov     eax, [esi+3Ch]
0x6F633B: add     esp, 20h
0x6F633E: cmp     eax, ebx
0x6F6340: jz      short loc_6F634B
0x6F6342: push    eax; File
0x6F6343: call    _fclose
0x6F6348: add     esp, 4
0x6F634B: push    ebx; MaxCount
0x6F634C: push    offset EmptyString; Src
0x6F6351: mov     ecx, edi
0x6F6353: call    sub_414500
0x6F6358: cmp     [esp+24h+arg_18], ebp
0x6F635C: mov     [esi+3Ch], ebx
0x6F635F: jb      short loc_6F62E8
0x6F6361: mov     eax, [esp+24h+Filename]
0x6F6365: push    eax
0x6F6366: call    FormHeapFree
0x6F636B: add     esp, 4
0x6F636E: xor     al, al
0x6F6370: jmp     short loc_6F6396
0x6F6372: push    0FFFFFFFFh
0x6F6374: push    ebx
0x6F6375: lea     ecx, [esp+2Ch+arg_0]
0x6F6379: push    ecx
0x6F637A: mov     ecx, edi
0x6F637C: call    sub_414420
0x6F6381: cmp     [esp+24h+arg_18], ebp
0x6F6385: jb      short loc_6F6394
0x6F6387: mov     edx, [esp+24h+Filename]
0x6F638B: push    edx
0x6F638C: call    FormHeapFree
0x6F6391: add     esp, 4
0x6F6394: mov     al, 1
0x6F6396: mov     ecx, [esp+24h+var_C]
0x6F639A: mov     large fs:0, ecx
0x6F63A1: pop     ecx
0x6F63A2: pop     edi
0x6F63A3: pop     esi
0x6F63A4: pop     ebp
0x6F63A5: pop     ebx
0x6F63A6: add     esp, 10h
0x6F63A9: retn    1Ch
