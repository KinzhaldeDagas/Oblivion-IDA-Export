0x62A9C0: sub     esp, 12Ch
0x62A9C6: mov     eax, ds:0B30AACh
0x62A9CB: xor     eax, esp
0x62A9CD: mov     [esp+12Ch+var_4], eax
0x62A9D4: push    ebx
0x62A9D5: mov     ebx, [esp+130h+arg_4]
0x62A9DC: push    ebp
0x62A9DD: mov     ebp, [esp+134h+arg_0]
0x62A9E4: push    esi
0x62A9E5: push    edi
0x62A9E6: mov     edi, [ebp+0E4h]
0x62A9EC: test    edi, edi
0x62A9EE: mov     esi, ecx
0x62A9F0: mov     [esp+13Ch+var_129], 0
0x62A9F5: mov     [esp+13Ch+var_128], edi
0x62A9F9: mov     dword ptr [ebp+0E4h], 0
0x62AA03: jnz     short loc_62AA11
0x62AA05: mov     eax, [esi+258h]
0x62AA0B: mov     [esp+13Ch+var_128], eax
0x62AA0F: mov     edi, eax
0x62AA11: test    ebx, ebx
0x62AA13: jnz     loc_62ABE6
0x62AA19: cmp     [esi+2B8h], bl
0x62AA1F: jnz     loc_62ABEF
0x62AA25: cmp     [esp+13Ch+arg_10], bl
0x62AA2C: jz      short loc_62AA3A
0x62AA2E: cmp     [esi+2B4h], ebx
0x62AA34: jnz     loc_62ABE6
0x62AA3A: mov     ebx, [esi+250h]
0x62AA40: test    ebx, ebx
0x62AA42: jz      short loc_62AA5E
0x62AA44: mov     ecx, ebx
0x62AA46: call    sub_6B81D0
0x62AA4B: push    ebx
0x62AA4C: call    FormHeapFree
0x62AA51: add     esp, 4
0x62AA54: mov     dword ptr [esi+250h], 0
0x62AA5E: fldz
0x62AA60: fcomp   dword ptr [esi+21Ch]
0x62AA66: fnstsw  ax
0x62AA68: test    ah, 5
0x62AA6B: jp      short loc_62AA81
0x62AA6D: fld     dword ptr [esi+21Ch]
0x62AA73: fsub    dword ptr ds:0B33E9Ch
0x62AA79: fstp    dword ptr [esi+21Ch]
0x62AA7F: jmp     short loc_62AA86
0x62AA81: mov     [esp+13Ch+var_129], 1
0x62AA86: test    edi, edi
0x62AA88: jz      loc_62AF85
0x62AA8E: mov     edx, [esi]
0x62AA90: mov     eax, [edx+184h]
0x62AA96: mov     ecx, esi
0x62AA98: call    eax
0x62AA9A: mov     ebx, eax
0x62AA9C: test    ebx, ebx
0x62AA9E: jz      short loc_62AACB
0x62AAA0: mov     ecx, [ebx+18h]
0x62AAA3: mov     edx, [esi]
0x62AAA5: mov     eax, [edx+180h]
0x62AAAB: mov     [esp+13Ch+var_124], ecx
0x62AAAF: mov     ecx, esi
0x62AAB1: call    eax
0x62AAB3: mov     ecx, [esp+13Ch+var_124]
0x62AAB7: mov     edx, ds:0B152B0h[ecx*4]
0x62AABE: cmp     dword ptr [edx+eax*4], 1
0x62AAC2: jnz     short loc_62AACB
0x62AAC4: mov     ecx, ebp
0x62AAC6: call    sub_5E02B0
0x62AACB: cmp     dword ptr [esi+34h], 0
0x62AACF: jnz     loc_62AF85
0x62AAD5: mov     eax, [esi]
0x62AAD7: mov     edx, [eax+36Ch]
0x62AADD: mov     ecx, esi
0x62AADF: call    edx
0x62AAE1: test    eax, eax
0x62AAE3: jnz     loc_62AF85
0x62AAE9: test    ebx, ebx
0x62AAEB: jz      short loc_62AB02
0x62AAED: mov     bl, [ebx+20h]
0x62AAF0: cmp     bl, 6
0x62AAF3: jz      loc_62AF85
0x62AAF9: cmp     bl, 8
0x62AAFC: jz      loc_62AF85
0x62AB02: mov     eax, [esi]
0x62AB04: mov     edx, [eax+4DCh]
0x62AB0A: mov     ecx, esi
0x62AB0C: call    edx
0x62AB0E: test    al, al
0x62AB10: jnz     loc_62AF85
0x62AB16: mov     eax, [esi]
0x62AB18: mov     edx, [eax+484h]
0x62AB1E: push    edi
0x62AB1F: mov     ecx, esi
0x62AB21: call    edx
0x62AB23: mov     eax, [ebp+0]
0x62AB26: mov     edx, [eax+174h]
0x62AB2C: mov     ecx, ebp
0x62AB2E: call    edx
0x62AB30: mov     edx, [edi]
0x62AB32: push    eax
0x62AB33: lea     eax, [esp+140h+var_114]
0x62AB37: push    eax
0x62AB38: mov     eax, [edx+174h]
0x62AB3E: mov     ecx, edi
0x62AB40: call    eax
0x62AB42: mov     ecx, eax
0x62AB44: call    sub_4121A0
0x62AB49: lea     ecx, [esp+13Ch+var_114]
0x62AB4D: push    ecx
0x62AB4E: call    sub_683CB0
0x62AB53: fstp    [esp+140h+var_124]
0x62AB57: fldz
0x62AB59: add     esp, 4
0x62AB5C: lea     edx, [esp+13Ch+var_118]
0x62AB60: fstp    [esp+13Ch+var_118]
0x62AB64: fld     [esp+13Ch+var_124]
0x62AB68: push    edx; int
0x62AB69: push    ecx
0x62AB6A: fstp    [esp+144h+var_144]; float
0x62AB6D: push    ebp; int
0x62AB6E: call    sub_683D80
0x62AB73: fstp    dword ptr [esp+148h+var_120]
0x62AB77: fild    dword ptr ds:0B36C10h
0x62AB7D: add     esp, 0Ch
0x62AB80: mov     ecx, ebp
0x62AB82: fmul    qword ptr ds:0A31C78h
0x62AB88: fstp    [esp+13Ch+var_128]
0x62AB8C: call    sub_5E0590
0x62AB91: test    al, al
0x62AB93: jz      short loc_62ABA5
0x62AB95: fild    dword ptr ds:0B36C18h
0x62AB9B: fmul    qword ptr ds:0A31C78h
0x62ABA1: fstp    [esp+13Ch+var_128]
0x62ABA5: fld     dword ptr [esp+13Ch+var_120]
0x62ABA9: fabs
0x62ABAB: fstp    dword ptr [esp+13Ch+var_120]
0x62ABAF: fld     dword ptr [esp+13Ch+var_120]
0x62ABB3: fld     [esp+13Ch+var_128]
0x62ABB7: fcompp
0x62ABB9: fnstsw  ax
0x62ABBB: test    ah, 5
0x62ABBE: jp      short loc_62ABD8
0x62ABC0: fld     [esp+13Ch+var_124]
0x62ABC4: push    1; char
0x62ABC6: push    ecx
0x62ABC7: fstp    [esp+144h+var_144]; float
0x62ABCA: push    ebp; Concurrency::details::SchedulerBase *
0x62ABCB: call    sub_685530
0x62ABD0: add     esp, 0Ch
0x62ABD3: jmp     loc_62AF85
0x62ABD8: push    30h ; '0'
0x62ABDA: mov     ecx, ebp
0x62ABDC: call    sub_5E05F0
0x62ABE1: jmp     loc_62AF85
0x62ABE6: cmp     byte ptr [esi+2B8h], 0
0x62ABED: jz      short loc_62AC01
0x62ABEF: mov     al, [esp+13Ch+arg_C]
0x62ABF6: mov     [esi+278h], al
0x62ABFC: jmp     loc_62B049
0x62AC01: cmp     [esp+13Ch+arg_10], 0
0x62AC09: jz      loc_62AD17
0x62AC0F: cmp     dword ptr [esi+2B4h], 0
0x62AC16: jnz     loc_62AD17
0x62AC1C: push    0
0x62AC1E: push    0
0x62AC20: push    edi
0x62AC21: push    ebp
0x62AC22: mov     ecx, ebx
0x62AC24: call    TESTopic__CreateDialogueInfo
0x62AC29: mov     ebx, [esi+250h]
0x62AC2F: test    ebx, ebx
0x62AC31: mov     [esp+13Ch+var_128], eax
0x62AC35: jz      short loc_62AC55
0x62AC37: mov     ecx, ebx
0x62AC39: call    sub_6B81D0
0x62AC3E: push    ebx
0x62AC3F: call    FormHeapFree
0x62AC44: mov     eax, [esp+140h+var_128]
0x62AC48: add     esp, 4
0x62AC4B: mov     dword ptr [esi+250h], 0
0x62AC55: test    eax, eax
0x62AC57: mov     [esi+250h], eax
0x62AC5D: mov     [esi+258h], edi
0x62AC63: jz      loc_62B049
0x62AC69: test    edi, edi
0x62AC6B: jz      short loc_62AC8A
0x62AC6D: mov     ecx, [edi+8]
0x62AC70: shr     ecx, 0Bh
0x62AC73: test    cl, 1
0x62AC76: jnz     short loc_62AC8A
0x62AC78: mov     ecx, [edi+58h]
0x62AC7B: mov     edx, [ecx]
0x62AC7D: mov     eax, [edx+338h]
0x62AC83: push    ebp
0x62AC84: call    eax
0x62AC86: mov     eax, [esp+13Ch+var_128]
0x62AC8A: mov     ecx, eax
0x62AC8C: mov     byte ptr [esi+228h], 1
0x62AC93: call    sub_6B7BA0
0x62AC98: mov     ecx, [esp+13Ch+var_128]
0x62AC9C: call    sub_6B7C20
0x62ACA1: test    eax, eax
0x62ACA3: jz      short loc_62ACF8
0x62ACA5: mov     ecx, [eax+8]
0x62ACA8: mov     edx, [eax+10h]
0x62ACAB: mov     ebx, [eax+0Ch]
0x62ACAE: mov     dword ptr [esp+13Ch+var_120], ecx
0x62ACB2: mov     ecx, dword ptr [esp+13Ch+arg_10]
0x62ACB9: push    1
0x62ACBB: push    ecx
0x62ACBC: push    0
0x62ACBE: push    1
0x62ACC0: mov     ecx, eax
0x62ACC2: mov     [esp+14Ch+var_118], edx
0x62ACC6: call    BSStringT_GetLen
0x62ACCB: mov     edx, dword ptr [esp+14Ch+var_120]
0x62ACCF: mov     ecx, [esp+14Ch+var_118]
0x62ACD3: push    eax
0x62ACD4: push    ebx
0x62ACD5: push    edx
0x62ACD6: lea     eax, [esi+220h]
0x62ACDC: push    eax
0x62ACDD: push    ecx
0x62ACDE: mov     ecx, ebp
0x62ACE0: call    Actor__InitDialogue
0x62ACE5: fstp    dword ptr [esi+21Ch]
0x62ACEB: mov     dl, [esp+13Ch+arg_C]
0x62ACF2: mov     [esi+278h], dl
0x62ACF8: test    edi, edi
0x62ACFA: jz      loc_62B049
0x62AD00: mov     ecx, offset flt_B36AE8
0x62AD05: call    GameSetting_GetSafeFloatPointer
0x62AD0A: fld     dword ptr [eax]
0x62AD0C: fstp    dword ptr [esi+22Ch]
0x62AD12: jmp     loc_62B049
0x62AD17: mov     eax, [esi]
0x62AD19: mov     edx, [eax+344h]
0x62AD1F: push    0
0x62AD21: call    edx
0x62AD23: cmp     [esp+13Ch+arg_10], 0
0x62AD2B: jnz     short loc_62AD6E
0x62AD2D: mov     ecx, [esi+250h]
0x62AD33: test    ecx, ecx
0x62AD35: mov     dword ptr [esp+13Ch+var_120], ecx
0x62AD39: jz      short loc_62AD57
0x62AD3B: call    sub_6B81D0
0x62AD40: mov     eax, dword ptr [esp+13Ch+var_120]
0x62AD44: push    eax
0x62AD45: call    FormHeapFree
0x62AD4A: add     esp, 4
0x62AD4D: mov     dword ptr [esi+250h], 0
0x62AD57: push    0
0x62AD59: push    0
0x62AD5B: push    edi
0x62AD5C: push    ebp
0x62AD5D: mov     ecx, ebx
0x62AD5F: call    TESTopic__CreateDialogueInfo
0x62AD64: mov     ebx, eax
0x62AD66: mov     [esi+250h], ebx
0x62AD6C: jmp     short loc_62AD74
0x62AD6E: mov     ebx, [esi+250h]
0x62AD74: mov     ecx, [esi+250h]; int
0x62AD7A: test    ecx, ecx
0x62AD7C: jz      short loc_62AD83
0x62AD7E: call    sub_6B7C30
0x62AD83: test    ebx, ebx
0x62AD85: jz      loc_62B049
0x62AD8B: test    edi, edi
0x62AD8D: jz      short loc_62ADAA
0x62AD8F: mov     ecx, [edi+8]
0x62AD92: shr     ecx, 0Bh
0x62AD95: test    cl, 1
0x62AD98: jnz     short loc_62ADAA
0x62AD9A: mov     edi, [edi+58h]
0x62AD9D: mov     edx, [edi]
0x62AD9F: mov     eax, [edx+338h]
0x62ADA5: push    ebp
0x62ADA6: mov     ecx, edi
0x62ADA8: call    eax
0x62ADAA: mov     ecx, ebx
0x62ADAC: call    sub_6B7BA0
0x62ADB1: mov     ecx, ebx
0x62ADB3: call    sub_6B7C20
0x62ADB8: mov     edi, eax
0x62ADBA: test    edi, edi
0x62ADBC: jz      loc_62B049
0x62ADC2: mov     cl, [esp+13Ch+arg_C]
0x62ADC9: push    1
0x62ADCB: push    0
0x62ADCD: push    0
0x62ADCF: mov     [esi+278h], cl
0x62ADD5: push    1
0x62ADD7: mov     ecx, edi
0x62ADD9: lea     ebx, [esi+220h]
0x62ADDF: call    BSStringT_GetLen
0x62ADE4: push    eax
0x62ADE5: mov     eax, [edi+0Ch]
0x62ADE8: push    eax
0x62ADE9: mov     eax, [edi+8]
0x62ADEC: push    eax
0x62ADED: mov     eax, [edi+10h]
0x62ADF0: push    ebx
0x62ADF1: push    eax
0x62ADF2: mov     ecx, ebp
0x62ADF4: call    Actor__InitDialogue
0x62ADF9: fstp    dword ptr [esi+21Ch]
0x62ADFF: mov     edx, [esi]
0x62AE01: mov     eax, [edx+48h]
0x62AE04: push    ebp
0x62AE05: mov     ecx, esi
0x62AE07: call    eax
0x62AE09: fldz
0x62AE0B: fcomp   dword ptr [esi+21Ch]
0x62AE11: fnstsw  ax
0x62AE13: test    ah, 1
0x62AE16: jnz     short loc_62AE26
0x62AE18: mov     ebx, [esp+13Ch+var_128]
0x62AE1C: mov     [esp+13Ch+var_129], 1
0x62AE21: jmp     loc_62AEFB
0x62AE26: cmp     byte ptr [esi+278h], 0
0x62AE2D: jz      short loc_62AE3C
0x62AE2F: mov     edx, [esi]
0x62AE31: mov     eax, [edx+194h]
0x62AE37: push    ebp
0x62AE38: mov     ecx, esi
0x62AE3A: call    eax
0x62AE3C: cmp     byte ptr ds:0B13208h, 0
0x62AE43: jz      loc_62AEDF
0x62AE49: cmp     dword ptr [edi], 0
0x62AE4C: jz      loc_62AEDF
0x62AE52: cmp     [esp+13Ch+arg_8], 0
0x62AE5A: jnz     short loc_62AE89
0x62AE5C: mov     ecx, ds:0B333C4h
0x62AE62: push    0; unk000
0x62AE64: push    ecx; a2
0x62AE65: mov     ecx, ebp; this
0x62AE67: call    TesObjectREF_GetDistance
0x62AE6C: fstp    [esp+13Ch+var_120]
0x62AE70: mov     ecx, offset unk_B36AD8
0x62AE75: call    GameSetting_GetSafeFloatPointer
0x62AE7A: fld     dword ptr [eax]
0x62AE7C: fadd    st, st
0x62AE7E: fcomp   [esp+13Ch+var_120]
0x62AE82: fnstsw  ax
0x62AE84: test    ah, 1
0x62AE87: jnz     short loc_62AEDF
0x62AE89: call    sub_579400
0x62AE8E: test    al, al
0x62AE90: jz      short loc_62AEC5
0x62AE92: mov     edi, [edi]
0x62AE94: push    edi
0x62AE95: mov     ecx, ebp; this
0x62AE97: call    TESObjectREFR_GetName
0x62AE9C: push    eax
0x62AE9D: lea     edx, [esp+144h+var_108]
0x62AEA1: push    offset aSS_10; "'%s' :%s"
0x62AEA6: push    edx
0x62AEA7: call    __sprintf
0x62AEAC: fld     dword ptr ds:0A30634h
0x62AEB2: mov     eax, [ebx]
0x62AEB4: fstp    [esp+14Ch+duration]
0x62AEB8: add     esp, 0Ch
0x62AEBB: push    0
0x62AEBD: push    eax
0x62AEBE: lea     ecx, [esp+148h+var_108]
0x62AEC2: push    ecx
0x62AEC3: jmp     short loc_62AED7
0x62AEC5: fld     dword ptr ds:0A30634h
0x62AECB: mov     edx, [ebx]
0x62AECD: mov     eax, [edi]
0x62AECF: push    ecx
0x62AED0: fstp    [esp+140h+duration]; duration
0x62AED3: push    0; unk2
0x62AED5: push    edx; unk1
0x62AED6: push    eax; string
0x62AED7: call    GameUI_QueueMessage
0x62AEDC: add     esp, 10h
0x62AEDF: mov     ebx, [esp+13Ch+var_128]
0x62AEE3: test    ebx, ebx
0x62AEE5: mov     byte ptr [esi+228h], 1
0x62AEEC: jz      short loc_62AEFB
0x62AEEE: mov     ecx, ds:0B333C4h
0x62AEF4: mov     byte ptr [ecx+600h], 1
0x62AEFB: mov     edx, [esi]
0x62AEFD: mov     eax, [edx+184h]
0x62AF03: mov     ecx, esi
0x62AF05: call    eax
0x62AF07: test    eax, eax
0x62AF09: jz      short loc_62AF2E
0x62AF0B: mov     edx, [esi]
0x62AF0D: mov     edi, [eax+18h]
0x62AF10: mov     eax, [edx+180h]
0x62AF16: mov     ecx, esi
0x62AF18: call    eax
0x62AF1A: mov     ecx, ds:0B152B0h[edi*4]
0x62AF21: cmp     dword ptr [ecx+eax*4], 1
0x62AF25: jnz     short loc_62AF2E
0x62AF27: mov     ecx, ebp
0x62AF29: call    sub_5E02B0
0x62AF2E: cmp     dword ptr [esi+34h], 0
0x62AF32: jnz     short loc_62AF63
0x62AF34: mov     edx, [esi]
0x62AF36: mov     eax, [edx+36Ch]
0x62AF3C: mov     ecx, esi
0x62AF3E: call    eax
0x62AF40: test    eax, eax
0x62AF42: jnz     short loc_62AF63
0x62AF44: test    ebx, ebx
0x62AF46: jz      short loc_62AF63
0x62AF48: mov     edx, [esi]
0x62AF4A: mov     eax, [edx+484h]
0x62AF50: push    ebx
0x62AF51: mov     ecx, esi
0x62AF53: call    eax
0x62AF55: mov     edx, [esi]
0x62AF57: mov     eax, [edx+4D8h]
0x62AF5D: push    1
0x62AF5F: mov     ecx, esi
0x62AF61: call    eax
0x62AF63: test    ebx, ebx
0x62AF65: fld     dword ptr [esi+21Ch]
0x62AF6B: fsub    dword ptr ds:0B33E9Ch
0x62AF71: fstp    dword ptr [esi+21Ch]
0x62AF77: jz      short loc_62AF85
0x62AF79: fld     dword ptr ds:0B36AE8h
0x62AF7F: fstp    dword ptr [esi+22Ch]
0x62AF85: cmp     [esp+13Ch+var_129], 0
0x62AF8A: jz      loc_62B049
0x62AF90: cmp     byte ptr [esi+2B8h], 0
0x62AF97: jnz     loc_62B049
0x62AF9D: mov     ecx, [esi+220h]
0x62AFA3: test    ecx, ecx
0x62AFA5: jz      short loc_62AFB4
0x62AFA7: call    sub_6B7260
0x62AFAC: test    al, al
0x62AFAE: jnz     loc_62B049
0x62AFB4: mov     edi, [esi+250h]
0x62AFBA: test    edi, edi
0x62AFBC: jz      short loc_62AFCE
0x62AFBE: mov     ecx, edi
0x62AFC0: call    sub_6B81D0
0x62AFC5: push    edi
0x62AFC6: call    FormHeapFree
0x62AFCB: add     esp, 4
0x62AFCE: mov     edx, [esi]
0x62AFD0: xor     eax, eax
0x62AFD2: mov     [esi+250h], eax
0x62AFD8: mov     [esi+258h], eax
0x62AFDE: push    eax
0x62AFDF: mov     eax, [edx+344h]
0x62AFE5: mov     ecx, esi
0x62AFE7: call    eax
0x62AFE9: mov     byte ptr [esi+278h], 0
0x62AFF0: mov     byte ptr [esi+228h], 0
0x62AFF7: mov     ecx, ds:0B333C4h
0x62AFFD: call    sub_65DA10
0x62B002: mov     edx, [esi]
0x62B004: mov     eax, [edx+49Ch]
0x62B00A: mov     ecx, esi
0x62B00C: call    eax
0x62B00E: mov     ecx, ebp
0x62B010: call    sub_5E6830
0x62B015: mov     esi, eax
0x62B017: test    esi, esi
0x62B019: jz      short loc_62B040
0x62B01B: mov     edx, [esi]
0x62B01D: mov     eax, [edx+190h]
0x62B023: mov     ecx, esi
0x62B025: call    eax
0x62B027: test    al, al
0x62B029: jz      short loc_62B040
0x62B02B: mov     esi, [esi+58h]
0x62B02E: test    esi, esi
0x62B030: jz      short loc_62B040
0x62B032: mov     edx, [esi]
0x62B034: mov     eax, [edx+338h]
0x62B03A: push    0
0x62B03C: mov     ecx, esi
0x62B03E: call    eax
0x62B040: push    30h ; '0'
0x62B042: mov     ecx, ebp
0x62B044: call    sub_5E05F0
0x62B049: mov     ecx, [esp+13Ch+var_4]
0x62B050: pop     edi
0x62B051: pop     esi
0x62B052: pop     ebp
0x62B053: pop     ebx
0x62B054: xor     ecx, esp
0x62B056: call    @__security_check_cookie@4; __security_check_cookie(x)
0x62B05B: add     esp, 12Ch
0x62B061: retn    14h
