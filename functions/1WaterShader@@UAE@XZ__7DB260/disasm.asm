0x7DB260: push    0FFFFFFFFh
0x7DB262: push    offset ??1WaterShader@@UAE@XZ_SEH
0x7DB267: mov     eax, large fs:0
0x7DB26D: push    eax
0x7DB26E: push    ecx
0x7DB26F: push    ebx
0x7DB270: push    ebp
0x7DB271: push    esi
0x7DB272: push    edi
0x7DB273: mov     eax, ds:0B30AACh
0x7DB278: xor     eax, esp
0x7DB27A: push    eax
0x7DB27B: lea     eax, [esp+24h+var_C]
0x7DB27F: mov     large fs:0, eax
0x7DB285: mov     ebp, ecx
0x7DB287: mov     [esp+24h+var_10], ebp
0x7DB28B: mov     dword ptr [ebp+0], offset ??_7WaterShader@@6B@; const WaterShader::`vftable'
0x7DB292: mov     esi, [ebp+0BCh]
0x7DB298: test    esi, esi
0x7DB29A: mov     [esp+24h+var_4], 9
0x7DB2A2: jz      short loc_7DB2CA
0x7DB2A4: lea     eax, [esi+4]
0x7DB2A7: push    eax; lpAddend
0x7DB2A8: call    dword ptr ds:0A2807Ch
0x7DB2AE: test    eax, eax
0x7DB2B0: jnz     short loc_7DB2C0
0x7DB2B2: test    esi, esi
0x7DB2B4: jz      short loc_7DB2C0
0x7DB2B6: mov     edx, [esi]
0x7DB2B8: mov     eax, [edx]
0x7DB2BA: push    1
0x7DB2BC: mov     ecx, esi
0x7DB2BE: call    eax
0x7DB2C0: mov     dword ptr [ebp+0BCh], 0
0x7DB2CA: lea     edi, [ebp+7Ch]
0x7DB2CD: mov     ebx, 10h
0x7DB2D2: mov     esi, [edi+48h]
0x7DB2D5: test    esi, esi
0x7DB2D7: jz      short loc_7DB2FC
0x7DB2D9: lea     ecx, [esi+4]
0x7DB2DC: push    ecx; lpAddend
0x7DB2DD: call    dword ptr ds:0A2807Ch
0x7DB2E3: test    eax, eax
0x7DB2E5: jnz     short loc_7DB2F5
0x7DB2E7: test    esi, esi
0x7DB2E9: jz      short loc_7DB2F5
0x7DB2EB: mov     edx, [esi]
0x7DB2ED: mov     eax, [edx]
0x7DB2EF: push    1
0x7DB2F1: mov     ecx, esi
0x7DB2F3: call    eax
0x7DB2F5: mov     dword ptr [edi+48h], 0
0x7DB2FC: mov     ecx, [edi]
0x7DB2FE: test    ecx, ecx
0x7DB300: jz      short loc_7DB313
0x7DB302: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7DB306: jnz     short loc_7DB30D
0x7DB308: call    sub_7604D0
0x7DB30D: mov     dword ptr [edi], 0
0x7DB313: add     edi, 4
0x7DB316: sub     ebx, 1
0x7DB319: jnz     short loc_7DB2D2
0x7DB31B: mov     esi, [ebp+114h]
0x7DB321: test    esi, esi
0x7DB323: mov     edi, ds:0A2807Ch
0x7DB329: mov     byte ptr [esp+24h+var_4], 8
0x7DB32E: jz      short loc_7DB348
0x7DB330: lea     ecx, [esi+4]
0x7DB333: push    ecx; lpAddend
0x7DB334: call    edi ; InterlockedDecrement
0x7DB336: test    eax, eax
0x7DB338: jnz     short loc_7DB348
0x7DB33A: test    esi, esi
0x7DB33C: jz      short loc_7DB348
0x7DB33E: mov     edx, [esi]
0x7DB340: mov     eax, [edx]
0x7DB342: push    1
0x7DB344: mov     ecx, esi
0x7DB346: call    eax
0x7DB348: mov     esi, [ebp+110h]
0x7DB34E: test    esi, esi
0x7DB350: mov     byte ptr [esp+24h+var_4], 7
0x7DB355: jz      short loc_7DB36F
0x7DB357: lea     ecx, [esi+4]
0x7DB35A: push    ecx; lpAddend
0x7DB35B: call    edi ; InterlockedDecrement
0x7DB35D: test    eax, eax
0x7DB35F: jnz     short loc_7DB36F
0x7DB361: test    esi, esi
0x7DB363: jz      short loc_7DB36F
0x7DB365: mov     edx, [esi]
0x7DB367: mov     eax, [edx]
0x7DB369: push    1
0x7DB36B: mov     ecx, esi
0x7DB36D: call    eax
0x7DB36F: mov     esi, [ebp+10Ch]
0x7DB375: test    esi, esi
0x7DB377: mov     byte ptr [esp+24h+var_4], 6
0x7DB37C: jz      short loc_7DB396
0x7DB37E: lea     ecx, [esi+4]
0x7DB381: push    ecx; lpAddend
0x7DB382: call    edi ; InterlockedDecrement
0x7DB384: test    eax, eax
0x7DB386: jnz     short loc_7DB396
0x7DB388: test    esi, esi
0x7DB38A: jz      short loc_7DB396
0x7DB38C: mov     edx, [esi]
0x7DB38E: mov     eax, [edx]
0x7DB390: push    1
0x7DB392: mov     ecx, esi
0x7DB394: call    eax
0x7DB396: mov     esi, [ebp+108h]
0x7DB39C: test    esi, esi
0x7DB39E: mov     byte ptr [esp+24h+var_4], 5
0x7DB3A3: jz      short loc_7DB3BD
0x7DB3A5: lea     ecx, [esi+4]
0x7DB3A8: push    ecx; lpAddend
0x7DB3A9: call    edi ; InterlockedDecrement
0x7DB3AB: test    eax, eax
0x7DB3AD: jnz     short loc_7DB3BD
0x7DB3AF: test    esi, esi
0x7DB3B1: jz      short loc_7DB3BD
0x7DB3B3: mov     edx, [esi]
0x7DB3B5: mov     eax, [edx]
0x7DB3B7: push    1
0x7DB3B9: mov     ecx, esi
0x7DB3BB: call    eax
0x7DB3BD: mov     esi, [ebp+104h]
0x7DB3C3: test    esi, esi
0x7DB3C5: mov     byte ptr [esp+24h+var_4], 4
0x7DB3CA: jz      short loc_7DB3E4
0x7DB3CC: lea     ecx, [esi+4]
0x7DB3CF: push    ecx; lpAddend
0x7DB3D0: call    edi ; InterlockedDecrement
0x7DB3D2: test    eax, eax
0x7DB3D4: jnz     short loc_7DB3E4
0x7DB3D6: test    esi, esi
0x7DB3D8: jz      short loc_7DB3E4
0x7DB3DA: mov     edx, [esi]
0x7DB3DC: mov     eax, [edx]
0x7DB3DE: push    1
0x7DB3E0: mov     ecx, esi
0x7DB3E2: call    eax
0x7DB3E4: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7DB3E9: push    10h; int
0x7DB3EB: push    4; unsigned int
0x7DB3ED: lea     ecx, [ebp+0C4h]
0x7DB3F3: push    ecx; void *
0x7DB3F4: mov     byte ptr [esp+34h+var_4], 3
0x7DB3F9: call    $LN21
0x7DB3FE: mov     esi, [ebp+0C0h]
0x7DB404: test    esi, esi
0x7DB406: mov     byte ptr [esp+24h+var_4], 2
0x7DB40B: jz      short loc_7DB425
0x7DB40D: lea     edx, [esi+4]
0x7DB410: push    edx; lpAddend
0x7DB411: call    edi ; InterlockedDecrement
0x7DB413: test    eax, eax
0x7DB415: jnz     short loc_7DB425
0x7DB417: test    esi, esi
0x7DB419: jz      short loc_7DB425
0x7DB41B: mov     eax, [esi]
0x7DB41D: mov     edx, [eax]
0x7DB41F: push    1
0x7DB421: mov     ecx, esi
0x7DB423: call    edx
0x7DB425: mov     esi, [ebp+0BCh]
0x7DB42B: test    esi, esi
0x7DB42D: mov     byte ptr [esp+24h+var_4], 1
0x7DB432: jz      short loc_7DB44C
0x7DB434: lea     eax, [esi+4]
0x7DB437: push    eax; lpAddend
0x7DB438: call    edi ; InterlockedDecrement
0x7DB43A: test    eax, eax
0x7DB43C: jnz     short loc_7DB44C
0x7DB43E: test    esi, esi
0x7DB440: jz      short loc_7DB44C
0x7DB442: mov     edx, [esi]
0x7DB444: mov     eax, [edx]
0x7DB446: push    1
0x7DB448: mov     ecx, esi
0x7DB44A: call    eax
0x7DB44C: push    offset sub_4027D0; void (__thiscall *)(void *)
0x7DB451: push    10h; int
0x7DB453: push    4; unsigned int
0x7DB455: lea     eax, [ebp+7Ch]
0x7DB458: push    eax; void *
0x7DB459: mov     byte ptr [esp+34h+var_4], 0
0x7DB45E: call    $LN21
0x7DB463: mov     ecx, ebp; this
0x7DB465: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7DB46D: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x7DB472: mov     ecx, dword ptr [esp+24h+var_C]
0x7DB476: mov     large fs:0, ecx
0x7DB47D: pop     ecx
0x7DB47E: pop     edi
0x7DB47F: pop     esi
0x7DB480: pop     ebp
0x7DB481: pop     ebx
0x7DB482: add     esp, 10h
0x7DB485: retn
