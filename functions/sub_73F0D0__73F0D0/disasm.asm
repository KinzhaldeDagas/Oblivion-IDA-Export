0x73F0D0: push    0FFFFFFFFh
0x73F0D2: push    offset SEH_8C8970
0x73F0D7: mov     eax, large fs:0
0x73F0DD: push    eax
0x73F0DE: push    ecx
0x73F0DF: push    ebx
0x73F0E0: push    esi
0x73F0E1: mov     eax, ds:0B30AACh
0x73F0E6: xor     eax, esp
0x73F0E8: push    eax
0x73F0E9: lea     eax, [esp+1Ch+var_C]
0x73F0ED: mov     large fs:0, eax
0x73F0F3: push    5Ch ; '\'; Size
0x73F0F5: call    FormHeapAlloc
0x73F0FA: mov     esi, eax
0x73F0FC: add     esp, 4
0x73F0FF: mov     [esp+1Ch+var_10], esi
0x73F103: xor     ebx, ebx
0x73F105: cmp     esi, ebx
0x73F107: mov     [esp+1Ch+var_4], ebx
0x73F10B: jz      short loc_73F154
0x73F10D: mov     ecx, esi
0x73F10F: call    sub_728770
0x73F114: mov     ax, [esi+2Eh]
0x73F118: and     ax, 0FFFh
0x73F11C: or      ax, 8000h
0x73F120: mov     [esi+2Eh], ax
0x73F124: mov     dword ptr [esi], offset ??_7NiParticlesData@@6B@; const NiParticlesData::`vftable'
0x73F12A: mov     [esi+44h], ebx
0x73F12D: mov     [esi+48h], bx
0x73F131: mov     [esi+4Ch], ebx
0x73F134: mov     [esi+50h], ebx
0x73F137: mov     [esi+54h], ebx
0x73F13A: mov     [esi+58h], ebx
0x73F13D: mov     [esi+40h], bl
0x73F140: mov     eax, esi
0x73F142: mov     ecx, [esp+1Ch+var_C]
0x73F146: mov     large fs:0, ecx
0x73F14D: pop     ecx
0x73F14E: pop     esi
0x73F14F: pop     ebx
0x73F150: add     esp, 10h
0x73F153: retn
0x73F154: xor     eax, eax
0x73F156: mov     ecx, [esp+1Ch+var_C]
0x73F15A: mov     large fs:0, ecx
0x73F161: pop     ecx
0x73F162: pop     esi
0x73F163: pop     ebx
0x73F164: add     esp, 10h
0x73F167: retn
