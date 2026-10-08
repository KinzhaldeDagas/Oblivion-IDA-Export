0x6D0550: push    ecx; Loads NiTimeController, then for stream versions 0x0A010068 through 0x0A01006C reads a transitional Boolean and maps it to controller flag 0x20. Other versions rely on the base flag representation/migration.
0x6D0551: push    esi
0x6D0552: mov     esi, [esp+8+arg_0]
0x6D0556: push    edi
0x6D0557: push    esi
0x6D0558: mov     edi, ecx
0x6D055A: call    NiTimeController_LoadBinary; Load persistent NiTimeController state: flags +0x08, frequency/phase/key bounds, and target/next links. Legacy migration clears flag bit 0x20 before stream version 0x0A01006D. Runtime time caches and update bytes are constructor state, not serialized.
0x6D055F: mov     eax, [esi+0D8h]
0x6D0565: cmp     eax, 0A010068h
0x6D056A: jb      short loc_6D05B0
0x6D056C: cmp     eax, 0A01006Dh
0x6D0571: jnb     short loc_6D05B0
0x6D0573: mov     eax, [esi+21Ch]
0x6D0579: push    1
0x6D057B: lea     ecx, [esp+10h+var_4]
0x6D057F: push    ecx
0x6D0580: push    1
0x6D0582: lea     edx, [esp+18h+arg_0]
0x6D0586: push    edx
0x6D0587: push    eax
0x6D0588: mov     eax, [eax+4]
0x6D058B: mov     [esp+20h+var_4], 1
0x6D0593: call    eax
0x6D0595: add     esp, 14h
0x6D0598: cmp     byte ptr [esp+0Ch+arg_0], 0
0x6D059D: jz      short loc_6D05AA
0x6D059F: or      word ptr [edi+8], 20h
0x6D05A4: pop     edi
0x6D05A5: pop     esi
0x6D05A6: pop     ecx
0x6D05A7: retn    4
0x6D05AA: and     word ptr [edi+8], 0FFDFh
0x6D05B0: pop     edi
0x6D05B1: pop     esi
0x6D05B2: pop     ecx
0x6D05B3: retn    4
