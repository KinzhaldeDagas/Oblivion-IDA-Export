0x73F170: push    0FFFFFFFFh
0x73F172: push    offset SEH_8C8970
0x73F177: mov     eax, large fs:0
0x73F17D: push    eax
0x73F17E: push    ecx
0x73F17F: push    ebx
0x73F180: push    esi
0x73F181: mov     eax, ds:0B30AACh
0x73F186: xor     eax, esp
0x73F188: push    eax
0x73F189: lea     eax, [esp+1Ch+var_C]
0x73F18D: mov     large fs:0, eax
0x73F193: push    5Ch ; '\'; Size
0x73F195: call    FormHeapAlloc
0x73F19A: mov     esi, eax
0x73F19C: add     esp, 4
0x73F19F: mov     [esp+1Ch+var_10], esi
0x73F1A3: xor     ebx, ebx
0x73F1A5: cmp     esi, ebx
0x73F1A7: mov     [esp+1Ch+var_4], ebx
0x73F1AB: jz      short loc_73F1F5
0x73F1AD: mov     ecx, esi
0x73F1AF: call    sub_728770
0x73F1B4: mov     ax, [esi+2Eh]
0x73F1B8: and     ax, 0FFFh
0x73F1BC: or      ax, 8000h
0x73F1C0: mov     [esi+2Eh], ax
0x73F1C4: mov     dword ptr [esi], offset ??_7NiParticlesData@@6B@; const NiParticlesData::`vftable'
0x73F1CA: mov     [esi+44h], ebx
0x73F1CD: mov     [esi+48h], bx
0x73F1D1: mov     [esi+4Ch], ebx
0x73F1D4: mov     [esi+50h], ebx
0x73F1D7: mov     [esi+54h], ebx
0x73F1DA: mov     [esi+58h], ebx
0x73F1DD: mov     byte ptr [esi+40h], 1
0x73F1E1: mov     eax, esi
0x73F1E3: mov     ecx, [esp+1Ch+var_C]
0x73F1E7: mov     large fs:0, ecx
0x73F1EE: pop     ecx
0x73F1EF: pop     esi
0x73F1F0: pop     ebx
0x73F1F1: add     esp, 10h
0x73F1F4: retn
0x73F1F5: xor     eax, eax
0x73F1F7: mov     byte ptr [eax+40h], 1
0x73F1FB: mov     ecx, [esp+1Ch+var_C]
0x73F1FF: mov     large fs:0, ecx
0x73F206: pop     ecx
0x73F207: pop     esi
0x73F208: pop     ebx
0x73F209: add     esp, 10h
0x73F20C: retn
