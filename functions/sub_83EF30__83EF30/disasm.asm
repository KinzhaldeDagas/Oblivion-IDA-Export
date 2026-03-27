0x83EF30: push    0FFFFFFFFh
0x83EF32: push    offset SEH_882120
0x83EF37: mov     eax, large fs:0
0x83EF3D: push    eax
0x83EF3E: push    ebx
0x83EF3F: push    ebp
0x83EF40: push    esi
0x83EF41: push    edi
0x83EF42: mov     eax, ds:0B30AACh
0x83EF47: xor     eax, esp
0x83EF49: push    eax
0x83EF4A: lea     eax, [esp+20h+var_C]
0x83EF4E: mov     large fs:0, eax
0x83EF54: mov     edi, ecx
0x83EF56: mov     ebp, [esp+20h+arg_8]
0x83EF5A: mov     esi, [ebp+0Ch]
0x83EF5D: mov     ebx, ds:0B45870h
0x83EF63: push    esi
0x83EF64: call    sub_848E50
0x83EF69: mov     ebp, [ebp+10h]
0x83EF6C: mov     ecx, [esp+20h+arg_0]
0x83EF70: mov     eax, [edi]
0x83EF72: mov     edx, [eax+0BCh]
0x83EF78: push    ebp
0x83EF79: push    esi
0x83EF7A: push    ecx
0x83EF7B: mov     ecx, edi
0x83EF7D: call    edx
0x83EF7F: mov     esi, [esp+20h+arg_C]
0x83EF83: mov     eax, [esi+0A8h]
0x83EF89: mov     ds:0B46628h, eax
0x83EF8E: mov     ecx, [esi+0ACh]
0x83EF94: mov     ds:0B4662Ch, ecx
0x83EF9A: mov     edx, [esi+0B0h]
0x83EFA0: mov     ds:0B46630h, edx
0x83EFA6: mov     eax, [esi+0B4h]
0x83EFAC: mov     ds:0B46634h, eax
0x83EFB1: mov     ecx, [ebx+24h]
0x83EFB4: mov     ebp, [ecx]
0x83EFB6: mov     edx, [esi]
0x83EFB8: mov     eax, [edx+88h]
0x83EFBE: push    0
0x83EFC0: mov     ecx, esi
0x83EFC2: mov     [esp+24h+arg_8], ebp
0x83EFC6: call    eax
0x83EFC8: mov     ebp, [ebp+4]
0x83EFCB: cmp     ebp, eax
0x83EFCD: mov     [esp+20h+arg_0], eax
0x83EFD1: jz      short loc_83F00D
0x83EFD3: test    ebp, ebp
0x83EFD5: jz      short loc_83EFF8
0x83EFD7: lea     ecx, [ebp+4]
0x83EFDA: push    ecx; lpAddend
0x83EFDB: call    dword ptr ds:0A2807Ch
0x83EFE1: test    eax, eax
0x83EFE3: jnz     short loc_83EFF4
0x83EFE5: test    ebp, ebp
0x83EFE7: jz      short loc_83EFF4
0x83EFE9: mov     edx, [ebp+0]
0x83EFEC: mov     eax, [edx]
0x83EFEE: push    1
0x83EFF0: mov     ecx, ebp
0x83EFF2: call    eax
0x83EFF4: mov     eax, [esp+20h+arg_0]
0x83EFF8: test    eax, eax
0x83EFFA: mov     ecx, [esp+20h+arg_8]
0x83EFFE: mov     [ecx+4], eax
0x83F001: jz      short loc_83F00D
0x83F003: add     eax, 4
0x83F006: push    eax; lpAddend
0x83F007: call    dword ptr ds:0A28078h
0x83F00D: mov     edx, [esp+20h+arg_8]
0x83F011: push    esi
0x83F012: push    edx
0x83F013: mov     ecx, edi
0x83F015: call    sub_848FA0
0x83F01A: mov     eax, [ebx+24h]
0x83F01D: mov     ebp, [eax+4]
0x83F020: push    0
0x83F022: push    esi
0x83F023: mov     ecx, edi
0x83F025: mov     [esp+28h+arg_8], ebp
0x83F029: call    sub_848FD0
0x83F02E: mov     ebp, [ebp+4]
0x83F031: cmp     ebp, eax
0x83F033: mov     [esp+20h+arg_0], eax
0x83F037: jz      short loc_83F073
0x83F039: test    ebp, ebp
0x83F03B: jz      short loc_83F05E
0x83F03D: lea     ecx, [ebp+4]
0x83F040: push    ecx; lpAddend
0x83F041: call    dword ptr ds:0A2807Ch
0x83F047: test    eax, eax
0x83F049: jnz     short loc_83F05A
0x83F04B: test    ebp, ebp
0x83F04D: jz      short loc_83F05A
0x83F04F: mov     edx, [ebp+0]
0x83F052: mov     eax, [edx]
0x83F054: push    1
0x83F056: mov     ecx, ebp
0x83F058: call    eax
0x83F05A: mov     eax, [esp+20h+arg_0]
0x83F05E: test    eax, eax
0x83F060: mov     ecx, [esp+20h+arg_8]
0x83F064: mov     [ecx+4], eax
0x83F067: jz      short loc_83F073
0x83F069: add     eax, 4
0x83F06C: push    eax; lpAddend
0x83F06D: call    dword ptr ds:0A28078h
0x83F073: mov     edx, [esp+20h+arg_8]
0x83F077: push    esi
0x83F078: push    edx
0x83F079: mov     ecx, edi
0x83F07B: call    sub_848FA0
0x83F080: mov     eax, [ebx+24h]
0x83F083: mov     ebp, [eax+10h]
0x83F086: mov     edx, [esi]
0x83F088: mov     eax, [edx+88h]
0x83F08E: push    1
0x83F090: mov     ecx, esi
0x83F092: mov     [esp+24h+arg_8], ebp
0x83F096: call    eax
0x83F098: mov     ebp, [ebp+4]
0x83F09B: cmp     ebp, eax
0x83F09D: mov     [esp+20h+arg_0], eax
0x83F0A1: jz      short loc_83F0DD
0x83F0A3: test    ebp, ebp
0x83F0A5: jz      short loc_83F0C8
0x83F0A7: lea     ecx, [ebp+4]
0x83F0AA: push    ecx; lpAddend
0x83F0AB: call    dword ptr ds:0A2807Ch
0x83F0B1: test    eax, eax
0x83F0B3: jnz     short loc_83F0C4
0x83F0B5: test    ebp, ebp
0x83F0B7: jz      short loc_83F0C4
0x83F0B9: mov     edx, [ebp+0]
0x83F0BC: mov     eax, [edx]
0x83F0BE: push    1
0x83F0C0: mov     ecx, ebp
0x83F0C2: call    eax
0x83F0C4: mov     eax, [esp+20h+arg_0]
0x83F0C8: test    eax, eax
0x83F0CA: mov     ecx, [esp+20h+arg_8]
0x83F0CE: mov     [ecx+4], eax
0x83F0D1: jz      short loc_83F0DD
0x83F0D3: add     eax, 4
0x83F0D6: push    eax; lpAddend
0x83F0D7: call    dword ptr ds:0A28078h
0x83F0DD: mov     edx, [esp+20h+arg_8]
0x83F0E1: push    esi
0x83F0E2: push    edx
0x83F0E3: mov     ecx, edi
0x83F0E5: call    sub_848FA0
0x83F0EA: mov     esi, 1
0x83F0EF: add     [ebx+60h], esi
0x83F0F2: mov     [esp+20h+arg_8], ebx
0x83F0F6: mov     ecx, [edi+38h]
0x83F0F9: lea     eax, [esp+20h+arg_8]
0x83F0FD: push    eax
0x83F0FE: push    ecx
0x83F0FF: lea     ecx, [edi+40h]
0x83F102: mov     [esp+28h+var_4], 0
0x83F10A: call    sub_76CE40
0x83F10F: or      eax, 0FFFFFFFFh
0x83F112: add     [ebx+60h], eax
0x83F115: mov     [esp+20h+var_4], eax
0x83F119: jnz     short loc_83F122
0x83F11B: mov     ecx, ebx
0x83F11D: call    sub_7604D0
0x83F122: add     [edi+38h], esi
0x83F125: mov     ecx, [esp+20h+var_C]
0x83F129: mov     large fs:0, ecx
0x83F130: pop     ecx
0x83F131: pop     edi
0x83F132: pop     esi
0x83F133: pop     ebp
0x83F134: pop     ebx
0x83F135: add     esp, 0Ch
0x83F138: retn    10h
