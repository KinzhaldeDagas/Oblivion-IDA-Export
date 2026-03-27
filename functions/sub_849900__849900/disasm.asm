0x849900: push    0FFFFFFFFh
0x849902: push    offset SEH_880560
0x849907: mov     eax, large fs:0
0x84990D: push    eax
0x84990E: push    ebx
0x84990F: push    ebp
0x849910: push    esi
0x849911: push    edi
0x849912: mov     eax, ds:0B30AACh
0x849917: xor     eax, esp
0x849919: push    eax
0x84991A: lea     eax, [esp+20h+var_C]
0x84991E: mov     large fs:0, eax
0x849924: mov     edi, ecx
0x849926: mov     eax, [esp+20h+arg_8]
0x84992A: mov     eax, [eax+10h]
0x84992D: mov     esi, ds:0B455F8h
0x849933: push    eax
0x849934: call    sub_848C40
0x849939: mov     ecx, [esi+24h]
0x84993C: mov     ebx, [ecx]
0x84993E: mov     ecx, [esp+20h+arg_C]
0x849942: mov     edx, [ecx]
0x849944: mov     eax, [edx+88h]
0x84994A: push    0
0x84994C: mov     [esp+24h+arg_8], ebx
0x849950: call    eax
0x849952: mov     ebx, [ebx+4]
0x849955: mov     ebp, eax
0x849957: cmp     ebx, ebp
0x849959: jz      short loc_849992
0x84995B: test    ebx, ebx
0x84995D: jz      short loc_84997B
0x84995F: lea     ecx, [ebx+4]
0x849962: push    ecx; lpAddend
0x849963: call    dword ptr ds:0A2807Ch
0x849969: test    eax, eax
0x84996B: jnz     short loc_84997B
0x84996D: test    ebx, ebx
0x84996F: jz      short loc_84997B
0x849971: mov     edx, [ebx]
0x849973: mov     eax, [edx]
0x849975: push    1
0x849977: mov     ecx, ebx
0x849979: call    eax
0x84997B: test    ebp, ebp
0x84997D: mov     ebx, [esp+20h+arg_8]
0x849981: mov     [ebx+4], ebp
0x849984: jz      short loc_849996
0x849986: add     ebp, 4
0x849989: push    ebp; lpAddend
0x84998A: call    dword ptr ds:0A28078h
0x849990: jmp     short loc_849996
0x849992: mov     ebx, [esp+20h+arg_8]
0x849996: test    ebx, ebx
0x849998: jz      short loc_8499B6
0x84999A: cmp     byte ptr ds:0B42CDDh, 0
0x8499A1: jz      short loc_8499B6
0x8499A3: mov     ecx, [esp+20h+arg_C]
0x8499A7: mov     edx, [ecx]
0x8499A9: mov     eax, [edx+78h]
0x8499AC: call    eax
0x8499AE: push    eax
0x8499AF: mov     ecx, ebx
0x8499B1: call    sub_7715E0
0x8499B6: mov     ebx, 1
0x8499BB: add     [esi+60h], ebx
0x8499BE: mov     [esp+20h+arg_C], esi
0x8499C2: mov     edx, [edi+38h]
0x8499C5: lea     ecx, [esp+20h+arg_C]
0x8499C9: push    ecx
0x8499CA: push    edx
0x8499CB: lea     ecx, [edi+40h]
0x8499CE: mov     [esp+28h+var_4], 0
0x8499D6: call    sub_76CE40
0x8499DB: or      eax, 0FFFFFFFFh
0x8499DE: add     [esi+60h], eax
0x8499E1: mov     [esp+20h+var_4], eax
0x8499E5: jnz     short loc_8499EE
0x8499E7: mov     ecx, esi
0x8499E9: call    sub_7604D0
0x8499EE: add     [edi+38h], ebx
0x8499F1: mov     ecx, dword ptr [esp+20h+var_C]
0x8499F5: mov     large fs:0, ecx
0x8499FC: pop     ecx
0x8499FD: pop     edi
0x8499FE: pop     esi
0x8499FF: pop     ebp
0x849A00: pop     ebx
0x849A01: add     esp, 0Ch
0x849A04: retn    10h
