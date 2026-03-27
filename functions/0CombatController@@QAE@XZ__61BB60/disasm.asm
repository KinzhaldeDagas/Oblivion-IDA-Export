0x61BB60: push    0FFFFFFFFh
0x61BB62: push    offset ??0CombatController@@QAE@XZ_SEH
0x61BB67: mov     eax, large fs:0
0x61BB6D: push    eax
0x61BB6E: push    ecx
0x61BB6F: push    ebx
0x61BB70: push    ebp
0x61BB71: push    esi
0x61BB72: push    edi
0x61BB73: mov     eax, ds:0B30AACh
0x61BB78: xor     eax, esp
0x61BB7A: push    eax
0x61BB7B: lea     eax, [esp+24h+var_C]
0x61BB7F: mov     large fs:0, eax
0x61BB85: mov     esi, ecx
0x61BB87: mov     [esp+24h+var_10], esi
0x61BB8B: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x61BB90: fldz
0x61BB92: mov     dword ptr [esi], offset ??_7CombatController@@6B@; const CombatController::`vftable'
0x61BB98: fst     dword ptr [esi+0D4h]
0x61BB9E: fst     dword ptr [esi+0D8h]
0x61BBA4: mov     eax, [esp+24h+arg_0]
0x61BBA8: fld     dword ptr ds:0A30634h
0x61BBAE: xor     ebx, ebx
0x61BBB0: fst     dword ptr [esi+0DCh]
0x61BBB6: mov     [esi+15Ch], ebx
0x61BBBC: fst     dword ptr [esi+0E8h]
0x61BBC2: mov     [esi+160h], ebx
0x61BBC8: fxch    st(1)
0x61BBCA: push    8; Size
0x61BBCC: fst     dword ptr [esi+0E0h]
0x61BBD2: mov     [esp+28h+var_4], ebx
0x61BBD6: fst     dword ptr [esi+0E4h]
0x61BBDC: fst     dword ptr [esi+0ECh]
0x61BBE2: fst     dword ptr [esi+0F0h]
0x61BBE8: fxch    st(1)
0x61BBEA: fst     dword ptr [esi+0F4h]
0x61BBF0: fst     dword ptr [esi+100h]
0x61BBF6: fxch    st(1)
0x61BBF8: fst     dword ptr [esi+0F8h]
0x61BBFE: fst     dword ptr [esi+0FCh]
0x61BC04: fst     dword ptr [esi+104h]
0x61BC0A: fst     dword ptr [esi+108h]
0x61BC10: fxch    st(1)
0x61BC12: fst     dword ptr [esi+10Ch]
0x61BC18: fst     dword ptr [esi+13Ch]
0x61BC1E: fxch    st(1)
0x61BC20: fst     dword ptr [esi+134h]
0x61BC26: fst     dword ptr [esi+138h]
0x61BC2C: fst     dword ptr [esi+140h]
0x61BC32: fst     dword ptr [esi+144h]
0x61BC38: fxch    st(1)
0x61BC3A: fst     dword ptr [esi+148h]
0x61BC40: fst     dword ptr [esi+154h]
0x61BC46: fxch    st(1)
0x61BC48: fst     dword ptr [esi+14Ch]
0x61BC4E: fst     dword ptr [esi+150h]
0x61BC54: fst     dword ptr [esi+164h]
0x61BC5A: fst     dword ptr [esi+168h]
0x61BC60: fxch    st(1)
0x61BC62: fst     dword ptr [esi+16Ch]
0x61BC68: fxch    st(1)
0x61BC6A: fst     dword ptr [esi+1B0h]
0x61BC70: fstp    dword ptr [esi+1B4h]
0x61BC76: fstp    dword ptr [esi+1B8h]
0x61BC7C: add     dword ptr ds:0B3B914h, 1
0x61BC83: mov     [esi+18Ch], ebx
0x61BC89: mov     [esi+3Ch], eax
0x61BC8C: call    FormHeapAlloc
0x61BC91: add     esp, 4
0x61BC94: cmp     eax, ebx
0x61BC96: jz      short loc_61BC9F
0x61BC98: mov     [eax], ebx
0x61BC9A: mov     [eax+4], ebx
0x61BC9D: jmp     short loc_61BCA1
0x61BC9F: xor     eax, eax
0x61BCA1: push    0Ch
0x61BCA3: mov     ecx, esi
0x61BCA5: mov     [esi+40h], eax
0x61BCA8: call    TESPackage_SetType?
0x61BCAD: or      dword ptr [esi+1Ch], 6
0x61BCB1: push    0Ch; Size
0x61BCB3: call    FormHeapAlloc
0x61BCB8: add     esp, 4
0x61BCBB: mov     [esp+24h+arg_0], eax
0x61BCBF: cmp     eax, ebx
0x61BCC1: mov     byte ptr [esp+24h+var_4], 1
0x61BCC6: jz      short loc_61BCD3
0x61BCC8: mov     ecx, eax
0x61BCCA: call    TESPackage_LocationData_constr
0x61BCCF: mov     edi, eax
0x61BCD1: jmp     short loc_61BCD5
0x61BCD3: xor     edi, edi
0x61BCD5: push    ebx
0x61BCD6: mov     ecx, edi
0x61BCD8: mov     byte ptr [esp+28h+var_4], bl
0x61BCDC: call    TESPackage_LocationData_SetType
0x61BCE1: mov     ebp, [esp+24h+arg_4]
0x61BCE5: push    ebp
0x61BCE6: mov     ecx, edi
0x61BCE8: call    TESPackage_LocationData_SetReference
0x61BCED: push    edi
0x61BCEE: mov     ecx, esi
0x61BCF0: call    TESPackage_SetLocation
0x61BCF5: cmp     edi, ebx
0x61BCF7: jz      short loc_61BD09
0x61BCF9: mov     ecx, edi
0x61BCFB: call    TESPackage_LocationData_destr
0x61BD00: push    edi
0x61BD01: call    FormHeapFree
0x61BD06: add     esp, 4
0x61BD09: push    0Ch; Size
0x61BD0B: call    FormHeapAlloc
0x61BD10: add     esp, 4
0x61BD13: mov     [esp+24h+arg_0], eax
0x61BD17: cmp     eax, ebx
0x61BD19: mov     byte ptr [esp+24h+var_4], 2
0x61BD1E: jz      short loc_61BD2B
0x61BD20: mov     ecx, eax
0x61BD22: call    TESPackage_TargetData_constr
0x61BD27: mov     edi, eax
0x61BD29: jmp     short loc_61BD2D
0x61BD2B: xor     edi, edi
0x61BD2D: push    edi
0x61BD2E: mov     ecx, esi
0x61BD30: mov     byte ptr [esp+28h+var_4], bl
0x61BD34: call    TESPackage_SetTarget
0x61BD39: mov     ecx, [esi+28h]
0x61BD3C: push    ebx
0x61BD3D: call    TESPackage_TargetData_SetType
0x61BD42: mov     ecx, [esi+28h]
0x61BD45: push    ebp
0x61BD46: call    TeSPackage_TargetData_SetTargetREFR
0x61BD4B: cmp     edi, ebx
0x61BD4D: jz      short loc_61BD5F
0x61BD4F: mov     ecx, edi; void *
0x61BD51: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x61BD56: push    edi
0x61BD57: call    FormHeapFree
0x61BD5C: add     esp, 4
0x61BD5F: fldz
0x61BD61: push    ecx
0x61BD62: fstp    dword ptr [esi+44h]
0x61BD65: mov     [esi+48h], bl
0x61BD68: fld     dword ptr ds:0A30634h
0x61BD6E: mov     [esi+49h], bl
0x61BD71: fst     dword ptr [esi+0CCh]
0x61BD77: mov     [esi+4Ah], bl
0x61BD7A: fstp    dword ptr [esi+54h]
0x61BD7D: mov     [esi+4Bh], bl
0x61BD80: fld1
0x61BD82: mov     [esi+4Ch], bl
0x61BD85: fstp    [esp+28h+var_28]; float
0x61BD88: mov     [esi+4Dh], bl
0x61BD8B: mov     [esi+4Eh], bl
0x61BD8E: mov     [esi+4Fh], bl
0x61BD91: mov     dword ptr [esi+50h], 0FFh
0x61BD98: mov     [esi+58h], bl
0x61BD9B: mov     [esi+59h], bl
0x61BD9E: mov     [esi+0C4h], bl
0x61BDA4: call    Calc_GetCombatDistance
0x61BDA9: fstp    [esp+28h+var_28]; float
0x61BDAC: mov     ecx, esi
0x61BDAE: call    sub_612EA0
0x61BDB3: mov     eax, 3
0x61BDB8: mov     ecx, esi
0x61BDBA: mov     [esi+0C8h], ebx
0x61BDC0: mov     [esi+6Ch], ebx
0x61BDC3: mov     dword ptr [esi+70h], 0Dh
0x61BDCA: mov     [esi+74h], eax
0x61BDCD: mov     [esi+78h], eax
0x61BDD0: mov     [esi+5Ch], ebx
0x61BDD3: mov     [esi+60h], ebx
0x61BDD6: mov     [esi+64h], ebx
0x61BDD9: mov     [esi+68h], ebx
0x61BDDC: mov     [esi+7Ch], ebx
0x61BDDF: mov     [esi+80h], ebx
0x61BDE5: mov     [esi+84h], ebx
0x61BDEB: mov     [esi+88h], ebx
0x61BDF1: mov     [esi+8Ch], ebx
0x61BDF7: mov     [esi+90h], ebx
0x61BDFD: mov     [esi+98h], ebx
0x61BE03: mov     [esi+94h], ebx
0x61BE09: mov     [esi+9Ch], ebx
0x61BE0F: mov     [esi+0A0h], ebx
0x61BE15: mov     [esi+0A8h], ebx
0x61BE1B: mov     [esi+0A4h], ebx
0x61BE21: mov     [esi+180h], eax
0x61BE27: call    sub_61B190
0x61BE2C: fldz
0x61BE2E: mov     [esi+0B0h], ebx
0x61BE34: mov     [esi+0B4h], ebx
0x61BE3A: mov     [esi+0B8h], ebx
0x61BE40: mov     [esi+0BCh], ebx
0x61BE46: mov     [esi+0C0h], ebx
0x61BE4C: mov     dword ptr [esi+0D0h], 100h
0x61BE56: fst     dword ptr [esi+0D4h]
0x61BE5C: fst     dword ptr [esi+0D8h]
0x61BE62: fld     dword ptr ds:0A30634h
0x61BE68: fst     dword ptr [esi+0DCh]
0x61BE6E: fst     dword ptr [esi+0F4h]
0x61BE74: fxch    st(1)
0x61BE76: fst     dword ptr [esi+0ECh]
0x61BE7C: fst     dword ptr [esi+0F0h]
0x61BE82: fst     dword ptr [esi+0F8h]
0x61BE88: fst     dword ptr [esi+0FCh]
0x61BE8E: fxch    st(1)
0x61BE90: fst     dword ptr [esi+100h]
0x61BE96: fst     dword ptr [esi+0E8h]
0x61BE9C: fxch    st(1)
0x61BE9E: fst     dword ptr [esi+0E0h]
0x61BEA4: fst     dword ptr [esi+0E4h]
0x61BEAA: fld     dword ptr [esi+44h]
0x61BEAD: fstp    dword ptr [esi+104h]
0x61BEB3: fld1
0x61BEB5: fstp    dword ptr [esi+108h]
0x61BEBB: fxch    st(1)
0x61BEBD: fst     dword ptr [esi+10Ch]
0x61BEC3: fst     dword ptr [esi+1B8h]
0x61BEC9: fxch    st(1)
0x61BECB: fst     dword ptr [esi+1B0h]
0x61BED1: fst     dword ptr [esi+1B4h]
0x61BED7: mov     byte ptr [esi+115h], 1
0x61BEDE: mov     [esi+118h], ebx
0x61BEE4: mov     [esi+11Ch], ebx
0x61BEEA: mov     [esi+116h], bl
0x61BEF0: mov     [esi+130h], bl
0x61BEF6: mov     [esi+131h], bl
0x61BEFC: mov     [esi+0ACh], ebx
0x61BF02: mov     [esi+12Ch], ebx
0x61BF08: mov     [esi+114h], bl
0x61BF0E: mov     ecx, ds:0B3F9A8h
0x61BF14: mov     [esi+120h], ecx
0x61BF1A: mov     edx, ds:0B3F9ACh
0x61BF20: mov     [esi+124h], edx
0x61BF26: mov     eax, ds:0B3F9B0h
0x61BF2B: mov     [esi+128h], eax
0x61BF31: mov     [esi+158h], bl
0x61BF37: mov     [esi+159h], bl
0x61BF3D: mov     [esi+15Ah], bl
0x61BF43: cmp     [esi+160h], ebx
0x61BF49: jz      short loc_61BF73
0x61BF4B: fstp    st
0x61BF4D: fstp    st
0x61BF4F: mov     eax, [esi+160h]
0x61BF55: mov     edi, [eax+4]
0x61BF58: push    eax
0x61BF59: call    FormHeapFree
0x61BF5E: add     esp, 4
0x61BF61: cmp     edi, ebx
0x61BF63: mov     [esi+160h], edi
0x61BF69: jnz     short loc_61BF4F
0x61BF6B: fld     dword ptr ds:0A30634h
0x61BF71: fldz
0x61BF73: mov     ecx, [esp+24h+arg_C]
0x61BF77: mov     edx, [esp+24h+arg_8]
0x61BF7B: mov     [esi+15Ch], ebx
0x61BF81: fst     dword ptr [esi+170h]
0x61BF87: fxch    st(1)
0x61BF89: sub     esp, 8
0x61BF8C: fst     dword ptr [esi+184h]
0x61BF92: mov     [esi+178h], ebx
0x61BF98: fstp    dword ptr [esi+188h]
0x61BF9E: mov     [esi+174h], bl
0x61BFA4: mov     [esi+17Dh], bl
0x61BFAA: fst     [esp+2Ch+var_28]; float
0x61BFAE: mov     [esi+17Eh], bl
0x61BFB4: fstp    [esp+2Ch+var_2C]; float
0x61BFB7: push    ecx; float
0x61BFB8: push    edx; char
0x61BFB9: push    ebp; int
0x61BFBA: mov     ecx, esi
0x61BFBC: mov     [esi+17Fh], bl
0x61BFC2: mov     [esi+17Ch], bl
0x61BFC8: mov     [esi+15Bh], bl
0x61BFCE: mov     [esi+1A8h], ebx
0x61BFD4: call    sub_616190
0x61BFD9: mov     dword ptr [esi+18h], 0Ch
0x61BFE0: xor     eax, eax
0x61BFE2: mov     ecx, 9
0x61BFE7: cmp     ds:0B15198h[eax*4], ecx
0x61BFEE: jz      short loc_61BFF8
0x61BFF0: add     eax, 1
0x61BFF3: cmp     eax, 2
0x61BFF6: jl      short loc_61BFE7
0x61BFF8: cmp     eax, 2
0x61BFFB: mov     ecx, [esi+3Ch]
0x61BFFE: mov     ecx, [ecx+58h]
0x61C001: jge     short loc_61C00E
0x61C003: mov     edx, [ecx]
0x61C005: push    eax
0x61C006: mov     eax, [edx+17Ch]
0x61C00C: call    eax
0x61C00E: fldz
0x61C010: mov     [esi+192h], bx
0x61C017: fst     dword ptr [esi+198h]
0x61C01D: mov     [esi+194h], bl
0x61C023: fst     dword ptr [esi+19Ch]
0x61C029: mov     [esi+195h], bl
0x61C02F: fstp    dword ptr [esi+1A0h]
0x61C035: mov     [esi+196h], bl
0x61C03B: mov     [esi+197h], bl
0x61C041: mov     [esi+190h], bl
0x61C047: mov     byte ptr [esi+191h], 1
0x61C04E: mov     [esi+1A4h], bl
0x61C054: mov     ecx, ds:0B3B910h
0x61C05A: mov     eax, 66666667h
0x61C05F: imul    ecx
0x61C061: sar     edx, 2
0x61C064: mov     eax, edx
0x61C066: shr     eax, 1Fh
0x61C069: add     eax, edx
0x61C06B: lea     edx, [eax+eax*4]
0x61C06E: add     edx, edx
0x61C070: mov     eax, ecx
0x61C072: sub     eax, edx
0x61C074: mov     [esp+24h+arg_0], eax
0x61C078: add     ecx, 1
0x61C07B: fild    [esp+24h+arg_0]
0x61C07F: mov     ds:0B3B910h, ecx
0x61C085: mov     eax, esi
0x61C087: fmul    qword ptr ds:0A2FC80h
0x61C08D: fstp    [esp+24h+arg_0]
0x61C091: fld     dword ptr [esi+44h]
0x61C094: fstp    dword ptr [esi+164h]
0x61C09A: fld     [esp+24h+arg_0]
0x61C09E: fst     dword ptr [esi+168h]
0x61C0A4: fld     dword ptr ds:0A30634h
0x61C0AA: fst     dword ptr [esi+16Ch]
0x61C0B0: fld     dword ptr [esi+44h]
0x61C0B3: fstp    dword ptr [esi+140h]
0x61C0B9: fxch    st(1)
0x61C0BB: fst     dword ptr [esi+144h]
0x61C0C1: fxch    st(1)
0x61C0C3: fst     dword ptr [esi+148h]
0x61C0C9: fld     dword ptr [esi+44h]
0x61C0CC: fstp    dword ptr [esi+134h]
0x61C0D2: fxch    st(1)
0x61C0D4: fst     dword ptr [esi+138h]
0x61C0DA: fxch    st(1)
0x61C0DC: fst     dword ptr [esi+13Ch]
0x61C0E2: fld     dword ptr [esi+44h]
0x61C0E5: fstp    dword ptr [esi+14Ch]
0x61C0EB: fxch    st(1)
0x61C0ED: fstp    dword ptr [esi+150h]
0x61C0F3: fstp    dword ptr [esi+154h]
0x61C0F9: mov     byte ptr [esi+1ACh], 0FFh
0x61C100: mov     [esi+1ADh], bl
0x61C106: mov     [esi+1AEh], bl
0x61C10C: mov     [esi+1BCh], bl
0x61C112: mov     byte ptr [esi+1BDh], 1
0x61C119: mov     ecx, dword ptr [esp+24h+var_C]
0x61C11D: mov     large fs:0, ecx
0x61C124: pop     ecx
0x61C125: pop     edi
0x61C126: pop     esi
0x61C127: pop     ebp
0x61C128: pop     ebx
0x61C129: add     esp, 10h
0x61C12C: retn    10h
