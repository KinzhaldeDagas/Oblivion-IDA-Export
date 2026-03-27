0x6E8170: push    0FFFFFFFFh
0x6E8172: push    offset SEH_6E3B20
0x6E8177: mov     eax, large fs:0
0x6E817D: push    eax
0x6E817E: push    esi
0x6E817F: push    edi
0x6E8180: mov     eax, ds:0B30AACh
0x6E8185: xor     eax, esp
0x6E8187: push    eax
0x6E8188: lea     eax, [esp+18h+var_C]
0x6E818C: mov     large fs:0, eax
0x6E8192: mov     edi, ecx
0x6E8194: fld     [esp+18h+a2]
0x6E8198: sub     esp, 8
0x6E819B: fstp    [esp+20h+var_1C]
0x6E819F: fld     [esp+20h+arg_0]
0x6E81A3: fstp    [esp+20h+var_20]
0x6E81A6: call    sub_6EBA60
0x6E81AB: mov     ecx, [edi+10h]
0x6E81AE: test    ecx, ecx
0x6E81B0: mov     esi, eax
0x6E81B2: jz      short loc_6E8219
0x6E81B4: fld     [esp+18h+a2]
0x6E81B8: sub     esp, 8
0x6E81BB: fstp    [esp+20h+var_1C]; float
0x6E81BF: lea     eax, [esp+20h+a2]
0x6E81C3: fld     [esp+20h+arg_0]
0x6E81C7: fstp    [esp+20h+var_20]; float
0x6E81CA: push    eax; int
0x6E81CB: call    sub_6E8920
0x6E81D0: mov     ecx, [esp+18h+a2]
0x6E81D4: push    ecx; a2
0x6E81D5: mov     ecx, esi; this
0x6E81D7: mov     [esp+1Ch+var_4], 0
0x6E81DF: call    sub_70BD60
0x6E81E4: mov     edi, [esp+18h+a2]
0x6E81E8: test    edi, edi
0x6E81EA: mov     dword ptr [esi+14h], 0
0x6E81F1: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6E81F9: jz      short loc_6E8217
0x6E81FB: lea     edx, [edi+4]
0x6E81FE: push    edx; lpAddend
0x6E81FF: call    dword ptr ds:0A2807Ch
0x6E8205: test    eax, eax
0x6E8207: jnz     short loc_6E8217
0x6E8209: test    edi, edi
0x6E820B: jz      short loc_6E8217
0x6E820D: mov     eax, [edi]
0x6E820F: mov     edx, [eax]
0x6E8211: push    1
0x6E8213: mov     ecx, edi
0x6E8215: call    edx
0x6E8217: mov     eax, esi
0x6E8219: mov     ecx, dword ptr [esp+18h+var_C]
0x6E821D: mov     large fs:0, ecx
0x6E8224: pop     ecx
0x6E8225: pop     edi
0x6E8226: pop     esi
0x6E8227: add     esp, 0Ch
0x6E822A: retn    8
