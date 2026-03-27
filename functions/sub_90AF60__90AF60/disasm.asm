0x90AF60: mov     edx, ds:0BA9DE4h
0x90AF66: sub     esp, 18h
0x90AF69: push    ebx
0x90AF6A: push    ebp
0x90AF6B: push    esi
0x90AF6C: push    edi
0x90AF6D: mov     edi, ecx
0x90AF6F: mov     ecx, large fs:2Ch
0x90AF76: mov     eax, [ecx+edx*4]
0x90AF79: mov     esi, [eax+1A4h]
0x90AF7F: cmp     esi, [eax+1A8h]
0x90AF85: jnb     short loc_90AFB2
0x90AF87: mov     esi, eax
0x90AF89: mov     ecx, [esi+1A4h]
0x90AF8F: mov     dword ptr [ecx], offset aLthkbvagent; "LthkBvAgent"
0x90AF95: mov     dword ptr [ecx+0Ch], offset aCheckbvshape; "checkBvShape"
0x90AF9C: rdtsc
0x90AF9E: mov     [esp+28h+var_18], eax
0x90AFA2: mov     eax, [esp+28h+var_18]
0x90AFA6: mov     [ecx+4], eax
0x90AFA9: add     ecx, 10h
0x90AFAC: mov     [esi+1A4h], ecx
0x90AFB2: mov     eax, [esp+28h+arg_0]
0x90AFB6: mov     ecx, [eax+8]
0x90AFB9: mov     esi, [eax]
0x90AFBB: mov     ebp, [esp+28h+arg_8]
0x90AFBF: mov     ebx, [esp+28h+arg_4]
0x90AFC3: mov     [esp+28h+var_8], ecx
0x90AFC7: mov     [esp+28h+var_4], eax
0x90AFCB: mov     edx, [eax+4]
0x90AFCE: mov     ecx, [esi+0Ch]
0x90AFD1: mov     [esp+28h+var_C], edx
0x90AFD5: lea     edx, [esp+28h+var_18]
0x90AFD9: push    edx
0x90AFDA: push    ebp
0x90AFDB: mov     [esp+30h+var_10], ecx
0x90AFDF: mov     ecx, [edi+0Ch]
0x90AFE2: push    ebx
0x90AFE3: lea     edx, [esp+34h+var_10]
0x90AFE7: mov     [esp+34h+var_18], offset off_A9BB84
0x90AFEF: mov     byte ptr [esp+34h+var_14], 0
0x90AFF4: mov     eax, [ecx]
0x90AFF6: push    edx
0x90AFF7: call    dword ptr [eax+8]
0x90AFFA: mov     al, byte ptr [esp+28h+var_14]
0x90AFFE: test    al, al
0x90B000: jz      loc_90B0E6
0x90B006: mov     ecx, large fs:2Ch
0x90B00D: mov     eax, ds:0BA9DE4h
0x90B012: mov     eax, [ecx+eax*4]
0x90B015: mov     edx, [eax+1A4h]
0x90B01B: cmp     edx, [eax+1A8h]
0x90B021: jnb     short loc_90B055
0x90B023: mov     eax, ds:0BA9DE4h
0x90B028: mov     eax, [ecx+eax*4]
0x90B02B: mov     ecx, [eax+1A4h]
0x90B031: mov     [esp+28h+arg_8], eax
0x90B035: mov     dword ptr [ecx], offset aStchild; "Stchild"
0x90B03B: rdtsc
0x90B03D: mov     [esp+28h+arg_0], eax
0x90B041: mov     edx, [esp+28h+arg_0]
0x90B045: mov     eax, [esp+28h+arg_8]
0x90B049: mov     [ecx+4], edx
0x90B04C: add     ecx, 0Ch
0x90B04F: mov     [eax+1A4h], ecx
0x90B055: mov     edx, [esp+28h+var_4]
0x90B059: mov     eax, [edx+4]
0x90B05C: mov     ecx, [esi+10h]
0x90B05F: mov     [esp+28h+var_C], eax
0x90B063: mov     eax, [edi+10h]
0x90B066: test    eax, eax
0x90B068: mov     [esp+28h+var_10], ecx
0x90B06C: jnz     short loc_90B0CE
0x90B06E: mov     edx, [edi+8]
0x90B071: mov     eax, [ebp+0]
0x90B074: mov     [esp+28h+arg_8], edx
0x90B078: mov     edx, [ecx]
0x90B07A: mov     [esp+28h+arg_0], eax
0x90B07E: call    dword ptr [edx+8]
0x90B081: mov     ecx, [ebx]
0x90B083: mov     esi, eax
0x90B085: mov     eax, [ecx]
0x90B087: call    dword ptr [eax+8]
0x90B08A: mov     cl, [ebp+0Ch]
0x90B08D: test    cl, cl
0x90B08F: mov     ecx, [esp+28h+arg_0]
0x90B093: jz      short loc_90B09D
0x90B095: add     ecx, 590h
0x90B09B: jmp     short loc_90B0A3
0x90B09D: add     ecx, 190h
0x90B0A3: mov     edx, [esp+28h+arg_0]
0x90B0A7: shl     esi, 5
0x90B0AA: add     esi, ecx
0x90B0AC: movzx   eax, byte ptr [esi+eax]
0x90B0B0: lea     ecx, [eax+eax*4]
0x90B0B3: mov     eax, [edx+ecx*4+990h]
0x90B0BA: mov     ecx, [esp+28h+arg_8]
0x90B0BE: push    ecx
0x90B0BF: push    ebp
0x90B0C0: lea     edx, [esp+30h+var_10]
0x90B0C4: push    ebx
0x90B0C5: push    edx
0x90B0C6: call    eax
0x90B0C8: add     esp, 10h
0x90B0CB: mov     [edi+10h], eax
0x90B0CE: mov     ecx, [esp+28h+arg_C]
0x90B0D2: mov     edi, [edi+10h]
0x90B0D5: mov     eax, [edi]
0x90B0D7: push    ecx
0x90B0D8: push    ebp
0x90B0D9: push    ebx
0x90B0DA: lea     edx, [esp+34h+var_10]
0x90B0DE: push    edx
0x90B0DF: mov     ecx, edi
0x90B0E1: call    dword ptr [eax+0Ch]
0x90B0E4: jmp     short loc_90B0F9
0x90B0E6: mov     ecx, [edi+10h]
0x90B0E9: test    ecx, ecx
0x90B0EB: jz      short loc_90B0F9
0x90B0ED: mov     eax, [ecx]
0x90B0EF: call    dword ptr [eax+18h]
0x90B0F2: mov     dword ptr [edi+10h], 0
0x90B0F9: mov     ecx, large fs:2Ch
0x90B100: mov     edx, ds:0BA9DE4h
0x90B106: mov     eax, [ecx+edx*4]
0x90B109: mov     esi, [eax+1A4h]
0x90B10F: cmp     esi, [eax+1A8h]
0x90B115: jnb     short loc_90B13B
0x90B117: mov     esi, eax
0x90B119: mov     ecx, [esi+1A4h]
0x90B11F: mov     dword ptr [ecx], offset aLt_0; "lt"
0x90B125: rdtsc
0x90B127: mov     [esp+28h+arg_0], eax
0x90B12B: mov     edx, [esp+28h+arg_0]
0x90B12F: mov     [ecx+4], edx
0x90B132: add     ecx, 0Ch
0x90B135: mov     [esi+1A4h], ecx
0x90B13B: pop     edi
0x90B13C: pop     esi
0x90B13D: pop     ebp
0x90B13E: pop     ebx
0x90B13F: add     esp, 18h
0x90B142: retn    10h
