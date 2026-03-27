0x7291E0: push    0FFFFFFFFh
0x7291E2: push    offset ??1NiPSysResetOnLoopCtlr@@UAE@XZ_SEH
0x7291E7: mov     eax, large fs:0
0x7291ED: push    eax
0x7291EE: push    ecx
0x7291EF: push    ebp
0x7291F0: push    esi
0x7291F1: push    edi
0x7291F2: mov     eax, ds:0B30AACh
0x7291F7: xor     eax, esp
0x7291F9: push    eax
0x7291FA: lea     eax, [esp+20h+var_C]
0x7291FE: mov     large fs:0, eax
0x729204: mov     esi, ecx
0x729206: mov     [esp+20h+var_10], esi
0x72920A: mov     dword ptr [esi], offset ??_7NiGeometryData@@6B@; const NiGeometryData::`vftable'
0x729210: push    esi
0x729211: mov     [esp+24h+var_4], 1
0x729219: call    sub_7014A0
0x72921E: mov     edi, [esi+34h]
0x729221: mov     ebp, ds:0A2807Ch
0x729227: add     esp, 4
0x72922A: test    edi, edi
0x72922C: jz      short loc_72924D
0x72922E: lea     eax, [edi+4]
0x729231: push    eax; lpAddend
0x729232: call    ebp ; InterlockedDecrement
0x729234: test    eax, eax
0x729236: jnz     short loc_729246
0x729238: test    edi, edi
0x72923A: jz      short loc_729246
0x72923C: mov     edx, [edi]
0x72923E: mov     eax, [edx]
0x729240: push    1
0x729242: mov     ecx, edi
0x729244: call    eax
0x729246: mov     dword ptr [esi+34h], 0
0x72924D: mov     eax, ds:0B3FE00h
0x729252: test    eax, eax
0x729254: jz      loc_7292FB
0x72925A: cmp     dword ptr [esi+1Ch], 0
0x72925E: jz      short loc_729283
0x729260: add     dword ptr [eax+0Ch], 0FFFFFFFFh
0x729264: mov     edi, eax
0x729266: add     eax, 0Ch
0x729269: cmp     dword ptr [eax], 0
0x72926C: jnz     short loc_72927E
0x72926E: mov     ecx, edi
0x729270: call    sub_732A20
0x729275: push    edi
0x729276: call    FormHeapFree
0x72927B: add     esp, 4
0x72927E: mov     eax, ds:0B3FE00h
0x729283: cmp     dword ptr [esi+20h], 0
0x729287: jz      short loc_7292AC
0x729289: add     dword ptr [eax+0Ch], 0FFFFFFFFh
0x72928D: mov     edi, eax
0x72928F: add     eax, 0Ch
0x729292: cmp     dword ptr [eax], 0
0x729295: jnz     short loc_7292A7
0x729297: mov     ecx, edi
0x729299: call    sub_732A20
0x72929E: push    edi
0x72929F: call    FormHeapFree
0x7292A4: add     esp, 4
0x7292A7: mov     eax, ds:0B3FE00h
0x7292AC: cmp     dword ptr [esi+24h], 0
0x7292B0: jz      short loc_7292D5
0x7292B2: add     dword ptr [eax+0Ch], 0FFFFFFFFh
0x7292B6: mov     edi, eax
0x7292B8: add     eax, 0Ch
0x7292BB: cmp     dword ptr [eax], 0
0x7292BE: jnz     short loc_7292D0
0x7292C0: mov     ecx, edi
0x7292C2: call    sub_732A20
0x7292C7: push    edi
0x7292C8: call    FormHeapFree
0x7292CD: add     esp, 4
0x7292D0: mov     eax, ds:0B3FE00h
0x7292D5: cmp     dword ptr [esi+28h], 0
0x7292D9: jz      short loc_729322
0x7292DB: add     dword ptr [eax+0Ch], 0FFFFFFFFh
0x7292DF: mov     edi, eax
0x7292E1: add     eax, 0Ch
0x7292E4: cmp     dword ptr [eax], 0
0x7292E7: jnz     short loc_729322
0x7292E9: mov     ecx, edi
0x7292EB: call    sub_732A20
0x7292F0: push    edi
0x7292F1: call    FormHeapFree
0x7292F6: add     esp, 4
0x7292F9: jmp     short loc_729322
0x7292FB: mov     eax, [esi+1Ch]
0x7292FE: push    eax
0x7292FF: call    FormHeapFree
0x729304: mov     eax, [esi+20h]
0x729307: push    eax
0x729308: call    FormHeapFree
0x72930D: mov     eax, [esi+24h]
0x729310: push    eax
0x729311: call    FormHeapFree
0x729316: mov     eax, [esi+28h]
0x729319: push    eax
0x72931A: call    FormHeapFree
0x72931F: add     esp, 10h
0x729322: mov     edi, [esi+34h]
0x729325: test    edi, edi
0x729327: mov     byte ptr [esp+20h+var_4], 0
0x72932C: jz      short loc_729346
0x72932E: lea     ecx, [edi+4]
0x729331: push    ecx; lpAddend
0x729332: call    ebp ; InterlockedDecrement
0x729334: test    eax, eax
0x729336: jnz     short loc_729346
0x729338: test    edi, edi
0x72933A: jz      short loc_729346
0x72933C: mov     edx, [edi]
0x72933E: mov     eax, [edx]
0x729340: push    1
0x729342: mov     ecx, edi
0x729344: call    eax
0x729346: mov     ecx, esi
0x729348: mov     [esp+20h+var_4], 0FFFFFFFFh
0x729350: call    NiRefObject_destr
0x729355: mov     ecx, [esp+20h+var_C]
0x729359: mov     large fs:0, ecx
0x729360: pop     ecx
0x729361: pop     edi
0x729362: pop     esi
0x729363: pop     ebp
0x729364: add     esp, 10h
0x729367: retn
