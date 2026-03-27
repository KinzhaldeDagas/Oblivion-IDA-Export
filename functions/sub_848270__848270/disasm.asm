0x848270: push    0FFFFFFFFh
0x848272: push    offset SEH_852030
0x848277: mov     eax, large fs:0
0x84827D: push    eax
0x84827E: push    ecx
0x84827F: push    ebx
0x848280: push    esi
0x848281: push    edi
0x848282: mov     eax, ds:0B30AACh
0x848287: xor     eax, esp
0x848289: push    eax
0x84828A: lea     eax, [esp+20h+var_C]
0x84828E: mov     large fs:0, eax
0x848294: mov     esi, ecx
0x848296: mov     edi, ds:0B455C0h
0x84829C: test    edi, edi
0x84829E: mov     [esp+20h+var_10], edi
0x8482A2: mov     ebx, 1
0x8482A7: jz      short loc_8482AC
0x8482A9: add     [edi+60h], ebx
0x8482AC: mov     ecx, [esi+38h]
0x8482AF: lea     eax, [esp+20h+var_10]
0x8482B3: push    eax
0x8482B4: push    ecx
0x8482B5: lea     ecx, [esi+40h]
0x8482B8: mov     [esp+28h+var_4], 0
0x8482C0: call    sub_76CE40
0x8482C5: or      eax, 0FFFFFFFFh
0x8482C8: test    edi, edi
0x8482CA: mov     [esp+20h+var_4], eax
0x8482CE: jz      short loc_8482DC
0x8482D0: add     [edi+60h], eax
0x8482D3: jnz     short loc_8482DC
0x8482D5: mov     ecx, edi
0x8482D7: call    sub_7604D0
0x8482DC: add     [esi+38h], ebx
0x8482DF: mov     ecx, [esp+20h+var_C]
0x8482E3: mov     large fs:0, ecx
0x8482EA: pop     ecx
0x8482EB: pop     edi
0x8482EC: pop     esi
0x8482ED: pop     ebx
0x8482EE: add     esp, 10h
0x8482F1: retn    10h
