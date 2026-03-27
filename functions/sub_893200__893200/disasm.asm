0x893200: cmp     [esp+arg_0], 0
0x893205: push    edi
0x893206: mov     edi, ecx
0x893208: jz      short loc_89322A
0x89320A: push    esi
0x89320B: mov     esi, [edi+0Ch]
0x89320E: test    esi, esi
0x893210: jz      short loc_893222
0x893212: mov     ecx, esi
0x893214: call    sub_890F70
0x893219: push    esi
0x89321A: call    FormHeapFree
0x89321F: add     esp, 4
0x893222: mov     dword ptr [edi+0Ch], 0
0x893229: pop     esi
0x89322A: pop     edi
0x89322B: retn    4
