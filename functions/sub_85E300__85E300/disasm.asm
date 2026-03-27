0x85E300: push    0FFFFFFFFh
0x85E302: push    offset SEH_85E160
0x85E307: mov     eax, large fs:0
0x85E30D: push    eax
0x85E30E: push    ebx
0x85E30F: push    ebp
0x85E310: push    esi
0x85E311: push    edi
0x85E312: mov     eax, ds:0B30AACh
0x85E317: xor     eax, esp
0x85E319: push    eax
0x85E31A: lea     eax, [esp+20h+var_C]
0x85E31E: mov     large fs:0, eax
0x85E324: mov     esi, ecx
0x85E326: mov     eax, [esp+20h+arg_8]
0x85E32A: mov     eax, [eax+10h]
0x85E32D: mov     edx, [esi]
0x85E32F: mov     edx, [edx+0BCh]
0x85E335: mov     edi, ds:0B477F8h
0x85E33B: push    eax
0x85E33C: mov     eax, [esp+24h+arg_0]
0x85E340: push    0
0x85E342: push    eax
0x85E343: call    edx
0x85E345: mov     eax, [edi+24h]
0x85E348: mov     ecx, [esp+20h+arg_C]
0x85E34C: mov     ebx, [eax]
0x85E34E: push    0
0x85E350: push    ecx
0x85E351: mov     ecx, esi
0x85E353: mov     [esp+28h+arg_8], ebx
0x85E357: call    sub_848FD0
0x85E35C: mov     ebx, [ebx+4]
0x85E35F: mov     ebp, eax
0x85E361: cmp     ebx, ebp
0x85E363: jz      short loc_85E39A
0x85E365: test    ebx, ebx
0x85E367: jz      short loc_85E385
0x85E369: lea     edx, [ebx+4]
0x85E36C: push    edx; lpAddend
0x85E36D: call    dword ptr ds:0A2807Ch
0x85E373: test    eax, eax
0x85E375: jnz     short loc_85E385
0x85E377: test    ebx, ebx
0x85E379: jz      short loc_85E385
0x85E37B: mov     eax, [ebx]
0x85E37D: mov     edx, [eax]
0x85E37F: push    1
0x85E381: mov     ecx, ebx
0x85E383: call    edx
0x85E385: test    ebp, ebp
0x85E387: mov     eax, [esp+20h+arg_8]
0x85E38B: mov     [eax+4], ebp
0x85E38E: jz      short loc_85E39A
0x85E390: add     ebp, 4
0x85E393: push    ebp; lpAddend
0x85E394: call    dword ptr ds:0A28078h
0x85E39A: mov     ecx, [esp+20h+arg_C]
0x85E39E: mov     edx, [esp+20h+arg_8]
0x85E3A2: push    ecx
0x85E3A3: push    edx
0x85E3A4: mov     ecx, esi
0x85E3A6: call    sub_848FA0
0x85E3AB: cmp     byte ptr [esp+20h+arg_10], 0
0x85E3B0: jnz     short loc_85E3ED
0x85E3B2: mov     ebx, 1
0x85E3B7: add     [edi+60h], ebx
0x85E3BA: mov     [esp+20h+arg_10], edi
0x85E3BE: mov     ecx, [esi+38h]
0x85E3C1: lea     eax, [esp+20h+arg_10]
0x85E3C5: push    eax
0x85E3C6: push    ecx
0x85E3C7: lea     ecx, [esi+40h]
0x85E3CA: mov     [esp+28h+var_4], 0
0x85E3D2: call    sub_76CE40
0x85E3D7: or      eax, 0FFFFFFFFh
0x85E3DA: add     [edi+60h], eax
0x85E3DD: mov     [esp+20h+var_4], eax
0x85E3E1: jnz     short loc_85E3EA
0x85E3E3: mov     ecx, edi
0x85E3E5: call    sub_7604D0
0x85E3EA: add     [esi+38h], ebx
0x85E3ED: mov     ecx, dword ptr [esp+20h+var_C]
0x85E3F1: mov     large fs:0, ecx
0x85E3F8: pop     ecx
0x85E3F9: pop     edi
0x85E3FA: pop     esi
0x85E3FB: pop     ebp
0x85E3FC: pop     ebx
0x85E3FD: add     esp, 0Ch
0x85E400: retn    14h
