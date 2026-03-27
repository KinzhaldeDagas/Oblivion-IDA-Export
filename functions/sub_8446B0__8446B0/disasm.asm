0x8446B0: push    0FFFFFFFFh
0x8446B2: push    offset SEH_880560
0x8446B7: mov     eax, large fs:0
0x8446BD: push    eax
0x8446BE: push    ebx
0x8446BF: push    ebp
0x8446C0: push    esi
0x8446C1: push    edi
0x8446C2: mov     eax, ds:0B30AACh
0x8446C7: xor     eax, esp
0x8446C9: push    eax
0x8446CA: lea     eax, [esp+20h+var_C]
0x8446CE: mov     large fs:0, eax
0x8446D4: mov     esi, ecx
0x8446D6: mov     eax, [esp+20h+arg_8]
0x8446DA: mov     eax, [eax+10h]
0x8446DD: mov     edx, [esi]
0x8446DF: mov     edx, [edx+0BCh]
0x8446E5: mov     edi, ds:0B45A20h
0x8446EB: push    eax
0x8446EC: mov     eax, [esp+24h+arg_0]
0x8446F0: push    0
0x8446F2: push    eax
0x8446F3: call    edx
0x8446F5: mov     ecx, [esp+20h+arg_C]
0x8446F9: mov     eax, [edi+24h]
0x8446FC: mov     ebp, [eax]
0x8446FE: push    0
0x844700: push    ecx
0x844701: mov     ecx, esi
0x844703: call    sub_848FD0
0x844708: mov     ebx, [ebp+4]
0x84470B: cmp     ebx, eax
0x84470D: mov     [esp+20h+arg_8], eax
0x844711: jz      short loc_844748
0x844713: test    ebx, ebx
0x844715: jz      short loc_844737
0x844717: lea     edx, [ebx+4]
0x84471A: push    edx; lpAddend
0x84471B: call    dword ptr ds:0A2807Ch
0x844721: test    eax, eax
0x844723: jnz     short loc_844733
0x844725: test    ebx, ebx
0x844727: jz      short loc_844733
0x844729: mov     eax, [ebx]
0x84472B: mov     edx, [eax]
0x84472D: push    1
0x84472F: mov     ecx, ebx
0x844731: call    edx
0x844733: mov     eax, [esp+20h+arg_8]
0x844737: test    eax, eax
0x844739: mov     [ebp+4], eax
0x84473C: jz      short loc_844748
0x84473E: add     eax, 4
0x844741: push    eax; lpAddend
0x844742: call    dword ptr ds:0A28078h
0x844748: mov     eax, [esp+20h+arg_C]
0x84474C: push    eax
0x84474D: push    ebp
0x84474E: mov     ecx, esi
0x844750: call    sub_848FA0
0x844755: mov     ecx, [edi+24h]
0x844758: mov     ebx, [ecx+10h]
0x84475B: mov     eax, ds:0B43108h
0x844760: mov     ebp, [ebx+4]
0x844763: add     ebx, 4
0x844766: cmp     ebp, eax
0x844768: mov     [esp+20h+arg_C], eax
0x84476C: jz      short loc_8447A3
0x84476E: test    ebp, ebp
0x844770: jz      short loc_844793
0x844772: lea     edx, [ebp+4]
0x844775: push    edx; lpAddend
0x844776: call    dword ptr ds:0A2807Ch
0x84477C: test    eax, eax
0x84477E: jnz     short loc_84478F
0x844780: test    ebp, ebp
0x844782: jz      short loc_84478F
0x844784: mov     eax, [ebp+0]
0x844787: mov     edx, [eax]
0x844789: push    1
0x84478B: mov     ecx, ebp
0x84478D: call    edx
0x84478F: mov     eax, [esp+20h+arg_C]
0x844793: test    eax, eax
0x844795: mov     [ebx], eax
0x844797: jz      short loc_8447A3
0x844799: add     eax, 4
0x84479C: push    eax; lpAddend
0x84479D: call    dword ptr ds:0A28078h
0x8447A3: mov     eax, [edi+24h]
0x8447A6: mov     ebp, [eax+14h]
0x8447A9: mov     eax, ds:0B4310Ch
0x8447AE: mov     ebx, [ebp+4]
0x8447B1: cmp     ebx, eax
0x8447B3: mov     ecx, eax
0x8447B5: mov     [esp+20h+arg_C], ecx
0x8447B9: jz      short loc_8447F0
0x8447BB: test    ebx, ebx
0x8447BD: jz      short loc_8447DF
0x8447BF: lea     ecx, [ebx+4]
0x8447C2: push    ecx; lpAddend
0x8447C3: call    dword ptr ds:0A2807Ch
0x8447C9: test    eax, eax
0x8447CB: jnz     short loc_8447DB
0x8447CD: test    ebx, ebx
0x8447CF: jz      short loc_8447DB
0x8447D1: mov     edx, [ebx]
0x8447D3: mov     eax, [edx]
0x8447D5: push    1
0x8447D7: mov     ecx, ebx
0x8447D9: call    eax
0x8447DB: mov     ecx, [esp+20h+arg_C]
0x8447DF: test    ecx, ecx
0x8447E1: mov     [ebp+4], ecx
0x8447E4: jz      short loc_8447F0
0x8447E6: add     ecx, 4
0x8447E9: push    ecx; lpAddend
0x8447EA: call    dword ptr ds:0A28078h
0x8447F0: mov     ebx, 1
0x8447F5: add     [edi+60h], ebx
0x8447F8: mov     [esp+20h+arg_C], edi
0x8447FC: mov     edx, [esi+38h]
0x8447FF: lea     ecx, [esp+20h+arg_C]
0x844803: push    ecx
0x844804: push    edx
0x844805: lea     ecx, [esi+40h]
0x844808: mov     [esp+28h+var_4], 0
0x844810: call    sub_76CE40
0x844815: or      eax, 0FFFFFFFFh
0x844818: add     [edi+60h], eax
0x84481B: mov     [esp+20h+var_4], eax
0x84481F: jnz     short loc_844828
0x844821: mov     ecx, edi
0x844823: call    sub_7604D0
0x844828: add     [esi+38h], ebx
0x84482B: mov     ecx, dword ptr [esp+20h+var_C]
0x84482F: mov     large fs:0, ecx
0x844836: pop     ecx
0x844837: pop     edi
0x844838: pop     esi
0x844839: pop     ebp
0x84483A: pop     ebx
0x84483B: add     esp, 0Ch
0x84483E: retn    10h
