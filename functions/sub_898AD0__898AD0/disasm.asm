0x898AD0: push    esi
0x898AD1: mov     esi, [ecx+14Ch]
0x898AD7: xor     eax, eax
0x898AD9: test    esi, esi
0x898ADB: push    edi
0x898ADC: jle     short loc_898AF4
0x898ADE: mov     edx, [ecx+148h]
0x898AE4: mov     edi, [esp+8+arg_0]
0x898AE8: cmp     [edx], edi
0x898AEA: jz      short loc_898B09
0x898AEC: inc     eax
0x898AED: add     edx, 4
0x898AF0: cmp     eax, esi
0x898AF2: jl      short loc_898AE8
0x898AF4: mov     edx, [ecx+148h]
0x898AFA: pop     edi
0x898AFB: or      eax, 0FFFFFFFFh
0x898AFE: pop     esi
0x898AFF: mov     dword ptr [edx+eax*4], 0
0x898B06: retn    4
0x898B09: mov     ecx, [ecx+148h]
0x898B0F: pop     edi
0x898B10: pop     esi
0x898B11: mov     dword ptr [ecx+eax*4], 0
0x898B18: retn    4
