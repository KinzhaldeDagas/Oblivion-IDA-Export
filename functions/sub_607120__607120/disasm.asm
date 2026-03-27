0x607120: push    ecx
0x607121: push    ebx
0x607122: mov     ebx, ecx
0x607124: push    edi
0x607125: lea     edi, [ebx+1Ch]
0x607128: test    edi, edi
0x60712A: jz      short loc_607194
0x60712C: push    esi
0x60712D: lea     ecx, [ecx+0]
0x607130: mov     esi, [edi]
0x607132: test    esi, esi
0x607134: jz      short loc_607193
0x607136: mov     ecx, esi; this
0x607138: call    sub_5E6C60
0x60713D: test    al, al
0x60713F: jnz     short loc_60718C
0x607141: push    0
0x607143: push    esi
0x607144: mov     ecx, ebx
0x607146: call    sub_605F60
0x60714B: cmp     esi, [ebx+8]
0x60714E: mov     [esp+10h+var_4], eax
0x607152: fild    [esp+10h+var_4]
0x607156: fstp    [esp+10h+var_4]
0x60715A: jnz     short loc_607166
0x60715C: fld     [esp+10h+var_4]
0x607160: fadd    st, st
0x607162: fstp    [esp+10h+var_4]
0x607166: fld     [esp+10h+var_4]
0x60716A: mov     eax, [esi]
0x60716C: fmul    qword ptr ds:0A3D360h
0x607172: mov     edx, [eax+374h]
0x607178: push    ecx
0x607179: mov     ecx, [ebx+0Ch]
0x60717C: fstp    [esp+14h+var_4]
0x607180: fld     [esp+14h+var_4]
0x607184: fstp    [esp+14h+var_14]
0x607187: push    ecx
0x607188: mov     ecx, esi
0x60718A: call    edx
0x60718C: mov     edi, [edi+4]
0x60718F: test    edi, edi
0x607191: jnz     short loc_607130
0x607193: pop     esi
0x607194: pop     edi
0x607195: pop     ebx
0x607196: pop     ecx
0x607197: retn
