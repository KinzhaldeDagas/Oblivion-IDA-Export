0x87A420: push    0FFFFFFFFh
0x87A422: push    offset SEH_880560
0x87A427: mov     eax, large fs:0
0x87A42D: push    eax
0x87A42E: push    ebx
0x87A42F: push    ebp
0x87A430: push    esi
0x87A431: push    edi
0x87A432: mov     eax, ds:0B30AACh
0x87A437: xor     eax, esp
0x87A439: push    eax
0x87A43A: lea     eax, [esp+20h+var_C]
0x87A43E: mov     large fs:0, eax
0x87A444: mov     esi, ecx
0x87A446: mov     eax, [esp+20h+arg_8]
0x87A44A: mov     eax, [eax+10h]
0x87A44D: mov     edx, [esi]
0x87A44F: mov     edx, [edx+0BCh]
0x87A455: mov     edi, ds:0B476FCh
0x87A45B: push    eax
0x87A45C: mov     eax, [esp+24h+arg_0]
0x87A460: push    0
0x87A462: push    eax
0x87A463: call    edx
0x87A465: mov     eax, [edi+24h]
0x87A468: mov     ecx, [esp+20h+arg_C]
0x87A46C: mov     ebx, [eax]
0x87A46E: push    0
0x87A470: push    ecx
0x87A471: mov     ecx, esi
0x87A473: mov     [esp+28h+arg_8], ebx
0x87A477: call    sub_848FD0
0x87A47C: mov     ebx, [ebx+4]
0x87A47F: mov     ebp, eax
0x87A481: cmp     ebx, ebp
0x87A483: jz      short loc_87A4BA
0x87A485: test    ebx, ebx
0x87A487: jz      short loc_87A4A5
0x87A489: lea     edx, [ebx+4]
0x87A48C: push    edx; lpAddend
0x87A48D: call    dword ptr ds:0A2807Ch
0x87A493: test    eax, eax
0x87A495: jnz     short loc_87A4A5
0x87A497: test    ebx, ebx
0x87A499: jz      short loc_87A4A5
0x87A49B: mov     eax, [ebx]
0x87A49D: mov     edx, [eax]
0x87A49F: push    1
0x87A4A1: mov     ecx, ebx
0x87A4A3: call    edx
0x87A4A5: test    ebp, ebp
0x87A4A7: mov     eax, [esp+20h+arg_8]
0x87A4AB: mov     [eax+4], ebp
0x87A4AE: jz      short loc_87A4BA
0x87A4B0: add     ebp, 4
0x87A4B3: push    ebp; lpAddend
0x87A4B4: call    dword ptr ds:0A28078h
0x87A4BA: mov     ecx, [edi+24h]
0x87A4BD: mov     ebx, [ecx+4]
0x87A4C0: mov     ecx, [esp+20h+arg_C]
0x87A4C4: mov     edx, [ecx]
0x87A4C6: mov     eax, [edx+88h]
0x87A4CC: push    0
0x87A4CE: mov     [esp+24h+arg_8], ebx
0x87A4D2: call    eax
0x87A4D4: mov     ebx, [ebx+4]
0x87A4D7: mov     ebp, eax
0x87A4D9: cmp     ebx, ebp
0x87A4DB: jz      short loc_87A512
0x87A4DD: test    ebx, ebx
0x87A4DF: jz      short loc_87A4FD
0x87A4E1: lea     ecx, [ebx+4]
0x87A4E4: push    ecx; lpAddend
0x87A4E5: call    dword ptr ds:0A2807Ch
0x87A4EB: test    eax, eax
0x87A4ED: jnz     short loc_87A4FD
0x87A4EF: test    ebx, ebx
0x87A4F1: jz      short loc_87A4FD
0x87A4F3: mov     edx, [ebx]
0x87A4F5: mov     eax, [edx]
0x87A4F7: push    1
0x87A4F9: mov     ecx, ebx
0x87A4FB: call    eax
0x87A4FD: test    ebp, ebp
0x87A4FF: mov     ecx, [esp+20h+arg_8]
0x87A503: mov     [ecx+4], ebp
0x87A506: jz      short loc_87A512
0x87A508: add     ebp, 4
0x87A50B: push    ebp; lpAddend
0x87A50C: call    dword ptr ds:0A28078h
0x87A512: mov     ebx, 1
0x87A517: add     [edi+60h], ebx
0x87A51A: mov     [esp+20h+arg_C], edi
0x87A51E: mov     eax, [esi+38h]
0x87A521: lea     edx, [esp+20h+arg_C]
0x87A525: push    edx
0x87A526: push    eax
0x87A527: lea     ecx, [esi+40h]
0x87A52A: mov     [esp+28h+var_4], 0
0x87A532: call    sub_76CE40
0x87A537: or      eax, 0FFFFFFFFh
0x87A53A: add     [edi+60h], eax
0x87A53D: mov     [esp+20h+var_4], eax
0x87A541: jnz     short loc_87A54A
0x87A543: mov     ecx, edi
0x87A545: call    sub_7604D0
0x87A54A: add     [esi+38h], ebx
0x87A54D: mov     ecx, [esp+20h+var_C]
0x87A551: mov     large fs:0, ecx
0x87A558: pop     ecx
0x87A559: pop     edi
0x87A55A: pop     esi
0x87A55B: pop     ebp
0x87A55C: pop     ebx
0x87A55D: add     esp, 0Ch
0x87A560: retn    10h
