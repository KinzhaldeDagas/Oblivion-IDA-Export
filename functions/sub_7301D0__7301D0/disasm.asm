0x7301D0: push    edi
0x7301D1: mov     edi, [esp+4+arg_0]
0x7301D5: test    edi, edi
0x7301D7: jnz     short loc_7301DF
0x7301D9: xor     al, al
0x7301DB: pop     edi
0x7301DC: retn    4
0x7301DF: push    esi
0x7301E0: mov     esi, [ecx+0Ch]
0x7301E3: cmp     esi, [edi+0Ch]
0x7301E6: jnz     short loc_73022F
0x7301E8: mov     eax, [ecx+10h]
0x7301EB: test    eax, eax
0x7301ED: jz      short loc_7301F9
0x7301EF: cmp     dword ptr [edi+10h], 0
0x7301F3: jz      short loc_73022F
0x7301F5: test    eax, eax
0x7301F7: jnz     short loc_730203
0x7301F9: cmp     dword ptr [edi+10h], 0
0x7301FD: jnz     short loc_73022F
0x7301FF: test    eax, eax
0x730201: jz      short loc_730228
0x730203: xor     edx, edx
0x730205: test    esi, esi
0x730207: jbe     short loc_730228
0x730209: mov     ecx, [edi+10h]
0x73020C: mov     edi, eax
0x73020E: sub     edi, ecx
0x730210: fld     dword ptr [edi+ecx]
0x730213: fld     dword ptr [ecx]
0x730215: fucompp
0x730217: fnstsw  ax
0x730219: test    ah, 44h
0x73021C: jp      short loc_73022F
0x73021E: add     edx, 1
0x730221: add     ecx, 4
0x730224: cmp     edx, esi
0x730226: jb      short loc_730210
0x730228: pop     esi
0x730229: mov     al, 1
0x73022B: pop     edi
0x73022C: retn    4
0x73022F: pop     esi
0x730230: xor     al, al
0x730232: pop     edi
0x730233: retn    4
