0x61CE40: sub     esp, 10h
0x61CE43: push    esi
0x61CE44: mov     esi, ecx
0x61CE46: mov     ecx, [esi+3Ch]
0x61CE49: mov     eax, [ecx]
0x61CE4B: mov     edx, [eax+25Ch]
0x61CE51: call    edx
0x61CE53: test    al, al
0x61CE55: jnz     loc_61D31B
0x61CE5B: mov     ecx, esi
0x61CE5D: call    sub_6135F0
0x61CE62: test    eax, eax
0x61CE64: jz      loc_61D31B
0x61CE6A: push    ebx
0x61CE6B: push    edi
0x61CE6C: mov     ecx, esi
0x61CE6E: call    sub_6135F0
0x61CE73: mov     ecx, eax
0x61CE75: call    Actor_GetCurrentAction
0x61CE7A: mov     edi, [esi+3Ch]
0x61CE7D: cmp     eax, 2
0x61CE80: setz    byte ptr [esp+1Ch+var_8]
0x61CE85: mov     ebx, [esp+1Ch+var_8]
0x61CE89: push    ebx; float
0x61CE8A: mov     ecx, edi; this
0x61CE8C: call    Actor_GetFatigueFraction
0x61CE91: push    ecx
0x61CE92: mov     ecx, edi
0x61CE94: fstp    [esp+24h+var_24]; float
0x61CE97: call    sub_5E3590
0x61CE9C: call    Double_To_SInt32
0x61CEA1: push    eax; int
0x61CEA2: mov     ecx, edi
0x61CEA4: call    sub_5E0F50
0x61CEA9: push    eax; int
0x61CEAA: call    sub_546A40
0x61CEAF: fstp    [esp+2Ch+var_10]
0x61CEB3: fldz
0x61CEB5: add     esp, 10h
0x61CEB8: fcom    [esp+1Ch+var_10]
0x61CEBC: fnstsw  ax
0x61CEBE: test    ah, 41h
0x61CEC1: jnz     short loc_61CEC9
0x61CEC3: fstp    [esp+1Ch+var_10]
0x61CEC7: jmp     short loc_61CECB
0x61CEC9: fstp    st
0x61CECB: mov     eax, [esi+70h]
0x61CECE: cmp     eax, 2
0x61CED1: jz      short loc_61CED8
0x61CED3: cmp     eax, 4
0x61CED6: jnz     short loc_61CF01
0x61CED8: cmp     byte ptr [esi+158h], 0
0x61CEDF: jz      short loc_61CEF3
0x61CEE1: cmp     byte ptr [esi+159h], 0
0x61CEE8: jnz     short loc_61CEF3
0x61CEEA: cmp     byte ptr [esi+15Bh], 0
0x61CEF1: jz      short loc_61CF01
0x61CEF3: fld     [esp+1Ch+var_10]
0x61CEF7: fadd    qword ptr ds:0A3F3D0h
0x61CEFD: fstp    [esp+1Ch+var_10]
0x61CF01: test    eax, eax
0x61CF03: jz      short loc_61CF0F
0x61CF05: cmp     eax, 1
0x61CF08: jz      short loc_61CF0F
0x61CF0A: cmp     eax, 3
0x61CF0D: jnz     short loc_61CF26
0x61CF0F: cmp     byte ptr [esi+15Ah], 0
0x61CF16: jz      short loc_61CF26
0x61CF18: fld     [esp+1Ch+var_10]
0x61CF1C: fadd    qword ptr ds:0A492B0h
0x61CF22: fstp    [esp+1Ch+var_10]
0x61CF26: cmp     dword ptr [esi+74h], 2
0x61CF2A: jnz     short loc_61CF3A
0x61CF2C: fld     [esp+1Ch+var_10]
0x61CF30: fadd    qword ptr ds:0A3F3E8h
0x61CF36: fstp    [esp+1Ch+var_10]
0x61CF3A: test    eax, eax
0x61CF3C: jz      short loc_61CF48
0x61CF3E: cmp     eax, 1
0x61CF41: jz      short loc_61CF48
0x61CF43: cmp     eax, 3
0x61CF46: jnz     short loc_61CF7E
0x61CF48: mov     ecx, esi
0x61CF4A: call    sub_6135F0
0x61CF4F: cmp     eax, ds:0B333C4h
0x61CF55: jz      short loc_61CF7E
0x61CF57: mov     ecx, esi
0x61CF59: call    sub_6135F0
0x61CF5E: mov     edx, [eax]
0x61CF60: mov     ecx, eax
0x61CF62: mov     eax, [edx+334h]
0x61CF68: push    1
0x61CF6A: call    eax
0x61CF6C: test    al, al
0x61CF6E: jnz     short loc_61CF7E
0x61CF70: fld     [esp+1Ch+var_10]
0x61CF74: fsub    qword ptr ds:0A309F0h
0x61CF7A: fstp    [esp+1Ch+var_10]
0x61CF7E: push    0; Seed
0x61CF80: call    GetRandomLargeInteger?
0x61CF85: cdq
0x61CF86: mov     ecx, 64h ; 'd'
0x61CF8B: idiv    ecx
0x61CF8D: add     esp, 4
0x61CF90: mov     [esp+1Ch+var_C], edx
0x61CF94: fild    [esp+1Ch+var_C]
0x61CF98: fld     [esp+1Ch+var_10]
0x61CF9C: fcompp
0x61CF9E: fnstsw  ax
0x61CFA0: test    ah, 1
0x61CFA3: jnz     loc_61D2A4
0x61CFA9: mov     ecx, [esi+3Ch]
0x61CFAC: call    Actor_GetCurrentAction
0x61CFB1: cmp     eax, 2
0x61CFB4: setz    dl
0x61CFB7: mov     ecx, esi
0x61CFB9: mov     byte ptr [esp+1Ch+var_4], dl
0x61CFBD: call    sub_615980
0x61CFC2: fstp    [esp+1Ch+var_10]
0x61CFC6: mov     ecx, esi
0x61CFC8: call    sub_615520
0x61CFCD: fstp    [esp+1Ch+var_C]
0x61CFD1: cmp     byte ptr [esi+159h], 0
0x61CFD8: jnz     short loc_61CFE7
0x61CFDA: cmp     byte ptr [esi+15Ah], 0
0x61CFE1: jnz     short loc_61CFE7
0x61CFE3: xor     dl, dl
0x61CFE5: jmp     short loc_61CFE9
0x61CFE7: mov     dl, 1
0x61CFE9: mov     eax, [esi+70h]
0x61CFEC: cmp     eax, 2
0x61CFEF: jz      short loc_61CFFA
0x61CFF1: cmp     eax, 4
0x61CFF4: jz      short loc_61CFFA
0x61CFF6: xor     eax, eax
0x61CFF8: jmp     short loc_61CFFF
0x61CFFA: mov     eax, 1
0x61CFFF: movzx   edi, word ptr [esi+192h]
0x61D006: fld     [esp+1Ch+var_C]
0x61D00A: mov     ecx, [esi+3Ch]
0x61D00D: push    edi; int
0x61D00E: push    eax; char
0x61D00F: mov     eax, [esp+24h+var_4]
0x61D013: push    edx; float
0x61D014: sub     esp, 8
0x61D017: fstp    [esp+30h+var_2C]; float
0x61D01B: fld     [esp+30h+var_10]
0x61D01F: fstp    [esp+30h+var_30]; float
0x61D022: push    ebx; float
0x61D023: push    eax; float
0x61D024: call    sub_5E0F50
0x61D029: push    eax; int
0x61D02A: call    sub_546E10
0x61D02F: movzx   ebx, ax
0x61D032: add     esp, 20h
0x61D035: test    bx, bx
0x61D038: mov     [esp+1Ch+var_C], ebx
0x61D03C: jz      loc_61D319
0x61D042: mov     ecx, [esi+3Ch]
0x61D045: mov     edx, [ecx]
0x61D047: mov     eax, [edx+164h]
0x61D04D: call    eax
0x61D04F: test    eax, eax
0x61D051: jz      loc_61D319
0x61D057: mov     ecx, [esi+3Ch]
0x61D05A: mov     eax, ebx
0x61D05C: and     eax, 0Fh
0x61D05F: sub     eax, 2
0x61D062: push    ebp
0x61D063: mov     edi, 3
0x61D068: jz      loc_61D12B
0x61D06E: sub     eax, 2
0x61D071: jz      loc_61D0FE
0x61D077: sub     eax, 4
0x61D07A: jz      short loc_61D0BC
0x61D07C: call    sub_5E0F50
0x61D081: mov     ecx, [esi+3Ch]
0x61D084: mov     ebp, eax
0x61D086: call    sub_5E0F50
0x61D08B: mov     edx, [ebp+0]
0x61D08E: mov     [esp+20h+var_4], eax
0x61D092: mov     eax, [edx+0F4h]
0x61D098: mov     ecx, ebp
0x61D09A: call    eax
0x61D09C: push    ecx
0x61D09D: mov     ecx, [esp+24h+var_4]
0x61D0A1: fstp    [esp+24h+var_24]; float
0x61D0A4: mov     edx, [ecx]
0x61D0A6: mov     eax, [edx+0F0h]
0x61D0AC: call    eax
0x61D0AE: push    ecx
0x61D0AF: fstp    [esp+28h+var_28]; float
0x61D0B2: call    sub_546B20
0x61D0B7: jmp     loc_61D16B
0x61D0BC: mov     edi, 6
0x61D0C1: call    sub_5E0F50
0x61D0C6: mov     ecx, [esi+3Ch]
0x61D0C9: mov     ebp, eax
0x61D0CB: call    sub_5E0F50
0x61D0D0: mov     edx, [ebp+0]
0x61D0D3: mov     [esp+20h+var_4], eax
0x61D0D7: mov     eax, [edx+0ECh]
0x61D0DD: mov     ecx, ebp
0x61D0DF: call    eax
0x61D0E1: push    ecx
0x61D0E2: mov     ecx, [esp+24h+var_4]
0x61D0E6: fstp    [esp+24h+var_24]; float
0x61D0E9: mov     edx, [ecx]
0x61D0EB: mov     eax, [edx+0E8h]
0x61D0F1: call    eax
0x61D0F3: push    ecx
0x61D0F4: fstp    [esp+28h+var_28]; float
0x61D0F7: call    sub_546B20
0x61D0FC: jmp     short loc_61D16B
0x61D0FE: mov     edi, 5
0x61D103: call    sub_5E0F50
0x61D108: mov     ecx, [esi+3Ch]
0x61D10B: mov     ebp, eax
0x61D10D: call    sub_5E0F50
0x61D112: mov     edx, [ebp+0]
0x61D115: mov     ebx, eax
0x61D117: mov     eax, [edx+0ECh]
0x61D11D: mov     ecx, ebp
0x61D11F: call    eax
0x61D121: mov     edx, [ebx]
0x61D123: mov     eax, [edx+0E8h]
0x61D129: jmp     short loc_61D156
0x61D12B: mov     edi, 4
0x61D130: call    sub_5E0F50
0x61D135: mov     ecx, [esi+3Ch]
0x61D138: mov     ebp, eax
0x61D13A: call    sub_5E0F50
0x61D13F: mov     edx, [ebp+0]
0x61D142: mov     ebx, eax
0x61D144: mov     eax, [edx+0FCh]
0x61D14A: mov     ecx, ebp
0x61D14C: call    eax
0x61D14E: mov     edx, [ebx]
0x61D150: mov     eax, [edx+0F8h]
0x61D156: push    ecx
0x61D157: mov     ecx, ebx
0x61D159: fstp    [esp+24h+var_24]; float
0x61D15C: call    eax
0x61D15E: push    ecx
0x61D15F: fstp    [esp+28h+var_28]; float
0x61D162: call    sub_546B20
0x61D167: mov     ebx, [esp+28h+var_C]
0x61D16B: mov     ecx, [esi+3Ch]
0x61D16E: fstp    [esp+28h+var_10]
0x61D172: add     esp, 8
0x61D175: push    0
0x61D177: push    0
0x61D179: push    edi
0x61D17A: call    Actor_LoadAnimGroup?
0x61D17F: push    eax
0x61D180: call    sub_51AA00
0x61D185: add     esp, 4
0x61D188: cmp     eax, edi
0x61D18A: pop     ebp
0x61D18B: jnz     loc_61D252
0x61D191: mov     ecx, [esi+3Ch]
0x61D194: push    edi
0x61D195: call    sub_5E5850
0x61D19A: fstp    [esp+1Ch+var_C]
0x61D19E: fld     [esp+1Ch+var_C]
0x61D1A2: fld     [esp+1Ch+var_10]
0x61D1A6: fcomp   st(1)
0x61D1A8: fnstsw  ax
0x61D1AA: test    ah, 5
0x61D1AD: jp      short loc_61D1B5
0x61D1AF: fstp    [esp+1Ch+var_10]
0x61D1B3: jmp     short loc_61D1B7
0x61D1B5: fstp    st
0x61D1B7: mov     ecx, [esi+3Ch]
0x61D1BA: mov     ecx, [ecx+58h]
0x61D1BD: mov     edx, [ecx]
0x61D1BF: mov     eax, [edx+2C4h]
0x61D1C5: push    1
0x61D1C7: push    ebx
0x61D1C8: call    eax
0x61D1CA: push    0; Seed
0x61D1CC: call    GetRandomLargeInteger?
0x61D1D1: cdq
0x61D1D2: mov     ecx, 64h ; 'd'
0x61D1D7: idiv    ecx
0x61D1D9: add     esp, 4
0x61D1DC: cmp     byte ptr [esp+14h], 0
0x61D1E1: mov     [esp+14h+arg_0], edx
0x61D1E5: fild    [esp+14h+arg_0]
0x61D1E9: fstp    [esp+14h+arg_0]
0x61D1ED: jz      short loc_61D20D
0x61D1EF: mov     ecx, offset unk_B36D90
0x61D1F4: call    GameSetting_GetSafeFloatPointer
0x61D1F9: fld     [esp+14h+arg_0]
0x61D1FD: fld     dword ptr [eax]
0x61D1FF: fcompp
0x61D201: fnstsw  ax
0x61D203: test    ah, 5
0x61D206: mov     eax, 200h
0x61D20B: jnp     short loc_61D212
0x61D20D: mov     eax, 100h
0x61D212: mov     edx, [esi+3Ch]
0x61D215: mov     ecx, [edx+58h]
0x61D218: mov     edx, [ecx]
0x61D21A: push    1
0x61D21C: push    eax
0x61D21D: mov     eax, [edx+2C4h]
0x61D223: call    eax
0x61D225: fld     dword ptr [esi+44h]
0x61D228: fstp    dword ptr [esi+0D4h]
0x61D22E: push    2
0x61D230: fld     [esp+20h+var_10]
0x61D234: mov     ecx, esi
0x61D236: fstp    dword ptr [esi+0D8h]
0x61D23C: fld     [esp+20h+var_C]
0x61D240: fstp    dword ptr [esi+0DCh]
0x61D246: call    sub_619920
0x61D24B: pop     edi
0x61D24C: pop     ebx
0x61D24D: pop     esi
0x61D24E: add     esp, 10h
0x61D251: retn
0x61D252: cmp     byte ptr ds:0B3B908h, 0
0x61D259: jz      loc_61D319
0x61D25F: test    bl, 4
0x61D262: jz      short loc_61D26B
0x61D264: mov     eax, offset aLeft; "LEFT"
0x61D269: jmp     short loc_61D286
0x61D26B: test    bl, 8
0x61D26E: jz      short loc_61D277
0x61D270: mov     eax, offset aRight; "RIGHT"
0x61D275: jmp     short loc_61D286
0x61D277: test    bl, 1
0x61D27A: mov     eax, offset aForeward; "FOREWARD"
0x61D27F: jnz     short loc_61D286
0x61D281: mov     eax, offset aBack; "BACK"
0x61D286: mov     ecx, [esi+3Ch]; this
0x61D289: push    eax
0x61D28A: call    TESObjectREFR_GetName
0x61D28F: push    eax
0x61D290: push    offset a_20sChoseToDod; "%.20s chose to dodge %s but has no corr"...
0x61D295: call    Interface_ConsolePrint
0x61D29A: add     esp, 0Ch
0x61D29D: pop     edi
0x61D29E: pop     ebx
0x61D29F: pop     esi
0x61D2A0: add     esp, 10h
0x61D2A3: retn
0x61D2A4: cmp     dword ptr [esi+6Ch], 1
0x61D2A8: jz      short loc_61D319
0x61D2AA: mov     ecx, [esi+3Ch]
0x61D2AD: call    sub_5E0F50
0x61D2B2: mov     ecx, [esi+3Ch]
0x61D2B5: mov     edi, eax
0x61D2B7: call    sub_5E0F50
0x61D2BC: mov     edx, [edi]
0x61D2BE: mov     ebx, eax
0x61D2C0: mov     eax, [edx+104h]
0x61D2C6: mov     ecx, edi
0x61D2C8: call    eax
0x61D2CA: mov     edx, [ebx]
0x61D2CC: mov     eax, [edx+100h]
0x61D2D2: push    ecx
0x61D2D3: mov     ecx, ebx
0x61D2D5: fstp    [esp+20h+var_20]; float
0x61D2D8: call    eax
0x61D2DA: push    ecx
0x61D2DB: fstp    [esp+24h+var_24]; float
0x61D2DE: call    sub_546B20
0x61D2E3: fstp    [esp+24h+var_4]
0x61D2E7: add     esp, 8
0x61D2EA: fld     dword ptr [esi+44h]
0x61D2ED: mov     ecx, esi
0x61D2EF: fstp    dword ptr [esi+0D4h]
0x61D2F5: fld     [esp+1Ch+var_4]
0x61D2F9: fstp    dword ptr [esi+0D8h]
0x61D2FF: fld     dword ptr ds:0A30634h
0x61D305: fstp    dword ptr [esi+0DCh]
0x61D30B: call    sub_6160B0
0x61D310: push    1
0x61D312: mov     ecx, esi
0x61D314: call    sub_619920
0x61D319: pop     edi
0x61D31A: pop     ebx
0x61D31B: pop     esi
0x61D31C: add     esp, 10h
0x61D31F: retn
