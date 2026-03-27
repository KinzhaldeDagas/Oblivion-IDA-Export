0x8C6560: push    ecx
0x8C6561: push    esi
0x8C6562: mov     esi, ecx
0x8C6564: mov     eax, [esi]
0x8C6566: mov     edx, [eax+74h]
0x8C6569: push    edi
0x8C656A: lea     ecx, [esp+0Ch+var_1]
0x8C656E: push    ecx
0x8C656F: mov     ecx, esi
0x8C6571: call    edx
0x8C6573: mov     edi, eax
0x8C6575: xor     eax, eax
0x8C6577: test    edi, edi
0x8C6579: jz      short loc_8C65AA
0x8C657B: mov     eax, [esi]
0x8C657D: mov     edx, [eax+68h]
0x8C6580: mov     ecx, esi
0x8C6582: call    edx
0x8C6584: mov     esi, eax
0x8C6586: mov     eax, [esp+0Ch+arg_0]
0x8C658A: cmp     dword ptr [eax+4], 4
0x8C658E: jnb     short loc_8C6593
0x8C6590: sub     esi, 10h
0x8C6593: mov     eax, [eax+21Ch]
0x8C6599: push    0
0x8C659B: push    0
0x8C659D: push    esi
0x8C659E: push    edi
0x8C659F: push    eax
0x8C65A0: mov     eax, [eax+4]
0x8C65A3: call    eax
0x8C65A5: add     esp, 14h
0x8C65A8: mov     eax, esi
0x8C65AA: pop     edi
0x8C65AB: pop     esi
0x8C65AC: pop     ecx
0x8C65AD: retn    4
