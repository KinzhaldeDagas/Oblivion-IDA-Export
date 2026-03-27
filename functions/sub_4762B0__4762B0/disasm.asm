0x4762B0: push    0FFFFFFFFh
0x4762B2: push    offset SEH_478B90
0x4762B7: mov     eax, large fs:0
0x4762BD: push    eax
0x4762BE: push    ecx
0x4762BF: push    esi
0x4762C0: mov     eax, ds:0B30AACh
0x4762C5: xor     eax, esp
0x4762C7: push    eax
0x4762C8: lea     eax, [esp+18h+var_C]
0x4762CC: mov     large fs:0, eax
0x4762D2: mov     esi, ecx
0x4762D4: mov     eax, ds:0B33B00h
0x4762D9: mov     ecx, [eax+18h]
0x4762DC: shr     ecx, 0Bh
0x4762DF: test    cl, 1
0x4762E2: push    2Ch ; ','; Size
0x4762E4: jnz     short loc_47631A
0x4762E6: call    FormHeapAlloc
0x4762EB: add     esp, 4
0x4762EE: mov     [esp+18h+var_10], eax
0x4762F2: test    eax, eax
0x4762F4: mov     [esp+18h+var_4], 0
0x4762FC: jz      short loc_47634E
0x4762FE: mov     edx, [esp+18h+arg_4]
0x476302: mov     ecx, [esp+18h+arg_8]
0x476306: push    0
0x476308: push    edx
0x476309: mov     edx, [esp+20h+arg_0]
0x47630D: push    0
0x47630F: push    ecx
0x476310: push    edx
0x476311: mov     ecx, eax
0x476313: call    sub_474C50
0x476318: jmp     short loc_476350
0x47631A: call    FormHeapAlloc
0x47631F: add     esp, 4
0x476322: mov     [esp+18h+var_10], eax
0x476326: test    eax, eax
0x476328: mov     [esp+18h+var_4], 1
0x476330: jz      short loc_47634E
0x476332: mov     ecx, [esp+18h+arg_4]
0x476336: mov     edx, [esp+18h+arg_8]
0x47633A: push    1
0x47633C: push    ecx
0x47633D: mov     ecx, [esp+20h+arg_0]
0x476341: push    0
0x476343: push    edx
0x476344: push    ecx
0x476345: mov     ecx, eax
0x476347: call    sub_474C50
0x47634C: jmp     short loc_476350
0x47634E: xor     eax, eax
0x476350: mov     ecx, esi
0x476352: mov     [esi+0D0h], eax
0x476358: mov     [esp+18h+var_4], 0FFFFFFFFh
0x476360: call    sub_4753F0
0x476365: mov     ecx, [esp+18h+var_C]
0x476369: mov     large fs:0, ecx
0x476370: pop     ecx
0x476371: pop     esi
0x476372: add     esp, 10h
0x476375: retn    0Ch
