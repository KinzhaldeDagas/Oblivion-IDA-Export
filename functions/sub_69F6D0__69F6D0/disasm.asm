0x69F6D0: push    ecx
0x69F6D1: push    esi
0x69F6D2: mov     esi, ecx
0x69F6D4: mov     eax, [esi]
0x69F6D6: mov     edx, [eax+154h]
0x69F6DC: call    edx
0x69F6DE: test    eax, eax
0x69F6E0: jz      short loc_69F73D
0x69F6E2: mov     eax, [esi]
0x69F6E4: mov     edx, [eax+154h]
0x69F6EA: mov     ecx, esi
0x69F6EC: call    edx
0x69F6EE: mov     edx, [eax]
0x69F6F0: mov     ecx, eax
0x69F6F2: mov     eax, [edx+58h]
0x69F6F5: push    offset aMagicareadispl; "MagicAreaDisplay"
0x69F6FA: call    eax
0x69F6FC: test    eax, eax
0x69F6FE: jz      short loc_69F73D
0x69F700: mov     ecx, [eax+1Ch]
0x69F703: test    ecx, ecx
0x69F705: jz      short loc_69F73D
0x69F707: mov     edx, [ecx]
0x69F709: mov     edx, [edx+88h]
0x69F70F: push    eax
0x69F710: lea     eax, [esp+0Ch+var_4]
0x69F714: push    eax
0x69F715: call    edx
0x69F717: mov     eax, [esp+8+var_4]
0x69F71B: test    eax, eax
0x69F71D: jz      short loc_69F73D
0x69F71F: mov     esi, eax
0x69F721: add     eax, 4
0x69F724: push    eax; lpAddend
0x69F725: call    dword ptr ds:0A2807Ch
0x69F72B: test    eax, eax
0x69F72D: jnz     short loc_69F73D
0x69F72F: test    esi, esi
0x69F731: jz      short loc_69F73D
0x69F733: mov     eax, [esi]
0x69F735: mov     edx, [eax]
0x69F737: push    1
0x69F739: mov     ecx, esi
0x69F73B: call    edx
0x69F73D: pop     esi
0x69F73E: pop     ecx
0x69F73F: retn
