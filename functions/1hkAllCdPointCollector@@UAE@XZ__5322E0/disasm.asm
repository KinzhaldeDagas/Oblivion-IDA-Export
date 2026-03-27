0x5322E0: push    0FFFFFFFFh
0x5322E2: push    offset ??1hkAllCdPointCollector@@UAE@XZ_SEH
0x5322E7: mov     eax, large fs:0
0x5322ED: push    eax
0x5322EE: push    ecx
0x5322EF: push    esi
0x5322F0: mov     eax, ds:0B30AACh
0x5322F5: xor     eax, esp
0x5322F7: push    eax
0x5322F8: lea     eax, [esp+18h+var_C]
0x5322FC: mov     large fs:0, eax
0x532302: mov     esi, ecx
0x532304: mov     [esp+18h+var_10], esi
0x532308: mov     dword ptr [esi], offset ??_7hkAllCdPointCollector@@6B@; const hkAllCdPointCollector::`vftable'
0x53230E: mov     eax, [esi+18h]
0x532311: test    eax, eax
0x532313: mov     [esp+18h+var_4], 0
0x53231B: js      short loc_532354
0x53231D: mov     ecx, ds:0BA9DE4h
0x532323: mov     edx, large fs:2Ch
0x53232A: mov     ecx, [edx+ecx*4]
0x53232D: mov     ecx, [ecx+19Ch]
0x532333: test    ecx, ecx
0x532335: jnz     short loc_53233D
0x532337: mov     ecx, ds:0BA7D9Ch
0x53233D: and     eax, 3FFFFFFFh
0x532342: lea     edx, [eax+eax*2]
0x532345: mov     eax, [esi+10h]
0x532348: push    14h
0x53234A: shl     edx, 4
0x53234D: push    edx
0x53234E: push    eax
0x53234F: call    sub_8A75D0
0x532354: mov     dword ptr [esi], offset ??_7hkCdPointCollector@@6B@; const hkCdPointCollector::`vftable'
0x53235A: mov     ecx, [esp+18h+var_C]
0x53235E: mov     large fs:0, ecx
0x532365: pop     ecx
0x532366: pop     esi
0x532367: add     esp, 10h
0x53236A: retn
