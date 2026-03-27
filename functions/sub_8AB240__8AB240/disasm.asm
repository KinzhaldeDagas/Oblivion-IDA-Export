0x8AB240: sub     esp, 20h
0x8AB243: push    ebp
0x8AB244: mov     ebp, [esp+24h+arg_0]
0x8AB248: test    ebp, ebp
0x8AB24A: jz      loc_8AB42F
0x8AB250: push    ebx
0x8AB251: push    esi
0x8AB252: push    edi
0x8AB253: push    ebp
0x8AB254: call    sub_497420
0x8AB259: add     esp, 4
0x8AB25C: test    eax, eax
0x8AB25E: jz      loc_8AB3A1
0x8AB264: mov     ecx, [eax+10h]
0x8AB267: xor     esi, esi
0x8AB269: test    ecx, ecx
0x8AB26B: jz      short loc_8AB29E
0x8AB26D: mov     eax, [ecx+8]
0x8AB270: test    eax, eax
0x8AB272: jz      short loc_8AB280
0x8AB274: lea     edx, [eax+14h]
0x8AB277: test    edx, edx
0x8AB279: jz      short loc_8AB280
0x8AB27B: mov     esi, [edx+1Ch]
0x8AB27E: jmp     short loc_8AB282
0x8AB280: xor     esi, esi
0x8AB282: and     esi, 0FFFFFFC8h
0x8AB285: or      esi, 8
0x8AB288: test    eax, eax
0x8AB28A: jz      short loc_8AB294
0x8AB28C: add     eax, 14h
0x8AB28F: jz      short loc_8AB294
0x8AB291: mov     [eax+1Ch], esi
0x8AB294: mov     eax, [ecx]
0x8AB296: mov     edx, [eax+80h]
0x8AB29C: call    edx
0x8AB29E: shr     esi, 8
0x8AB2A1: and     esi, 1Fh
0x8AB2A4: mov     edi, esi
0x8AB2A6: fld     dword ptr ds:0B2EE68h[edi*4]
0x8AB2AD: push    offset dword_BA7F3C
0x8AB2B2: mov     ecx, ebp
0x8AB2B4: fstp    [esp+34h+arg_0]
0x8AB2B8: call    sub_700010
0x8AB2BD: mov     esi, eax
0x8AB2BF: test    esi, esi
0x8AB2C1: jz      loc_8AB3DF
0x8AB2C7: fldz
0x8AB2C9: fcomp   [esp+30h+arg_0]
0x8AB2CD: fnstsw  ax
0x8AB2CF: test    ah, 41h
0x8AB2D2: jp      loc_8AB3DF
0x8AB2D8: fld     dword ptr ds:0B2E660h[edi*8]
0x8AB2DF: mov     ecx, esi
0x8AB2E1: fstp    [esp+30h+var_20]
0x8AB2E5: fld     dword ptr ds:0B2E664h[edi*8]
0x8AB2EC: fstp    [esp+30h+var_1C]
0x8AB2F0: call    sub_8AA7F0
0x8AB2F5: cmp     dword ptr [esi+50h], 0
0x8AB2F9: mov     ebx, 2
0x8AB2FE: mov     [esi+60h], ebx
0x8AB301: jnz     loc_8AB3DF
0x8AB307: push    offset sub_8AA460
0x8AB30C: push    ebx
0x8AB30D: push    0Ch
0x8AB30F: lea     eax, [esp+3Ch+var_18]
0x8AB313: push    eax
0x8AB314: call    sub_401080
0x8AB319: fldz
0x8AB31B: fst     [esp+30h+var_14]
0x8AB31F: push    ebx
0x8AB320: fst     [esp+34h+var_10]
0x8AB324: lea     ecx, [esi+40h]
0x8AB327: fstp    [esp+34h+var_18]
0x8AB32B: fld     [esp+34h+var_20]
0x8AB32F: fstp    [esp+34h+var_8]
0x8AB333: fld     [esp+34h+var_1C]
0x8AB337: fstp    [esp+34h+var_4]
0x8AB33B: fld     [esp+34h+arg_0]
0x8AB33F: fstp    [esp+34h+var_C]
0x8AB343: call    sub_8AA480
0x8AB348: lea     edi, [esp+30h+var_18]
0x8AB34C: lea     esp, [esp+0]
0x8AB350: push    edi
0x8AB351: mov     ecx, esi
0x8AB353: call    sub_8AB000
0x8AB358: add     edi, 0Ch
0x8AB35B: sub     ebx, 1
0x8AB35E: jnz     short loc_8AB350
0x8AB360: mov     cx, [esi+8]
0x8AB364: fld     [esp+30h+arg_4]
0x8AB368: mov     edx, [esi]
0x8AB36A: fstp    dword ptr [esi+14h]
0x8AB36D: fld     [esp+30h+arg_0]
0x8AB371: mov     eax, [edx+4Ch]
0x8AB374: fstp    dword ptr [esi+18h]
0x8AB377: and     cx, 0FEF5h
0x8AB37C: fldz
0x8AB37E: or      cx, 0C5h
0x8AB383: fstp    dword ptr [esi+10h]
0x8AB386: mov     [esi+8], cx
0x8AB38A: fld1
0x8AB38C: fstp    dword ptr [esi+0Ch]
0x8AB38F: fld     dword ptr ds:0A7DEB4h
0x8AB395: fchs
0x8AB397: push    ecx
0x8AB398: fstp    [esp+34h+var_34]
0x8AB39B: mov     ecx, esi
0x8AB39D: call    eax
0x8AB39F: jmp     short loc_8AB3DF
0x8AB3A1: push    ebp
0x8AB3A2: call    sub_47FAC0
0x8AB3A7: add     esp, 4
0x8AB3AA: test    eax, eax
0x8AB3AC: jz      short loc_8AB3DF
0x8AB3AE: mov     esi, [eax+10h]
0x8AB3B1: test    esi, esi
0x8AB3B3: jz      short loc_8AB3DF
0x8AB3B5: lea     ecx, [esp+30h+arg_0]
0x8AB3B9: push    ecx
0x8AB3BA: mov     ecx, esi
0x8AB3BC: call    sub_497340
0x8AB3C1: mov     edx, [eax]
0x8AB3C3: and     edx, 1F00h
0x8AB3C9: cmp     edx, 1600h
0x8AB3CF: jnz     short loc_8AB3DF
0x8AB3D1: mov     eax, [esi]
0x8AB3D3: mov     edx, [eax+9Ch]
0x8AB3D9: push    6
0x8AB3DB: mov     ecx, esi
0x8AB3DD: call    edx
0x8AB3DF: mov     eax, [ebp+0]
0x8AB3E2: mov     edx, [eax+8]
0x8AB3E5: mov     ecx, ebp
0x8AB3E7: call    edx
0x8AB3E9: mov     edi, eax
0x8AB3EB: test    edi, edi
0x8AB3ED: jz      short loc_8AB42C
0x8AB3EF: movzx   eax, word ptr [edi+0B6h]
0x8AB3F6: xor     esi, esi
0x8AB3F8: test    eax, eax
0x8AB3FA: jbe     short loc_8AB42C
0x8AB3FC: cmp     eax, esi
0x8AB3FE: ja      short loc_8AB404
0x8AB400: xor     eax, eax
0x8AB402: jmp     short loc_8AB40D
0x8AB404: mov     eax, [edi+0B0h]
0x8AB40A: mov     eax, [eax+esi*4]
0x8AB40D: fld     [esp+30h+arg_4]
0x8AB411: push    ecx
0x8AB412: fstp    [esp+34h+var_34]; float
0x8AB415: push    eax; int
0x8AB416: call    sub_8AB240
0x8AB41B: movzx   eax, word ptr [edi+0B6h]
0x8AB422: add     esi, 1
0x8AB425: add     esp, 8
0x8AB428: cmp     eax, esi
0x8AB42A: ja      short loc_8AB404
0x8AB42C: pop     edi
0x8AB42D: pop     esi
0x8AB42E: pop     ebx
0x8AB42F: pop     ebp
0x8AB430: add     esp, 20h
0x8AB433: retn
