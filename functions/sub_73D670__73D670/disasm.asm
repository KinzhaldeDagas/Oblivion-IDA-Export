0x73D670: push    0FFFFFFFFh
0x73D672: push    offset SEH_8C62B0
0x73D677: mov     eax, large fs:0
0x73D67D: push    eax
0x73D67E: push    ecx
0x73D67F: push    esi
0x73D680: mov     eax, ds:0B30AACh
0x73D685: xor     eax, esp
0x73D687: push    eax
0x73D688: lea     eax, [esp+18h+var_C]
0x73D68C: mov     large fs:0, eax
0x73D692: push    1Ch; Size
0x73D694: call    FormHeapAlloc
0x73D699: mov     esi, eax
0x73D69B: add     esp, 4
0x73D69E: mov     [esp+18h+var_10], esi
0x73D6A2: test    esi, esi
0x73D6A4: mov     [esp+18h+var_4], 0
0x73D6AC: jz      short loc_73D6D4
0x73D6AE: mov     ecx, esi; this
0x73D6B0: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x73D6B5: mov     dword ptr [esi], offset ??_7NiSpecularProperty@@6B@; const NiSpecularProperty::`vftable'
0x73D6BB: mov     word ptr [esi+18h], 0
0x73D6C1: mov     eax, esi
0x73D6C3: mov     ecx, [esp+18h+var_C]
0x73D6C7: mov     large fs:0, ecx
0x73D6CE: pop     ecx
0x73D6CF: pop     esi
0x73D6D0: add     esp, 10h
0x73D6D3: retn
0x73D6D4: xor     eax, eax
0x73D6D6: mov     ecx, [esp+18h+var_C]
0x73D6DA: mov     large fs:0, ecx
0x73D6E1: pop     ecx
0x73D6E2: pop     esi
0x73D6E3: add     esp, 10h
0x73D6E6: retn
