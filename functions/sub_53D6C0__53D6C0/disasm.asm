0x53D6C0: push    ecx
0x53D6C1: push    ebx
0x53D6C2: mov     ebx, ds:0A2807Ch
0x53D6C8: push    esi
0x53D6C9: mov     esi, ecx
0x53D6CB: mov     eax, [esi+8]
0x53D6CE: test    eax, eax
0x53D6D0: push    edi
0x53D6D1: jz      short loc_53D72E
0x53D6D3: mov     ecx, [esi+0Ch]
0x53D6D6: mov     edx, [ecx]
0x53D6D8: mov     edx, [edx+88h]
0x53D6DE: push    eax
0x53D6DF: lea     eax, [esp+14h+var_4]
0x53D6E3: push    eax
0x53D6E4: call    edx
0x53D6E6: mov     eax, dword ptr [esp+10h+var_4]
0x53D6EA: test    eax, eax
0x53D6EC: jz      short loc_53D708
0x53D6EE: mov     edi, eax
0x53D6F0: add     eax, 4
0x53D6F3: push    eax; lpAddend
0x53D6F4: call    ebx ; InterlockedDecrement
0x53D6F6: test    eax, eax
0x53D6F8: jnz     short loc_53D708
0x53D6FA: test    edi, edi
0x53D6FC: jz      short loc_53D708
0x53D6FE: mov     eax, [edi]
0x53D700: mov     edx, [eax]
0x53D702: push    1
0x53D704: mov     ecx, edi
0x53D706: call    edx
0x53D708: mov     edi, [esi+8]
0x53D70B: test    edi, edi
0x53D70D: jz      short loc_53D72E
0x53D70F: lea     eax, [edi+4]
0x53D712: push    eax; lpAddend
0x53D713: call    ebx ; InterlockedDecrement
0x53D715: test    eax, eax
0x53D717: jnz     short loc_53D727
0x53D719: test    edi, edi
0x53D71B: jz      short loc_53D727
0x53D71D: mov     edx, [edi]
0x53D71F: mov     eax, [edx]
0x53D721: push    1
0x53D723: mov     ecx, edi
0x53D725: call    eax
0x53D727: mov     dword ptr [esi+8], 0
0x53D72E: mov     eax, [esi+4]
0x53D731: test    eax, eax
0x53D733: jz      short loc_53D790
0x53D735: mov     ecx, [esi+0Ch]
0x53D738: mov     edx, [ecx]
0x53D73A: mov     edx, [edx+88h]
0x53D740: push    eax
0x53D741: lea     eax, [esp+14h+var_4]
0x53D745: push    eax
0x53D746: call    edx
0x53D748: mov     eax, dword ptr [esp+10h+var_4]
0x53D74C: test    eax, eax
0x53D74E: jz      short loc_53D76A
0x53D750: mov     edi, eax
0x53D752: add     eax, 4
0x53D755: push    eax; lpAddend
0x53D756: call    ebx ; InterlockedDecrement
0x53D758: test    eax, eax
0x53D75A: jnz     short loc_53D76A
0x53D75C: test    edi, edi
0x53D75E: jz      short loc_53D76A
0x53D760: mov     eax, [edi]
0x53D762: mov     edx, [eax]
0x53D764: push    1
0x53D766: mov     ecx, edi
0x53D768: call    edx
0x53D76A: mov     edi, [esi+4]
0x53D76D: test    edi, edi
0x53D76F: jz      short loc_53D790
0x53D771: lea     eax, [edi+4]
0x53D774: push    eax; lpAddend
0x53D775: call    ebx ; InterlockedDecrement
0x53D777: test    eax, eax
0x53D779: jnz     short loc_53D789
0x53D77B: test    edi, edi
0x53D77D: jz      short loc_53D789
0x53D77F: mov     edx, [edi]
0x53D781: mov     eax, [edx]
0x53D783: push    1
0x53D785: mov     ecx, edi
0x53D787: call    eax
0x53D789: mov     dword ptr [esi+4], 0
0x53D790: pop     edi
0x53D791: pop     esi
0x53D792: pop     ebx
0x53D793: pop     ecx
0x53D794: retn
