0x66FF10: sub     esp, 8
0x66FF13: push    ebx
0x66FF14: push    ebp
0x66FF15: push    esi
0x66FF16: mov     esi, ecx
0x66FF18: cmp     dword ptr [esi+72Ch], 0
0x66FF1F: push    edi
0x66FF20: jz      loc_67019B
0x66FF26: cmp     byte ptr [esp+18h+arg_0], 0
0x66FF2B: jz      loc_66FFFC
0x66FF31: mov     eax, ds:0B38CF0h
0x66FF36: mov     ecx, ds:0B38BF0h
0x66FF3C: push    0
0x66FF3E: push    eax
0x66FF3F: push    1; int
0x66FF41: push    ecx; int
0x66FF42: call    sub_579CF0
0x66FF47: mov     eax, [esi+72Ch]
0x66FF4D: add     esp, 10h
0x66FF50: test    eax, eax
0x66FF52: jz      loc_67019B
0x66FF58: movzx   ecx, byte ptr [eax+4]
0x66FF5C: cmp     ecx, 30h ; '0'
0x66FF5F: jz      short loc_66FFB3
0x66FF61: cmp     ecx, 35h ; '5'
0x66FF64: jnz     loc_67019B
0x66FF6A: mov     edx, [esi+20h]
0x66FF6D: mov     ecx, [esi+24h]
0x66FF70: push    0; char
0x66FF72: push    eax; int
0x66FF73: sub     esp, 0Ch
0x66FF76: mov     eax, esp
0x66FF78: mov     [eax], edx
0x66FF7A: mov     edx, [esi+28h]
0x66FF7D: mov     [eax+4], ecx
0x66FF80: mov     ecx, [esi+720h]
0x66FF86: mov     [eax+8], edx
0x66FF89: mov     edx, [esi+724h]
0x66FF8F: sub     esp, 0Ch
0x66FF92: mov     eax, esp
0x66FF94: mov     [eax], ecx
0x66FF96: mov     ecx, [esi+728h]
0x66FF9C: mov     [eax+4], edx
0x66FF9F: mov     [eax+8], ecx
0x66FFA2: mov     ecx, esi
0x66FFA4: call    sub_66F370
0x66FFA9: pop     edi
0x66FFAA: pop     esi
0x66FFAB: pop     ebp
0x66FFAC: pop     ebx
0x66FFAD: add     esp, 8
0x66FFB0: retn    4
0x66FFB3: mov     edx, [esi+20h]
0x66FFB6: mov     ecx, [esi+24h]
0x66FFB9: push    0; char
0x66FFBB: push    eax; int
0x66FFBC: sub     esp, 0Ch
0x66FFBF: mov     eax, esp
0x66FFC1: mov     [eax], edx
0x66FFC3: mov     edx, [esi+28h]
0x66FFC6: mov     [eax+4], ecx
0x66FFC9: mov     ecx, [esi+720h]
0x66FFCF: mov     [eax+8], edx
0x66FFD2: mov     edx, [esi+724h]
0x66FFD8: sub     esp, 0Ch
0x66FFDB: mov     eax, esp
0x66FFDD: mov     [eax], ecx
0x66FFDF: mov     ecx, [esi+728h]
0x66FFE5: mov     [eax+4], edx
0x66FFE8: mov     [eax+8], ecx
0x66FFEB: mov     ecx, esi; int
0x66FFED: call    sub_66EAF0
0x66FFF2: pop     edi
0x66FFF3: pop     esi
0x66FFF4: pop     ebp
0x66FFF5: pop     ebx
0x66FFF6: add     esp, 8
0x66FFF9: retn    4
0x66FFFC: mov     eax, [esi+0D4h]
0x670002: test    eax, eax
0x670004: mov     ebp, esi
0x670006: jz      short loc_67000A
0x670008: mov     ebp, eax
0x67000A: fld     dword ptr ds:0A379B4h
0x670010: mov     edx, ds:0B38BF0h
0x670016: push    ecx
0x670017: fstp    [esp+1Ch+a4]; a4
0x67001A: push    1; a3
0x67001C: push    0; a2
0x67001E: push    edx; string
0x67001F: call    GameUI_QueueMessage
0x670024: add     esp, 10h
0x670027: mov     ecx, ebp; this
0x670029: call    MobileObject_GetCharProxy
0x67002E: mov     ebx, eax
0x670030: test    ebx, ebx
0x670032: jz      short loc_67004A
0x670034: mov     eax, [ebx+1F4h]
0x67003A: shr     eax, 8
0x67003D: test    al, 1
0x67003F: jnz     short loc_67004A
0x670041: fld     dword ptr [ebp+34h]
0x670044: fstp    dword ptr [esi+728h]
0x67004A: mov     ecx, [esi+720h]
0x670050: mov     edx, [esi+724h]
0x670056: lea     edi, [esi+720h]
0x67005C: sub     esp, 0Ch
0x67005F: mov     eax, esp
0x670061: mov     [eax], ecx
0x670063: mov     ecx, [edi+8]
0x670066: mov     [eax+4], edx
0x670069: mov     [eax+8], ecx
0x67006C: mov     ecx, ebp; this
0x67006E: call    TESObjectREFR_SetPosition
0x670073: test    ebx, ebx
0x670075: jz      short loc_67007F
0x670077: push    edi; a2
0x670078: mov     ecx, ebx; this
0x67007A: call    sub_452A10
0x67007F: mov     ebx, [esi+72Ch]
0x670085: test    ebx, ebx
0x670087: jz      short loc_6700F6
0x670089: movzx   eax, byte ptr [ebx+4]
0x67008D: cmp     eax, 30h ; '0'
0x670090: jz      short loc_6700D7
0x670092: cmp     eax, 35h ; '5'
0x670095: jnz     short loc_6700F6
0x670097: fld     dword ptr [edi]
0x670099: fstp    [esp+18h+arg_0]
0x67009D: fld     [esp+18h+arg_0]
0x6700A1: fistp   [esp+18h+var_8]
0x6700A5: fld     dword ptr [esi+724h]
0x6700AB: fstp    [esp+18h+var_4]
0x6700AF: fld     [esp+18h+var_4]
0x6700B3: fistp   [esp+18h+arg_0]
0x6700B7: mov     edx, [esp+18h+arg_0]
0x6700BB: mov     eax, [esp+18h+var_8]
0x6700BF: mov     ecx, ds:0B33A98h
0x6700C5: push    0
0x6700C7: push    ebx
0x6700C8: sar     edx, 0Ch
0x6700CB: push    edx
0x6700CC: sar     eax, 0Ch
0x6700CF: push    eax
0x6700D0: call    sub_447740
0x6700D5: mov     ebx, eax
0x6700D7: test    ebx, ebx
0x6700D9: jz      short loc_6700F6
0x6700DB: mov     edx, [ebp+0]
0x6700DE: mov     eax, [edx+194h]
0x6700E4: push    ebx
0x6700E5: mov     ecx, ebp
0x6700E7: call    eax
0x6700E9: mov     edx, [esi]
0x6700EB: mov     eax, [edx+194h]
0x6700F1: push    ebx
0x6700F2: mov     ecx, esi
0x6700F4: call    eax
0x6700F6: mov     ecx, esi; this
0x6700F8: call    TESObjectREFR__GetNiNode
0x6700FD: mov     ecx, [edi]
0x6700FF: mov     ebp, [esi+5D0h]
0x670105: mov     ebx, eax
0x670107: mov     [ebx+54h], ecx
0x67010A: mov     edx, [edi+4]
0x67010D: mov     [ebx+58h], edx
0x670110: mov     eax, [edi+8]
0x670113: mov     [ebx+5Ch], eax
0x670116: mov     ecx, [edi]
0x670118: mov     [ebp+54h], ecx
0x67011B: mov     edx, [edi+4]
0x67011E: mov     [ebp+58h], edx
0x670121: mov     eax, [edi+8]
0x670124: push    1
0x670126: push    ebx
0x670127: mov     [ebp+5Ch], eax
0x67012A: call    sub_897A20
0x67012F: push    1
0x670131: push    ebp
0x670132: call    sub_897A20
0x670137: fldz
0x670139: add     esp, 10h
0x67013C: push    0; a3
0x67013E: push    ecx
0x67013F: mov     ecx, ebx; this
0x670141: fstp    [esp+20h+a2]; a2
0x670144: call    NiAVObject_UpdateNiAVObject
0x670149: fldz
0x67014B: push    0; a3
0x67014D: push    ecx
0x67014E: mov     ecx, ebp; this
0x670150: fstp    [esp+20h+a2]; a2
0x670153: call    NiAVObject_UpdateNiAVObject
0x670158: mov     esi, [esi+0D4h]
0x67015E: test    esi, esi
0x670160: jz      short loc_67019B
0x670162: mov     edx, [esi]
0x670164: mov     eax, [edx+154h]
0x67016A: mov     ecx, esi
0x67016C: call    eax
0x67016E: mov     ecx, [edi]
0x670170: mov     esi, eax
0x670172: mov     [esi+54h], ecx
0x670175: mov     edx, [edi+4]
0x670178: mov     [esi+58h], edx
0x67017B: mov     eax, [edi+8]
0x67017E: push    1
0x670180: push    esi
0x670181: mov     [esi+5Ch], eax
0x670184: call    sub_897A20
0x670189: fldz
0x67018B: add     esp, 8
0x67018E: push    0; a3
0x670190: push    ecx
0x670191: mov     ecx, esi; this
0x670193: fstp    [esp+20h+a2]; a2
0x670196: call    NiAVObject_UpdateNiAVObject
0x67019B: pop     edi
0x67019C: pop     esi
0x67019D: pop     ebp
0x67019E: pop     ebx
0x67019F: add     esp, 8
0x6701A2: retn    4
