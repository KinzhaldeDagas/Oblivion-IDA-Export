0x6E8920: push    0FFFFFFFFh
0x6E8922: push    offset SEH_6E46A0
0x6E8927: mov     eax, large fs:0
0x6E892D: push    eax
0x6E892E: sub     esp, 10h
0x6E8931: push    ebx
0x6E8932: push    ebp
0x6E8933: push    esi
0x6E8934: push    edi
0x6E8935: mov     eax, ds:0B30AACh
0x6E893A: xor     eax, esp
0x6E893C: push    eax
0x6E893D: lea     eax, [esp+30h+var_C]
0x6E8941: mov     large fs:0, eax
0x6E8947: mov     esi, ecx
0x6E8949: lea     eax, [esp+30h+var_10]
0x6E894D: xor     ebx, ebx
0x6E894F: push    eax
0x6E8950: mov     [esp+34h+var_4], ebx
0x6E8954: mov     [esp+34h+var_14], ebx
0x6E8958: call    sub_700790
0x6E895D: mov     eax, [eax]
0x6E895F: cmp     eax, ebx
0x6E8961: mov     edi, [esp+30h+arg_0]
0x6E8965: mov     [edi], eax
0x6E8967: jz      short loc_6E8973
0x6E8969: add     eax, 4
0x6E896C: push    eax; lpAddend
0x6E896D: call    dword ptr ds:0A28078h
0x6E8973: mov     ebp, [esp+30h+var_10]
0x6E8977: cmp     ebp, ebx
0x6E8979: mov     [esp+30h+var_4], ebx
0x6E897D: mov     [esp+30h+var_14], 1
0x6E8985: jz      short loc_6E89A4
0x6E8987: lea     ecx, [ebp+4]
0x6E898A: push    ecx; lpAddend
0x6E898B: call    dword ptr ds:0A2807Ch
0x6E8991: test    eax, eax
0x6E8993: jnz     short loc_6E89A4
0x6E8995: cmp     ebp, ebx
0x6E8997: jz      short loc_6E89A4
0x6E8999: mov     edx, [ebp+0]
0x6E899C: mov     eax, [edx]
0x6E899E: push    1
0x6E89A0: mov     ecx, ebp
0x6E89A2: call    eax
0x6E89A4: mov     eax, [esi+8]
0x6E89A7: cmp     eax, ebx
0x6E89A9: jbe     short loc_6E89F7
0x6E89AB: fld     [esp+30h+arg_8]
0x6E89AF: lea     ecx, [esp+30h+var_1C]
0x6E89B3: push    ecx; int
0x6E89B4: mov     ecx, [esi+10h]
0x6E89B7: lea     edx, [esp+34h+var_18]
0x6E89BB: push    edx; int
0x6E89BC: sub     esp, 8
0x6E89BF: fstp    [esp+40h+var_3C]; float
0x6E89C3: mov     [esp+40h+var_18], ebx
0x6E89C7: fld     [esp+40h+arg_4]
0x6E89CB: mov     [esp+40h+var_1C], ebx
0x6E89CF: fstp    [esp+40h+var_40]; float
0x6E89D2: push    eax; int
0x6E89D3: mov     eax, [esi+0Ch]
0x6E89D6: push    eax; int
0x6E89D7: push    ecx; int
0x6E89D8: push    5; int
0x6E89DA: call    sub_6D3210
0x6E89DF: mov     edx, [esi+10h]
0x6E89E2: mov     eax, [esp+50h+var_1C]
0x6E89E6: mov     ecx, [edi]
0x6E89E8: add     esp, 20h
0x6E89EB: push    edx
0x6E89EC: mov     edx, [esp+34h+var_18]
0x6E89F0: push    eax
0x6E89F1: push    edx
0x6E89F2: call    sub_6E88C0
0x6E89F7: mov     eax, edi
0x6E89F9: mov     ecx, dword ptr [esp+30h+var_C]
0x6E89FD: mov     large fs:0, ecx
0x6E8A04: pop     ecx
0x6E8A05: pop     edi
0x6E8A06: pop     esi
0x6E8A07: pop     ebp
0x6E8A08: pop     ebx
0x6E8A09: add     esp, 1Ch
0x6E8A0C: retn    0Ch
