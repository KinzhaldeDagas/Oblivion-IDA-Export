0x7B7170: push    0FFFFFFFFh
0x7B7172: push    offset SEH_7B7170
0x7B7177: mov     eax, large fs:0
0x7B717D: push    eax
0x7B717E: push    ecx
0x7B717F: push    ebp
0x7B7180: push    esi
0x7B7181: push    edi
0x7B7182: mov     eax, ds:0B30AACh
0x7B7187: xor     eax, esp
0x7B7189: push    eax
0x7B718A: lea     eax, [esp+20h+var_C]
0x7B718E: mov     large fs:0, eax
0x7B7194: mov     edi, ecx
0x7B7196: mov     [esp+20h+var_10], edi
0x7B719A: mov     esi, [edi]
0x7B719C: test    esi, esi
0x7B719E: mov     ebp, ds:0A2807Ch
0x7B71A4: mov     [esp+20h+var_4], 1
0x7B71AC: jz      short loc_7B71CC
0x7B71AE: lea     eax, [esi+4]
0x7B71B1: push    eax; lpAddend
0x7B71B2: call    ebp ; InterlockedDecrement
0x7B71B4: test    eax, eax
0x7B71B6: jnz     short loc_7B71C6
0x7B71B8: test    esi, esi
0x7B71BA: jz      short loc_7B71C6
0x7B71BC: mov     edx, [esi]
0x7B71BE: mov     eax, [edx]
0x7B71C0: push    1
0x7B71C2: mov     ecx, esi
0x7B71C4: call    eax
0x7B71C6: mov     dword ptr [edi], 0
0x7B71CC: mov     esi, [edi+4]
0x7B71CF: test    esi, esi
0x7B71D1: jz      short loc_7B71F2
0x7B71D3: lea     ecx, [esi+4]
0x7B71D6: push    ecx; lpAddend
0x7B71D7: call    ebp ; InterlockedDecrement
0x7B71D9: test    eax, eax
0x7B71DB: jnz     short loc_7B71EB
0x7B71DD: test    esi, esi
0x7B71DF: jz      short loc_7B71EB
0x7B71E1: mov     edx, [esi]
0x7B71E3: mov     eax, [edx]
0x7B71E5: push    1
0x7B71E7: mov     ecx, esi
0x7B71E9: call    eax
0x7B71EB: mov     dword ptr [edi+4], 0
0x7B71F2: mov     esi, [edi+4]
0x7B71F5: test    esi, esi
0x7B71F7: mov     byte ptr [esp+20h+var_4], 0
0x7B71FC: jz      short loc_7B7216
0x7B71FE: lea     ecx, [esi+4]
0x7B7201: push    ecx; lpAddend
0x7B7202: call    ebp ; InterlockedDecrement
0x7B7204: test    eax, eax
0x7B7206: jnz     short loc_7B7216
0x7B7208: test    esi, esi
0x7B720A: jz      short loc_7B7216
0x7B720C: mov     edx, [esi]
0x7B720E: mov     eax, [edx]
0x7B7210: push    1
0x7B7212: mov     ecx, esi
0x7B7214: call    eax
0x7B7216: mov     esi, [edi]
0x7B7218: test    esi, esi
0x7B721A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7B7222: jz      short loc_7B723C
0x7B7224: lea     ecx, [esi+4]
0x7B7227: push    ecx; lpAddend
0x7B7228: call    ebp ; InterlockedDecrement
0x7B722A: test    eax, eax
0x7B722C: jnz     short loc_7B723C
0x7B722E: test    esi, esi
0x7B7230: jz      short loc_7B723C
0x7B7232: mov     edx, [esi]
0x7B7234: mov     eax, [edx]
0x7B7236: push    1
0x7B7238: mov     ecx, esi
0x7B723A: call    eax
0x7B723C: mov     ecx, dword ptr [esp+20h+var_C]
0x7B7240: mov     large fs:0, ecx
0x7B7247: pop     ecx
0x7B7248: pop     edi
0x7B7249: pop     esi
0x7B724A: pop     ebp
0x7B724B: add     esp, 10h
0x7B724E: retn
