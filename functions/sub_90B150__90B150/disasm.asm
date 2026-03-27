0x90B150: mov     ecx, large fs:2Ch
0x90B157: mov     edx, ds:0BA9DE4h
0x90B15D: mov     eax, [ecx+edx*4]
0x90B160: sub     esp, 18h
0x90B163: push    esi
0x90B164: mov     esi, [eax+1A4h]
0x90B16A: push    edi
0x90B16B: cmp     esi, [eax+1A8h]
0x90B171: jnb     short loc_90B19E
0x90B173: mov     esi, eax
0x90B175: mov     ecx, [esi+1A4h]
0x90B17B: mov     dword ptr [ecx], offset aLthkbvagent; "LthkBvAgent"
0x90B181: mov     dword ptr [ecx+0Ch], offset aCheckbvshape; "checkBvShape"
0x90B188: rdtsc
0x90B18A: mov     [esp+20h+var_18], eax
0x90B18E: mov     eax, [esp+20h+var_18]
0x90B192: mov     [ecx+4], eax
0x90B195: add     ecx, 10h
0x90B198: mov     [esi+1A4h], ecx
0x90B19E: mov     eax, [esp+20h+arg_0]
0x90B1A2: mov     ecx, [eax+8]
0x90B1A5: push    ebx
0x90B1A6: mov     ebx, [eax]
0x90B1A8: mov     [esp+24h+var_4], eax
0x90B1AC: mov     [esp+24h+var_8], ecx
0x90B1B0: mov     ecx, [ebx+0Ch]
0x90B1B3: mov     edx, [eax+4]
0x90B1B6: mov     [esp+24h+var_C], edx
0x90B1BA: mov     [esp+24h+var_10], ecx
0x90B1BE: mov     eax, [ecx]
0x90B1C0: push    ebp
0x90B1C1: call    dword ptr [eax+8]
0x90B1C4: mov     ebp, [esp+28h+arg_4]
0x90B1C8: mov     ecx, [ebp+0]
0x90B1CB: mov     edx, [ecx]
0x90B1CD: mov     esi, eax
0x90B1CF: call    dword ptr [edx+8]
0x90B1D2: mov     edi, [esp+28h+arg_8]
0x90B1D6: mov     ecx, eax
0x90B1D8: mov     eax, [edi]
0x90B1DA: mov     [esp+28h+arg_4], ecx
0x90B1DE: shl     esi, 5
0x90B1E1: add     esi, eax
0x90B1E3: movzx   ecx, byte ptr [esi+ecx+190h]
0x90B1EB: lea     edx, [esp+28h+var_18]
0x90B1EF: push    edx
0x90B1F0: lea     ecx, [ecx+ecx*4]
0x90B1F3: mov     eax, [eax+ecx*4+994h]
0x90B1FA: push    edi
0x90B1FB: lea     ecx, [esp+30h+var_10]
0x90B1FF: push    ebp
0x90B200: push    ecx
0x90B201: mov     [esp+38h+var_18], offset off_A9BB84
0x90B209: mov     [esp+38h+var_14], 0
0x90B20E: call    eax
0x90B210: mov     al, [esp+38h+var_14]
0x90B214: mov     esi, large fs:2Ch
0x90B21B: add     esp, 10h
0x90B21E: test    al, al
0x90B220: jz      loc_90B2AB
0x90B226: mov     ecx, ds:0BA9DE4h
0x90B22C: mov     eax, [esi+ecx*4]
0x90B22F: mov     edx, [eax+1A4h]
0x90B235: cmp     edx, [eax+1A8h]
0x90B23B: jnb     short loc_90B268
0x90B23D: mov     esi, eax
0x90B23F: mov     ecx, [esi+1A4h]
0x90B245: mov     dword ptr [ecx], offset aStchild; "Stchild"
0x90B24B: rdtsc
0x90B24D: mov     [esp+28h+arg_0], eax
0x90B251: mov     eax, [esp+28h+arg_0]
0x90B255: mov     [ecx+4], eax
0x90B258: add     ecx, 0Ch
0x90B25B: mov     [esi+1A4h], ecx
0x90B261: mov     esi, large fs:2Ch
0x90B268: mov     edx, [esp+28h+var_4]
0x90B26C: mov     ecx, [ebx+10h]
0x90B26F: mov     eax, [edx+4]
0x90B272: mov     [esp+28h+var_C], eax
0x90B276: mov     [esp+28h+var_10], ecx
0x90B27A: mov     edx, [ecx]
0x90B27C: call    dword ptr [edx+8]
0x90B27F: mov     ecx, [edi]
0x90B281: mov     edx, [esp+28h+arg_4]
0x90B285: shl     eax, 5
0x90B288: add     eax, ecx
0x90B28A: movzx   eax, byte ptr [eax+edx+190h]
0x90B292: mov     edx, [esp+28h+arg_C]
0x90B296: push    edx
0x90B297: push    edi
0x90B298: lea     edx, [esp+30h+var_10]
0x90B29C: push    ebp
0x90B29D: lea     eax, [eax+eax*4]
0x90B2A0: push    edx
0x90B2A1: call    dword ptr [ecx+eax*4+998h]
0x90B2A8: add     esp, 10h
0x90B2AB: mov     ecx, ds:0BA9DE4h
0x90B2B1: mov     eax, [esi+ecx*4]
0x90B2B4: mov     edx, [eax+1A4h]
0x90B2BA: cmp     edx, [eax+1A8h]
0x90B2C0: pop     ebp
0x90B2C1: pop     ebx
0x90B2C2: jnb     short loc_90B2E8
0x90B2C4: mov     esi, eax
0x90B2C6: mov     ecx, [esi+1A4h]
0x90B2CC: mov     dword ptr [ecx], offset aLt_0; "lt"
0x90B2D2: rdtsc
0x90B2D4: mov     [esp+20h+arg_0], eax
0x90B2D8: mov     eax, [esp+20h+arg_0]
0x90B2DC: mov     [ecx+4], eax
0x90B2DF: add     ecx, 0Ch
0x90B2E2: mov     [esi+1A4h], ecx
0x90B2E8: pop     edi
0x90B2E9: pop     esi
0x90B2EA: add     esp, 18h
0x90B2ED: retn
