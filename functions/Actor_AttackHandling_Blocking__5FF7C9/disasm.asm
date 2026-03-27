0x5FF7C9: mov     edx, [esi]
0x5FF7CB: mov     eax, [edx+1A0h]
0x5FF7D1: mov     ecx, esi
0x5FF7D3: call    eax
0x5FF7D5: test    al, al
0x5FF7D7: jnz     short loc_5FF7EC
0x5FF7D9: test    bl, bl
0x5FF7DB: jnz     short loc_5FF7EC
0x5FF7DD: mov     ecx, esi
0x5FF7DF: call    Actor_IsBlocking
0x5FF7E4: mov     bl, al
0x5FF7E6: mov     byte ptr [esp+arg_18+2], bl
0x5FF7EA: jmp     short loc_5FF7F5
0x5FF7EC: mov     byte ptr [esp+arg_18+2], 0
0x5FF7F1: mov     bl, byte ptr [esp+arg_18+2]
0x5FF7F5: mov     ecx, [esi+58h]
0x5FF7F8: mov     edx, [ecx]
0x5FF7FA: mov     eax, [edx+0F8h]
0x5FF800: push    1
0x5FF802: call    eax
0x5FF804: test    eax, eax
0x5FF806: jnz     short loc_5FF824
0x5FF808: mov     ecx, [esi+58h]
0x5FF80B: mov     edx, [ecx]
0x5FF80D: mov     eax, [edx+0ECh]
0x5FF813: push    1
0x5FF815: call    eax
0x5FF817: test    eax, eax
0x5FF819: jnz     short loc_5FF824
0x5FF81B: test    bl, bl
0x5FF81D: mov     [esp+arg_70], 1
0x5FF822: jnz     short loc_5FF829
0x5FF824: mov     [esp+arg_70], 0
0x5FF829: test    bl, bl
0x5FF82B: mov     byte ptr [esp+arg_10+3], 0
0x5FF830: jz      loc_5FFBE3
0x5FF836: mov     ecx, [esp+arg_1C]
0x5FF83A: push    0
0x5FF83C: push    ecx
0x5FF83D: push    esi
0x5FF83E: call    sub_6131D0
0x5FF843: add     esp, 0Ch
0x5FF846: test    al, al
0x5FF848: jz      loc_5FFBE3
0x5FF84E: mov     ecx, [esi+58h]
0x5FF851: mov     edx, [ecx]
0x5FF853: mov     eax, [edx+0F8h]
0x5FF859: push    1
0x5FF85B: call    eax
0x5FF85D: test    eax, eax
0x5FF85F: jnz     short loc_5FF879
0x5FF861: mov     ecx, [esi+58h]
0x5FF864: mov     edx, [ecx]
0x5FF866: mov     eax, [edx+0ECh]
0x5FF86C: push    1
0x5FF86E: call    eax
0x5FF870: test    eax, eax
0x5FF872: mov     byte ptr [esp+arg_1C], 1
0x5FF877: jnz     short loc_5FF87E
0x5FF879: mov     byte ptr [esp+arg_1C], 0
0x5FF87E: cmp     [esp+arg_70], 0
0x5FF883: jz      short loc_5FF894
0x5FF885: cmp     [esp+arg_28], 0
0x5FF88A: jnz     short loc_5FF890
0x5FF88C: test    ebp, ebp
0x5FF88E: jz      short loc_5FF894
0x5FF890: fldz
0x5FF892: jmp     short loc_5FF8CF
0x5FF894: mov     ecx, dword ptr [esp+arg_70]
0x5FF898: mov     edx, [esp+arg_1C]
0x5FF89C: push    ecx; char
0x5FF89D: push    edx; float
0x5FF89E: mov     ecx, esi; this
0x5FF8A0: call    Actor_GetFatigueFraction
0x5FF8A5: mov     eax, [esi]
0x5FF8A7: mov     edx, [eax+284h]
0x5FF8AD: push    ecx
0x5FF8AE: fstp    [esp+0Ch+var_C]
0x5FF8B1: push    7
0x5FF8B3: mov     ecx, esi
0x5FF8B5: call    edx
0x5FF8B7: push    eax; float
0x5FF8B8: mov     eax, [esi]
0x5FF8BA: mov     edx, [eax+284h]
0x5FF8C0: push    0Fh; int
0x5FF8C2: mov     ecx, esi
0x5FF8C4: call    edx
0x5FF8C6: push    eax; int
0x5FF8C7: call    Calc_BlockDamageReduction
0x5FF8CC: add     esp, 14h
0x5FF8CF: mov     eax, [edi]
0x5FF8D1: fstp    [esp+arg_2C]
0x5FF8D5: fld     [esp+arg_2C]
0x5FF8D9: mov     edx, [eax+3B4h]
0x5FF8DF: push    ebp
0x5FF8E0: push    esi
0x5FF8E1: sub     esp, 8
0x5FF8E4: fstp    [esp+10h+var_C]
0x5FF8E8: mov     ecx, edi
0x5FF8EA: fld     [esp+10h+arg_14]
0x5FF8EE: fstp    [esp+10h+var_10]
0x5FF8F1: call    edx
0x5FF8F3: fldz
0x5FF8F5: fld     [esp+arg_2C]
0x5FF8F9: fcom    st(1)
0x5FF8FB: fnstsw  ax
0x5FF8FD: fstp    st(1)
0x5FF8FF: test    ah, 41h
0x5FF902: jnz     short loc_5FF912
0x5FF904: fld1
0x5FF906: fsubrp  st(1), st
0x5FF908: fmul    [esp+arg_14]
0x5FF90C: fstp    [esp+arg_14]
0x5FF910: jmp     short loc_5FF914
0x5FF912: fstp    st
0x5FF914: cmp     [esp+arg_28], 0
0x5FF919: jz      short loc_5FF928
0x5FF91B: mov     eax, [esp+arg_28]
0x5FF91F: movsx   ebx, byte ptr [eax+90h]
0x5FF926: jmp     short loc_5FF92B
0x5FF928: or      ebx, 0FFFFFFFFh
0x5FF92B: cmp     byte ptr [esp+arg_1C], 0
0x5FF930: mov     dword ptr [esp+arg_4C], ebx
0x5FF934: jz      loc_5FFA21
0x5FF93A: cmp     dword ptr [esi+58h], 0
0x5FF93E: jz      loc_5FF9CA
0x5FF944: mov     ecx, [esi+58h]
0x5FF947: mov     edx, [ecx]
0x5FF949: mov     eax, [edx+0ECh]
0x5FF94F: push    1
0x5FF951: call    eax
0x5FF953: test    eax, eax
0x5FF955: jz      short loc_5FF9CA
0x5FF957: mov     ecx, [esi+58h]
0x5FF95A: mov     edx, [ecx]
0x5FF95C: mov     eax, [edx+0ECh]
0x5FF962: push    1
0x5FF964: call    eax
0x5FF966: mov     ecx, [eax+8]
0x5FF969: mov     edx, [esi]
0x5FF96B: movsx   ebx, byte ptr [ecx+90h]
0x5FF972: mov     eax, [edx+174h]
0x5FF978: mov     ecx, esi
0x5FF97A: call    eax
0x5FF97C: mov     edx, [edi]
0x5FF97E: mov     ebp, eax
0x5FF980: mov     eax, [edx+174h]
0x5FF986: mov     ecx, edi
0x5FF988: call    eax
0x5FF98A: mov     ecx, dword ptr [esp+arg_5C]
0x5FF98E: mov     edx, [ebp+0]
0x5FF991: push    ecx
0x5FF992: sub     esp, 0Ch
0x5FF995: mov     ecx, esp
0x5FF997: mov     [ecx], edx
0x5FF999: mov     edx, [ebp+4]
0x5FF99C: mov     [ecx+4], edx
0x5FF99F: mov     edx, [ebp+8]
0x5FF9A2: mov     [ecx+8], edx
0x5FF9A5: mov     edx, [eax]
0x5FF9A7: sub     esp, 0Ch
0x5FF9AA: mov     ecx, esp
0x5FF9AC: mov     [ecx], edx
0x5FF9AE: mov     edx, [eax+4]
0x5FF9B1: mov     eax, [eax+8]
0x5FF9B4: mov     [ecx+4], edx
0x5FF9B7: mov     [ecx+8], eax
0x5FF9BA: mov     ecx, dword ptr [esp+1Ch+arg_4C]
0x5FF9BE: push    ebx
0x5FF9BF: push    ecx
0x5FF9C0: call    sub_6AFFF0
0x5FF9C5: jmp     loc_5FFB8E
0x5FF9CA: mov     edx, [esi]
0x5FF9CC: mov     eax, [edx+174h]
0x5FF9D2: mov     ecx, esi
0x5FF9D4: call    eax
0x5FF9D6: mov     edx, [edi]
0x5FF9D8: mov     ebp, eax
0x5FF9DA: mov     eax, [edx+174h]
0x5FF9E0: mov     ecx, edi
0x5FF9E2: call    eax
0x5FF9E4: mov     ecx, dword ptr [esp+arg_3C]
0x5FF9E8: mov     edx, [ebp+0]
0x5FF9EB: push    ecx
0x5FF9EC: sub     esp, 0Ch
0x5FF9EF: mov     ecx, esp
0x5FF9F1: mov     [ecx], edx
0x5FF9F3: mov     edx, [ebp+4]
0x5FF9F6: mov     [ecx+4], edx
0x5FF9F9: mov     edx, [ebp+8]
0x5FF9FC: mov     [ecx+8], edx
0x5FF9FF: mov     edx, [eax]
0x5FFA01: sub     esp, 0Ch
0x5FFA04: mov     ecx, esp
0x5FFA06: mov     [ecx], edx
0x5FFA08: mov     edx, [eax+4]
0x5FFA0B: mov     eax, [eax+8]
0x5FFA0E: push    0FFFFFFFFh
0x5FFA10: mov     [ecx+4], edx
0x5FFA13: push    ebx
0x5FFA14: mov     [ecx+8], eax
0x5FFA17: call    sub_6AFFF0
0x5FFA1C: jmp     loc_5FFB8E
0x5FFA21: cmp     [esp+arg_70], 0
0x5FFA26: jz      loc_5FFB05
0x5FFA2C: push    0Fh
0x5FFA2E: mov     ecx, esi
0x5FFA30: call    Actor_GetSkillMasteryLevel
0x5FFA35: cmp     eax, 2
0x5FFA38: jl      loc_5FFB05
0x5FFA3E: cmp     dword ptr [esi+58h], 0
0x5FFA42: jz      short loc_5FFAAD
0x5FFA44: mov     ecx, [esi+58h]
0x5FFA47: mov     edx, [ecx]
0x5FFA49: mov     eax, [edx+0ECh]
0x5FFA4F: push    1
0x5FFA51: call    eax
0x5FFA53: test    eax, eax
0x5FFA55: jz      short loc_5FFAAD
0x5FFA57: mov     ecx, [esi+58h]
0x5FFA5A: mov     edx, [ecx]
0x5FFA5C: mov     eax, [edx+0ECh]
0x5FFA62: push    1
0x5FFA64: call    eax
0x5FFA66: mov     ecx, [eax+8]
0x5FFA69: mov     edx, [esi]
0x5FFA6B: movsx   ebx, byte ptr [ecx+90h]
0x5FFA72: mov     eax, [edx+174h]
0x5FFA78: mov     ecx, esi
0x5FFA7A: call    eax
0x5FFA7C: mov     edx, [edi]
0x5FFA7E: mov     ebp, eax
0x5FFA80: mov     eax, [edx+174h]
0x5FFA86: mov     ecx, edi
0x5FFA88: call    eax
0x5FFA8A: mov     ecx, dword ptr [esp+arg_5C]
0x5FFA8E: mov     edx, [ebp+0]
0x5FFA91: push    ecx
0x5FFA92: sub     esp, 0Ch
0x5FFA95: mov     ecx, esp
0x5FFA97: mov     [ecx], edx
0x5FFA99: mov     edx, [ebp+4]
0x5FFA9C: mov     [ecx+4], edx
0x5FFA9F: mov     edx, [ebp+8]
0x5FFAA2: sub     esp, 0Ch
0x5FFAA5: mov     [ecx+8], edx
0x5FFAA8: mov     ecx, esp
0x5FFAAA: push    ebx
0x5FFAAB: jmp     short loc_5FFAE9
0x5FFAAD: mov     edx, [esi]
0x5FFAAF: mov     eax, [edx+174h]
0x5FFAB5: mov     ecx, esi
0x5FFAB7: call    eax
0x5FFAB9: mov     edx, [edi]
0x5FFABB: mov     ebp, eax
0x5FFABD: mov     eax, [edx+174h]
0x5FFAC3: mov     ecx, edi
0x5FFAC5: call    eax
0x5FFAC7: mov     ecx, dword ptr [esp+arg_5C]
0x5FFACB: mov     edx, [ebp+0]
0x5FFACE: push    ecx
0x5FFACF: sub     esp, 0Ch
0x5FFAD2: mov     ecx, esp
0x5FFAD4: mov     [ecx], edx
0x5FFAD6: mov     edx, [ebp+4]
0x5FFAD9: mov     [ecx+4], edx
0x5FFADC: mov     edx, [ebp+8]
0x5FFADF: sub     esp, 0Ch
0x5FFAE2: mov     [ecx+8], edx
0x5FFAE5: mov     ecx, esp
0x5FFAE7: push    0FFFFFFFFh
0x5FFAE9: mov     edx, [eax]
0x5FFAEB: mov     [ecx], edx
0x5FFAED: mov     edx, [eax+4]
0x5FFAF0: mov     eax, [eax+8]
0x5FFAF3: mov     [ecx+4], edx
0x5FFAF6: push    0FFFFFFFFh
0x5FFAF8: mov     [ecx+8], eax
0x5FFAFB: call    sub_6AFFF0
0x5FFB00: jmp     loc_5FFB8E
0x5FFB05: cmp     dword ptr [esi+58h], 0
0x5FFB09: jz      loc_5FFB96
0x5FFB0F: mov     ecx, [esi+58h]
0x5FFB12: mov     edx, [ecx]
0x5FFB14: mov     eax, [edx+0F8h]
0x5FFB1A: push    1
0x5FFB1C: call    eax
0x5FFB1E: test    eax, eax
0x5FFB20: jz      short loc_5FFB96
0x5FFB22: mov     ecx, [esi+58h]
0x5FFB25: mov     edx, [ecx]
0x5FFB27: mov     eax, [edx+0F8h]
0x5FFB2D: push    1
0x5FFB2F: call    eax
0x5FFB31: cmp     dword ptr [eax+8], 0
0x5FFB35: jz      short loc_5FFB96
0x5FFB37: cmp     [esp+arg_28], 0
0x5FFB3C: jz      short loc_5FFB4B
0x5FFB3E: mov     ecx, [esp+arg_28]
0x5FFB42: movsx   ebp, byte ptr [ecx+90h]
0x5FFB49: jmp     short loc_5FFB4E
0x5FFB4B: or      ebp, 0FFFFFFFFh
0x5FFB4E: mov     ecx, [esi+58h]
0x5FFB51: mov     edx, [ecx]
0x5FFB53: mov     eax, [edx+0F8h]
0x5FFB59: push    1
0x5FFB5B: call    eax
0x5FFB5D: mov     ecx, dword ptr [esp+arg_5C]
0x5FFB61: mov     eax, [eax+8]
0x5FFB64: push    ecx; char
0x5FFB65: push    0; char
0x5FFB67: mov     ecx, eax
0x5FFB69: call    TESObjectARMO_ISHeavyArmor
0x5FFB6E: fld     [esp+8+arg_2C]
0x5FFB72: movzx   edx, al
0x5FFB75: push    edx; char
0x5FFB76: push    0FFFFFFFFh; int
0x5FFB78: push    ebp; int
0x5FFB79: push    esi; int
0x5FFB7A: sub     esp, 8
0x5FFB7D: fstp    [esp+20h+var_1C]; int
0x5FFB81: fld     [esp+20h+arg_14]
0x5FFB85: fstp    [esp+20h+var_20]; float
0x5FFB88: push    edi; int
0x5FFB89: call    sub_6AF880
0x5FFB8E: add     esp, 24h
0x5FFB91: mov     byte ptr [esp+arg_10+3], 1
0x5FFB96: cmp     [esp+arg_70], 0
0x5FFB9B: jnz     short loc_5FFBE3
0x5FFB9D: fld     [esp+arg_30]
0x5FFBA1: fld     [esp+arg_2C]
0x5FFBA5: fld     st
0x5FFBA7: fld1
0x5FFBA9: fsubrp  st(1), st
0x5FFBAB: fmul    st, st(2)
0x5FFBAD: fstp    dword ptr [esp+arg_3C]
0x5FFBB1: fld     dword ptr [esp+arg_3C]
0x5FFBB5: fsubp   st(2), st
0x5FFBB7: fxch    st(1)
0x5FFBB9: fstp    [esp+arg_30]
0x5FFBBD: fldz
0x5FFBBF: fcom    [esp+arg_30]
0x5FFBC3: fnstsw  ax
0x5FFBC5: test    ah, 41h
0x5FFBC8: jnz     short loc_5FFBCE
0x5FFBCA: fst     [esp+arg_30]
0x5FFBCE: fld1
0x5FFBD0: fcomp   st(2)
0x5FFBD2: fnstsw  ax
0x5FFBD4: fstp    st(1)
0x5FFBD6: test    ah, 41h
0x5FFBD9: jp      short loc_5FFBE1
0x5FFBDB: fstp    [esp+arg_30]
0x5FFBDF: jmp     short loc_5FFBE3
0x5FFBE1: fstp    st
0x5FFBE3: mov     eax, [esi]
0x5FFBE5: mov     edx, [eax+170h]
0x5FFBEB: mov     ecx, esi
0x5FFBED: call    edx
0x5FFBEF: cmp     byte ptr [eax+4], 24h ; '$'
0x5FFBF3: jz      loc_5FFD28
0x5FFBF9: fldz
0x5FFBFB: fcom    [esp+arg_34]
0x5FFBFF: fnstsw  ax
0x5FFC01: test    ah, 44h
0x5FFC04: jnp     loc_5FFD26
0x5FFC0A: fcomp   [esp+arg_30]
0x5FFC0E: fnstsw  ax
0x5FFC10: test    ah, 5
0x5FFC13: jp      loc_5FFD28
0x5FFC19: mov     ecx, esi
0x5FFC1B: call    sub_5E5A00
0x5FFC20: mov     ebp, eax
0x5FFC22: test    ebp, ebp
0x5FFC24: jz      loc_5FFCFF
0x5FFC2A: mov     eax, [ebp+8]
0x5FFC2D: push    0
0x5FFC2F: push    0Dh
0x5FFC31: lea     ecx, [eax+64h]
0x5FFC34: call    TESBipedModelForm_CoversSlot
0x5FFC39: test    al, al
0x5FFC3B: jz      short loc_5FFC56
0x5FFC3D: mov     ecx, edi
0x5FFC3F: call    Actor_IsBlocking
0x5FFC44: test    al, al
0x5FFC46: jz      short loc_5FFC6D
0x5FFC48: push    0Fh
0x5FFC4A: mov     ecx, edi
0x5FFC4C: call    Actor_GetSkillMasteryLevel
0x5FFC51: cmp     eax, 2
0x5FFC54: jge     short loc_5FFC6D
0x5FFC56: mov     eax, [esi]
0x5FFC58: fld     [esp+arg_30]
0x5FFC5C: mov     edx, [eax+2C4h]
0x5FFC62: push    0
0x5FFC64: push    ecx
0x5FFC65: fstp    [esp+8+var_8]
0x5FFC68: push    ebp
0x5FFC69: mov     ecx, esi
0x5FFC6B: call    edx
0x5FFC6D: cmp     byte ptr [esp+arg_10+3], 0
0x5FFC72: jnz     short loc_5FFCED
0x5FFC74: mov     ecx, [ebp+8]
0x5FFC77: test    ecx, ecx
0x5FFC79: jz      short loc_5FFCA4
0x5FFC7B: cmp     byte ptr [ecx+4], 14h
0x5FFC7F: jnz     short loc_5FFCA4
0x5FFC81: call    TESObjectARMO_ISHeavyArmor
0x5FFC86: fldz
0x5FFC88: push    ecx
0x5FFC89: fstp    [esp+4+var_4]
0x5FFC8C: test    al, al
0x5FFC8E: mov     eax, [esi]
0x5FFC90: mov     edx, [eax+39Ch]
0x5FFC96: mov     ecx, esi
0x5FFC98: push    0
0x5FFC9A: jnz     short loc_5FFCA0
0x5FFC9C: push    1Bh
0x5FFC9E: jmp     short loc_5FFCA2
0x5FFCA0: push    12h
0x5FFCA2: call    edx
0x5FFCA4: cmp     [esp+arg_28], 0
0x5FFCA9: jz      short loc_5FFCB8
0x5FFCAB: mov     eax, [esp+arg_28]
0x5FFCAF: movsx   ebx, byte ptr [eax+90h]
0x5FFCB6: jmp     short loc_5FFCBB
0x5FFCB8: or      ebx, 0FFFFFFFFh
0x5FFCBB: mov     edx, dword ptr [esp+arg_5C]
0x5FFCBF: mov     ecx, [ebp+8]
0x5FFCC2: push    edx; char
0x5FFCC3: push    0; char
0x5FFCC5: push    0FFFFFFFFh; char
0x5FFCC7: call    TESObjectARMO_ISHeavyArmor
0x5FFCCC: fld     [esp+0Ch+arg_30]
0x5FFCD0: movzx   eax, al
0x5FFCD3: push    eax; int
0x5FFCD4: push    ebx; int
0x5FFCD5: push    esi; int
0x5FFCD6: sub     esp, 8
0x5FFCD9: fstp    [esp+20h+var_1C]; int
0x5FFCDD: fld     [esp+20h+arg_14]
0x5FFCE1: fstp    [esp+20h+var_20]; float
0x5FFCE4: push    edi; int
0x5FFCE5: call    sub_6AF880
0x5FFCEA: add     esp, 24h
0x5FFCED: mov     ecx, ebp
0x5FFCEF: call    ContainerEntryExtraData_DestroyDataTable
0x5FFCF4: push    ebp
0x5FFCF5: call    FormHeapFree
0x5FFCFA: add     esp, 4
0x5FFCFD: jmp     short loc_5FFD69
0x5FFCFF: cmp     byte ptr [esp+arg_10+3], 0
0x5FFD04: jnz     short loc_5FFD69
0x5FFD06: mov     eax, [esp+arg_28]
0x5FFD0A: test    eax, eax
0x5FFD0C: jz      short loc_5FFD1C
0x5FFD0E: mov     ecx, dword ptr [esp+arg_5C]
0x5FFD12: movsx   eax, byte ptr [eax+90h]
0x5FFD19: push    ecx
0x5FFD1A: jmp     short loc_5FFD48
0x5FFD1C: mov     ecx, dword ptr [esp+arg_5C]
0x5FFD20: or      eax, 0FFFFFFFFh
0x5FFD23: push    ecx
0x5FFD24: jmp     short loc_5FFD48
0x5FFD26: fstp    st
0x5FFD28: cmp     byte ptr [esp+arg_10+3], 0
0x5FFD2D: jnz     short loc_5FFD69
0x5FFD2F: mov     eax, [esp+arg_28]
0x5FFD33: test    eax, eax
0x5FFD35: jz      short loc_5FFD40
0x5FFD37: movsx   eax, byte ptr [eax+90h]
0x5FFD3E: jmp     short loc_5FFD43
0x5FFD40: or      eax, 0FFFFFFFFh
0x5FFD43: mov     edx, dword ptr [esp+arg_5C]
0x5FFD47: push    edx; char
0x5FFD48: fldz
0x5FFD4A: push    0; char
0x5FFD4C: push    0FFFFFFFFh; char
0x5FFD4E: push    0FFFFFFFFh; int
0x5FFD50: push    eax; int
0x5FFD51: push    esi; int
0x5FFD52: sub     esp, 8
0x5FFD55: fstp    [esp+20h+var_1C]; int
0x5FFD59: fld     [esp+20h+arg_14]
0x5FFD5D: fstp    [esp+20h+var_20]; float
0x5FFD60: push    edi; int
0x5FFD61: call    sub_6AF880
0x5FFD66: add     esp, 24h
0x5FFD69: mov     ecx, [edi+58h]
0x5FFD6C: test    ecx, ecx
0x5FFD6E: jz      short loc_5FFD80
0x5FFD70: mov     eax, [ecx]
0x5FFD72: mov     edx, [eax+0ECh]
0x5FFD78: push    1
0x5FFD7A: call    edx
0x5FFD7C: mov     ebx, eax
0x5FFD7E: jmp     short loc_5FFD82
0x5FFD80: xor     ebx, ebx
0x5FFD82: mov     eax, [esp+arg_28]
0x5FFD86: test    eax, eax
0x5FFD88: jz      short loc_5FFD8E
0x5FFD8A: test    ebx, ebx
0x5FFD8C: jnz     short loc_5FFDA1
0x5FFD8E: mov     ecx, [esp+arg_20]
0x5FFD92: test    ecx, ecx
0x5FFD94: jz      loc_5FFEB5
0x5FFD9A: call    TESWorldSpace_GetParentWorldpsace
0x5FFD9F: jmp     short loc_5FFDB3
0x5FFDA1: mov     ecx, [esp+arg_20]
0x5FFDA5: test    ecx, ecx
0x5FFDA7: jz      short loc_5FFDB0
0x5FFDA9: call    TESWorldSpace_GetParentWorldpsace
0x5FFDAE: jmp     short loc_5FFDB3
0x5FFDB0: mov     eax, [eax+64h]
0x5FFDB3: test    eax, eax
0x5FFDB5: jz      short loc_5FFDBE
0x5FFDB7: lea     ebp, [eax+18h]
0x5FFDBA: test    ebp, ebp
0x5FFDBC: jnz     short loc_5FFDFB
0x5FFDBE: mov     ecx, [esp+arg_20]
0x5FFDC2: test    ecx, ecx
0x5FFDC4: jz      short loc_5FFDE1
0x5FFDC6: call    sub_607400
0x5FFDCB: test    eax, eax
0x5FFDCD: jz      short loc_5FFDD6
0x5FFDCF: lea     ebp, [eax+18h]
0x5FFDD2: test    ebp, ebp
0x5FFDD4: jnz     short loc_5FFDFB
0x5FFDD6: mov     ecx, [esp+arg_20]
0x5FFDDA: call    sub_607410
0x5FFDDF: jmp     short loc_5FFDE8
0x5FFDE1: mov     ecx, ebx
0x5FFDE3: call    sub_484DF0
0x5FFDE8: test    eax, eax
0x5FFDEA: jz      loc_5FFEB5
0x5FFDF0: lea     ebp, [eax+24h]
0x5FFDF3: test    ebp, ebp
0x5FFDF5: jz      loc_5FFEB5
0x5FFDFB: cmp     [esp+arg_5C], 0
0x5FFE00: jz      short loc_5FFE4A
0x5FFE02: cmp     [esp+arg_20], 0
0x5FFE07: jnz     loc_5FFEB5
0x5FFE0D: mov     ecx, ebx
0x5FFE0F: call    sub_4849C0
0x5FFE14: fstp    [esp+arg_3C]
0x5FFE18: mov     eax, [ebp+0Ch]
0x5FFE1B: mov     edx, [eax]
0x5FFE1D: add     ebp, 0Ch
0x5FFE20: push    edi
0x5FFE21: mov     ecx, ebp
0x5FFE23: call    edx
0x5FFE25: fcomp   [esp+arg_3C]
0x5FFE29: fnstsw  ax
0x5FFE2B: test    ah, 41h
0x5FFE2E: jnz     loc_5FFEB5
0x5FFE34: mov     ecx, [edi+58h]
0x5FFE37: mov     eax, [ecx]
0x5FFE39: mov     edx, [eax+42Ch]
0x5FFE3F: push    0
0x5FFE41: push    0
0x5FFE43: push    1
0x5FFE45: push    edi
0x5FFE46: call    edx
0x5FFE48: jmp     short loc_5FFEB5
0x5FFE4A: cmp     edi, ds:0B333C4h
0x5FFE50: jnz     short loc_5FFE71
0x5FFE52: lea     ecx, [ebp+0Ch]
0x5FFE55: call    EffectItemList_GetSchoolAV
0x5FFE5A: push    eax
0x5FFE5B: call    Magic_GetSchoolFromSkillAV
0x5FFE60: mov     ecx, ds:0B333C4h
0x5FFE66: add     esp, 4
0x5FFE69: push    eax
0x5FFE6A: call    sub_6635E0
0x5FFE6F: jmp     short loc_5FFEB5
0x5FFE71: mov     eax, [edi]
0x5FFE73: mov     edx, [eax+330h]
0x5FFE79: mov     ecx, edi
0x5FFE7B: call    edx
0x5FFE7D: test    eax, eax
0x5FFE7F: jz      short loc_5FFEB5
0x5FFE81: lea     ecx, [ebp+0Ch]
0x5FFE84: call    EffectItemList_GetSchoolAV
0x5FFE89: push    eax
0x5FFE8A: call    Magic_GetSchoolFromSkillAV
0x5FFE8F: push    eax
0x5FFE90: call    Magic_GetSchoolFailureSound
0x5FFE95: add     esp, 8
0x5FFE98: test    eax, eax
0x5FFE9A: jz      short loc_5FFEB5
0x5FFE9C: mov     eax, [eax+0Ch]
0x5FFE9F: push    0
0x5FFEA1: push    eax
0x5FFEA2: mov     eax, [edi]
0x5FFEA4: mov     edx, [eax+330h]
0x5FFEAA: mov     ecx, edi
0x5FFEAC: call    edx
0x5FFEAE: mov     ecx, eax
0x5FFEB0: call    sub_619FA0
0x5FFEB5: fldz
0x5FFEB7: fld     [esp+arg_14]
0x5FFEBB: fcom    st(1)
0x5FFEBD: fnstsw  ax
0x5FFEBF: fld     [esp+arg_38]
0x5FFEC3: fcom    st(2)
0x5FFEC5: test    ah, 41h
0x5FFEC8: fnstsw  ax
0x5FFECA: jz      loc_6000C7
0x5FFED0: test    ah, 41h
0x5FFED3: jz      loc_6000CC
0x5FFED9: fstp    st(1)
0x5FFEDB: fstp    st(1)
0x5FFEDD: fstp    st
0x5FFEDF: fldz
0x5FFEE1: fcomp   [esp+arg_2C]
0x5FFEE5: fnstsw  ax
0x5FFEE7: test    ah, 5
0x5FFEEA: jnp     loc_600528
0x5FFEF0: mov     bl, [esp+arg_70]
0x5FFEF4: test    bl, bl
0x5FFEF6: jz      short loc_5FFF0A
0x5FFEF8: push    11h
0x5FFEFA: mov     ecx, esi
0x5FFEFC: call    Actor_GetSkillMasteryLevel
0x5FFF01: cmp     eax, 2
0x5FFF04: jge     loc_600528
0x5FFF0A: cmp     [esp+arg_20], 0
0x5FFF0F: jnz     short loc_5FFF52
0x5FFF11: cmp     byte ptr [esp+arg_18+2], 0
0x5FFF16: jz      short loc_5FFF52
0x5FFF18: test    bl, bl
0x5FFF1A: jz      short loc_5FFF52
0x5FFF1C: cmp     [esp+arg_28], 0
0x5FFF21: jz      short loc_5FFF52
0x5FFF23: push    0Fh
0x5FFF25: mov     ecx, esi
0x5FFF27: call    Actor_GetSkillMasteryLevel
0x5FFF2C: cmp     eax, 2
0x5FFF2F: jl      short loc_5FFF52
0x5FFF31: push    0; Seed
0x5FFF33: call    GetRandomLargeInteger?
0x5FFF38: cdq
0x5FFF39: mov     ecx, 64h ; 'd'
0x5FFF3E: idiv    ecx
0x5FFF40: add     esp, 4
0x5FFF43: cmp     edx, ds:0B37250h
0x5FFF49: jg      short loc_5FFF52
0x5FFF4B: mov     ecx, edi
0x5FFF4D: call    sub_5F4F00
0x5FFF52: cmp     byte ptr [esp+arg_48+3], 0
0x5FFF57: jnz     loc_6000B4
0x5FFF5D: mov     ebp, [esi]
0x5FFF5F: mov     ebx, [edi+58h]
0x5FFF62: lea     edx, [esp+a2]
0x5FFF66: push    edx; a2
0x5FFF67: mov     ecx, edi; this
0x5FFF69: call    sub_5E6A40
0x5FFF6E: push    eax
0x5FFF6F: mov     eax, [ebx]
0x5FFF71: mov     edx, [eax+310h]
0x5FFF77: mov     ecx, ebx
0x5FFF79: call    edx
0x5FFF7B: fld     [esp+arg_30]
0x5FFF7F: push    eax
0x5FFF80: mov     eax, [ebp+398h]
0x5FFF86: sub     esp, 8
0x5FFF89: fstp    [esp+0Ch+var_8]
0x5FFF8D: mov     ecx, esi
0x5FFF8F: fld     [esp+0Ch+arg_18]
0x5FFF93: fstp    [esp+0Ch+var_C]
0x5FFF96: push    edi
0x5FFF97: call    eax
0x5FFF99: mov     edx, [esi]
0x5FFF9B: mov     eax, [edx+284h]
0x5FFFA1: push    4
0x5FFFA3: mov     ecx, esi
0x5FFFA5: call    eax
0x5FFFA7: test    eax, eax
0x5FFFA9: jle     loc_6000B4
0x5FFFAF: fld     [esp+arg_58]
0x5FFFB3: call    Double_To_SInt32
0x5FFFB8: push    eax
0x5FFFB9: mov     ecx, esi; this
0x5FFFBB: call    Actor_GetFatigueFraction
0x5FFFC0: mov     edx, [esi]
0x5FFFC2: mov     eax, [edx+284h]
0x5FFFC8: push    ecx
0x5FFFC9: fstp    [esp+8+var_8]
0x5FFFCC: push    7; int
0x5FFFCE: mov     ecx, esi
0x5FFFD0: call    eax
0x5FFFD2: mov     edx, [esi]
0x5FFFD4: push    eax; float
0x5FFFD5: mov     eax, [edx+284h]
0x5FFFDB: push    3; int
0x5FFFDD: mov     ecx, esi
0x5FFFDF: call    eax
0x5FFFE1: push    eax; int
0x5FFFE2: call    Calc_KnockbackFactor
0x5FFFE7: fstp    [esp+18h+arg_14]
0x5FFFEB: mov     edx, [edi]
0x5FFFED: mov     eax, [edx+174h]
0x5FFFF3: add     esp, 10h
0x5FFFF6: mov     ecx, edi
0x5FFFF8: call    eax
0x5FFFFA: mov     edx, [esi]
0x5FFFFC: push    eax
0x5FFFFD: mov     eax, [edx+174h]
0x600003: lea     ecx, [esp+0Ch+arg_34]
0x600007: push    ecx
0x600008: mov     ecx, esi
0x60000A: call    eax
0x60000C: mov     ecx, eax
0x60000E: call    sub_4121A0
0x600013: mov     ecx, offset fKnockbackForceMax
0x600018: call    GameSetting_GetSafeFloatPointer
0x60001D: fld     [esp+arg_1C]
0x600021: fld     dword ptr [eax]
0x600023: fcompp
0x600025: fnstsw  ax
0x600027: test    ah, 5
0x60002A: jp      short loc_60003C
0x60002C: mov     ecx, offset fKnockbackForceMax
0x600031: call    GameSetting_GetSafeFloatPointer
0x600036: fld     dword ptr [eax]
0x600038: fstp    [esp+arg_1C]
0x60003C: lea     ecx, [esp+arg_3C]
0x600040: call    sub_43F350
0x600045: fstp    st
0x600047: fld     [esp+arg_1C]
0x60004B: fld     st
0x60004D: fmul    dword ptr [esp+arg_3C]
0x600051: fstp    [esp+arg_64]
0x600055: mov     ecx, [esp+arg_64]
0x600059: mov     [esp+arg_94], ecx
0x600060: fld     st
0x600062: mov     ecx, esi; this
0x600064: fmul    dword ptr [esp+arg_3C+4]
0x600068: fstp    dword ptr [esp+arg_68]
0x60006C: mov     edx, dword ptr [esp+arg_68]
0x600070: mov     [esp+arg_98], edx
0x600077: fmul    [esp+arg_44]
0x60007B: fstp    [esp+arg_6C]
0x60007F: mov     eax, [esp+arg_6C]
0x600083: mov     [esp+arg_9C], eax
0x60008A: call    MobileObject_GetCharProxy
0x60008F: mov     ebx, eax
0x600091: test    ebx, ebx
0x600093: jz      short loc_6000B4
0x600095: mov     ecx, offset fKnockbackTime
0x60009A: call    GameSetting_GetSafeFloatPointer
0x60009F: fld     dword ptr [eax]
0x6000A1: push    ecx
0x6000A2: lea     ecx, [esp+4+arg_94]
0x6000A9: fstp    [esp+4+var_4]; float
0x6000AC: push    ecx; int
0x6000AD: mov     ecx, ebx
0x6000AF: call    sub_8907A0
0x6000B4: cmp     esi, ds:0B333C4h
0x6000BA: jnz     loc_60057C
0x6000C0: push    0
0x6000C2: jmp     loc_600574
0x6000C7: test    ah, 41h
0x6000CA: jnz     short loc_6000E0
0x6000CC: fld     st(1)
0x6000CE: fdiv    [esp+arg_58]
0x6000D2: fstp    dword ptr [esp+arg_3C]
0x6000D6: fmul    dword ptr [esp+arg_3C]
0x6000DA: fstp    [esp+arg_38]
0x6000DE: jmp     short loc_6000E2
0x6000E0: fstp    st
0x6000E2: cmp     byte ptr ds:0B3B908h, 0
0x6000E9: jz      loc_60018F
0x6000EF: fcompp
0x6000F1: fnstsw  ax
0x6000F3: test    ah, 41h
0x6000F6: jnz     short loc_60013C
0x6000F8: push    8
0x6000FA: call    ActorValue_GetName
0x6000FF: add     esp, 4
0x600102: push    eax
0x600103: mov     eax, [esi]
0x600105: mov     edx, [eax+288h]
0x60010B: push    8
0x60010D: mov     ecx, esi
0x60010F: call    edx
0x600111: sub     esp, 10h
0x600114: fstp    qword ptr [esp+14h+var_C]
0x600118: mov     ecx, esi; this
0x60011A: fld     [esp+14h+arg_14]
0x60011E: fstp    qword ptr [esp+14h+var_14]
0x600121: call    TESObjectREFR_GetName
0x600126: push    eax
0x600127: mov     ecx, edi; this
0x600129: call    TESObjectREFR_GetName
0x60012E: push    eax
0x60012F: push    offset a_20sHits_20sFo; "%.20s hits %.20s for %.1f/%.1f %s damag"...
0x600134: call    Interface_ConsolePrint
0x600139: add     esp, 20h
0x60013C: fldz
0x60013E: fcomp   [esp+arg_38]
0x600142: fnstsw  ax
0x600144: test    ah, 5
0x600147: jp      short loc_600193
0x600149: push    0Ah
0x60014B: call    ActorValue_GetName
0x600150: add     esp, 4
0x600153: push    eax
0x600154: mov     eax, [esi]
0x600156: mov     edx, [eax+288h]
0x60015C: push    0Ah
0x60015E: mov     ecx, esi
0x600160: call    edx
0x600162: sub     esp, 10h
0x600165: fstp    qword ptr [esp+14h+var_C]
0x600169: mov     ecx, esi; this
0x60016B: fld     [esp+14h+arg_38]
0x60016F: fstp    qword ptr [esp+14h+var_14]
0x600172: call    TESObjectREFR_GetName
0x600177: push    eax
0x600178: mov     ecx, edi; this
0x60017A: call    TESObjectREFR_GetName
0x60017F: push    eax
0x600180: push    offset a_20sHits_20sFo; "%.20s hits %.20s for %.1f/%.1f %s damag"...
0x600185: call    Interface_ConsolePrint
0x60018A: add     esp, 20h
0x60018D: jmp     short loc_600193
0x60018F: fstp    st
0x600191: fstp    st
0x600193: cmp     edi, ds:0B333C4h
0x600199: jnz     short loc_6001AB
0x60019B: cmp     [esp+arg_20], 0
0x6001A0: jz      short loc_6001AB
0x6001A2: push    esi
0x6001A3: call    Player_UpdateHUDHealthBarTarget?
0x6001A8: add     esp, 4
0x6001AB: mov     eax, [esi]
0x6001AD: mov     edx, [eax+198h]
0x6001B3: push    0
0x6001B5: mov     ecx, esi
0x6001B7: call    edx
0x6001B9: fld     [esp+arg_38]
0x6001BD: test    al, al
0x6001BF: mov     eax, [esi]
0x6001C1: mov     edx, [eax+220h]
0x6001C7: push    edi
0x6001C8: setz    bl
0x6001CB: sub     esp, 8
0x6001CE: fstp    [esp+0Ch+var_8]
0x6001D2: mov     ecx, esi
0x6001D4: fld     [esp+0Ch+arg_14]
0x6001D8: fstp    [esp+0Ch+var_C]
0x6001DB: call    edx
0x6001DD: test    bl, bl
0x6001DF: mov     byte ptr [esp+arg_18+3], al
0x6001E3: jz      short loc_60020D
0x6001E5: test    al, al
0x6001E7: jz      short loc_600218
0x6001E9: cmp     [esp+arg_20], 0
0x6001EE: jnz     short loc_60020D
0x6001F0: push    4
0x6001F2: mov     ecx, esi
0x6001F4: call    Actor_GetBaseCalcAVi
0x6001F9: test    eax, eax
0x6001FB: jle     short loc_60020D
0x6001FD: fld     [esp+arg_14]
0x600201: push    ecx
0x600202: fstp    [esp+4+var_4]; float
0x600205: push    esi; int
0x600206: mov     ecx, edi
0x600208: call    sub_5F0EE0
0x60020D: cmp     byte ptr [esp+arg_18+3], 0
0x600212: jnz     loc_5FFEDF
0x600218: fldz
0x60021A: fcomp   [esp+arg_38]
0x60021E: fnstsw  ax
0x600220: test    ah, 5
0x600223: jp      short loc_60024F
0x600225: mov     eax, [esi]
0x600227: mov     edx, [eax+284h]
0x60022D: push    0Ah
0x60022F: mov     ecx, esi
0x600231: call    edx
0x600233: mov     dword ptr [esp+arg_3C], eax
0x600237: fild    dword ptr [esp+arg_3C]
0x60023B: fcomp   dword ptr ds:0A2FAA8h
0x600241: fnstsw  ax
0x600243: test    ah, 41h
0x600246: jp      short loc_60024F
0x600248: mov     byte ptr [esp+arg_10+3], 1
0x60024D: jmp     short loc_60028E
0x60024F: fld     [esp+arg_58]
0x600253: call    Double_To_SInt32
0x600258: push    eax; int
0x600259: mov     ecx, esi; this
0x60025B: call    Actor_GetFatigueFraction
0x600260: mov     eax, [esi]
0x600262: mov     edx, [eax+284h]
0x600268: push    ecx
0x600269: fstp    [esp+8+var_8]
0x60026C: push    7
0x60026E: mov     ecx, esi
0x600270: call    edx
0x600272: push    eax; float
0x600273: mov     eax, [esi]
0x600275: mov     edx, [eax+284h]
0x60027B: push    3; int
0x60027D: mov     ecx, esi
0x60027F: call    edx
0x600281: push    eax; int
0x600282: call    sub_5475D0
0x600287: add     esp, 10h
0x60028A: mov     byte ptr [esp+arg_10+3], al
0x60028E: mov     eax, [edi]
0x600290: mov     edx, [eax+164h]
0x600296: mov     ecx, edi
0x600298: call    edx
0x60029A: test    eax, eax
0x60029C: jz      short loc_6002BE
0x60029E: mov     eax, [edi]
0x6002A0: mov     edx, [eax+164h]
0x6002A6: push    3
0x6002A8: mov     ecx, edi
0x6002AA: call    edx
0x6002AC: mov     ecx, eax
0x6002AE: call    ActorAnimData_GetAnimGroupFromField8Value
0x6002B3: push    eax
0x6002B4: call    sub_51AA00
0x6002B9: add     esp, 4
0x6002BC: jmp     short loc_6002C3
0x6002BE: mov     eax, 0FFh
0x6002C3: mov     ecx, [esp+arg_20]
0x6002C7: test    ecx, ecx
0x6002C9: jnz     short loc_6002D6
0x6002CB: cmp     eax, 18h
0x6002CE: jz      short loc_6002D6
0x6002D0: mov     byte ptr [esp+arg_18+3], cl
0x6002D4: jmp     short loc_6002DF
0x6002D6: test    ecx, ecx
0x6002D8: mov     byte ptr [esp+arg_18+3], 1
0x6002DD: jnz     short loc_6002E8
0x6002DF: cmp     eax, 17h
0x6002E2: jz      short loc_6002E8
0x6002E4: xor     bl, bl
0x6002E6: jmp     short loc_6002EA
0x6002E8: mov     bl, 1
0x6002EA: mov     eax, [esp+arg_60]
0x6002EE: push    eax
0x6002EF: mov     ecx, edi
0x6002F1: call    Actor_GetSkillMasteryLevel
0x6002F6: cmp     eax, 3
0x6002F9: jl      loc_600410
0x6002FF: push    4
0x600301: mov     ecx, esi
0x600303: call    Actor_GetBaseCalcAVi
0x600308: test    eax, eax
0x60030A: jle     loc_600410
0x600310: push    0; Seed
0x600312: call    GetRandomLargeInteger?
0x600317: cdq
0x600318: mov     ecx, 64h ; 'd'
0x60031D: idiv    ecx
0x60031F: add     esp, 4
0x600322: cmp     byte ptr [esp+arg_18+3], 0
0x600327: mov     ebp, edx
0x600329: jz      short loc_600338
0x60032B: cmp     ebp, ds:0B37240h
0x600331: jge     short loc_600338
0x600333: mov     byte ptr [esp+arg_10+3], 1
0x600338: test    bl, bl
0x60033A: jz      short loc_6003A4
0x60033C: mov     edx, [esp+arg_60]
0x600340: push    edx
0x600341: mov     ecx, edi
0x600343: call    Actor_GetSkillMasteryLevel
0x600348: cmp     eax, 4
0x60034B: jnz     short loc_6003A4
0x60034D: cmp     ebp, ds:0B37248h
0x600353: jge     short loc_6003A4
0x600355: mov     byte ptr [esp+arg_10+3], 0
0x60035A: call    Magic_GetMarksmanParalyzeSpell
0x60035F: mov     ebx, eax
0x600361: test    ebx, ebx
0x600363: jz      short loc_6003A4
0x600365: mov     eax, [esi+5Ch]
0x600368: mov     edx, [eax+30h]
0x60036B: lea     ebp, [esi+5Ch]
0x60036E: mov     ecx, ebp
0x600370: call    edx
0x600372: mov     dword ptr [esp+arg_3C], eax
0x600376: mov     eax, [ebp+0]
0x600379: mov     edx, [eax+34h]
0x60037C: add     ebx, 18h
0x60037F: push    ebx
0x600380: mov     ecx, ebp
0x600382: call    edx
0x600384: fld1
0x600386: push    0
0x600388: push    0
0x60038A: push    ecx
0x60038B: mov     ecx, ebp
0x60038D: fstp    [esp+0Ch+var_C]
0x600390: call    MagicCaster_ApplyActiveMagicItem
0x600395: mov     ecx, dword ptr [esp+arg_3C]
0x600399: mov     eax, [ebp+0]
0x60039C: mov     edx, [eax+34h]
0x60039F: push    ecx
0x6003A0: mov     ecx, ebp
0x6003A2: call    edx
0x6003A4: cmp     byte ptr [esp+arg_18+3], 0
0x6003A9: jz      short loc_600410
0x6003AB: cmp     byte ptr [esp+arg_10+3], 0
0x6003B0: jz      short loc_600410
0x6003B2: fld     dword ptr ds:0A3D8F0h
0x6003B8: push    ecx
0x6003B9: fstp    [esp+4+var_4]; float
0x6003BC: call    sub_547770
0x6003C1: mov     ecx, [esp+4+arg_20]
0x6003C5: fstp    dword ptr [esp+4+arg_3C]
0x6003C9: add     esp, 4
0x6003CC: test    ecx, ecx
0x6003CE: jz      short loc_6003D4
0x6003D0: mov     eax, [ecx]
0x6003D2: jmp     short loc_6003D8
0x6003D4: mov     eax, [edi]
0x6003D6: mov     ecx, edi
0x6003D8: mov     edx, [eax+174h]
0x6003DE: call    edx
0x6003E0: fld     dword ptr [esp+arg_3C]
0x6003E4: mov     ebp, [eax]
0x6003E6: mov     ecx, [esi+58h]
0x6003E9: mov     ebx, [ecx]
0x6003EB: sub     esp, 10h
0x6003EE: mov     edx, esp
0x6003F0: fstp    [esp+10h+var_4]
0x6003F4: mov     [edx], ebp
0x6003F6: mov     ebp, [eax+4]
0x6003F9: mov     eax, [eax+8]
0x6003FC: mov     [edx+4], ebp
0x6003FF: mov     [edx+8], eax
0x600402: mov     edx, [ebx+2F0h]
0x600408: push    esi
0x600409: call    edx
0x60040B: mov     byte ptr [esp+arg_10+3], 0
0x600410: mov     eax, [esi]
0x600412: fld     [esp+arg_14]
0x600416: mov     edx, [eax+284h]
0x60041C: fstp    [esp+arg_4C]
0x600420: push    8
0x600422: mov     ecx, esi
0x600424: call    edx
0x600426: mov     dword ptr [esp+arg_3C], eax
0x60042A: fild    dword ptr [esp+arg_3C]
0x60042E: mov     eax, [esp+arg_60]
0x600432: push    eax
0x600433: fdivr   [esp+4+arg_4C]
0x600437: push    esi
0x600438: mov     ecx, edi
0x60043A: fstp    dword ptr [esp+8+arg_3C]
0x60043E: call    sub_5FC090
0x600443: cmp     byte ptr [esp+arg_10+3], 0
0x600448: mov     bl, al
0x60044A: jnz     short loc_600498
0x60044C: mov     ecx, offset unk_B36F58
0x600451: call    GameSetting_GetSafeFloatPointer
0x600456: fld     dword ptr [esp+arg_3C]
0x60045A: fld     dword ptr [eax]
0x60045C: fcompp
0x60045E: fnstsw  ax
0x600460: test    ah, 5
0x600463: jnp     short loc_600498
0x600465: push    0; Seed
0x600467: call    GetRandomLargeInteger?
0x60046C: mov     dword ptr [esp+4+arg_3C], eax
0x600470: fild    dword ptr [esp+4+arg_3C]
0x600474: add     esp, 4
0x600477: mov     ecx, offset unk_B36F50
0x60047C: fdiv    qword ptr ds:0A3D5A8h
0x600482: fstp    [esp+arg_3C]
0x600486: call    GameSetting_GetSafeFloatPointer
0x60048B: fld     dword ptr [eax]
0x60048D: fcomp   [esp+arg_3C]
0x600491: fnstsw  ax
0x600493: test    ah, 1
0x600496: jnz     short loc_600514
0x600498: mov     ecx, ds:0B333C4h
0x60049E: cmp     esi, ecx
0x6004A0: push    1
0x6004A2: push    1
0x6004A4: push    edi
0x6004A5: jnz     short loc_6004AB
0x6004A7: mov     edx, [ecx]
0x6004A9: jmp     short loc_6004AF
0x6004AB: mov     edx, [esi]
0x6004AD: mov     ecx, esi
0x6004AF: mov     eax, [edx+308h]
0x6004B5: call    eax
0x6004B7: cmp     byte ptr [esp+arg_10+3], 0
0x6004BC: jz      short loc_600514
0x6004BE: mov     edx, [esi]
0x6004C0: mov     eax, [edx+19Ch]
0x6004C6: mov     ecx, esi
0x6004C8: call    eax
0x6004CA: test    al, al
0x6004CC: jnz     short loc_600514
0x6004CE: push    0
0x6004D0: push    edi
0x6004D1: push    esi
0x6004D2: call    sub_6131D0
0x6004D7: add     esp, 0Ch
0x6004DA: test    al, al
0x6004DC: jz      short loc_6004E4
0x6004DE: mov     bl, 1
0x6004E0: mov     byte ptr [esp+arg_48+3], bl
0x6004E4: cmp     byte ptr ds:0B3B908h, 0
0x6004EB: jz      short loc_600514
0x6004ED: fld     [esp+arg_58]
0x6004F1: sub     esp, 8
0x6004F4: mov     ecx, edi; this
0x6004F6: fstp    qword ptr [esp+8+var_8]
0x6004F9: call    TESObjectREFR_GetName
0x6004FE: push    eax
0x6004FF: mov     ecx, esi; this
0x600501: call    TESObjectREFR_GetName
0x600506: push    eax
0x600507: push    offset a_20sIsStaggere; "%.20s is staggered down by %.20s's %.1f"...
0x60050C: call    Interface_ConsolePrint
0x600511: add     esp, 14h
0x600514: test    bl, bl
0x600516: jz      loc_5FFEDF
0x60051C: mov     ecx, esi
0x60051E: call    sub_5F4FD0
0x600523: jmp     loc_5FFEDF
0x600528: cmp     [esp+arg_20], 0
0x60052D: jz      short loc_600533
0x60052F: xor     bl, bl
0x600531: jmp     short loc_60053C
0x600533: mov     ecx, esi
0x600535: call    sub_5F3C30
0x60053A: mov     bl, al
0x60053C: mov     byte ptr [esp+arg_4C], bl
0x600540: mov     edx, dword ptr [esp+arg_4C]
0x600544: push    edx
0x600545: mov     ecx, esi
0x600547: call    sub_5F4E10
0x60054C: test    bl, bl
0x60054E: jnz     short loc_60056A
0x600550: push    edi
0x600551: mov     ecx, esi
0x600553: call    sub_5FC2B0
0x600558: cmp     [esp+arg_20], 0
0x60055D: jz      short loc_600563
0x60055F: test    al, al
0x600561: jz      short loc_60056A
0x600563: mov     ecx, edi
0x600565: call    sub_5F4F00
0x60056A: cmp     esi, ds:0B333C4h
0x600570: jnz     short loc_60057C
0x600572: push    1
0x600574: call    sub_7EB010
0x600579: add     esp, 4
0x60057C: mov     ebp, [esi+58h]
0x60057F: test    ebp, ebp
0x600581: jz      short Actor_AttackHandling___ActorMagicHit
0x600583: mov     eax, [esi+68h]
0x600586: mov     ebx, [ebp+0]
0x600589: mov     edx, [eax+8]
0x60058C: lea     ecx, [esi+68h]
0x60058F: push    8
0x600591: add     ebx, 44Ch
0x600597: call    edx
0x600599: push    eax
0x60059A: mov     eax, [ebx]
0x60059C: mov     ecx, ebp
0x60059E: call    eax
0x6005A0: test    al, al
0x6005A2: jz      short Actor_AttackHandling___ActorMagicHit
0x6005A4: push    8
0x6005A6: push    esi
0x6005A7: mov     ecx, offset ActorProcessManager_ptr
0x6005AC: call    TemporaryObjects_PlayMagicShieldShader
