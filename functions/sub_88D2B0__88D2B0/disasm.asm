0x88D2B0: mov     al, [esp+arg_4]
0x88D2B4: sub     esp, 1Ch
0x88D2B7: cmp     [ecx+1Ah], al
0x88D2BA: jz      short loc_88D2BF
0x88D2BC: mov     [ecx+1Ah], al
0x88D2BF: mov     edx, [esp+1Ch+arg_0]
0x88D2C3: test    edx, edx
0x88D2C5: jz      short loc_88D2FF
0x88D2C7: xor     eax, eax
0x88D2C9: cmp     [ecx+1Ah], al
0x88D2CC: mov     [esp+1Ch+var_1C], 0
0x88D2D3: setnz   al
0x88D2D6: mov     [esp+1Ch+var_18], 1
0x88D2DB: mov     [esp+1Ch+var_14], 6
0x88D2E3: mov     [esp+1Ch+var_10], eax
0x88D2E7: mov     eax, ds:0B2E318h
0x88D2EC: test    eax, eax
0x88D2EE: jz      short loc_88D2FF
0x88D2F0: push    eax
0x88D2F1: lea     ecx, [esp+20h+var_1C]
0x88D2F5: push    ecx
0x88D2F6: push    edx
0x88D2F7: call    sub_88A7D0
0x88D2FC: add     esp, 0Ch
0x88D2FF: add     esp, 1Ch
0x88D302: retn    8
