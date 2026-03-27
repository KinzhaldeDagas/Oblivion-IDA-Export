0x90B3C0: sub     esp, 14h
0x90B3C3: push    ebx
0x90B3C4: mov     ebx, large fs:2Ch
0x90B3CB: push    ebp
0x90B3CC: mov     ebp, ds:0BA9DE4h
0x90B3D2: mov     eax, [ebx+ebp*4]
0x90B3D5: mov     ecx, [eax+1A4h]
0x90B3DB: cmp     ecx, [eax+1A8h]
0x90B3E1: push    esi
0x90B3E2: jnb     short loc_90B408
0x90B3E4: mov     esi, eax
0x90B3E6: mov     ecx, [esi+1A4h]
0x90B3EC: mov     dword ptr [ecx], offset aTthkbvagent; "TthkBvAgent"
0x90B3F2: rdtsc
0x90B3F4: mov     [esp+20h+var_14], eax
0x90B3F8: mov     edx, [esp+20h+var_14]
0x90B3FC: mov     [ecx+4], edx
0x90B3FF: add     ecx, 0Ch
0x90B402: mov     [esi+1A4h], ecx
0x90B408: mov     eax, [esp+20h+arg_0]
0x90B40C: mov     ecx, [eax+8]
0x90B40F: mov     edx, [eax]
0x90B411: mov     [esp+20h+var_4], eax
0x90B415: mov     [esp+20h+var_8], ecx
0x90B419: mov     ecx, [edx+0Ch]
0x90B41C: mov     eax, [eax+4]
0x90B41F: mov     [esp+20h+var_C], eax
0x90B423: mov     [esp+20h+var_10], ecx
0x90B427: mov     edx, [ecx]
0x90B429: push    edi
0x90B42A: call    dword ptr [edx+8]
0x90B42D: mov     edi, [esp+24h+arg_4]
0x90B431: mov     ecx, [edi]
0x90B433: mov     esi, eax
0x90B435: mov     eax, [ecx]
0x90B437: call    dword ptr [eax+8]
0x90B43A: mov     edx, [esp+24h+arg_8]
0x90B43E: mov     ecx, [edx]
0x90B440: shl     esi, 5
0x90B443: add     esi, ecx
0x90B445: movzx   eax, byte ptr [esi+eax+190h]
0x90B44D: mov     esi, [esp+24h+arg_C]
0x90B451: push    esi
0x90B452: push    edx
0x90B453: lea     edx, [esp+2Ch+var_10]
0x90B457: push    edi
0x90B458: lea     eax, [eax+eax*4]
0x90B45B: push    edx
0x90B45C: call    dword ptr [ecx+eax*4+994h]
0x90B463: mov     eax, [ebx+ebp*4]
0x90B466: mov     ecx, [eax+1A4h]
0x90B46C: mov     edx, [eax+1A8h]
0x90B472: add     esp, 10h
0x90B475: cmp     ecx, edx
0x90B477: pop     edi
0x90B478: jnb     short loc_90B49E
0x90B47A: mov     ebx, eax
0x90B47C: mov     ecx, [ebx+1A4h]
0x90B482: mov     dword ptr [ecx], offset aEt; "Et"
0x90B488: rdtsc
0x90B48A: mov     [esp+20h+arg_0], eax
0x90B48E: mov     edx, [esp+20h+arg_0]
0x90B492: mov     [ecx+4], edx
0x90B495: add     ecx, 0Ch
0x90B498: mov     [ebx+1A4h], ecx
0x90B49E: pop     esi
0x90B49F: pop     ebp
0x90B4A0: pop     ebx
0x90B4A1: add     esp, 14h
0x90B4A4: retn
