0x4DD000: push    ecx
0x4DD001: push    esi
0x4DD002: mov     esi, ecx
0x4DD004: cmp     dword ptr [esi+3Ch], 0
0x4DD008: jz      short loc_4DD069
0x4DD00A: mov     eax, [esi]
0x4DD00C: mov     edx, [eax+168h]
0x4DD012: call    edx
0x4DD014: mov     ecx, ds:0B333C4h
0x4DD01A: cmp     esi, ecx
0x4DD01C: jnz     short loc_4DD043
0x4DD01E: test    eax, eax
0x4DD020: jz      short loc_4DD02F
0x4DD022: mov     ecx, eax
0x4DD024: call    sub_478EA0
0x4DD029: mov     ecx, ds:0B333C4h
0x4DD02F: mov     al, [ecx+588h]
0x4DD035: mov     byte ptr [esp+8+var_4], al
0x4DD039: mov     edx, [esp+8+var_4]
0x4DD03D: push    edx
0x4DD03E: call    sub_6600D0
0x4DD043: test    eax, eax
0x4DD045: jz      short loc_4DD04E
0x4DD047: mov     ecx, eax
0x4DD049: call    sub_478EA0
0x4DD04E: mov     eax, [esi]
0x4DD050: mov     edx, [eax+190h]
0x4DD056: mov     ecx, esi
0x4DD058: call    edx
0x4DD05A: test    al, al
0x4DD05C: jz      short loc_4DD069
0x4DD05E: mov     eax, [esi+3Ch]
0x4DD061: push    eax
0x4DD062: mov     ecx, esi
0x4DD064: call    sub_5EA1A0
0x4DD069: pop     esi
0x4DD06A: pop     ecx
0x4DD06B: retn
