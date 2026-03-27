0x6FA040: mov     al, [esp+arg_4]
0x6FA044: push    esi
0x6FA045: xor     esi, esi
0x6FA047: test    al, al
0x6FA049: jbe     short loc_6FA072
0x6FA04B: push    ebx
0x6FA04C: push    edi
0x6FA04D: mov     edi, [esp+0Ch+arg_0]
0x6FA051: movzx   ebx, al
0x6FA054: movsx   eax, byte ptr [edi]
0x6FA057: push    eax; C
0x6FA058: call    _tolower
0x6FA05D: imul    esi, 1003Fh
0x6FA063: add     esp, 4
0x6FA066: add     esi, eax
0x6FA068: add     edi, 1
0x6FA06B: sub     ebx, 1
0x6FA06E: jnz     short loc_6FA054
0x6FA070: pop     edi
0x6FA071: pop     ebx
0x6FA072: mov     eax, esi
0x6FA074: pop     esi
0x6FA075: retn
