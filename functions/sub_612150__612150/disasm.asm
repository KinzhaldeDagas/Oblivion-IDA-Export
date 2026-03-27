0x612150: push    0FFFFFFFFh
0x612152: push    offset SEH_625140
0x612157: mov     eax, large fs:0
0x61215D: push    eax
0x61215E: push    ecx
0x61215F: push    esi; int
0x612160: mov     eax, ds:0B30AACh
0x612165: xor     eax, esp
0x612167: push    eax; int
0x612168: lea     eax, [esp+18h+var_C]
0x61216C: mov     large fs:0, eax
0x612172: mov     esi, ecx
0x612174: mov     [esp+18h+var_10], esi
0x612178: mov     dword ptr [esi], offset ??_7Character@@6BCharacter@@@; const Character::`vftable'{for `Character'}
0x61217E: mov     dword ptr [esi+18h], offset ??_7Character@@6BTESChildCell@@@; const Character::`vftable'{for `TESChildCell'}
0x612185: mov     dword ptr [esi+5Ch], offset ??_7Character@@6BMagicCaster@@@; const Character::`vftable'{for `MagicCaster'}
0x61218C: mov     dword ptr [esi+68h], offset ??_7Character@@6BMagicTarget@@@; const Character::`vftable'{for `MagicTarget'}
0x612193: mov     eax, [esi+8]
0x612196: shr     eax, 0Eh
0x612199: test    al, 1
0x61219B: mov     [esp+18h+var_4], 0
0x6121A3: jnz     short loc_6121FB
0x6121A5: mov     ecx, [esi+0D4h]
0x6121AB: test    ecx, ecx
0x6121AD: jz      short loc_6121C4
0x6121AF: mov     edx, [ecx]
0x6121B1: mov     eax, [edx+38Ch]
0x6121B7: push    0
0x6121B9: call    eax
0x6121BB: push    0
0x6121BD: mov     ecx, esi
0x6121BF: call    sub_611EB0
0x6121C4: mov     edx, [esi]
0x6121C6: mov     eax, [edx+154h]
0x6121CC: mov     ecx, esi
0x6121CE: call    eax
0x6121D0: test    eax, eax
0x6121D2: jz      short loc_6121EB
0x6121D4: mov     edx, [esi]
0x6121D6: mov     eax, [edx+380h]
0x6121DC: mov     ecx, esi
0x6121DE: call    eax
0x6121E0: test    eax, eax
0x6121E2: jz      short loc_6121EB
0x6121E4: mov     ecx, esi
0x6121E6: call    sub_5F0410
0x6121EB: push    0; a2
0x6121ED: mov     ecx, esi; this
0x6121EF: call    TESObjectREFR_Set3D
0x6121F4: mov     ecx, esi
0x6121F6: call    sub_6116D0
0x6121FB: mov     ecx, esi; int
0x6121FD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x612205: call    sub_5F13D0
0x61220A: mov     ecx, dword ptr [esp+18h+var_C]
0x61220E: mov     large fs:0, ecx
0x612215: pop     ecx
0x612216: pop     esi
0x612217: add     esp, 10h
0x61221A: retn
