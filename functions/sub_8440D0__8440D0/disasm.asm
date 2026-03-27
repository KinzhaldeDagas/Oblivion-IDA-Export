0x8440D0: push    0FFFFFFFFh
0x8440D2: push    offset SEH_880560
0x8440D7: mov     eax, large fs:0
0x8440DD: push    eax
0x8440DE: push    ebx
0x8440DF: push    ebp
0x8440E0: push    esi
0x8440E1: push    edi
0x8440E2: mov     eax, ds:0B30AACh
0x8440E7: xor     eax, esp
0x8440E9: push    eax
0x8440EA: lea     eax, [esp+20h+var_C]
0x8440EE: mov     large fs:0, eax
0x8440F4: mov     esi, ecx
0x8440F6: mov     eax, [esp+20h+arg_8]
0x8440FA: mov     eax, [eax+10h]
0x8440FD: mov     edx, [esi]
0x8440FF: mov     edx, [edx+0BCh]
0x844105: mov     edi, ds:0B45A04h
0x84410B: push    eax
0x84410C: mov     eax, [esp+24h+arg_0]
0x844110: push    0
0x844112: push    eax
0x844113: call    edx
0x844115: mov     ecx, [esp+20h+arg_C]
0x844119: mov     eax, [edi+24h]
0x84411C: mov     ebp, [eax]
0x84411E: push    0
0x844120: push    ecx
0x844121: mov     ecx, esi
0x844123: call    sub_848FD0
0x844128: mov     ebx, [ebp+4]
0x84412B: cmp     ebx, eax
0x84412D: mov     [esp+20h+arg_8], eax
0x844131: jz      short loc_844168
0x844133: test    ebx, ebx
0x844135: jz      short loc_844157
0x844137: lea     edx, [ebx+4]
0x84413A: push    edx; lpAddend
0x84413B: call    dword ptr ds:0A2807Ch
0x844141: test    eax, eax
0x844143: jnz     short loc_844153
0x844145: test    ebx, ebx
0x844147: jz      short loc_844153
0x844149: mov     eax, [ebx]
0x84414B: mov     edx, [eax]
0x84414D: push    1
0x84414F: mov     ecx, ebx
0x844151: call    edx
0x844153: mov     eax, [esp+20h+arg_8]
0x844157: test    eax, eax
0x844159: mov     [ebp+4], eax
0x84415C: jz      short loc_844168
0x84415E: add     eax, 4
0x844161: push    eax; lpAddend
0x844162: call    dword ptr ds:0A28078h
0x844168: mov     eax, [esp+20h+arg_C]
0x84416C: push    eax
0x84416D: push    ebp
0x84416E: mov     ecx, esi
0x844170: call    sub_848FA0
0x844175: mov     ebx, 1
0x84417A: add     [edi+60h], ebx
0x84417D: mov     [esp+20h+arg_C], edi
0x844181: mov     edx, [esi+38h]
0x844184: lea     ecx, [esp+20h+arg_C]
0x844188: push    ecx
0x844189: push    edx
0x84418A: lea     ecx, [esi+40h]
0x84418D: mov     [esp+28h+var_4], 0
0x844195: call    sub_76CE40
0x84419A: or      eax, 0FFFFFFFFh
0x84419D: add     [edi+60h], eax
0x8441A0: mov     [esp+20h+var_4], eax
0x8441A4: jnz     short loc_8441AD
0x8441A6: mov     ecx, edi
0x8441A8: call    sub_7604D0
0x8441AD: add     [esi+38h], ebx
0x8441B0: mov     ecx, dword ptr [esp+20h+var_C]
0x8441B4: mov     large fs:0, ecx
0x8441BB: pop     ecx
0x8441BC: pop     edi
0x8441BD: pop     esi
0x8441BE: pop     ebp
0x8441BF: pop     ebx
0x8441C0: add     esp, 0Ch
0x8441C3: retn    10h
