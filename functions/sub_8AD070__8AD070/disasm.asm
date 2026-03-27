0x8AD070: push    ebp
0x8AD071: mov     ebp, esp
0x8AD073: and     esp, 0FFFFFFF0h
0x8AD076: sub     esp, 1A4h
0x8AD07C: push    ebx
0x8AD07D: mov     ebx, [ebp+arg_0]
0x8AD080: mov     dword ptr [ebx+14h], 0
0x8AD087: mov     dword ptr [ebx+4], 7F7FFFFFh
0x8AD08E: push    esi
0x8AD08F: mov     esi, ecx
0x8AD091: mov     eax, [esi+30h]
0x8AD094: fld     dword ptr [esi+5Ch]
0x8AD097: mov     ecx, [eax+8]
0x8AD09A: fadd    dword ptr [esi+58h]
0x8AD09D: push    edi
0x8AD09E: mov     edi, [ecx+74h]
0x8AD0A1: mov     edx, [edi+8]
0x8AD0A4: fadd    dword ptr [edi+8]
0x8AD0A7: push    ebx
0x8AD0A8: mov     [esp+1B4h+var_1A4], edx
0x8AD0AC: fstp    dword ptr [edi+8]
0x8AD0AF: mov     ecx, [esi+30h]
0x8AD0B2: mov     eax, [ecx]
0x8AD0B4: call    dword ptr [eax+34h]
0x8AD0B7: mov     ecx, [esp+1B0h+var_1A4]
0x8AD0BB: mov     [edi+8], ecx
0x8AD0BE: mov     eax, [esi]
0x8AD0C0: lea     ecx, [esp+1B0h+var_1A0]
0x8AD0C4: push    ecx
0x8AD0C5: lea     edx, [esp+1B4h+var_180]
0x8AD0C9: mov     edi, offset ??_7hkAllCdPointCollector@@6B@; const hkAllCdPointCollector::`vftable'
0x8AD0CE: push    ebx
0x8AD0CF: mov     ecx, esi
0x8AD0D1: mov     [esp+1B8h+var_1A0], edi
0x8AD0D5: mov     [esp+1B8h+var_190], edx
0x8AD0D9: mov     [esp+1B8h+var_188], 80000008h
0x8AD0E1: mov     [esp+1B8h+var_18C], 0
0x8AD0E9: mov     [esp+1B8h+var_19C], 7F7FFFFFh
0x8AD0F1: call    dword ptr [eax+8]
0x8AD0F4: mov     eax, [esp+1B0h+var_188]
0x8AD0F8: test    eax, eax
0x8AD0FA: mov     [esp+1B0h+var_1A0], edi
0x8AD0FE: js      short loc_8AD138
0x8AD100: mov     ecx, large fs:2Ch
0x8AD107: mov     edx, ds:0BA9DE4h
0x8AD10D: mov     edx, [ecx+edx*4]
0x8AD110: mov     ecx, [edx+19Ch]
0x8AD116: test    ecx, ecx
0x8AD118: jnz     short loc_8AD120
0x8AD11A: mov     ecx, ds:0BA7D9Ch
0x8AD120: mov     edx, [esp+1B0h+var_190]
0x8AD124: and     eax, 3FFFFFFFh
0x8AD129: lea     eax, [eax+eax*2]
0x8AD12C: push    14h
0x8AD12E: shl     eax, 4
0x8AD131: push    eax
0x8AD132: push    edx
0x8AD133: call    sub_8A75D0
0x8AD138: pop     edi
0x8AD139: pop     esi
0x8AD13A: pop     ebx
0x8AD13B: mov     esp, ebp
0x8AD13D: pop     ebp
0x8AD13E: retn    4
