0x5EC1F0: sub     esp, 10h
0x5EC1F3: fld1
0x5EC1F5: push    esi
0x5EC1F6: mov     esi, [esp+14h+arg_0]
0x5EC1FA: fstp    [esp+14h+var_10]
0x5EC1FE: test    esi, esi
0x5EC200: push    edi
0x5EC201: mov     edi, ecx
0x5EC203: jz      loc_5EC3F4
0x5EC209: mov     ecx, esi
0x5EC20B: call    sub_4E8040
0x5EC210: test    al, al
0x5EC212: jz      short loc_5EC234
0x5EC214: mov     eax, [edi]
0x5EC216: mov     edx, [eax+170h]
0x5EC21C: mov     ecx, edi
0x5EC21E: call    edx
0x5EC220: cmp     byte ptr [eax+4], 24h ; '$'
0x5EC224: jz      short loc_5EC234
0x5EC226: fld     dword ptr ds:0B3A400h
0x5EC22C: fld1
0x5EC22E: fsubrp  st(1), st
0x5EC230: fstp    [esp+18h+var_10]
0x5EC234: push    ebx
0x5EC235: mov     ecx, esi
0x5EC237: mov     byte ptr [esp+1Ch+arg_0], 0
0x5EC23C: xor     bl, bl
0x5EC23E: call    sub_67ECC0
0x5EC243: test    al, al
0x5EC245: jnz     loc_5EC325
0x5EC24B: mov     ecx, esi
0x5EC24D: call    sub_67EC90
0x5EC252: test    al, al
0x5EC254: jnz     loc_5EC325
0x5EC25A: mov     ecx, esi
0x5EC25C: call    sub_67ECF0
0x5EC261: test    al, al
0x5EC263: jz      loc_5EC317
0x5EC269: mov     ecx, esi
0x5EC26B: mov     bl, 1
0x5EC26D: call    sub_4BEF40
0x5EC272: mov     ecx, [eax]
0x5EC274: mov     [esp+1Ch+var_C], ecx
0x5EC278: mov     edx, [eax+4]
0x5EC27B: mov     ecx, ds:0B3B784h; this
0x5EC281: test    ecx, ecx
0x5EC283: mov     [esp+1Ch+var_8], edx
0x5EC287: mov     eax, [eax+8]
0x5EC28A: mov     [esp+1Ch+var_4], eax
0x5EC28E: jz      short loc_5EC2AD
0x5EC290: call    TESObjectCELL_IsInterior
0x5EC295: test    al, al
0x5EC297: jnz     short loc_5EC2F2
0x5EC299: lea     ecx, [esp+1Ch+var_C]
0x5EC29D: push    ecx
0x5EC29E: mov     ecx, ds:0B3B784h
0x5EC2A4: call    sub_4CC540
0x5EC2A9: test    al, al
0x5EC2AB: jnz     short loc_5EC2F2
0x5EC2AD: mov     ecx, edi; this
0x5EC2AF: call    TESObjectREFR_GetParentCell
0x5EC2B4: mov     ecx, eax; this
0x5EC2B6: call    TESObjectCELL_IsInterior
0x5EC2BB: test    al, al
0x5EC2BD: mov     ecx, edi; this
0x5EC2BF: jz      short loc_5EC2C8
0x5EC2C1: call    TESObjectREFR_GetParentCell
0x5EC2C6: jmp     short loc_5EC2ED
0x5EC2C8: push    0; int
0x5EC2CA: call    TESObjectREFR_GetWorldSpace
0x5EC2CF: fld     [esp+20h+var_8]
0x5EC2D3: mov     ecx, ds:0B33A98h
0x5EC2D9: push    eax; int
0x5EC2DA: sub     esp, 8
0x5EC2DD: fstp    [esp+2Ch+var_28]; float
0x5EC2E1: fld     [esp+2Ch+var_C]
0x5EC2E5: fstp    [esp+2Ch+var_2C]; float
0x5EC2E8: call    sub_44A270
0x5EC2ED: mov     ds:0B3B784h, eax
0x5EC2F2: fld     dword ptr ds:0A6E688h
0x5EC2F8: mov     edx, ds:0B3B784h
0x5EC2FE: push    ecx
0x5EC2FF: fstp    [esp+20h+var_20]; float
0x5EC302: push    edx; int
0x5EC303: lea     eax, [esp+24h+var_C]
0x5EC307: push    eax; int
0x5EC308: mov     ecx, edi
0x5EC30A: call    Actor_IsUnderwater??
0x5EC30F: test    al, al
0x5EC311: jz      short loc_5EC317
0x5EC313: mov     byte ptr [esp+1Ch+arg_0], bl
0x5EC317: mov     ecx, [esp+1Ch+arg_0]
0x5EC31B: push    ecx
0x5EC31C: mov     ecx, esi
0x5EC31E: call    sub_67ED30
0x5EC323: jmp     short loc_5EC339
0x5EC325: mov     ecx, esi
0x5EC327: call    sub_67ED20
0x5EC32C: mov     ecx, esi
0x5EC32E: mov     byte ptr [esp+1Ch+arg_0], al
0x5EC332: call    sub_67ECF0
0x5EC337: mov     bl, al
0x5EC339: cmp     byte ptr [esp+1Ch+arg_0], 0
0x5EC33E: mov     ecx, edi
0x5EC340: jz      short loc_5EC3BF
0x5EC342: mov     edx, [edi]
0x5EC344: mov     eax, [edx+170h]
0x5EC34A: xor     ebx, ebx
0x5EC34C: call    eax
0x5EC34E: mov     esi, eax
0x5EC350: test    esi, esi
0x5EC352: jz      short loc_5EC366
0x5EC354: mov     edx, [edi]
0x5EC356: mov     eax, [edx+190h]
0x5EC35C: mov     ecx, edi
0x5EC35E: call    eax
0x5EC360: test    al, al
0x5EC362: jz      short loc_5EC366
0x5EC364: mov     ebx, esi
0x5EC366: mov     ecx, ebx; this
0x5EC368: call    TESActorBase_CanSwim
0x5EC36D: test    al, al
0x5EC36F: jnz     short loc_5EC38A
0x5EC371: fld     dword ptr ds:0B3A408h
0x5EC377: pop     ebx
0x5EC378: fadd    [esp+18h+var_10]
0x5EC37C: pop     edi
0x5EC37D: pop     esi
0x5EC37E: fstp    [esp+10h+var_10]
0x5EC381: fld     [esp+10h+var_10]
0x5EC384: add     esp, 10h
0x5EC387: retn    4
0x5EC38A: mov     ecx, edi
0x5EC38C: call    sub_5EA640
0x5EC391: test    al, al
0x5EC393: jnz     short loc_5EC3F3
0x5EC395: mov     ecx, edi; this
0x5EC397: call    sub_5E3400
0x5EC39C: test    al, al
0x5EC39E: jnz     short loc_5EC3F3
0x5EC3A0: mov     ecx, offset unk_B3A418
0x5EC3A5: call    GameSetting_GetSafeFloatPointer
0x5EC3AA: fld     dword ptr [eax]
0x5EC3AC: fadd    [esp+1Ch+var_10]
0x5EC3B0: pop     ebx
0x5EC3B1: pop     edi
0x5EC3B2: pop     esi
0x5EC3B3: fstp    [esp+10h+var_10]
0x5EC3B6: fld     [esp+10h+var_10]
0x5EC3B9: add     esp, 10h
0x5EC3BC: retn    4
0x5EC3BF: call    sub_5E1E90
0x5EC3C4: test    al, al
0x5EC3C6: jz      short loc_5EC3D6
0x5EC3C8: fld     dword ptr ds:0B3A408h
0x5EC3CE: fadd    [esp+1Ch+var_10]
0x5EC3D2: fstp    [esp+1Ch+var_10]
0x5EC3D6: test    bl, bl
0x5EC3D8: jz      short loc_5EC3F3
0x5EC3DA: mov     ecx, edi; this
0x5EC3DC: call    sub_5E3400
0x5EC3E1: test    al, al
0x5EC3E3: jnz     short loc_5EC3F3
0x5EC3E5: fld     dword ptr ds:0B3A410h
0x5EC3EB: fadd    [esp+1Ch+var_10]
0x5EC3EF: fstp    [esp+1Ch+var_10]
0x5EC3F3: pop     ebx
0x5EC3F4: fld     [esp+18h+var_10]
0x5EC3F8: pop     edi
0x5EC3F9: pop     esi
0x5EC3FA: add     esp, 10h
0x5EC3FD: retn    4
