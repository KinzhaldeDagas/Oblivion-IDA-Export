0x8500A0: push    0FFFFFFFFh
0x8500A2: push    offset SEH_850270
0x8500A7: mov     eax, large fs:0
0x8500AD: push    eax
0x8500AE: sub     esp, 8
0x8500B1: push    ebx
0x8500B2: push    ebp
0x8500B3: push    esi
0x8500B4: push    edi
0x8500B5: mov     eax, ds:0B30AACh
0x8500BA: xor     eax, esp
0x8500BC: push    eax
0x8500BD: lea     eax, [esp+28h+var_C]
0x8500C1: mov     large fs:0, eax
0x8500C7: mov     [esp+28h+var_10], ecx
0x8500CB: mov     ebp, [esp+28h+arg_C]
0x8500CF: mov     eax, [ebp+1Ch]
0x8500D2: mov     edi, ds:0B45BA4h
0x8500D8: shr     eax, 1Ch
0x8500DB: movzx   eax, ax
0x8500DE: push    eax
0x8500DF: call    GetShadowSceneNode
0x8500E4: add     esp, 4
0x8500E7: test    eax, eax
0x8500E9: jz      short loc_850111
0x8500EB: cmp     byte ptr ds:0B430ADh, 0
0x8500F2: jz      short loc_850105
0x8500F4: mov     ecx, [eax+120h]; this
0x8500FA: call    BSRenderedTexture__GetInnerTexture
0x8500FF: mov     [esp+28h+arg_C], eax
0x850103: jmp     short loc_85011B
0x850105: mov     ecx, ds:0B430F4h
0x85010B: mov     [esp+28h+arg_C], ecx
0x85010F: jmp     short loc_85011B
0x850111: mov     edx, ds:0B430F4h
0x850117: mov     [esp+28h+arg_C], edx
0x85011B: fld     dword ptr [ebp+0A4h]
0x850121: push    0
0x850123: fmul    dword ptr ds:0B464A4h
0x850129: mov     ecx, ebp
0x85012B: fstp    dword ptr ds:0B464A4h
0x850131: mov     eax, [edi+24h]
0x850134: mov     esi, [eax]
0x850136: mov     edx, [ebp+0]
0x850139: mov     eax, [edx+8Ch]
0x85013F: mov     [esp+2Ch+var_14], esi
0x850143: call    eax
0x850145: test    eax, eax
0x850147: jz      short loc_85015C
0x850149: mov     edx, [ebp+0]
0x85014C: mov     eax, [edx+8Ch]
0x850152: push    0
0x850154: mov     ecx, ebp
0x850156: call    eax
0x850158: mov     ebx, eax
0x85015A: jmp     short loc_850171
0x85015C: test    dword ptr [ebp+1Ch], 80h
0x850163: mov     ebx, ds:0B430F0h
0x850169: ja      short loc_850171
0x85016B: mov     ebx, ds:0B430DCh
0x850171: mov     esi, [esi+4]
0x850174: cmp     esi, ebx
0x850176: jz      short loc_8501AF
0x850178: test    esi, esi
0x85017A: jz      short loc_850198
0x85017C: lea     ecx, [esi+4]
0x85017F: push    ecx; lpAddend
0x850180: call    dword ptr ds:0A2807Ch
0x850186: test    eax, eax
0x850188: jnz     short loc_850198
0x85018A: test    esi, esi
0x85018C: jz      short loc_850198
0x85018E: mov     edx, [esi]
0x850190: mov     eax, [edx]
0x850192: push    1
0x850194: mov     ecx, esi
0x850196: call    eax
0x850198: test    ebx, ebx
0x85019A: mov     esi, [esp+28h+var_14]
0x85019E: mov     [esi+4], ebx
0x8501A1: jz      short loc_8501B3
0x8501A3: add     ebx, 4
0x8501A6: push    ebx; lpAddend
0x8501A7: call    dword ptr ds:0A28078h
0x8501AD: jmp     short loc_8501B3
0x8501AF: mov     esi, [esp+28h+var_14]
0x8501B3: test    esi, esi
0x8501B5: jz      short loc_8501D2
0x8501B7: cmp     byte ptr ds:0B42CDDh, 0
0x8501BE: jz      short loc_8501D2
0x8501C0: mov     edx, [ebp+0]
0x8501C3: mov     eax, [edx+78h]
0x8501C6: mov     ecx, ebp
0x8501C8: call    eax
0x8501CA: push    eax
0x8501CB: mov     ecx, esi
0x8501CD: call    sub_7715E0
0x8501D2: mov     ecx, [edi+24h]
0x8501D5: mov     ebp, [ecx+0Ch]
0x8501D8: mov     esi, [ebp+4]
0x8501DB: mov     ebx, [esp+28h+arg_C]
0x8501DF: cmp     esi, ebx
0x8501E1: jz      short loc_850214
0x8501E3: test    esi, esi
0x8501E5: jz      short loc_850203
0x8501E7: lea     edx, [esi+4]
0x8501EA: push    edx; lpAddend
0x8501EB: call    dword ptr ds:0A2807Ch
0x8501F1: test    eax, eax
0x8501F3: jnz     short loc_850203
0x8501F5: test    esi, esi
0x8501F7: jz      short loc_850203
0x8501F9: mov     eax, [esi]
0x8501FB: mov     edx, [eax]
0x8501FD: push    1
0x8501FF: mov     ecx, esi
0x850201: call    edx
0x850203: test    ebx, ebx
0x850205: mov     [ebp+4], ebx
0x850208: jz      short loc_850214
0x85020A: add     ebx, 4
0x85020D: push    ebx; lpAddend
0x85020E: call    dword ptr ds:0A28078h
0x850214: mov     ebx, 1
0x850219: add     [edi+60h], ebx
0x85021C: mov     [esp+28h+arg_C], edi
0x850220: mov     esi, [esp+28h+var_10]
0x850224: mov     ecx, [esi+38h]
0x850227: lea     eax, [esp+28h+arg_C]
0x85022B: push    eax
0x85022C: push    ecx
0x85022D: lea     ecx, [esi+40h]
0x850230: mov     [esp+30h+var_4], 0
0x850238: call    sub_76CE40
0x85023D: or      eax, 0FFFFFFFFh
0x850240: add     [edi+60h], eax
0x850243: mov     [esp+28h+var_4], eax
0x850247: jnz     short loc_850250
0x850249: mov     ecx, edi
0x85024B: call    sub_7604D0
0x850250: add     [esi+38h], ebx
0x850253: mov     ecx, [esp+28h+var_C]
0x850257: mov     large fs:0, ecx
0x85025E: pop     ecx
0x85025F: pop     edi
0x850260: pop     esi
0x850261: pop     ebp
0x850262: pop     ebx
0x850263: add     esp, 14h
0x850266: retn    10h
