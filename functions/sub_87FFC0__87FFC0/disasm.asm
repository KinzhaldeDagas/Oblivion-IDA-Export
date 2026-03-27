0x87FFC0: push    0FFFFFFFFh
0x87FFC2: push    offset SEH_880560
0x87FFC7: mov     eax, large fs:0
0x87FFCD: push    eax
0x87FFCE: push    ebx
0x87FFCF: push    ebp
0x87FFD0: push    esi
0x87FFD1: push    edi
0x87FFD2: mov     eax, ds:0B30AACh
0x87FFD7: xor     eax, esp
0x87FFD9: push    eax
0x87FFDA: lea     eax, [esp+20h+var_C]
0x87FFDE: mov     large fs:0, eax
0x87FFE4: mov     esi, ecx
0x87FFE6: mov     ebx, [esp+20h+arg_8]
0x87FFEA: mov     eax, [ebx+10h]
0x87FFED: mov     edi, ds:0B47724h
0x87FFF3: push    eax
0x87FFF4: call    sub_848C40
0x87FFF9: mov     ebx, [ebx+0Ch]
0x87FFFC: push    ebx
0x87FFFD: mov     ecx, esi
0x87FFFF: call    sub_848E50
0x880004: mov     ecx, [esp+20h+arg_0]
0x880008: mov     eax, [esi]
0x88000A: mov     edx, [eax+0BCh]
0x880010: push    0
0x880012: push    ebx
0x880013: push    ecx
0x880014: mov     ecx, esi
0x880016: call    edx
0x880018: mov     eax, [edi+24h]
0x88001B: mov     ecx, [esp+20h+arg_C]
0x88001F: mov     ebx, [eax]
0x880021: mov     edx, [ecx]
0x880023: mov     eax, [edx+88h]
0x880029: push    0
0x88002B: mov     [esp+24h+arg_8], ebx
0x88002F: call    eax
0x880031: mov     ebx, [ebx+4]
0x880034: mov     ebp, eax
0x880036: cmp     ebx, ebp
0x880038: jz      short loc_88006F
0x88003A: test    ebx, ebx
0x88003C: jz      short loc_88005A
0x88003E: lea     ecx, [ebx+4]
0x880041: push    ecx; lpAddend
0x880042: call    dword ptr ds:0A2807Ch
0x880048: test    eax, eax
0x88004A: jnz     short loc_88005A
0x88004C: test    ebx, ebx
0x88004E: jz      short loc_88005A
0x880050: mov     edx, [ebx]
0x880052: mov     eax, [edx]
0x880054: push    1
0x880056: mov     ecx, ebx
0x880058: call    eax
0x88005A: test    ebp, ebp
0x88005C: mov     ecx, [esp+20h+arg_8]
0x880060: mov     [ecx+4], ebp
0x880063: jz      short loc_88006F
0x880065: add     ebp, 4
0x880068: push    ebp; lpAddend
0x880069: call    dword ptr ds:0A28078h
0x88006F: mov     edx, [edi+24h]
0x880072: mov     eax, [esp+20h+arg_C]
0x880076: mov     ebx, [edx+4]
0x880079: push    0
0x88007B: push    eax
0x88007C: mov     ecx, esi
0x88007E: mov     [esp+28h+arg_8], ebx
0x880082: call    sub_848FD0
0x880087: mov     ebx, [ebx+4]
0x88008A: mov     ebp, eax
0x88008C: cmp     ebx, ebp
0x88008E: jz      short loc_8800C5
0x880090: test    ebx, ebx
0x880092: jz      short loc_8800B0
0x880094: lea     ecx, [ebx+4]
0x880097: push    ecx; lpAddend
0x880098: call    dword ptr ds:0A2807Ch
0x88009E: test    eax, eax
0x8800A0: jnz     short loc_8800B0
0x8800A2: test    ebx, ebx
0x8800A4: jz      short loc_8800B0
0x8800A6: mov     edx, [ebx]
0x8800A8: mov     eax, [edx]
0x8800AA: push    1
0x8800AC: mov     ecx, ebx
0x8800AE: call    eax
0x8800B0: test    ebp, ebp
0x8800B2: mov     ecx, [esp+20h+arg_8]
0x8800B6: mov     [ecx+4], ebp
0x8800B9: jz      short loc_8800C5
0x8800BB: add     ebp, 4
0x8800BE: push    ebp; lpAddend
0x8800BF: call    dword ptr ds:0A28078h
0x8800C5: mov     edx, [edi+24h]
0x8800C8: mov     ebx, [edx+10h]
0x8800CB: mov     eax, ds:0B43110h
0x8800D0: mov     ebp, [ebx+4]
0x8800D3: add     ebx, 4
0x8800D6: cmp     ebp, eax
0x8800D8: mov     [esp+20h+arg_C], eax
0x8800DC: jz      short loc_880113
0x8800DE: test    ebp, ebp
0x8800E0: jz      short loc_880103
0x8800E2: lea     eax, [ebp+4]
0x8800E5: push    eax; lpAddend
0x8800E6: call    dword ptr ds:0A2807Ch
0x8800EC: test    eax, eax
0x8800EE: jnz     short loc_8800FF
0x8800F0: test    ebp, ebp
0x8800F2: jz      short loc_8800FF
0x8800F4: mov     edx, [ebp+0]
0x8800F7: mov     eax, [edx]
0x8800F9: push    1
0x8800FB: mov     ecx, ebp
0x8800FD: call    eax
0x8800FF: mov     eax, [esp+20h+arg_C]
0x880103: test    eax, eax
0x880105: mov     [ebx], eax
0x880107: jz      short loc_880113
0x880109: add     eax, 4
0x88010C: push    eax; lpAddend
0x88010D: call    dword ptr ds:0A28078h
0x880113: mov     ecx, [edi+24h]
0x880116: mov     ebx, [ecx+14h]
0x880119: mov     eax, ds:0B43108h
0x88011E: mov     ebp, [ebx+4]
0x880121: add     ebx, 4
0x880124: cmp     ebp, eax
0x880126: mov     [esp+20h+arg_C], eax
0x88012A: jz      short loc_880161
0x88012C: test    ebp, ebp
0x88012E: jz      short loc_880151
0x880130: lea     edx, [ebp+4]
0x880133: push    edx; lpAddend
0x880134: call    dword ptr ds:0A2807Ch
0x88013A: test    eax, eax
0x88013C: jnz     short loc_88014D
0x88013E: test    ebp, ebp
0x880140: jz      short loc_88014D
0x880142: mov     eax, [ebp+0]
0x880145: mov     edx, [eax]
0x880147: push    1
0x880149: mov     ecx, ebp
0x88014B: call    edx
0x88014D: mov     eax, [esp+20h+arg_C]
0x880151: test    eax, eax
0x880153: mov     [ebx], eax
0x880155: jz      short loc_880161
0x880157: add     eax, 4
0x88015A: push    eax; lpAddend
0x88015B: call    dword ptr ds:0A28078h
0x880161: mov     eax, [edi+24h]
0x880164: mov     ebp, [eax+18h]
0x880167: mov     eax, ds:0B4310Ch
0x88016C: mov     ebx, [ebp+4]
0x88016F: cmp     ebx, eax
0x880171: mov     ecx, eax
0x880173: mov     [esp+20h+arg_C], ecx
0x880177: jz      short loc_8801AE
0x880179: test    ebx, ebx
0x88017B: jz      short loc_88019D
0x88017D: lea     ecx, [ebx+4]
0x880180: push    ecx; lpAddend
0x880181: call    dword ptr ds:0A2807Ch
0x880187: test    eax, eax
0x880189: jnz     short loc_880199
0x88018B: test    ebx, ebx
0x88018D: jz      short loc_880199
0x88018F: mov     edx, [ebx]
0x880191: mov     eax, [edx]
0x880193: push    1
0x880195: mov     ecx, ebx
0x880197: call    eax
0x880199: mov     ecx, [esp+20h+arg_C]
0x88019D: test    ecx, ecx
0x88019F: mov     [ebp+4], ecx
0x8801A2: jz      short loc_8801AE
0x8801A4: add     ecx, 4
0x8801A7: push    ecx; lpAddend
0x8801A8: call    dword ptr ds:0A28078h
0x8801AE: mov     ebx, 1
0x8801B3: add     [edi+60h], ebx
0x8801B6: mov     [esp+20h+arg_C], edi
0x8801BA: mov     edx, [esi+38h]
0x8801BD: lea     ecx, [esp+20h+arg_C]
0x8801C1: push    ecx
0x8801C2: push    edx
0x8801C3: lea     ecx, [esi+40h]
0x8801C6: mov     [esp+28h+var_4], 0
0x8801CE: call    sub_76CE40
0x8801D3: or      eax, 0FFFFFFFFh
0x8801D6: add     [edi+60h], eax
0x8801D9: mov     [esp+20h+var_4], eax
0x8801DD: jnz     short loc_8801E6
0x8801DF: mov     ecx, edi
0x8801E1: call    sub_7604D0
0x8801E6: add     [esi+38h], ebx
0x8801E9: mov     ecx, [esp+20h+var_C]
0x8801ED: mov     large fs:0, ecx
0x8801F4: pop     ecx
0x8801F5: pop     edi
0x8801F6: pop     esi
0x8801F7: pop     ebp
0x8801F8: pop     ebx
0x8801F9: add     esp, 0Ch
0x8801FC: retn    10h
