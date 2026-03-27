0x64BBC0: push    0FFFFFFFFh
0x64BBC2: push    offset SEH_64BBC0
0x64BBC7: mov     eax, large fs:0
0x64BBCD: push    eax
0x64BBCE: sub     esp, 3Ch
0x64BBD1: push    ebx
0x64BBD2: push    ebp
0x64BBD3: push    esi
0x64BBD4: push    edi
0x64BBD5: mov     eax, ds:0B30AACh
0x64BBDA: xor     eax, esp
0x64BBDC: push    eax
0x64BBDD: lea     eax, [esp+5Ch+var_C]
0x64BBE1: mov     large fs:0, eax
0x64BBE7: mov     edi, ecx
0x64BBE9: mov     [esp+5Ch+var_48], edi
0x64BBED: mov     ebp, [esp+5Ch+arg_4]
0x64BBF1: test    ebp, ebp
0x64BBF3: jz      loc_64BEAD
0x64BBF9: mov     esi, [esp+5Ch+arg_0]
0x64BBFD: mov     ecx, esi; this
0x64BBFF: call    Actor__GetProcessLevel
0x64BC04: mov     ecx, ebp; this
0x64BC06: mov     ebx, eax
0x64BC08: call    Actor__GetProcessLevel
0x64BC0D: cmp     eax, ebx
0x64BC0F: jz      short loc_64BC4E
0x64BC11: mov     eax, [esi]
0x64BC13: mov     edx, [eax+154h]
0x64BC19: mov     ecx, esi
0x64BC1B: call    edx
0x64BC1D: test    eax, eax
0x64BC1F: jnz     short loc_64BC4E
0x64BC21: mov     ecx, [esp+5Ch+arg_18]
0x64BC25: mov     edx, [esp+5Ch+arg_14]
0x64BC29: push    1
0x64BC2B: push    eax
0x64BC2C: mov     eax, [esp+64h+arg_20]
0x64BC33: push    eax
0x64BC34: mov     eax, [esp+68h+arg_10]
0x64BC38: push    ecx
0x64BC39: mov     ecx, [esp+6Ch+arg_C]
0x64BC3D: push    edx
0x64BC3E: mov     edx, [esp+70h+arg_8]
0x64BC42: push    eax
0x64BC43: push    ecx
0x64BC44: push    edx
0x64BC45: push    ebp
0x64BC46: push    esi
0x64BC47: mov     ecx, edi
0x64BC49: call    sub_646020
0x64BC4E: mov     al, byte ptr [esp+5Ch+arg_14]
0x64BC52: mov     edx, [edi]
0x64BC54: mov     byte ptr [esp+5Ch+arg_18], al
0x64BC58: mov     eax, [edx+184h]
0x64BC5E: mov     ecx, edi
0x64BC60: call    eax
0x64BC62: mov     edx, [edi]
0x64BC64: mov     [esp+5Ch+arg_4], eax
0x64BC68: mov     eax, [edx+350h]
0x64BC6E: mov     ecx, edi
0x64BC70: call    eax
0x64BC72: mov     ecx, esi; this
0x64BC74: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x64BC79: cmp     eax, 5
0x64BC7C: jz      loc_64BEAD
0x64BC82: mov     ecx, esi; this
0x64BC84: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x64BC89: cmp     eax, 3
0x64BC8C: jz      loc_64BEAD
0x64BC92: mov     edx, [esi]
0x64BC94: mov     eax, [edx+388h]
0x64BC9A: mov     ecx, esi
0x64BC9C: call    eax
0x64BC9E: test    eax, eax
0x64BCA0: jnz     loc_64BEAD
0x64BCA6: mov     edx, [esi]
0x64BCA8: mov     eax, [edx+330h]
0x64BCAE: mov     ecx, esi
0x64BCB0: call    eax
0x64BCB2: test    eax, eax
0x64BCB4: jz      short loc_64BCD2
0x64BCB6: mov     edx, [esi]
0x64BCB8: mov     eax, [edx+330h]
0x64BCBE: push    ebp
0x64BCBF: mov     ecx, esi
0x64BCC1: call    eax
0x64BCC3: mov     ecx, eax
0x64BCC5: call    sub_613670
0x64BCCA: test    al, al
0x64BCCC: jnz     loc_64BEAD
0x64BCD2: mov     edx, [esi]
0x64BCD4: mov     eax, [edx+330h]
0x64BCDA: mov     ecx, esi
0x64BCDC: call    eax
0x64BCDE: test    eax, eax
0x64BCE0: jnz     loc_64BDB4
0x64BCE6: cmp     [esp+5Ch+arg_1C], al
0x64BCEA: jnz     loc_64BDB4
0x64BCF0: mov     edx, [edi]
0x64BCF2: fldz
0x64BCF4: push    1
0x64BCF6: fstp    [esp+60h+arg_0]
0x64BCFA: push    eax
0x64BCFB: mov     eax, [edx+0ECh]
0x64BD01: lea     ecx, [esp+64h+arg_0]
0x64BD05: push    ecx
0x64BD06: push    ebp
0x64BD07: push    1
0x64BD09: mov     ecx, edi
0x64BD0B: call    eax
0x64BD0D: push    eax
0x64BD0E: push    esi
0x64BD0F: call    sub_621B40
0x64BD14: add     esp, 18h
0x64BD17: cmp     eax, 7
0x64BD1A: jnz     loc_64BDB4
0x64BD20: mov     ecx, offset flt_B37038
0x64BD25: call    GameSetting_GetSafeFloatPointer
0x64BD2A: fld     [esp+5Ch+arg_0]
0x64BD2E: fld     dword ptr [eax]
0x64BD30: fcompp
0x64BD32: fnstsw  ax
0x64BD34: test    ah, 5
0x64BD37: jp      short loc_64BDB4
0x64BD39: mov     edx, [esi]
0x64BD3B: mov     eax, [edx+380h]
0x64BD41: mov     ecx, esi
0x64BD43: call    eax
0x64BD45: test    eax, eax
0x64BD47: jnz     short loc_64BD59
0x64BD49: mov     edx, [esi]
0x64BD4B: mov     eax, [edx+388h]
0x64BD51: mov     ecx, esi
0x64BD53: call    eax
0x64BD55: test    eax, eax
0x64BD57: jz      short loc_64BD88
0x64BD59: mov     ecx, esi
0x64BD5B: call    sub_5E0380
0x64BD60: test    eax, eax
0x64BD62: jz      short loc_64BD88
0x64BD64: mov     ecx, [esp+5Ch+arg_4]
0x64BD68: mov     edx, [edi]
0x64BD6A: mov     ebx, [ecx+18h]
0x64BD6D: mov     eax, [edx+180h]
0x64BD73: mov     ecx, edi
0x64BD75: call    eax
0x64BD77: mov     ecx, ds:0B152B0h[ebx*4]
0x64BD7E: cmp     dword ptr [ecx+eax*4], 0
0x64BD82: jz      loc_64BEAD
0x64BD88: mov     edx, [esi]
0x64BD8A: mov     eax, [edx+318h]
0x64BD90: push    0
0x64BD92: push    0
0x64BD94: push    1
0x64BD96: push    1
0x64BD98: push    ebp
0x64BD99: mov     ecx, esi
0x64BD9B: call    eax
0x64BD9D: mov     ecx, ds:0B333C4h
0x64BDA3: cmp     ebp, ecx
0x64BDA5: jnz     short loc_64BDAD
0x64BDA7: push    esi
0x64BDA8: call    sub_65DF40
0x64BDAD: mov     al, 1
0x64BDAF: jmp     loc_64BEAF
0x64BDB4: mov     ecx, ds:0B333C4h
0x64BDBA: cmp     ebp, ecx
0x64BDBC: jnz     short loc_64BDE2
0x64BDBE: cmp     [esp+5Ch+arg_1C], 0
0x64BDC3: jnz     short loc_64BDE2
0x64BDC5: call    sub_660530
0x64BDCA: cmp     eax, ds:0B36A78h
0x64BDD0: jge     loc_64BEAD
0x64BDD6: mov     eax, ds:0B333C4h
0x64BDDB: add     dword ptr [eax+7A0h], 1
0x64BDE2: mov     ecx, ebp
0x64BDE4: call    Actor_IsSwimming
0x64BDE9: mov     ecx, esi
0x64BDEB: mov     bl, al
0x64BDED: call    Actor_CanFightInWater
0x64BDF2: test    al, al
0x64BDF4: jnz     short loc_64BDFE
0x64BDF6: test    bl, bl
0x64BDF8: jnz     loc_64BEAD
0x64BDFE: mov     ecx, esi
0x64BE00: call    sub_5E1E90
0x64BE05: test    al, al
0x64BE07: jz      loc_64BED6
0x64BE0D: test    bl, bl
0x64BE0F: jz      loc_64BEAD
0x64BE15: mov     edx, [edi]
0x64BE17: mov     eax, [edx+8]
0x64BE1A: mov     ecx, edi
0x64BE1C: call    eax
0x64BE1E: test    eax, eax
0x64BE20: jnz     loc_64BED6
0x64BE26: mov     edx, [ebp+0]
0x64BE29: mov     eax, [edx+174h]
0x64BE2F: mov     ecx, ebp
0x64BE31: call    eax
0x64BE33: mov     edx, [esi]
0x64BE35: push    eax
0x64BE36: mov     eax, [edx+174h]
0x64BE3C: mov     ecx, esi
0x64BE3E: call    eax
0x64BE40: push    eax
0x64BE41: push    esi
0x64BE42: call    sub_689230
0x64BE47: add     esp, 0Ch
0x64BE4A: test    al, al
0x64BE4C: jnz     loc_64BED6
0x64BE52: lea     ecx, [esp+5Ch+var_38]
0x64BE56: call    sub_67D760
0x64BE5B: mov     edx, [ebp+0]
0x64BE5E: mov     eax, [edx+174h]
0x64BE64: push    0; float
0x64BE66: push    esi; int
0x64BE67: mov     ecx, ebp
0x64BE69: mov     [esp+64h+var_4], 0
0x64BE71: call    eax
0x64BE73: mov     edx, [esi]
0x64BE75: push    eax; int
0x64BE76: mov     eax, [edx+174h]
0x64BE7C: mov     ecx, esi
0x64BE7E: call    eax
0x64BE80: push    eax; int
0x64BE81: lea     ecx, [esp+6Ch+var_38]
0x64BE85: call    sub_67EB60
0x64BE8A: test    al, al
0x64BE8C: jz      short loc_64BEC5
0x64BE8E: push    esi; int
0x64BE8F: lea     ecx, [esp+60h+var_38]; int
0x64BE93: call    sub_67D650
0x64BE98: test    al, al
0x64BE9A: jnz     short loc_64BEC5
0x64BE9C: lea     ecx, [esp+5Ch+var_38]; void *
0x64BEA0: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x64BEA8: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x64BEAD: xor     al, al
0x64BEAF: mov     ecx, [esp+5Ch+var_C]
0x64BEB3: mov     large fs:0, ecx
0x64BEBA: pop     ecx
0x64BEBB: pop     edi
0x64BEBC: pop     esi
0x64BEBD: pop     ebp
0x64BEBE: pop     ebx
0x64BEBF: add     esp, 48h
0x64BEC2: retn    28h ; '('
0x64BEC5: lea     ecx, [esp+5Ch+var_38]; void *
0x64BEC9: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x64BED1: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x64BED6: mov     ecx, [edi+8]
0x64BED9: test    ecx, ecx
0x64BEDB: jz      short loc_64BEF6
0x64BEDD: call    sub_567770
0x64BEE2: test    al, al
0x64BEE4: jz      short loc_64BEF6
0x64BEE6: lea     ecx, [esi+44h]
0x64BEE9: call    ExtraDataList__GetExtraPackage
0x64BEEE: mov     ebx, eax
0x64BEF0: mov     [esp+5Ch+arg_4], ebx
0x64BEF4: jmp     short loc_64BEFA
0x64BEF6: mov     ebx, [esp+5Ch+arg_4]
0x64BEFA: mov     edx, [edi]
0x64BEFC: mov     edx, [edx+70h]
0x64BEFF: push    0
0x64BF01: push    esi
0x64BF02: lea     eax, [esp+64h+var_44]
0x64BF06: push    eax
0x64BF07: mov     ecx, edi
0x64BF09: call    edx
0x64BF0B: test    ebx, ebx
0x64BF0D: jz      loc_64C094
0x64BF13: mov     eax, [ebx+1Ch]
0x64BF16: shr     eax, 16h
0x64BF19: test    al, 1
0x64BF1B: jz      loc_64C094
0x64BF21: cmp     [esp+5Ch+arg_1C], 0
0x64BF26: jnz     loc_64C094
0x64BF2C: cmp     byte ptr [esp+5Ch+arg_20], 0
0x64BF34: jnz     loc_64C094
0x64BF3A: mov     ecx, ebx
0x64BF3C: call    sub_566DB0
0x64BF41: test    eax, eax
0x64BF43: mov     [esp+5Ch+arg_20], eax
0x64BF4A: fild    [esp+5Ch+arg_20]
0x64BF51: jge     short loc_64BF59
0x64BF53: fadd    dword ptr ds:0A2FC78h
0x64BF59: fstp    [esp+5Ch+arg_20]
0x64BF60: fld1
0x64BF62: fcomp   [esp+5Ch+arg_20]
0x64BF69: fnstsw  ax
0x64BF6B: test    ah, 41h
0x64BF6E: jnz     short loc_64BF7D
0x64BF70: fld     dword ptr ds:0A57FB8h
0x64BF76: fstp    [esp+5Ch+arg_20]
0x64BF7D: mov     ecx, [edi+2Ch]
0x64BF80: push    0; int
0x64BF82: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x64BF87: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x64BF8C: push    0; int
0x64BF8E: push    ecx; void *
0x64BF8F: call    OblivionDynamicCast
0x64BF94: mov     edx, [esp+70h+arg_4]
0x64BF98: mov     ebx, eax
0x64BF9A: mov     al, [edx+20h]
0x64BF9D: add     esp, 14h
0x64BFA0: cmp     al, 1
0x64BFA2: jz      short loc_64BFAC
0x64BFA4: cmp     al, 2
0x64BFA6: jz      short loc_64BFAC
0x64BFA8: cmp     al, 7
0x64BFAA: jnz     short loc_64BFD5
0x64BFAC: cmp     byte ptr [edi+0D0h], 0
0x64BFB3: jz      short loc_64BFD5
0x64BFB5: mov     eax, [esi]
0x64BFB7: mov     edx, [eax+174h]
0x64BFBD: mov     ecx, esi
0x64BFBF: call    edx
0x64BFC1: mov     ecx, [eax]
0x64BFC3: mov     [esp+5Ch+var_44], ecx
0x64BFC7: mov     edx, [eax+4]
0x64BFCA: mov     [esp+5Ch+var_40], edx
0x64BFCE: mov     eax, [eax+8]
0x64BFD1: mov     [esp+5Ch+var_3C], eax
0x64BFD5: lea     ecx, [esp+5Ch+var_44]
0x64BFD9: push    ecx
0x64BFDA: mov     ecx, ebp
0x64BFDC: call    sub_4D7E30
0x64BFE1: fld     [esp+5Ch+arg_20]
0x64BFE8: fcompp
0x64BFEA: fnstsw  ax
0x64BFEC: test    ah, 1
0x64BFEF: jz      short loc_64C068
0x64BFF1: test    ebx, ebx
0x64BFF3: jz      short loc_64C01D
0x64BFF5: mov     edx, [ebx]
0x64BFF7: mov     eax, [edx+330h]
0x64BFFD: mov     ecx, ebx
0x64BFFF: call    eax
0x64C001: test    eax, eax
0x64C003: jz      short loc_64C01D
0x64C005: mov     edx, [ebx]
0x64C007: mov     eax, [edx+330h]
0x64C00D: push    ebp
0x64C00E: mov     ecx, ebx
0x64C010: call    eax
0x64C012: mov     ecx, eax
0x64C014: call    sub_613670
0x64C019: test    al, al
0x64C01B: jnz     short loc_64C068
0x64C01D: cmp     ebx, ds:0B333C4h
0x64C023: jnz     short loc_64C055
0x64C025: mov     edx, [ebp+0]
0x64C028: mov     eax, [edx+330h]
0x64C02E: mov     ecx, ebp
0x64C030: call    eax
0x64C032: test    eax, eax
0x64C034: jz      short loc_64C055
0x64C036: mov     ecx, ds:0B333C4h
0x64C03C: mov     edx, [ebp+0]
0x64C03F: mov     eax, [edx+330h]
0x64C045: push    ecx
0x64C046: mov     ecx, ebp
0x64C048: call    eax
0x64C04A: mov     ecx, eax
0x64C04C: call    sub_613670
0x64C051: test    al, al
0x64C053: jnz     short loc_64C068
0x64C055: mov     edx, [edi]
0x64C057: mov     eax, [edx+8Ch]
0x64C05D: push    1
0x64C05F: mov     ecx, edi
0x64C061: call    eax
0x64C063: jmp     loc_64BEAD
0x64C068: mov     edx, [edi]
0x64C06A: mov     eax, [edx+8Ch]
0x64C070: push    0
0x64C072: mov     ecx, edi
0x64C074: call    eax
0x64C076: mov     edx, [esi]
0x64C078: mov     eax, [edx+30Ch]
0x64C07E: mov     ecx, esi
0x64C080: call    eax
0x64C082: mov     ecx, [edi+44h]
0x64C085: mov     [edi+48h], ecx
0x64C088: mov     dword ptr [edi+44h], 0
0x64C08F: jmp     loc_64C124
0x64C094: mov     edx, [esi]
0x64C096: mov     eax, [edx+330h]
0x64C09C: mov     ecx, esi
0x64C09E: call    eax
0x64C0A0: test    eax, eax
0x64C0A2: mov     edx, [esi]
0x64C0A4: mov     ecx, esi
0x64C0A6: jnz     short loc_64C10C
0x64C0A8: mov     eax, [edx+30Ch]
0x64C0AE: call    eax
0x64C0B0: mov     ecx, [edi+44h]
0x64C0B3: mov     [edi+48h], ecx
0x64C0B6: mov     ecx, esi; this
0x64C0B8: mov     dword ptr [edi+44h], 0
0x64C0BF: call    sub_5E6C60
0x64C0C4: test    al, al
0x64C0C6: jnz     short loc_64C105
0x64C0C8: mov     edx, [ebp+0]
0x64C0CB: mov     eax, [edx+334h]
0x64C0D1: push    1
0x64C0D3: mov     ecx, ebp
0x64C0D5: call    eax
0x64C0D7: test    al, al
0x64C0D9: jz      short loc_64C124
0x64C0DB: mov     edx, [ebp+0]
0x64C0DE: mov     eax, [edx+330h]
0x64C0E4: mov     ecx, ebp
0x64C0E6: call    eax
0x64C0E8: test    eax, eax
0x64C0EA: jz      short loc_64C124
0x64C0EC: mov     edx, [ebp+0]
0x64C0EF: mov     eax, [edx+330h]
0x64C0F5: push    esi
0x64C0F6: mov     ecx, ebp
0x64C0F8: call    eax
0x64C0FA: mov     ecx, eax
0x64C0FC: call    sub_613670
0x64C101: test    al, al
0x64C103: jz      short loc_64C124
0x64C105: mov     byte ptr [esp+5Ch+arg_18], 0
0x64C10A: jmp     short loc_64C124
0x64C10C: mov     eax, [edx+330h]
0x64C112: push    ebp
0x64C113: call    eax
0x64C115: mov     ecx, eax
0x64C117: call    sub_613670
0x64C11C: test    al, al
0x64C11E: jnz     loc_64C342
0x64C124: mov     edx, [edi]
0x64C126: mov     eax, [esp+5Ch+arg_14]
0x64C12A: mov     edx, [edx+14Ch]
0x64C130: push    eax
0x64C131: mov     ecx, edi
0x64C133: call    edx
0x64C135: cmp     byte ptr ds:0B333B8h, 0
0x64C13C: jnz     loc_64C2BC
0x64C142: push    ebp
0x64C143: push    0Ch
0x64C145: mov     ecx, offset dword_B3BDB0
0x64C14A: call    sub_67CF50
0x64C14F: mov     ebx, eax
0x64C151: xor     edi, edi
0x64C153: test    ebx, ebx
0x64C155: mov     [esp+5Ch+arg_4], ebx
0x64C159: jz      loc_64C241
0x64C15F: nop
0x64C160: mov     eax, [ebx]
0x64C162: test    eax, eax
0x64C164: jz      loc_64C23D
0x64C16A: mov     ebx, [ebx+4]
0x64C16D: mov     edi, eax
0x64C16F: test    edi, edi
0x64C171: mov     [esp+5Ch+arg_20], ebx
0x64C178: jz      short loc_64C1D7
0x64C17A: push    0
0x64C17C: push    ebp
0x64C17D: mov     ecx, edi
0x64C17F: call    sub_67B6B0
0x64C184: cmp     byte ptr [eax+4], 0
0x64C188: jnz     loc_64C226
0x64C18E: cmp     byte ptr [esp+5Ch+arg_14], 0
0x64C193: jnz     loc_64C226
0x64C199: push    esi
0x64C19A: push    0Ch
0x64C19C: mov     ecx, offset dword_B3BDB0
0x64C1A1: call    sub_67CF50
0x64C1A6: mov     ebx, eax
0x64C1A8: mov     edi, [ebx]
0x64C1AA: test    edi, edi
0x64C1AC: jz      short loc_64C1BC
0x64C1AE: push    0FFFFFFFFh
0x64C1B0: push    1
0x64C1B2: push    ebp
0x64C1B3: mov     ecx, edi
0x64C1B5: call    sub_67CDB0
0x64C1BA: jmp     short loc_64C1BE
0x64C1BC: xor     edi, edi
0x64C1BE: mov     ecx, ebx
0x64C1C0: call    BSSimpleList_Clear
0x64C1C5: push    ebx
0x64C1C6: call    FormHeapFree
0x64C1CB: mov     ebx, [esp+60h+arg_20]
0x64C1D2: add     esp, 4
0x64C1D5: jmp     short loc_64C235
0x64C1D7: push    esi
0x64C1D8: push    0Ch
0x64C1DA: mov     ecx, offset dword_B3BDB0
0x64C1DF: call    sub_67CF50
0x64C1E4: mov     edi, [eax]
0x64C1E6: test    edi, edi
0x64C1E8: mov     [esp+5Ch+arg_20], eax
0x64C1EF: jz      short loc_64C206
0x64C1F1: cmp     byte ptr [esp+5Ch+arg_14], 0
0x64C1F6: push    0FFFFFFFFh
0x64C1F8: setz    al
0x64C1FB: mov     ecx, edi
0x64C1FD: push    eax
0x64C1FE: push    ebp
0x64C1FF: call    sub_67CDB0
0x64C204: jmp     short loc_64C208
0x64C206: xor     edi, edi
0x64C208: mov     ecx, [esp+5Ch+arg_20]
0x64C20F: call    BSSimpleList_Clear
0x64C214: mov     ecx, [esp+5Ch+arg_20]
0x64C21B: push    ecx
0x64C21C: call    FormHeapFree
0x64C221: add     esp, 4
0x64C224: jmp     short loc_64C235
0x64C226: mov     edx, [esp+5Ch+arg_14]
0x64C22A: push    0FFFFFFFFh
0x64C22C: push    edx
0x64C22D: push    esi
0x64C22E: mov     ecx, edi
0x64C230: call    sub_67CDB0
0x64C235: test    ebx, ebx
0x64C237: jnz     loc_64C160
0x64C23D: test    edi, edi
0x64C23F: jnz     short loc_64C2A4
0x64C241: push    24h ; '$'; Size
0x64C243: call    FormHeapAlloc
0x64C248: add     esp, 4
0x64C24B: mov     [esp+5Ch+arg_20], eax
0x64C252: test    eax, eax
0x64C254: mov     [esp+5Ch+var_4], 1
0x64C25C: jz      short loc_64C269
0x64C25E: mov     ecx, eax
0x64C260: call    sub_67CBC0
0x64C265: mov     edi, eax
0x64C267: jmp     short loc_64C26B
0x64C269: xor     edi, edi
0x64C26B: push    edi
0x64C26C: mov     ecx, offset dword_B3BDB0
0x64C271: mov     [esp+60h+var_4], 0FFFFFFFFh
0x64C279: mov     dword ptr [edi+0Ch], 0Ch
0x64C280: call    sub_67BF80
0x64C285: mov     ebx, [esp+5Ch+arg_14]
0x64C289: push    0FFFFFFFFh
0x64C28B: push    ebx
0x64C28C: push    esi
0x64C28D: mov     ecx, edi
0x64C28F: call    sub_67CDB0
0x64C294: test    bl, bl
0x64C296: setz    al
0x64C299: push    0FFFFFFFFh
0x64C29B: mov     ecx, edi
0x64C29D: push    eax
0x64C29E: push    ebp
0x64C29F: call    sub_67CDB0
0x64C2A4: mov     edi, [esp+5Ch+arg_4]
0x64C2A8: mov     ecx, edi
0x64C2AA: call    BSSimpleList_Clear
0x64C2AF: push    edi
0x64C2B0: call    FormHeapFree
0x64C2B5: mov     edi, [esp+60h+var_48]
0x64C2B9: add     esp, 4
0x64C2BC: mov     edx, dword ptr [esp+5Ch+arg_1C]
0x64C2C0: xor     ecx, ecx
0x64C2C2: test    dl, dl
0x64C2C4: jz      short loc_64C2CB
0x64C2C6: mov     ecx, 0C8h ; 'È'
0x64C2CB: mov     eax, [edi+8]
0x64C2CE: test    eax, eax
0x64C2D0: mov     byte ptr [esp+5Ch+arg_14], 0
0x64C2D5: jz      short loc_64C2F6
0x64C2D7: cmp     byte ptr [eax+20h], 4
0x64C2DB: jz      short loc_64C2F1
0x64C2DD: mov     eax, [eax+1Ch]
0x64C2E0: mov     ebx, eax
0x64C2E2: shr     ebx, 15h
0x64C2E5: test    bl, 1
0x64C2E8: jnz     short loc_64C2F1
0x64C2EA: shr     eax, 14h
0x64C2ED: test    al, 1
0x64C2EF: jz      short loc_64C2F6
0x64C2F1: mov     byte ptr [esp+5Ch+arg_14], 1
0x64C2F6: mov     ebx, [esp+5Ch+arg_24]
0x64C2FD: mov     eax, [esi]
0x64C2FF: push    ebx
0x64C300: push    ecx
0x64C301: mov     ecx, [esp+64h+arg_C]
0x64C305: push    ecx
0x64C306: mov     ecx, [esp+68h+arg_18]
0x64C30D: push    ecx
0x64C30E: push    edx
0x64C30F: mov     edx, [eax+32Ch]
0x64C315: push    ebp
0x64C316: mov     ecx, esi
0x64C318: call    edx
0x64C31A: mov     ecx, ds:0B333C4h
0x64C320: cmp     ebp, ecx
0x64C322: jnz     short loc_64C32A
0x64C324: push    esi
0x64C325: call    sub_65DF40
0x64C32A: cmp     byte ptr [esp+5Ch+arg_14], 0
0x64C32F: jz      short loc_64C342
0x64C331: mov     eax, [edi]
0x64C333: mov     edx, [eax+588h]
0x64C339: push    0
0x64C33B: push    0
0x64C33D: push    esi
0x64C33E: mov     ecx, edi
0x64C340: call    edx
0x64C342: mov     al, 1
0x64C344: jmp     loc_64BEAF
