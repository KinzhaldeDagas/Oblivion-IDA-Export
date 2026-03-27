0x7FF080: push    0FFFFFFFFh
0x7FF082: push    offset SEH_7FF080
0x7FF087: mov     eax, large fs:0
0x7FF08D: push    eax
0x7FF08E: sub     esp, 20h
0x7FF091: push    ebx
0x7FF092: push    ebp
0x7FF093: push    esi
0x7FF094: push    edi
0x7FF095: mov     eax, ds:0B30AACh
0x7FF09A: xor     eax, esp
0x7FF09C: push    eax
0x7FF09D: lea     eax, [esp+40h+var_C]
0x7FF0A1: mov     large fs:0, eax
0x7FF0A7: mov     esi, ecx
0x7FF0A9: mov     ebp, [esp+40h+arg_0]
0x7FF0AD: mov     eax, [esp+40h+arg_4]
0x7FF0B1: xor     ebx, ebx
0x7FF0B3: push    ebx
0x7FF0B4: push    ebp
0x7FF0B5: push    eax
0x7FF0B6: call    sub_862B40
0x7FF0BB: test    byte ptr [ebp+1Ch], 2
0x7FF0BF: mov     edi, eax
0x7FF0C1: lea     ecx, [esi+24h]; this
0x7FF0C4: jbe     short loc_7FF0CE
0x7FF0C6: mov     eax, [esi+90h]
0x7FF0CC: jmp     short loc_7FF0D4
0x7FF0CE: mov     eax, [esi+8Ch]
0x7FF0D4: push    eax; a2
0x7FF0D5: call    NiSmartPointer_Set??
0x7FF0DA: fldz
0x7FF0DC: fst     dword ptr ds:0B46FD8h
0x7FF0E2: fst     dword ptr ds:0B46FDCh
0x7FF0E8: mov     eax, [esi+9Ch]
0x7FF0EE: mov     dword ptr [eax+20h], 0Bh
0x7FF0F5: mov     ecx, ds:0B46C18h
0x7FF0FB: mov     [ecx+8], bl
0x7FF0FE: mov     edx, ds:0B46C14h
0x7FF104: mov     [edx+8], bl
0x7FF107: mov     ecx, ds:0B2DCFCh
0x7FF10D: xor     eax, eax
0x7FF10F: cmp     ecx, ebx
0x7FF111: jle     short loc_7FF128
0x7FF113: mov     ds:0B4693Ah[eax*2], bl
0x7FF11A: mov     ds:0B46939h[eax*2], bl
0x7FF121: add     eax, 1
0x7FF124: cmp     eax, ecx
0x7FF126: jl      short loc_7FF113
0x7FF128: mov     edx, [esp+40h+arg_8]
0x7FF12C: mov     byte ptr ds:0B4693Ah, 1
0x7FF133: mov     ecx, [edx+0Ch]
0x7FF136: cmp     ecx, ebx
0x7FF138: jz      loc_7FF23C
0x7FF13E: fld     dword ptr [ecx+2Ch]
0x7FF141: fstp    [esp+40h+arg_4]
0x7FF145: fld     dword ptr [ecx+30h]
0x7FF148: fstp    [esp+40h+arg_0]
0x7FF14C: fld     st
0x7FF14E: fld     [esp+40h+arg_0]
0x7FF152: fucom   st(1)
0x7FF154: fnstsw  ax
0x7FF156: fstp    st(1)
0x7FF158: test    ah, 44h
0x7FF15B: fld     [esp+40h+arg_4]
0x7FF15F: jp      short loc_7FF1AA
0x7FF161: fld     st(2)
0x7FF163: fucomp  st(1)
0x7FF165: fnstsw  ax
0x7FF167: test    ah, 44h
0x7FF16A: jp      short loc_7FF1AA
0x7FF16C: fstp    st(1)
0x7FF16E: fstp    st
0x7FF170: fld     dword ptr ds:0A93350h
0x7FF176: fstp    [esp+40h+var_2C]
0x7FF17A: mov     eax, [esp+40h+var_2C]
0x7FF17E: mov     ds:0B46DB8h, eax
0x7FF183: fst     [esp+40h+var_28]
0x7FF187: mov     ecx, [esp+40h+var_28]
0x7FF18B: fld1
0x7FF18D: mov     ds:0B46DBCh, ecx
0x7FF193: fst     [esp+40h+var_24]
0x7FF197: mov     eax, [esp+40h+var_24]
0x7FF19B: fxch    st(1)
0x7FF19D: fstp    [esp+40h+var_20]
0x7FF1A1: mov     ecx, [esp+40h+var_20]
0x7FF1A5: jmp     loc_7FF271
0x7FF1AA: mov     eax, [ecx+20h]
0x7FF1AD: fsubr   st, st(1)
0x7FF1AF: mov     [esp+40h+var_2C], eax
0x7FF1B3: mov     eax, [ecx+24h]
0x7FF1B6: mov     ecx, [ecx+28h]
0x7FF1B9: fstp    [esp+40h+arg_0]
0x7FF1BD: mov     [esp+40h+var_28], eax
0x7FF1C1: fstp    [esp+40h+var_1C]
0x7FF1C5: mov     eax, [esp+40h+var_1C]
0x7FF1C9: fld     [esp+40h+arg_0]
0x7FF1CD: mov     [esp+40h+var_24], ecx
0x7FF1D1: fstp    [esp+40h+var_18]
0x7FF1D5: mov     ecx, [esp+40h+var_18]
0x7FF1D9: fld1
0x7FF1DB: mov     ds:0B46DB8h, eax
0x7FF1E0: fst     [esp+40h+var_14]
0x7FF1E4: mov     ds:0B46DBCh, ecx
0x7FF1EA: mov     eax, [esp+40h+var_14]
0x7FF1EE: fxch    st(1)
0x7FF1F0: fstp    [esp+40h+var_10]
0x7FF1F4: mov     ds:0B46DC0h, eax
0x7FF1F9: fld     [esp+40h+var_2C]
0x7FF1FD: mov     ecx, [esp+40h+var_10]
0x7FF201: fstp    [esp+40h+var_1C]
0x7FF205: mov     ds:0B46DC4h, ecx
0x7FF20B: fld     [esp+40h+var_28]
0x7FF20F: mov     eax, [esp+40h+var_1C]
0x7FF213: fstp    [esp+40h+var_18]
0x7FF217: mov     ds:0B46DC8h, eax
0x7FF21C: fld     [esp+40h+var_24]
0x7FF220: mov     ecx, [esp+40h+var_18]
0x7FF224: fstp    [esp+40h+var_14]
0x7FF228: mov     ds:0B46DCCh, ecx
0x7FF22E: mov     eax, [esp+40h+var_14]
0x7FF232: fst     [esp+40h+var_10]
0x7FF236: mov     ecx, [esp+40h+var_10]
0x7FF23A: jmp     short loc_7FF29D
0x7FF23C: fld     dword ptr ds:0A93350h
0x7FF242: fstp    [esp+40h+var_1C]
0x7FF246: mov     eax, [esp+40h+var_1C]
0x7FF24A: mov     ds:0B46DB8h, eax
0x7FF24F: fst     [esp+40h+var_18]
0x7FF253: mov     ecx, [esp+40h+var_18]
0x7FF257: fld1
0x7FF259: mov     ds:0B46DBCh, ecx
0x7FF25F: fst     [esp+40h+var_14]
0x7FF263: mov     eax, [esp+40h+var_14]
0x7FF267: fxch    st(1)
0x7FF269: fstp    [esp+40h+var_10]
0x7FF26D: mov     ecx, [esp+40h+var_10]
0x7FF271: mov     ds:0B46DC4h, ecx
0x7FF277: mov     ecx, ds:0B25AD4h
0x7FF27D: mov     ds:0B46DC0h, eax
0x7FF282: mov     eax, ds:0B25AD0h
0x7FF287: mov     ds:0B46DCCh, ecx
0x7FF28D: mov     ecx, ds:0B25ADCh
0x7FF293: mov     ds:0B46DC8h, eax
0x7FF298: mov     eax, ds:0B25AD8h
0x7FF29D: mov     ds:0B46DD0h, eax
0x7FF2A2: mov     ds:0B46DD4h, ecx
0x7FF2A8: mov     ecx, [edx+10h]
0x7FF2AB: cmp     ecx, ebx
0x7FF2AD: jz      short loc_7FF2C6
0x7FF2AF: fld     dword ptr [ecx+50h]
0x7FF2B2: fstp    [esp+40h+arg_0]
0x7FF2B6: fcom    [esp+40h+arg_0]
0x7FF2BA: fnstsw  ax
0x7FF2BC: test    ah, 41h
0x7FF2BF: jnz     short loc_7FF2C6
0x7FF2C1: fstp    st
0x7FF2C3: fld     dword ptr [ecx+50h]
0x7FF2C6: fstp    dword ptr ds:0B46FA8h
0x7FF2CC: mov     ecx, [esi+30h]
0x7FF2CF: mov     edx, [ecx]
0x7FF2D1: mov     eax, [edx+48h]
0x7FF2D4: call    eax
0x7FF2D6: mov     ecx, [esi+2Ch]
0x7FF2D9: mov     edx, [ecx]
0x7FF2DB: mov     eax, [edx+48h]
0x7FF2DE: call    eax
0x7FF2E0: cmp     [edi+30h], ebx
0x7FF2E3: jnz     short loc_7FF2ED
0x7FF2E5: call    sub_772DF0
0x7FF2EA: mov     [edi+30h], eax
0x7FF2ED: mov     ecx, [edi+30h]
0x7FF2F0: push    ebx
0x7FF2F1: push    ebx
0x7FF2F2: push    1Bh
0x7FF2F4: call    sub_772CD0
0x7FF2F9: mov     ebp, 1
0x7FF2FE: add     [edi+60h], ebp
0x7FF301: mov     [esp+40h+arg_0], edi
0x7FF305: mov     edx, [esi+38h]
0x7FF308: lea     ecx, [esp+40h+arg_0]
0x7FF30C: push    ecx
0x7FF30D: push    edx
0x7FF30E: lea     ecx, [esi+40h]
0x7FF311: mov     [esp+48h+var_4], ebx
0x7FF315: call    sub_76CE40
0x7FF31A: or      eax, 0FFFFFFFFh
0x7FF31D: add     [edi+60h], eax
0x7FF320: mov     [esp+40h+var_4], eax
0x7FF324: jnz     short loc_7FF32D
0x7FF326: mov     ecx, edi
0x7FF328: call    sub_7604D0
0x7FF32D: add     [esi+38h], ebp
0x7FF330: xor     eax, eax
0x7FF332: mov     ecx, [esp+40h+var_C]
0x7FF336: mov     large fs:0, ecx
0x7FF33D: pop     ecx
0x7FF33E: pop     edi
0x7FF33F: pop     esi
0x7FF340: pop     ebp
0x7FF341: pop     ebx
0x7FF342: add     esp, 2Ch
0x7FF345: retn    0Ch
