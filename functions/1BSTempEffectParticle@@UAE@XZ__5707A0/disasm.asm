0x5707A0: push    0FFFFFFFFh
0x5707A2: push    offset ??1BSTempEffectParticle@@UAE@XZ_SEH
0x5707A7: mov     eax, large fs:0
0x5707AD: push    eax
0x5707AE: sub     esp, 8
0x5707B1: push    ebp
0x5707B2: push    esi
0x5707B3: push    edi
0x5707B4: mov     eax, ds:0B30AACh
0x5707B9: xor     eax, esp
0x5707BB: push    eax
0x5707BC: lea     eax, [esp+24h+var_C]
0x5707C0: mov     large fs:0, eax
0x5707C6: mov     edi, ecx
0x5707C8: mov     [esp+24h+var_10], edi
0x5707CC: mov     dword ptr [edi], offset ??_7BSTempEffectParticle@@6B@; const BSTempEffectParticle::`vftable'
0x5707D2: mov     eax, [edi+1Ch]
0x5707D5: test    eax, eax
0x5707D7: mov     [esp+24h+var_4], 1
0x5707DF: jz      short loc_5707F1
0x5707E1: mov     ecx, ds:0B33A1Ch
0x5707E7: push    1
0x5707E9: push    0
0x5707EB: push    eax
0x5707EC: call    QueuedModelLoader_RemoveModel
0x5707F1: mov     eax, [edi+18h]
0x5707F4: test    eax, eax
0x5707F6: mov     ebp, ds:0A2807Ch
0x5707FC: jz      short loc_570839
0x5707FE: cmp     dword ptr [eax+1Ch], 0
0x570802: jz      short loc_570839
0x570804: mov     ecx, [eax+1Ch]
0x570807: mov     edx, [ecx]
0x570809: mov     edx, [edx+88h]
0x57080F: push    eax
0x570810: lea     eax, [esp+28h+var_14]
0x570814: push    eax
0x570815: call    edx
0x570817: mov     eax, dword ptr [esp+24h+var_14]
0x57081B: test    eax, eax
0x57081D: jz      short loc_570839
0x57081F: mov     esi, eax
0x570821: add     eax, 4
0x570824: push    eax; lpAddend
0x570825: call    ebp ; InterlockedDecrement
0x570827: test    eax, eax
0x570829: jnz     short loc_570839
0x57082B: test    esi, esi
0x57082D: jz      short loc_570839
0x57082F: mov     eax, [esi]
0x570831: mov     edx, [eax]
0x570833: push    1
0x570835: mov     ecx, esi
0x570837: call    edx
0x570839: mov     esi, [edi+18h]
0x57083C: test    esi, esi
0x57083E: jz      short loc_57085F
0x570840: lea     eax, [esi+4]
0x570843: push    eax; lpAddend
0x570844: call    ebp ; InterlockedDecrement
0x570846: test    eax, eax
0x570848: jnz     short loc_570858
0x57084A: test    esi, esi
0x57084C: jz      short loc_570858
0x57084E: mov     edx, [esi]
0x570850: mov     eax, [edx]
0x570852: push    1
0x570854: mov     ecx, esi
0x570856: call    eax
0x570858: mov     dword ptr [edi+18h], 0
0x57085F: mov     esi, [edi+18h]
0x570862: test    esi, esi
0x570864: mov     byte ptr [esp+24h+var_4], 0
0x570869: jz      short loc_570883
0x57086B: lea     ecx, [esi+4]
0x57086E: push    ecx; lpAddend
0x57086F: call    ebp ; InterlockedDecrement
0x570871: test    eax, eax
0x570873: jnz     short loc_570883
0x570875: test    esi, esi
0x570877: jz      short loc_570883
0x570879: mov     edx, [esi]
0x57087B: mov     eax, [edx]
0x57087D: push    1
0x57087F: mov     ecx, esi
0x570881: call    eax
0x570883: mov     ecx, edi
0x570885: mov     [esp+24h+var_4], 0FFFFFFFFh
0x57088D: call    BSTempEffect_destr
0x570892: mov     ecx, dword ptr [esp+24h+var_C]
0x570896: mov     large fs:0, ecx
0x57089D: pop     ecx
0x57089E: pop     edi
0x57089F: pop     esi
0x5708A0: pop     ebp
0x5708A1: add     esp, 14h
0x5708A4: retn
