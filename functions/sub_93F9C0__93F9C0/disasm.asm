0x93F9C0: push    ebp
0x93F9C1: mov     ebp, esp
0x93F9C3: and     esp, 0FFFFFFF0h
0x93F9C6: sub     esp, 0B4h
0x93F9CC: push    ebx
0x93F9CD: mov     ebx, ds:0BA9DE4h
0x93F9D3: push    esi
0x93F9D4: push    edi
0x93F9D5: mov     edi, large fs:2Ch
0x93F9DC: mov     eax, [edi+ebx*4]
0x93F9DF: mov     edx, [eax+1A8h]
0x93F9E5: mov     [esp+0C0h+var_AC], ecx
0x93F9E9: mov     ecx, [eax+1A4h]
0x93F9EF: cmp     ecx, edx
0x93F9F1: jnb     short loc_93FA17
0x93F9F3: mov     esi, eax
0x93F9F5: mov     ecx, [esi+1A4h]
0x93F9FB: mov     dword ptr [ecx], offset aTtgsk; "TtGsk"
0x93FA01: rdtsc
0x93FA03: mov     [esp+0C0h+var_94], eax
0x93FA07: mov     edx, [esp+0C0h+var_94]
0x93FA0B: mov     [ecx+4], edx
0x93FA0E: add     ecx, 0Ch
0x93FA11: mov     [esi+1A4h], ecx
0x93FA17: mov     eax, [ebp+arg_4]
0x93FA1A: mov     ecx, [eax+8]
0x93FA1D: mov     esi, [ebp+arg_0]
0x93FA20: mov     edx, [esi+8]
0x93FA23: push    ecx
0x93FA24: push    edx
0x93FA25: lea     ecx, [esp+0C8h+var_40]
0x93FA2C: call    sub_8B1FF0
0x93FA31: mov     eax, [esi]
0x93FA33: mov     ecx, [ebp+arg_4]
0x93FA36: mov     edx, [ecx]
0x93FA38: mov     ecx, [esi+8]
0x93FA3B: mov     [esp+0C0h+var_A0], eax
0x93FA3F: mov     [esp+0C0h+var_9C], edx
0x93FA43: mov     edx, [ebp+arg_8]
0x93FA46: lea     eax, [esp+0C0h+var_40]
0x93FA4D: mov     [esp+0C0h+var_A8], eax
0x93FA51: mov     eax, [edx+8]
0x93FA54: mov     [esp+0C0h+var_A4], ecx
0x93FA58: mov     [esp+0C0h+var_98], eax
0x93FA5C: mov     eax, [esp+0C0h+var_AC]
0x93FA60: lea     ecx, [esp+0C0h+var_90]
0x93FA64: push    ecx
0x93FA65: lea     edx, [esp+0C4h+var_80]
0x93FA69: push    edx
0x93FA6A: add     eax, 0Ch
0x93FA6D: push    eax
0x93FA6E: lea     ecx, [esp+0CCh+var_A8]
0x93FA72: push    ecx
0x93FA73: call    sub_93D4A0
0x93FA78: add     esp, 10h
0x93FA7B: test    eax, eax
0x93FA7D: jnz     short loc_93FAAB
0x93FA7F: mov     edx, [ebp+arg_4]
0x93FA82: movaps  xmm0, [esp+0C0h+var_90]
0x93FA87: mov     ecx, [ebp+arg_C]
0x93FA8A: mov     eax, [ecx]
0x93FA8C: mov     [esp+0C0h+var_4C], edx
0x93FA90: lea     edx, [esp+0C0h+var_70]
0x93FA94: movaps  [esp+0C0h+var_70], xmm0
0x93FA99: movaps  xmm0, [esp+0C0h+var_80]
0x93FA9E: push    edx
0x93FA9F: mov     [esp+0C4h+var_50], esi
0x93FAA3: movaps  [esp+0C4h+var_60], xmm0
0x93FAA8: call    dword ptr [eax+4]
0x93FAAB: mov     eax, [edi+ebx*4]
0x93FAAE: mov     ecx, [eax+1A4h]
0x93FAB4: cmp     ecx, [eax+1A8h]
0x93FABA: jnb     short loc_93FAE0
0x93FABC: mov     esi, eax
0x93FABE: mov     ecx, [esi+1A4h]
0x93FAC4: mov     dword ptr [ecx], offset aEt; "Et"
0x93FACA: rdtsc
0x93FACC: mov     [esp+0C0h+var_AC], eax
0x93FAD0: mov     edx, [esp+0C0h+var_AC]
0x93FAD4: mov     [ecx+4], edx
0x93FAD7: add     ecx, 0Ch
0x93FADA: mov     [esi+1A4h], ecx
0x93FAE0: pop     edi
0x93FAE1: pop     esi
0x93FAE2: pop     ebx
0x93FAE3: mov     esp, ebp
0x93FAE5: pop     ebp
0x93FAE6: retn    10h
