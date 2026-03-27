0x7722B0: test    [esp+arg_0], 2
0x7722B5: push    esi
0x7722B6: mov     esi, ecx
0x7722B8: jz      short loc_772337
0x7722BA: push    ebx
0x7722BB: push    ebp
0x7722BC: mov     ebp, [esi-4]
0x7722BF: lea     ebx, [esi-4]
0x7722C2: lea     eax, [ebp+ebp*2+0]
0x7722C6: shl     eax, 5
0x7722C9: add     eax, esi
0x7722CB: sub     ebp, 1
0x7722CE: js      short loc_77231F
0x7722D0: push    edi
0x7722D1: lea     edi, [eax+14h]
0x7722D4: mov     eax, [edi-60h]
0x7722D7: sub     edi, 60h ; '`'
0x7722DA: test    eax, eax
0x7722DC: jz      short loc_7722EA
0x7722DE: mov     eax, [eax+8]
0x7722E1: push    eax
0x7722E2: call    sub_77CB50
0x7722E7: add     esp, 4
0x7722EA: mov     ecx, [edi-8]
0x7722ED: push    ecx
0x7722EE: call    sub_773620
0x7722F3: mov     esi, [edi-10h]
0x7722F6: add     esp, 4
0x7722F9: test    esi, esi
0x7722FB: jz      short loc_772319
0x7722FD: lea     edx, [esi+4]
0x772300: push    edx; lpAddend
0x772301: call    dword ptr ds:0A2807Ch
0x772307: test    eax, eax
0x772309: jnz     short loc_772319
0x77230B: test    esi, esi
0x77230D: jz      short loc_772319
0x77230F: mov     eax, [esi]
0x772311: mov     edx, [eax]
0x772313: push    1
0x772315: mov     ecx, esi
0x772317: call    edx
0x772319: sub     ebp, 1
0x77231C: jns     short loc_7722D4
0x77231E: pop     edi
0x77231F: test    [esp+0Ch+arg_0], 1
0x772324: jz      short loc_77232F
0x772326: push    ebx
0x772327: call    FormHeapFree
0x77232C: add     esp, 4
0x77232F: pop     ebp
0x772330: mov     eax, ebx
0x772332: pop     ebx
0x772333: pop     esi
0x772334: retn    4
0x772337: call    sub_772100
0x77233C: test    [esp+4+arg_0], 1
0x772341: jz      short loc_77234C
0x772343: push    esi
0x772344: call    FormHeapFree
0x772349: add     esp, 4
0x77234C: mov     eax, esi
0x77234E: pop     esi
0x77234F: retn    4
