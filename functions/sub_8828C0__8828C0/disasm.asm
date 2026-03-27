0x8828C0: push    0FFFFFFFFh
0x8828C2: push    offset SEH_8828C0
0x8828C7: mov     eax, large fs:0
0x8828CD: push    eax
0x8828CE: sub     esp, 110h
0x8828D4: mov     eax, ds:0B30AACh
0x8828D9: xor     eax, esp
0x8828DB: mov     [esp+11Ch+var_10], eax
0x8828E2: push    ebx
0x8828E3: push    ebp
0x8828E4: push    esi
0x8828E5: push    edi
0x8828E6: mov     eax, ds:0B30AACh
0x8828EB: xor     eax, esp
0x8828ED: push    eax
0x8828EE: lea     eax, [esp+130h+var_C]
0x8828F5: mov     large fs:0, eax
0x8828FB: mov     eax, [esp+130h+arg_8]
0x882902: mov     ebx, dword ptr [esp+130h+arg_4]
0x882909: mov     edi, [esp+130h+arg_0]
0x882910: push    eax
0x882911: push    ebx
0x882912: push    edi
0x882913: mov     esi, ecx
0x882915: call    sub_7D8160
0x88291A: push    offset off_A7D0E4
0x88291F: lea     eax, [esp+134h+Src]
0x882923: push    edi
0x882924: push    eax
0x882925: call    sub_7B4160
0x88292A: add     esp, 0Ch
0x88292D: cmp     [esp+130h+Src], 0
0x882932: jz      short loc_882992
0x882934: push    1; char
0x882936: push    ebx; char
0x882937: lea     ecx, [esp+138h+Src]
0x88293B: push    ecx; Src
0x88293C: lea     edx, [esp+13Ch+var_118]
0x882940: push    edx; int
0x882941: call    sub_7B8200
0x882946: add     esp, 10h
0x882949: push    eax
0x88294A: lea     ecx, [esi+168h]
0x882950: mov     [esp+134h+var_4], 0
0x88295B: call    sub_55E2A0
0x882960: mov     eax, [esp+130h+var_118]
0x882964: test    eax, eax
0x882966: mov     [esp+130h+var_4], 0FFFFFFFFh
0x882971: jz      short loc_882992
0x882973: mov     ebp, eax
0x882975: add     eax, 4
0x882978: push    eax; lpAddend
0x882979: call    dword ptr ds:0A2807Ch
0x88297F: test    eax, eax
0x882981: jnz     short loc_882992
0x882983: test    ebp, ebp
0x882985: jz      short loc_882992
0x882987: mov     eax, [ebp+0]
0x88298A: mov     edx, [eax]
0x88298C: push    1
0x88298E: mov     ecx, ebp
0x882990: call    edx
0x882992: cmp     dword ptr ds:0B42F48h, 2
0x882999: jl      short loc_882A12
0x88299B: push    offset off_A7D0E8
0x8829A0: lea     eax, [esp+134h+Src]
0x8829A4: push    edi
0x8829A5: push    eax
0x8829A6: call    sub_7B4160
0x8829AB: add     esp, 0Ch
0x8829AE: cmp     [esp+130h+Src], 0
0x8829B3: jz      short loc_882A12
0x8829B5: push    1; char
0x8829B7: push    ebx; char
0x8829B8: lea     ecx, [esp+138h+Src]
0x8829BC: push    ecx; Src
0x8829BD: lea     edx, [esp+13Ch+var_11C]
0x8829C1: push    edx; int
0x8829C2: call    sub_7B8200
0x8829C7: add     esp, 10h
0x8829CA: push    eax
0x8829CB: lea     ecx, [esi+16Ch]
0x8829D1: mov     [esp+134h+var_4], 1
0x8829DC: call    sub_55E2A0
0x8829E1: mov     eax, [esp+130h+var_11C]
0x8829E5: test    eax, eax
0x8829E7: mov     [esp+130h+var_4], 0FFFFFFFFh
0x8829F2: jz      short loc_882A12
0x8829F4: mov     esi, eax
0x8829F6: add     eax, 4
0x8829F9: push    eax; lpAddend
0x8829FA: call    dword ptr ds:0A2807Ch
0x882A00: test    eax, eax
0x882A02: jnz     short loc_882A12
0x882A04: test    esi, esi
0x882A06: jz      short loc_882A12
0x882A08: mov     eax, [esi]
0x882A0A: mov     edx, [eax]
0x882A0C: push    1
0x882A0E: mov     ecx, esi
0x882A10: call    edx
0x882A12: mov     ecx, dword ptr [esp+130h+var_C]
0x882A19: mov     large fs:0, ecx
0x882A20: pop     ecx
0x882A21: pop     edi
0x882A22: pop     esi
0x882A23: pop     ebp
0x882A24: pop     ebx
0x882A25: mov     ecx, [esp+11Ch+var_10]
0x882A2C: xor     ecx, esp
0x882A2E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x882A33: add     esp, 11Ch
0x882A39: retn    0Ch
