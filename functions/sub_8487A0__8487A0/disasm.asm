0x8487A0: push    0FFFFFFFFh
0x8487A2: push    offset SEH_852030
0x8487A7: mov     eax, large fs:0
0x8487AD: push    eax
0x8487AE: push    ecx
0x8487AF: push    ebx
0x8487B0: push    esi
0x8487B1: push    edi
0x8487B2: mov     eax, ds:0B30AACh
0x8487B7: xor     eax, esp
0x8487B9: push    eax
0x8487BA: lea     eax, [esp+20h+var_C]
0x8487BE: mov     large fs:0, eax
0x8487C4: mov     esi, ecx
0x8487C6: mov     edi, ds:0B45B34h
0x8487CC: test    edi, edi
0x8487CE: mov     [esp+20h+var_10], edi
0x8487D2: mov     ebx, 1
0x8487D7: jz      short loc_8487DC
0x8487D9: add     [edi+60h], ebx
0x8487DC: mov     ecx, [esi+38h]
0x8487DF: lea     eax, [esp+20h+var_10]
0x8487E3: push    eax
0x8487E4: push    ecx
0x8487E5: lea     ecx, [esi+40h]
0x8487E8: mov     [esp+28h+var_4], 0
0x8487F0: call    sub_76CE40
0x8487F5: or      eax, 0FFFFFFFFh
0x8487F8: test    edi, edi
0x8487FA: mov     [esp+20h+var_4], eax
0x8487FE: jz      short loc_84880C
0x848800: add     [edi+60h], eax
0x848803: jnz     short loc_84880C
0x848805: mov     ecx, edi
0x848807: call    sub_7604D0
0x84880C: add     [esi+38h], ebx
0x84880F: mov     ecx, [esp+20h+var_C]
0x848813: mov     large fs:0, ecx
0x84881A: pop     ecx
0x84881B: pop     edi
0x84881C: pop     esi
0x84881D: pop     ebx
0x84881E: add     esp, 10h
0x848821: retn    10h
