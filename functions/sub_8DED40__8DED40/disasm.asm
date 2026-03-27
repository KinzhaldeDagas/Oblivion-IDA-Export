0x8DED40: push    edi
0x8DED41: mov     edi, [esp+4+arg_0]
0x8DED45: mov     al, [edi+0A5h]
0x8DED4B: test    al, al
0x8DED4D: jz      short loc_8DED88
0x8DED4F: push    ebx
0x8DED50: mov     ebx, [edi+3Ch]
0x8DED53: dec     ebx
0x8DED54: js      short loc_8DED87
0x8DED56: push    ebp
0x8DED57: mov     ebp, [esp+0Ch+arg_4]
0x8DED5B: push    esi
0x8DED5C: lea     esp, [esp+0]
0x8DED60: mov     eax, [edi+38h]
0x8DED63: mov     esi, [eax+ebx*4]
0x8DED66: push    ebp
0x8DED67: lea     ecx, [esp+14h+arg_0]
0x8DED6B: push    ecx
0x8DED6C: mov     ecx, esi
0x8DED6E: call    sub_8DDCD0
0x8DED73: cmp     byte ptr [eax], 0
0x8DED76: jz      short loc_8DED82
0x8DED78: push    esi
0x8DED79: push    edi
0x8DED7A: call    sub_8CBBB0
0x8DED7F: add     esp, 8
0x8DED82: dec     ebx
0x8DED83: jns     short loc_8DED60
0x8DED85: pop     esi
0x8DED86: pop     ebp
0x8DED87: pop     ebx
0x8DED88: pop     edi
0x8DED89: retn    8
