0x8E81B0: push    ebp
0x8E81B1: mov     ebp, esp
0x8E81B3: and     esp, 0FFFFFFF0h
0x8E81B6: sub     esp, 44h
0x8E81B9: mov     eax, ds:0B30AACh
0x8E81BE: xor     eax, esp
0x8E81C0: mov     [esp+44h+var_4], eax
0x8E81C4: push    ebx
0x8E81C5: mov     ebx, [ebp+arg_4]
0x8E81C8: mov     eax, [ebx+4]
0x8E81CB: push    esi
0x8E81CC: push    edi
0x8E81CD: mov     edi, [ebp+arg_0]
0x8E81D0: push    1
0x8E81D2: lea     ecx, [esp+54h+var_40]
0x8E81D6: push    ecx
0x8E81D7: mov     [esp+58h+var_2C], eax
0x8E81DB: mov     eax, [edi+220h]
0x8E81E1: push    4
0x8E81E3: lea     edx, [esp+5Ch+var_2C]
0x8E81E7: push    edx
0x8E81E8: push    eax
0x8E81E9: mov     eax, [eax+8]
0x8E81EC: mov     [esp+64h+var_40], 4
0x8E81F4: call    eax
0x8E81F6: mov     ecx, [esp+64h+var_2C]
0x8E81FA: mov     eax, ecx
0x8E81FC: shl     eax, 4
0x8E81FF: xor     esi, esi
0x8E8201: add     esp, 14h
0x8E8204: cmp     ecx, esi
0x8E8206: mov     [esp+50h+var_24], eax
0x8E820A: jle     short loc_8E8256
0x8E820C: mov     [esp+50h+var_40], esi
0x8E8210: mov     ecx, [ebx]
0x8E8212: mov     edx, [esp+50h+var_40]
0x8E8216: movaps  xmm0, xmmword ptr [ecx+edx]
0x8E821A: mov     eax, [edi+220h]
0x8E8220: push    1
0x8E8222: lea     ecx, [esp+54h+var_28]
0x8E8226: push    ecx
0x8E8227: push    10h
0x8E8229: lea     edx, [esp+5Ch+var_20]
0x8E822D: push    edx
0x8E822E: movaps  [esp+60h+var_20], xmm0
0x8E8233: push    eax
0x8E8234: mov     eax, [eax+8]
0x8E8237: mov     [esp+64h+var_28], 10h
0x8E823F: call    eax
0x8E8241: add     [esp+64h+var_40], 10h
0x8E8246: add     esi, 1
0x8E8249: add     esp, 14h
0x8E824C: cmp     esi, [esp+50h+var_2C]
0x8E8250: jl      short loc_8E8210
0x8E8252: mov     eax, [esp+50h+var_24]
0x8E8256: mov     ecx, [esp+50h+var_4]
0x8E825A: pop     edi
0x8E825B: pop     esi
0x8E825C: pop     ebx
0x8E825D: xor     ecx, esp
0x8E825F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8E8264: mov     esp, ebp
0x8E8266: pop     ebp
0x8E8267: retn
