0x71DD40: mov     eax, [esp+arg_4]
0x71DD44: test    eax, eax
0x71DD46: push    edi
0x71DD47: mov     edi, [esp+4+arg_18]
0x71DD4B: jbe     loc_71DDE3
0x71DD51: mov     edx, [esp+4+arg_0]
0x71DD55: push    ebx
0x71DD56: push    ebp
0x71DD57: push    esi
0x71DD58: mov     esi, [esp+10h+arg_C]
0x71DD5C: mov     [esp+10h+arg_18], eax
0x71DD60: mov     eax, [esp+10h+arg_1C]
0x71DD64: test    edx, edx
0x71DD66: jbe     short loc_71DDD9
0x71DD68: mov     ebp, edx
0x71DD6A: lea     ebx, [ebx+0]
0x71DD70: movzx   ebx, word ptr [edi]
0x71DD73: and     ebx, [eax]
0x71DD75: movzx   ecx, byte ptr [eax+10h]
0x71DD79: shr     ebx, cl
0x71DD7B: movzx   ecx, byte ptr [eax+14h]
0x71DD7F: shl     bl, cl
0x71DD81: add     esi, 1
0x71DD84: add     esi, 1
0x71DD87: add     esi, 1
0x71DD8A: mov     [esi-3], bl
0x71DD8D: movzx   ebx, word ptr [edi]
0x71DD90: and     ebx, [eax+4]
0x71DD93: movzx   ecx, byte ptr [eax+11h]
0x71DD97: shr     ebx, cl
0x71DD99: movzx   ecx, byte ptr [eax+15h]
0x71DD9D: shl     bl, cl
0x71DD9F: add     esi, 1
0x71DDA2: add     edi, 2
0x71DDA5: mov     [esi-3], bl
0x71DDA8: movzx   ebx, word ptr [edi-2]
0x71DDAC: and     ebx, [eax+8]
0x71DDAF: movzx   ecx, byte ptr [eax+12h]
0x71DDB3: shr     ebx, cl
0x71DDB5: movzx   ecx, byte ptr [eax+16h]
0x71DDB9: shl     bl, cl
0x71DDBB: mov     [esi-2], bl
0x71DDBE: movzx   ebx, word ptr [edi-2]
0x71DDC2: and     ebx, [eax+0Ch]
0x71DDC5: movzx   ecx, byte ptr [eax+13h]
0x71DDC9: shr     ebx, cl
0x71DDCB: movzx   ecx, byte ptr [eax+17h]
0x71DDCF: shl     bl, cl
0x71DDD1: sub     ebp, 1
0x71DDD4: mov     [esi-1], bl
0x71DDD7: jnz     short loc_71DD70
0x71DDD9: sub     [esp+10h+arg_18], 1
0x71DDDE: jnz     short loc_71DD64
0x71DDE0: pop     esi
0x71DDE1: pop     ebp
0x71DDE2: pop     ebx
0x71DDE3: pop     edi
0x71DDE4: retn
