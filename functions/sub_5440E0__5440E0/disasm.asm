0x5440E0: push    ecx
0x5440E1: push    esi
0x5440E2: mov     esi, ecx
0x5440E4: mov     ecx, [esi+28h]
0x5440E7: test    ecx, ecx
0x5440E9: jz      short loc_544146
0x5440EB: push    6
0x5440ED: lea     eax, [esp+0Ch+var_4]
0x5440F1: push    eax
0x5440F2: call    sub_708560
0x5440F7: mov     eax, [esp+8+var_4]
0x5440FB: test    eax, eax
0x5440FD: jz      short loc_54411F
0x5440FF: push    edi
0x544100: mov     edi, eax
0x544102: add     eax, 4
0x544105: push    eax; lpAddend
0x544106: call    dword ptr ds:0A2807Ch
0x54410C: test    eax, eax
0x54410E: jnz     short loc_54411E
0x544110: test    edi, edi
0x544112: jz      short loc_54411E
0x544114: mov     edx, [edi]
0x544116: mov     eax, [edx]
0x544118: push    1
0x54411A: mov     ecx, edi
0x54411C: call    eax
0x54411E: pop     edi
0x54411F: mov     eax, [esi+2Ch]
0x544122: test    eax, eax
0x544124: jz      short loc_54412F
0x544126: mov     ecx, [esi+28h]; this
0x544129: push    eax; a2
0x54412A: call    sub_405680
0x54412F: cmp     byte ptr [esi+34h], 0
0x544133: jz      short loc_54413E
0x544135: mov     eax, [esi+28h]
0x544138: and     word ptr [eax+18h], 0FFFEh
0x54413E: mov     ecx, [esi+28h]; this
0x544141: call    NiAVObject_InitializePropertyState
0x544146: mov     eax, [esi+30h]
0x544149: test    eax, eax
0x54414B: jz      short loc_544156
0x54414D: mov     ecx, [esi+2Ch]
0x544150: push    ecx
0x544151: call    eax
0x544153: add     esp, 4
0x544156: pop     esi
0x544157: pop     ecx
0x544158: retn
