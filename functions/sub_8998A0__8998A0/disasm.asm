0x8998A0: sub     esp, 14h
0x8998A3: push    esi
0x8998A4: mov     esi, ecx
0x8998A6: mov     eax, [esi+88h]
0x8998AC: test    eax, eax
0x8998AE: jz      short loc_8998EF
0x8998B0: mov     ecx, ds:0BA7D98h
0x8998B6: push    4
0x8998B8: mov     byte ptr [esp+1Ch+var_14], 1Fh
0x8998BD: mov     eax, [ecx]
0x8998BF: push    20h ; ' '
0x8998C1: call    dword ptr [eax+10h]
0x8998C4: mov     ecx, [esp+18h+arg_0]
0x8998C8: push    20h ; ' '
0x8998CA: push    ecx
0x8998CB: push    eax
0x8998CC: mov     [esp+24h+var_10], eax
0x8998D0: call    sub_8B1890
0x8998D5: mov     ecx, [esi+80h]
0x8998DB: add     esp, 0Ch
0x8998DE: lea     edx, [esp+18h+var_14]
0x8998E2: push    edx
0x8998E3: call    sub_8D8830
0x8998E8: pop     esi
0x8998E9: add     esp, 14h
0x8998EC: retn    4
0x8998EF: mov     ecx, [esi+64h]
0x8998F2: lea     edx, [esp+18h+var_C]
0x8998F6: push    edx
0x8998F7: mov     edx, [esp+1Ch+arg_0]
0x8998FB: mov     [esp+1Ch+var_C], 0
0x899903: mov     [esp+1Ch+var_8], 0
0x89990B: mov     [esp+1Ch+var_4], 80000000h
0x899913: mov     eax, [ecx]
0x899915: push    edx
0x899916: call    dword ptr [eax+28h]
0x899919: mov     eax, [esp+18h+var_8]
0x89991D: xor     esi, esi
0x89991F: test    eax, eax
0x899921: jle     short loc_89994C
0x899923: mov     eax, [esp+18h+var_C]
0x899927: mov     ecx, [eax+esi*8+4]
0x89992B: movsx   eax, byte ptr [ecx+5]
0x89992F: add     eax, ecx
0x899931: cmp     byte ptr [eax+18h], 1
0x899935: jnz     short loc_899943
0x899937: mov     ecx, [eax+10h]
0x89993A: add     ecx, eax
0x89993C: jz      short loc_899943
0x89993E: call    sub_8A6410
0x899943: mov     eax, [esp+18h+var_8]
0x899947: inc     esi
0x899948: cmp     esi, eax
0x89994A: jl      short loc_899923
0x89994C: mov     eax, [esp+18h+var_4]
0x899950: test    eax, eax
0x899952: js      short loc_899989
0x899954: mov     ecx, ds:0BA9DE4h
0x89995A: mov     edx, large fs:2Ch
0x899961: mov     ecx, [edx+ecx*4]
0x899964: mov     ecx, [ecx+19Ch]
0x89996A: test    ecx, ecx
0x89996C: jnz     short loc_899974
0x89996E: mov     ecx, ds:0BA7D9Ch
0x899974: mov     edx, [esp+18h+var_C]
0x899978: and     eax, 3FFFFFFFh
0x89997D: push    14h
0x89997F: shl     eax, 3
0x899982: push    eax
0x899983: push    edx
0x899984: call    sub_8A75D0
0x899989: pop     esi
0x89998A: add     esp, 14h
0x89998D: retn    4
