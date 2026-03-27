0x6E28E0: sub     esp, 0Ch
0x6E28E3: push    esi
0x6E28E4: mov     esi, ecx
0x6E28E6: mov     al, [esi+8]
0x6E28E9: shr     al, 5
0x6E28EC: test    al, 1
0x6E28EE: jz      short loc_6E28FB
0x6E28F0: fld     dword ptr ds:0A7A164h
0x6E28F6: fstp    dword ptr [esi+28h]
0x6E28F9: jmp     short loc_6E2921
0x6E28FB: fld     [esp+10h+arg_0]
0x6E28FF: push    ecx
0x6E2900: fstp    [esp+14h+var_14]; float
0x6E2903: call    sub_6C36B0
0x6E2908: test    al, al
0x6E290A: jz      short loc_6E2921
0x6E290C: mov     ecx, [esi+3Ch]
0x6E290F: test    ecx, ecx
0x6E2911: jz      short loc_6E298B
0x6E2913: mov     edx, [ecx]
0x6E2915: mov     eax, [edx+94h]
0x6E291B: call    eax
0x6E291D: test    al, al
0x6E291F: jz      short loc_6E298B
0x6E2921: mov     ecx, [esi+3Ch]
0x6E2924: test    ecx, ecx
0x6E2926: jz      short loc_6E298B
0x6E2928: mov     edx, [ecx]
0x6E292A: fld     dword ptr [esi+28h]
0x6E292D: mov     edx, [edx+54h]
0x6E2930: lea     eax, [esp+10h+var_C]
0x6E2934: push    eax
0x6E2935: mov     eax, [esi+30h]
0x6E2938: push    eax
0x6E2939: push    ecx
0x6E293A: fstp    [esp+1Ch+var_1C]
0x6E293D: call    edx
0x6E293F: test    al, al
0x6E2941: jz      short loc_6E298B
0x6E2943: push    edi
0x6E2944: mov     edi, [esi+44h]
0x6E2947: test    edi, edi
0x6E2949: jz      short loc_6E298A
0x6E294B: fld     [esp+14h+var_C]
0x6E294F: mov     eax, [esi+48h]
0x6E2952: push    ecx
0x6E2953: fstp    [esp+18h+var_18]; float
0x6E2956: push    eax; int
0x6E2957: mov     ecx, edi
0x6E2959: call    sub_730090
0x6E295E: fld     [esp+14h+var_8]
0x6E2962: push    ecx
0x6E2963: mov     ecx, [esi+48h]
0x6E2966: fstp    [esp+18h+var_18]; float
0x6E2969: add     ecx, 1
0x6E296C: push    ecx; int
0x6E296D: mov     ecx, edi
0x6E296F: call    sub_730090
0x6E2974: fld     [esp+14h+var_4]
0x6E2978: mov     edx, [esi+48h]
0x6E297B: push    ecx
0x6E297C: add     edx, 2
0x6E297F: fstp    [esp+18h+var_18]; float
0x6E2982: push    edx; int
0x6E2983: mov     ecx, edi
0x6E2985: call    sub_730090
0x6E298A: pop     edi
0x6E298B: pop     esi
0x6E298C: add     esp, 0Ch
0x6E298F: retn    4
