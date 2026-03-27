0x73DD70: push    0FFFFFFFFh
0x73DD72: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x73DD77: mov     eax, large fs:0
0x73DD7D: push    eax
0x73DD7E: push    ecx
0x73DD7F: push    ebx
0x73DD80: push    ebp
0x73DD81: push    esi
0x73DD82: push    edi
0x73DD83: mov     eax, ds:0B30AACh
0x73DD88: xor     eax, esp
0x73DD8A: push    eax
0x73DD8B: lea     eax, [esp+24h+var_C]
0x73DD8F: mov     large fs:0, eax
0x73DD95: mov     ebp, ecx
0x73DD97: mov     esi, [esp+24h+arg_0]
0x73DD9B: cmp     esi, [ebp+4]
0x73DD9E: jz      loc_73DE28
0x73DDA4: xor     edi, edi
0x73DDA6: cmp     esi, edi
0x73DDA8: jbe     short loc_73DE16
0x73DDAA: xor     ecx, ecx
0x73DDAC: mov     eax, esi
0x73DDAE: mov     edx, 1Ch
0x73DDB3: mul     edx
0x73DDB5: seto    cl
0x73DDB8: neg     ecx
0x73DDBA: or      ecx, eax
0x73DDBC: push    ecx; Size
0x73DDBD: call    FormHeapAlloc
0x73DDC2: mov     ebx, eax
0x73DDC4: add     esp, 4
0x73DDC7: mov     [esp+24h+var_10], ebx
0x73DDCB: cmp     ebx, edi
0x73DDCD: mov     [esp+24h+var_4], edi
0x73DDD1: jz      short loc_73DDE3
0x73DDD3: push    offset sub_73DD40
0x73DDD8: push    esi
0x73DDD9: push    1Ch
0x73DDDB: push    ebx
0x73DDDC: call    sub_401080
0x73DDE1: jmp     short loc_73DDE5
0x73DDE3: xor     ebx, ebx
0x73DDE5: xor     edx, edx
0x73DDE7: cmp     [ebp+8], edx
0x73DDEA: mov     edi, ebx
0x73DDEC: mov     [esp+24h+var_10], edi
0x73DDF0: jbe     short loc_73DE16
0x73DDF2: xor     eax, eax
0x73DDF4: mov     esi, [ebp+0]
0x73DDF7: add     esi, eax
0x73DDF9: lea     edi, [eax+ebx]
0x73DDFC: mov     ecx, 7
0x73DE01: add     edx, 1
0x73DE04: rep movsd
0x73DE06: add     eax, 1Ch
0x73DE09: cmp     edx, [ebp+8]
0x73DE0C: jb      short loc_73DDF4
0x73DE0E: mov     esi, [esp+24h+arg_0]
0x73DE12: mov     edi, [esp+24h+var_10]
0x73DE16: mov     eax, [ebp+0]
0x73DE19: push    eax
0x73DE1A: call    FormHeapFree
0x73DE1F: add     esp, 4
0x73DE22: mov     [ebp+0], edi
0x73DE25: mov     [ebp+4], esi
0x73DE28: mov     ecx, [esp+24h+var_C]
0x73DE2C: mov     large fs:0, ecx
0x73DE33: pop     ecx
0x73DE34: pop     edi
0x73DE35: pop     esi
0x73DE36: pop     ebp
0x73DE37: pop     ebx
0x73DE38: add     esp, 10h
0x73DE3B: retn    4
