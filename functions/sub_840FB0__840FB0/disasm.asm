0x840FB0: push    0FFFFFFFFh
0x840FB2: push    offset SEH_882120
0x840FB7: mov     eax, large fs:0
0x840FBD: push    eax
0x840FBE: push    ebx
0x840FBF: push    ebp
0x840FC0: push    esi
0x840FC1: push    edi
0x840FC2: mov     eax, ds:0B30AACh
0x840FC7: xor     eax, esp
0x840FC9: push    eax
0x840FCA: lea     eax, [esp+20h+var_C]
0x840FCE: mov     large fs:0, eax
0x840FD4: mov     edi, ecx
0x840FD6: mov     ebp, [esp+20h+arg_8]
0x840FDA: mov     esi, [ebp+0Ch]
0x840FDD: mov     ebx, ds:0B458F4h
0x840FE3: push    esi
0x840FE4: call    sub_848E50
0x840FE9: mov     ebp, [ebp+10h]
0x840FEC: mov     ecx, [esp+20h+arg_0]
0x840FF0: mov     eax, [edi]
0x840FF2: mov     edx, [eax+0BCh]
0x840FF8: push    ebp
0x840FF9: push    esi
0x840FFA: push    ecx
0x840FFB: mov     ecx, edi
0x840FFD: call    edx
0x840FFF: mov     esi, [esp+20h+arg_C]
0x841003: mov     eax, [esi+0A8h]
0x841009: mov     ds:0B46628h, eax
0x84100E: mov     ecx, [esi+0ACh]
0x841014: mov     ds:0B4662Ch, ecx
0x84101A: mov     edx, [esi+0B0h]
0x841020: mov     ds:0B46630h, edx
0x841026: mov     eax, [esi+0B4h]
0x84102C: mov     ds:0B46634h, eax
0x841031: mov     ecx, [ebx+24h]
0x841034: mov     ebp, [ecx]
0x841036: mov     edx, [esi]
0x841038: mov     eax, [edx+88h]
0x84103E: push    0
0x841040: mov     ecx, esi
0x841042: mov     [esp+24h+arg_8], ebp
0x841046: call    eax
0x841048: mov     ebp, [ebp+4]
0x84104B: cmp     ebp, eax
0x84104D: mov     [esp+20h+arg_0], eax
0x841051: jz      short loc_84108D
0x841053: test    ebp, ebp
0x841055: jz      short loc_841078
0x841057: lea     ecx, [ebp+4]
0x84105A: push    ecx; lpAddend
0x84105B: call    dword ptr ds:0A2807Ch
0x841061: test    eax, eax
0x841063: jnz     short loc_841074
0x841065: test    ebp, ebp
0x841067: jz      short loc_841074
0x841069: mov     edx, [ebp+0]
0x84106C: mov     eax, [edx]
0x84106E: push    1
0x841070: mov     ecx, ebp
0x841072: call    eax
0x841074: mov     eax, [esp+20h+arg_0]
0x841078: test    eax, eax
0x84107A: mov     ecx, [esp+20h+arg_8]
0x84107E: mov     [ecx+4], eax
0x841081: jz      short loc_84108D
0x841083: add     eax, 4
0x841086: push    eax; lpAddend
0x841087: call    dword ptr ds:0A28078h
0x84108D: mov     edx, [esp+20h+arg_8]
0x841091: push    esi
0x841092: push    edx
0x841093: mov     ecx, edi
0x841095: call    sub_848FA0
0x84109A: mov     eax, [ebx+24h]
0x84109D: mov     ebp, [eax+4]
0x8410A0: push    0
0x8410A2: push    esi
0x8410A3: mov     ecx, edi
0x8410A5: mov     [esp+28h+arg_8], ebp
0x8410A9: call    sub_848FD0
0x8410AE: mov     ebp, [ebp+4]
0x8410B1: cmp     ebp, eax
0x8410B3: mov     [esp+20h+arg_0], eax
0x8410B7: jz      short loc_8410F3
0x8410B9: test    ebp, ebp
0x8410BB: jz      short loc_8410DE
0x8410BD: lea     ecx, [ebp+4]
0x8410C0: push    ecx; lpAddend
0x8410C1: call    dword ptr ds:0A2807Ch
0x8410C7: test    eax, eax
0x8410C9: jnz     short loc_8410DA
0x8410CB: test    ebp, ebp
0x8410CD: jz      short loc_8410DA
0x8410CF: mov     edx, [ebp+0]
0x8410D2: mov     eax, [edx]
0x8410D4: push    1
0x8410D6: mov     ecx, ebp
0x8410D8: call    eax
0x8410DA: mov     eax, [esp+20h+arg_0]
0x8410DE: test    eax, eax
0x8410E0: mov     ecx, [esp+20h+arg_8]
0x8410E4: mov     [ecx+4], eax
0x8410E7: jz      short loc_8410F3
0x8410E9: add     eax, 4
0x8410EC: push    eax; lpAddend
0x8410ED: call    dword ptr ds:0A28078h
0x8410F3: mov     edx, [esp+20h+arg_8]
0x8410F7: push    esi
0x8410F8: push    edx
0x8410F9: mov     ecx, edi
0x8410FB: call    sub_848FA0
0x841100: mov     eax, [ebx+24h]
0x841103: mov     ebp, [eax+10h]
0x841106: mov     edx, [esi]
0x841108: mov     eax, [edx+88h]
0x84110E: push    1
0x841110: mov     ecx, esi
0x841112: mov     [esp+24h+arg_8], ebp
0x841116: call    eax
0x841118: mov     ebp, [ebp+4]
0x84111B: cmp     ebp, eax
0x84111D: mov     [esp+20h+arg_0], eax
0x841121: jz      short loc_84115D
0x841123: test    ebp, ebp
0x841125: jz      short loc_841148
0x841127: lea     ecx, [ebp+4]
0x84112A: push    ecx; lpAddend
0x84112B: call    dword ptr ds:0A2807Ch
0x841131: test    eax, eax
0x841133: jnz     short loc_841144
0x841135: test    ebp, ebp
0x841137: jz      short loc_841144
0x841139: mov     edx, [ebp+0]
0x84113C: mov     eax, [edx]
0x84113E: push    1
0x841140: mov     ecx, ebp
0x841142: call    eax
0x841144: mov     eax, [esp+20h+arg_0]
0x841148: test    eax, eax
0x84114A: mov     ecx, [esp+20h+arg_8]
0x84114E: mov     [ecx+4], eax
0x841151: jz      short loc_84115D
0x841153: add     eax, 4
0x841156: push    eax; lpAddend
0x841157: call    dword ptr ds:0A28078h
0x84115D: mov     edx, [esp+20h+arg_8]
0x841161: push    esi
0x841162: push    edx
0x841163: mov     ecx, edi
0x841165: call    sub_848FA0
0x84116A: mov     ecx, [ebx+24h]
0x84116D: mov     esi, [ecx+18h]
0x841170: mov     eax, ds:0B43108h
0x841175: mov     ebp, [esi+4]
0x841178: add     esi, 4
0x84117B: cmp     ebp, eax
0x84117D: mov     [esp+20h+arg_8], eax
0x841181: jz      short loc_8411B8
0x841183: test    ebp, ebp
0x841185: jz      short loc_8411A8
0x841187: lea     edx, [ebp+4]
0x84118A: push    edx; lpAddend
0x84118B: call    dword ptr ds:0A2807Ch
0x841191: test    eax, eax
0x841193: jnz     short loc_8411A4
0x841195: test    ebp, ebp
0x841197: jz      short loc_8411A4
0x841199: mov     eax, [ebp+0]
0x84119C: mov     edx, [eax]
0x84119E: push    1
0x8411A0: mov     ecx, ebp
0x8411A2: call    edx
0x8411A4: mov     eax, [esp+20h+arg_8]
0x8411A8: test    eax, eax
0x8411AA: mov     [esi], eax
0x8411AC: jz      short loc_8411B8
0x8411AE: add     eax, 4
0x8411B1: push    eax; lpAddend
0x8411B2: call    dword ptr ds:0A28078h
0x8411B8: mov     eax, [ebx+24h]
0x8411BB: mov     ebp, [eax+1Ch]
0x8411BE: mov     eax, ds:0B4310Ch
0x8411C3: mov     esi, [ebp+4]
0x8411C6: cmp     esi, eax
0x8411C8: mov     ecx, eax
0x8411CA: mov     [esp+20h+arg_8], ecx
0x8411CE: jz      short loc_841205
0x8411D0: test    esi, esi
0x8411D2: jz      short loc_8411F4
0x8411D4: lea     ecx, [esi+4]
0x8411D7: push    ecx; lpAddend
0x8411D8: call    dword ptr ds:0A2807Ch
0x8411DE: test    eax, eax
0x8411E0: jnz     short loc_8411F0
0x8411E2: test    esi, esi
0x8411E4: jz      short loc_8411F0
0x8411E6: mov     edx, [esi]
0x8411E8: mov     eax, [edx]
0x8411EA: push    1
0x8411EC: mov     ecx, esi
0x8411EE: call    eax
0x8411F0: mov     ecx, [esp+20h+arg_8]
0x8411F4: test    ecx, ecx
0x8411F6: mov     [ebp+4], ecx
0x8411F9: jz      short loc_841205
0x8411FB: add     ecx, 4
0x8411FE: push    ecx; lpAddend
0x8411FF: call    dword ptr ds:0A28078h
0x841205: mov     esi, 1
0x84120A: add     [ebx+60h], esi
0x84120D: mov     [esp+20h+arg_8], ebx
0x841211: mov     edx, [edi+38h]
0x841214: lea     ecx, [esp+20h+arg_8]
0x841218: push    ecx
0x841219: push    edx
0x84121A: lea     ecx, [edi+40h]
0x84121D: mov     [esp+28h+var_4], 0
0x841225: call    sub_76CE40
0x84122A: or      eax, 0FFFFFFFFh
0x84122D: add     [ebx+60h], eax
0x841230: mov     [esp+20h+var_4], eax
0x841234: jnz     short loc_84123D
0x841236: mov     ecx, ebx
0x841238: call    sub_7604D0
0x84123D: add     [edi+38h], esi
0x841240: mov     ecx, [esp+20h+var_C]
0x841244: mov     large fs:0, ecx
0x84124B: pop     ecx
0x84124C: pop     edi
0x84124D: pop     esi
0x84124E: pop     ebp
0x84124F: pop     ebx
0x841250: add     esp, 0Ch
0x841253: retn    10h
