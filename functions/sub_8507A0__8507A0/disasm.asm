0x8507A0: push    0FFFFFFFFh
0x8507A2: push    offset SEH_850610
0x8507A7: mov     eax, large fs:0
0x8507AD: push    eax
0x8507AE: push    ebx
0x8507AF: push    esi
0x8507B0: push    edi
0x8507B1: mov     eax, ds:0B30AACh
0x8507B6: xor     eax, esp
0x8507B8: push    eax
0x8507B9: lea     eax, [esp+1Ch+var_C]
0x8507BD: mov     large fs:0, eax
0x8507C3: mov     esi, ecx
0x8507C5: mov     eax, [esp+1Ch+arg_8]
0x8507C9: mov     eax, [eax+0Ch]
0x8507CC: push    eax
0x8507CD: call    sub_848E50
0x8507D2: mov     eax, ds:0B45BE8h
0x8507D7: test    eax, eax
0x8507D9: mov     edi, eax
0x8507DB: mov     [esp+1Ch+arg_8], edi
0x8507DF: mov     ebx, 1
0x8507E4: jz      short loc_8507E9
0x8507E6: add     [eax+60h], ebx
0x8507E9: mov     edx, [esi+38h]
0x8507EC: lea     ecx, [esp+1Ch+arg_8]
0x8507F0: push    ecx
0x8507F1: push    edx
0x8507F2: lea     ecx, [esi+40h]
0x8507F5: mov     [esp+24h+var_4], 0
0x8507FD: call    sub_76CE40
0x850802: or      eax, 0FFFFFFFFh
0x850805: test    edi, edi
0x850807: mov     [esp+1Ch+var_4], eax
0x85080B: jz      short loc_850819
0x85080D: add     [edi+60h], eax
0x850810: jnz     short loc_850819
0x850812: mov     ecx, edi
0x850814: call    sub_7604D0
0x850819: add     [esi+38h], ebx
0x85081C: mov     ecx, [esp+1Ch+var_C]
0x850820: mov     large fs:0, ecx
0x850827: pop     ecx
0x850828: pop     edi
0x850829: pop     esi
0x85082A: pop     ebx
0x85082B: add     esp, 0Ch
0x85082E: retn    10h
