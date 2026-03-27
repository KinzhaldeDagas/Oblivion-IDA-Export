0x712290: sub     esp, 18h
0x712293: mov     eax, ds:0B30AACh
0x712298: xor     eax, esp
0x71229A: mov     [esp+18h+var_4], eax
0x71229E: mov     eax, [esp+18h+Src]
0x7122A2: push    esi
0x7122A3: push    edi; Src
0x7122A4: push    eax; Src
0x7122A5: lea     eax, [esp+24h+Dst]
0x7122A9: push    10h; SizeInBytes
0x7122AB: push    eax; Dst
0x7122AC: call    _strcpy_s
0x7122B1: lea     ecx, [esp+2Ch+Context]
0x7122B5: push    ecx; Context
0x7122B6: lea     edx, [esp+30h+Dst]
0x7122BA: push    offset Delim; "."
0x7122BF: push    edx; Str
0x7122C0: mov     esi, 18h
0x7122C5: xor     edi, edi
0x7122C7: call    _strtok_s
0x7122CC: add     esp, 18h
0x7122CF: test    eax, eax
0x7122D1: jz      short loc_7122FA
0x7122D3: push    eax; Str
0x7122D4: call    j__atol
0x7122D9: mov     ecx, esi
0x7122DB: shl     eax, cl
0x7122DD: sub     esi, 8
0x7122E0: or      edi, eax
0x7122E2: lea     eax, [esp+24h+Context]
0x7122E6: push    eax; Context
0x7122E7: push    offset Delim; "."
0x7122EC: push    0; Str
0x7122EE: call    _strtok_s
0x7122F3: add     esp, 10h
0x7122F6: test    eax, eax
0x7122F8: jnz     short loc_7122D3
0x7122FA: mov     ecx, [esp+20h+var_4]
0x7122FE: mov     eax, edi
0x712300: pop     edi
0x712301: pop     esi
0x712302: xor     ecx, esp
0x712304: call    @__security_check_cookie@4; __security_check_cookie(x)
0x712309: add     esp, 18h
0x71230C: retn
