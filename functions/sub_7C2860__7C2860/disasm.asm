0x7C2860: sub     esp, 108h
0x7C2866: mov     eax, ds:0B30AACh
0x7C286B: xor     eax, esp
0x7C286D: mov     [esp+108h+var_4], eax
0x7C2874: push    esi
0x7C2875: mov     esi, ecx
0x7C2877: mov     ecx, [esi+20h]
0x7C287A: lea     eax, [esp+10Ch+var_108]
0x7C287E: push    eax; int
0x7C287F: push    ecx; Str1
0x7C2880: mov     ecx, ds:0B33A1Ch
0x7C2886: call    sub_434710
0x7C288B: mov     edx, [esi+28h]
0x7C288E: mov     edx, [edx+54h]
0x7C2891: lea     ecx, [esi+28h]
0x7C2894: push    0
0x7C2896: lea     eax, [esp+110h+var_108]
0x7C289A: push    eax
0x7C289B: call    edx
0x7C289D: mov     ecx, [esp+10Ch+var_4]
0x7C28A4: pop     esi
0x7C28A5: xor     ecx, esp
0x7C28A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7C28AC: add     esp, 108h
0x7C28B2: retn
