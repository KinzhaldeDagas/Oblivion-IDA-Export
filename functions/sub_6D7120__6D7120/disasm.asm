0x6D7120: push    0FFFFFFFFh
0x6D7122: push    offset SEH_6D7120
0x6D7127: mov     eax, large fs:0
0x6D712D: push    eax
0x6D712E: push    ecx
0x6D712F: push    ebx
0x6D7130: push    ebp
0x6D7131: push    esi
0x6D7132: push    edi
0x6D7133: mov     eax, ds:0B30AACh
0x6D7138: xor     eax, esp
0x6D713A: push    eax
0x6D713B: lea     eax, [esp+24h+var_C]
0x6D713F: mov     large fs:0, eax
0x6D7145: mov     esi, ecx
0x6D7147: mov     [esp+24h+var_10], esi
0x6D714B: call    sub_6EC180
0x6D7150: mov     eax, [esp+24h+arg_8]
0x6D7154: xor     edi, edi
0x6D7156: mov     [esi+50h], eax
0x6D7159: mov     eax, [esp+24h+arg_0]
0x6D715D: cmp     [esi+30h], eax
0x6D7160: mov     [esp+24h+var_4], edi
0x6D7164: mov     dword ptr [esi], offset ??_7NiTextureTransformController@@6B@; const NiTextureTransformController::`vftable'
0x6D716A: mov     [esi+54h], edi
0x6D716D: mov     [esi+40h], edi
0x6D7170: mov     byte ptr [esi+48h], 0
0x6D7174: mov     [esi+4Ch], edi
0x6D7177: jz      short loc_6D717C
0x6D7179: mov     [esi+44h], edi
0x6D717C: push    eax
0x6D717D: mov     ecx, esi
0x6D717F: call    NiTimeController__SetTarget
0x6D7184: mov     ebp, [esp+24h+arg_4]
0x6D7188: cmp     ebp, edi
0x6D718A: mov     [esi+44h], ebp
0x6D718D: jnz     short loc_6D71A0
0x6D718F: mov     ecx, [esi+54h]
0x6D7192: push    ecx
0x6D7193: call    FormHeapFree
0x6D7198: mov     [esi+54h], edi
0x6D719B: jmp     loc_6D722C
0x6D71A0: mov     ebx, [esi+30h]
0x6D71A3: cmp     ebx, edi
0x6D71A5: jz      loc_6D722F
0x6D71AB: movzx   ecx, word ptr [ebx+26h]
0x6D71AF: xor     eax, eax
0x6D71B1: cmp     ecx, edi
0x6D71B3: jbe     short loc_6D71C6
0x6D71B5: mov     edx, [ebx+20h]
0x6D71B8: cmp     [edx], ebp
0x6D71BA: jz      short loc_6D71E8
0x6D71BC: add     eax, 1
0x6D71BF: add     edx, 4
0x6D71C2: cmp     eax, ecx
0x6D71C4: jb      short loc_6D71B8
0x6D71C6: mov     ecx, ebx
0x6D71C8: call    sub_6D1950
0x6D71CD: test    eax, eax
0x6D71CF: jbe     short loc_6D722F
0x6D71D1: mov     ebp, [ebx+2Ch]
0x6D71D4: test    ebp, ebp
0x6D71D6: jz      short loc_6D71FD
0x6D71D8: movzx   eax, word ptr [ebp+0Ah]
0x6D71DC: cmp     edi, eax
0x6D71DE: jnb     short loc_6D71FD
0x6D71E0: mov     ecx, [ebp+4]
0x6D71E3: mov     eax, [ecx+edi*4]
0x6D71E6: jmp     short loc_6D71FF
0x6D71E8: mov     edx, [esi+54h]
0x6D71EB: push    edx
0x6D71EC: mov     byte ptr [esi+48h], 0
0x6D71F0: mov     [esi+4Ch], eax
0x6D71F3: call    FormHeapFree
0x6D71F8: mov     [esi+54h], edi
0x6D71FB: jmp     short loc_6D722C
0x6D71FD: xor     eax, eax
0x6D71FF: cmp     eax, [esp+24h+arg_4]
0x6D7203: jz      short loc_6D7215
0x6D7205: mov     ecx, ebx
0x6D7207: add     edi, 1
0x6D720A: call    sub_6D1950
0x6D720F: cmp     edi, eax
0x6D7211: jb      short loc_6D71D4
0x6D7213: jmp     short loc_6D722F
0x6D7215: mov     edx, [esi+54h]
0x6D7218: push    edx
0x6D7219: mov     byte ptr [esi+48h], 1
0x6D721D: mov     [esi+4Ch], edi
0x6D7220: call    FormHeapFree
0x6D7225: mov     dword ptr [esi+54h], 0
0x6D722C: add     esp, 4
0x6D722F: mov     eax, esi
0x6D7231: mov     ecx, [esp+24h+var_C]
0x6D7235: mov     large fs:0, ecx
0x6D723C: pop     ecx
0x6D723D: pop     edi
0x6D723E: pop     esi
0x6D723F: pop     ebp
0x6D7240: pop     ebx
0x6D7241: add     esp, 10h
0x6D7244: retn    0Ch
