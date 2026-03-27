0x732400: push    0FFFFFFFFh
0x732402: push    offset SEH_7F1810
0x732407: mov     eax, large fs:0
0x73240D: push    eax
0x73240E: push    ecx
0x73240F: push    esi
0x732410: mov     eax, ds:0B30AACh
0x732415: xor     eax, esp
0x732417: push    eax
0x732418: lea     eax, [esp+18h+var_C]
0x73241C: mov     large fs:0, eax
0x732422: mov     esi, ecx
0x732424: mov     [esp+18h+var_10], esi
0x732428: mov     dword ptr [esi], offset ??_7NiPalette@@6B@; const NiPalette::`vftable'
0x73242E: mov     eax, [esi+14h]
0x732431: push    eax
0x732432: mov     [esp+1Ch+var_4], 0
0x73243A: call    FormHeapFree
0x73243F: mov     ecx, [esi+18h]
0x732442: add     esp, 4
0x732445: test    ecx, ecx
0x732447: jz      short loc_732451
0x732449: mov     eax, [ecx]
0x73244B: mov     edx, [eax]
0x73244D: push    1
0x73244F: call    edx
0x732451: mov     ecx, esi
0x732453: call    sub_732370
0x732458: mov     ecx, esi
0x73245A: mov     [esp+18h+var_4], 0FFFFFFFFh
0x732462: call    NiRefObject_destr
0x732467: mov     ecx, dword ptr [esp+18h+var_C]
0x73246B: mov     large fs:0, ecx
0x732472: pop     ecx
0x732473: pop     esi
0x732474: add     esp, 10h
0x732477: retn
