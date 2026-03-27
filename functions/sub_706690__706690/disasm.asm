0x706690: push    ecx
0x706691: push    esi
0x706692: push    edi
0x706693: mov     edi, [esp+0Ch+arg_0]
0x706697: push    edi
0x706698: mov     esi, ecx
0x70669A: call    sub_700AC0
0x70669F: add     esi, 18h
0x7066A2: cmp     dword ptr [edi+0D8h], 0A000102h
0x7066AC: jnb     short loc_7066BD
0x7066AE: movzx   eax, byte ptr [edi+25Ch]
0x7066B5: and     eax, 7
0x7066B8: mov     [esi], ax
0x7066BB: jmp     short loc_7066DE
0x7066BD: mov     eax, [edi+21Ch]
0x7066C3: mov     edx, [eax+4]
0x7066C6: push    1
0x7066C8: lea     ecx, [esp+10h+arg_0]
0x7066CC: push    ecx
0x7066CD: push    2
0x7066CF: push    esi
0x7066D0: push    eax
0x7066D1: mov     [esp+20h+arg_0], 2
0x7066D9: call    edx
0x7066DB: add     esp, 14h
0x7066DE: cmp     dword ptr [edi+0D8h], 14010002h
0x7066E8: jnb     short loc_70675E
0x7066EA: mov     eax, [edi+21Ch]
0x7066F0: push    1
0x7066F2: lea     ecx, [esp+10h+arg_0]
0x7066F6: push    ecx
0x7066F7: push    4
0x7066F9: lea     edx, [esp+18h+var_4]
0x7066FD: push    edx
0x7066FE: push    eax
0x7066FF: mov     eax, [eax+4]
0x706702: mov     [esp+20h+arg_0], 4
0x70670A: call    eax
0x70670C: mov     cx, [esi]
0x70670F: mov     edx, [esp+20h+var_4]
0x706713: and     cx, 0FFCFh
0x706718: shl     edx, 4
0x70671B: push    1
0x70671D: or      cx, dx
0x706720: lea     eax, [esp+24h+arg_0]
0x706724: push    eax
0x706725: mov     [esi], cx
0x706728: mov     edi, [edi+21Ch]
0x70672E: mov     edx, [edi+4]
0x706731: push    4
0x706733: lea     ecx, [esp+2Ch+var_4]
0x706737: push    ecx
0x706738: push    edi
0x706739: mov     [esp+34h+arg_0], 4
0x706741: call    edx
0x706743: mov     ax, [esi]
0x706746: mov     ecx, [esp+34h+var_4]
0x70674A: and     ax, 0FFF7h
0x70674E: lea     edx, ds:0[ecx*8]
0x706755: add     esp, 28h
0x706758: or      ax, dx
0x70675B: mov     [esi], ax
0x70675E: pop     edi
0x70675F: pop     esi
0x706760: pop     ecx
0x706761: retn    4
