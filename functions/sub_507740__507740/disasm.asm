0x507740: push    esi
0x507741: mov     esi, ds:0B33A98h
0x507747: push    edi
0x507748: add     esi, 2Ch ; ','
0x50774B: xor     edi, edi
0x50774D: test    esi, esi
0x50774F: jz      short loc_5077CA
0x507751: xor     ecx, ecx
0x507753: test    esi, esi
0x507755: mov     eax, esi
0x507757: jz      short loc_5077CA
0x507759: lea     esp, [esp+0]
0x507760: cmp     dword ptr [eax], 0
0x507763: jz      short loc_507768
0x507765: add     ecx, 1
0x507768: mov     eax, [eax+4]
0x50776B: test    eax, eax
0x50776D: jnz     short loc_507760
0x50776F: test    ecx, ecx
0x507771: jz      short loc_5077CA
0x507773: mov     eax, [esi]
0x507775: test    eax, eax
0x507777: jz      short loc_5077C3
0x507779: lea     ecx, [eax+18h]
0x50777C: mov     eax, [ecx]
0x50777E: mov     edx, [eax+18h]
0x507781: call    edx
0x507783: test    eax, eax
0x507785: jz      short loc_5077A9
0x507787: mov     eax, [esi]
0x507789: lea     ecx, [eax+18h]
0x50778C: mov     eax, [ecx]
0x50778E: mov     edx, [eax+18h]
0x507791: call    edx
0x507793: cmp     eax, 2
0x507796: jz      short loc_5077A9
0x507798: mov     eax, [esi]
0x50779A: lea     ecx, [eax+18h]
0x50779D: mov     eax, [ecx]
0x50779F: mov     edx, [eax+18h]
0x5077A2: call    edx
0x5077A4: cmp     eax, 3
0x5077A7: jnz     short loc_5077C3
0x5077A9: mov     eax, [esi]
0x5077AB: mov     ecx, ds:0B333C4h
0x5077B1: mov     edx, [ecx]
0x5077B3: push    eax
0x5077B4: mov     eax, [edx+2DCh]
0x5077BA: call    eax
0x5077BC: test    al, al
0x5077BE: jz      short loc_5077C3
0x5077C0: add     edi, 1
0x5077C3: mov     esi, [esi+4]
0x5077C6: test    esi, esi
0x5077C8: jnz     short loc_507751
0x5077CA: push    edi
0x5077CB: push    offset aDSpellsAddedTo; "%d spells added to Player Character"
0x5077D0: call    Interface_ConsolePrint
0x5077D5: add     esp, 8
0x5077D8: pop     edi
0x5077D9: mov     al, 1
0x5077DB: pop     esi
0x5077DC: retn
