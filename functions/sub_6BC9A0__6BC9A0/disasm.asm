0x6BC9A0: push    0FFFFFFFFh
0x6BC9A2: push    offset SEH_6BC9A0
0x6BC9A7: mov     eax, large fs:0
0x6BC9AD: push    eax
0x6BC9AE: sub     esp, 70h
0x6BC9B1: push    ebx
0x6BC9B2: push    ebp
0x6BC9B3: push    esi
0x6BC9B4: push    edi
0x6BC9B5: mov     eax, ds:0B30AACh
0x6BC9BA: xor     eax, esp
0x6BC9BC: push    eax
0x6BC9BD: lea     eax, [esp+90h+var_C]
0x6BC9C4: mov     large fs:0, eax
0x6BC9CA: mov     ebp, [esp+90h+arg_8]
0x6BC9D1: fld     [esp+90h+arg_0]
0x6BC9D8: mov     eax, [esp+90h+arg_4]
0x6BC9DF: mov     edx, [ebp+0]
0x6BC9E2: mov     edi, [eax]
0x6BC9E4: push    40h ; '@'; char
0x6BC9E6: lea     ecx, [esp+94h+var_7C]
0x6BC9EA: push    ecx; int
0x6BC9EB: push    edx; int
0x6BC9EC: push    edi; int
0x6BC9ED: push    ecx
0x6BC9EE: fstp    [esp+0A4h+var_A4]; float
0x6BC9F1: mov     [esp+0A4h+var_70], edi
0x6BC9F5: call    sub_6D31B0
0x6BC9FA: add     esp, 14h
0x6BC9FD: test    al, al
0x6BC9FF: jz      loc_6BCD7E
0x6BCA05: mov     esi, [ebp+0]
0x6BCA08: add     esi, 1
0x6BCA0B: xor     ecx, ecx
0x6BCA0D: mov     eax, esi
0x6BCA0F: mov     edx, 40h ; '@'
0x6BCA14: mul     edx
0x6BCA16: seto    cl
0x6BCA19: neg     ecx
0x6BCA1B: or      ecx, eax
0x6BCA1D: xor     eax, eax
0x6BCA1F: add     ecx, 4
0x6BCA22: setb    al
0x6BCA25: neg     eax
0x6BCA27: or      eax, ecx
0x6BCA29: push    eax; Size
0x6BCA2A: call    FormHeapAlloc
0x6BCA2F: add     esp, 4
0x6BCA32: mov     [esp+90h+var_74], eax
0x6BCA36: xor     ebx, ebx
0x6BCA38: cmp     eax, ebx
0x6BCA3A: mov     [esp+90h+var_4], ebx
0x6BCA41: jz      short loc_6BCA5B
0x6BCA43: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BCA48: push    offset sub_7616D0; a4
0x6BCA4D: push    esi; size
0x6BCA4E: lea     ebx, [eax+4]
0x6BCA51: push    40h ; '@'; a2
0x6BCA53: push    ebx; a1
0x6BCA54: mov     [eax], esi
0x6BCA56: call    ArrayConstructor
0x6BCA5B: mov     ecx, [esp+90h+var_7C]
0x6BCA5F: shl     ecx, 6
0x6BCA62: push    ecx; Size
0x6BCA63: push    edi; Src
0x6BCA64: push    ebx; Dst
0x6BCA65: mov     [esp+9Ch+var_4], 0FFFFFFFFh
0x6BCA70: call    _memcpy
0x6BCA75: mov     eax, [ebp+0]
0x6BCA78: mov     edx, [esp+9Ch+var_7C]
0x6BCA7C: add     esp, 0Ch
0x6BCA7F: cmp     eax, edx
0x6BCA81: jbe     short loc_6BCA9F
0x6BCA83: sub     eax, edx
0x6BCA85: mov     ecx, edx
0x6BCA87: shl     ecx, 6
0x6BCA8A: shl     eax, 6
0x6BCA8D: push    eax; Size
0x6BCA8E: lea     edx, [ecx+edi]
0x6BCA91: push    edx; Src
0x6BCA92: lea     eax, [ecx+ebx+40h]
0x6BCA96: push    eax; Dst
0x6BCA97: call    _memcpy
0x6BCA9C: add     esp, 0Ch
0x6BCA9F: mov     ecx, [ebp+0]
0x6BCAA2: fld     [esp+90h+arg_0]
0x6BCAA9: push    40h ; '@'; char
0x6BCAAB: push    ecx; int
0x6BCAAC: push    2; int
0x6BCAAE: push    edi; int
0x6BCAAF: push    ecx
0x6BCAB0: lea     edx, [esp+0A4h+var_18]
0x6BCAB7: fstp    [esp+0A4h+var_A4]; float
0x6BCABA: push    edx; int
0x6BCABB: call    sub_6BBDC0
0x6BCAC0: fld     [esp+0A8h+arg_0]
0x6BCAC7: mov     esi, [esp+0A8h+var_7C]
0x6BCACB: shl     esi, 6
0x6BCACE: add     esi, ebx
0x6BCAD0: fst     dword ptr [esi]
0x6BCAD2: mov     eax, [esp+0A8h+var_18]
0x6BCAD9: mov     [esi+4], eax
0x6BCADC: mov     ecx, [esp+0A8h+var_14]
0x6BCAE3: mov     [esi+8], ecx
0x6BCAE6: mov     edx, [esp+0A8h+var_10]
0x6BCAED: mov     [esi+0Ch], edx
0x6BCAF0: mov     eax, ds:0B3F9A8h
0x6BCAF5: mov     [esi+10h], eax
0x6BCAF8: mov     ecx, ds:0B3F9ACh
0x6BCAFE: mov     [esi+14h], ecx
0x6BCB01: mov     edx, ds:0B3F9B0h
0x6BCB07: mov     [esi+18h], edx
0x6BCB0A: mov     eax, ds:0B3F9A8h
0x6BCB0F: mov     [esi+1Ch], eax
0x6BCB12: mov     ecx, ds:0B3F9ACh
0x6BCB18: mov     [esi+20h], ecx
0x6BCB1B: mov     edx, ds:0B3F9B0h
0x6BCB21: mov     [esi+24h], edx
0x6BCB24: mov     eax, [esp+0A8h+var_7C]
0x6BCB28: add     esp, 18h
0x6BCB2B: test    eax, eax
0x6BCB2D: jz      loc_6BCD26
0x6BCB33: cmp     eax, [ebp+0]
0x6BCB36: jz      loc_6BCD26
0x6BCB3C: shl     eax, 6
0x6BCB3F: mov     ecx, [eax+ebx-38h]
0x6BCB43: fld     dword ptr [eax+ebx-40h]
0x6BCB47: mov     edx, [eax+ebx-34h]
0x6BCB4B: fstp    [esp+90h+var_74]
0x6BCB4F: lea     edi, [eax+ebx]
0x6BCB52: mov     eax, [edi-3Ch]
0x6BCB55: mov     [esp+90h+var_3C], eax
0x6BCB59: mov     eax, [edi-24h]
0x6BCB5C: mov     [esp+90h+var_6C], eax
0x6BCB60: mov     eax, [esi+4]
0x6BCB63: mov     [esp+90h+var_38], ecx
0x6BCB67: mov     ecx, [edi-20h]
0x6BCB6A: mov     [esp+90h+var_68], ecx
0x6BCB6E: mov     ecx, [esi+8]
0x6BCB71: mov     [esp+90h+var_34], edx
0x6BCB75: mov     edx, [edi-1Ch]
0x6BCB78: mov     [esp+90h+var_64], edx
0x6BCB7C: fld     dword ptr [edi+40h]
0x6BCB7F: mov     edx, [esi+0Ch]
0x6BCB82: fstp    [esp+90h+var_78]
0x6BCB86: mov     [esp+90h+var_54], eax
0x6BCB8A: fld     [esp+90h+var_54]
0x6BCB8E: mov     eax, [edi+44h]
0x6BCB91: mov     [esp+90h+var_48], eax
0x6BCB95: mov     eax, [edi+50h]
0x6BCB98: mov     [esp+90h+var_50], ecx
0x6BCB9C: mov     ecx, [edi+48h]
0x6BCB9F: mov     [esp+90h+var_4C], edx
0x6BCBA3: mov     edx, [edi+4Ch]
0x6BCBA6: mov     [esp+90h+var_60], eax
0x6BCBAA: mov     [esp+90h+var_44], ecx
0x6BCBAE: mov     ecx, [edi+54h]
0x6BCBB1: mov     [esp+90h+var_5C], ecx
0x6BCBB5: lea     eax, [esp+90h+var_24]
0x6BCBB9: push    eax; int
0x6BCBBA: lea     ecx, [esp+94h+var_30]
0x6BCBBE: push    ecx; int
0x6BCBBF: sub     esp, 8
0x6BCBC2: fstp    [esp+0A0h+var_9C]; int
0x6BCBC6: mov     [esp+0A0h+var_40], edx
0x6BCBCA: mov     edx, [edi+58h]
0x6BCBCD: fstp    [esp+0A0h+var_A0]; float
0x6BCBD0: mov     [esp+0A0h+var_58], edx
0x6BCBD4: fld     [esp+0A0h+var_78]
0x6BCBD8: lea     edx, [esp+0A0h+var_60]
0x6BCBDC: push    edx; int
0x6BCBDD: sub     esp, 8
0x6BCBE0: fstp    [esp+0ACh+var_A8]; float
0x6BCBE4: lea     eax, [esp+0ACh+var_6C]
0x6BCBE8: fld     [esp+0ACh+var_48]
0x6BCBEC: fstp    [esp+0ACh+var_AC]; float
0x6BCBEF: push    eax; int
0x6BCBF0: fld     [esp+0B0h+var_74]
0x6BCBF4: sub     esp, 8
0x6BCBF7: fstp    [esp+0B8h+var_B4]; float
0x6BCBFB: fld     [esp+0B8h+var_3C]
0x6BCBFF: fstp    [esp+0B8h+var_B8]; float
0x6BCC02: call    sub_6D3720
0x6BCC07: fld     [esp+0B8h+var_50]
0x6BCC0B: add     esp, 28h
0x6BCC0E: lea     ecx, [esp+90h+var_20]
0x6BCC12: push    ecx; int
0x6BCC13: lea     edx, [esp+94h+var_2C]
0x6BCC17: push    edx; int
0x6BCC18: sub     esp, 8
0x6BCC1B: fstp    [esp+0A0h+var_9C]; int
0x6BCC1F: lea     eax, [esp+0A0h+var_5C]
0x6BCC23: fld     [esp+0A0h+arg_0]
0x6BCC2A: lea     ecx, [esp+0A0h+var_68]
0x6BCC2E: fstp    [esp+0A0h+var_A0]; float
0x6BCC31: push    eax; int
0x6BCC32: fld     [esp+0A4h+var_78]
0x6BCC36: sub     esp, 8
0x6BCC39: fstp    [esp+0ACh+var_A8]; float
0x6BCC3D: fld     [esp+0ACh+var_44]
0x6BCC41: fstp    [esp+0ACh+var_AC]; float
0x6BCC44: push    ecx; int
0x6BCC45: fld     [esp+0B0h+var_74]
0x6BCC49: sub     esp, 8
0x6BCC4C: fstp    [esp+0B8h+var_B4]; float
0x6BCC50: fld     [esp+0B8h+var_38]
0x6BCC57: fstp    [esp+0B8h+var_B8]; float
0x6BCC5A: call    sub_6D3720
0x6BCC5F: fld     [esp+0B8h+var_4C]
0x6BCC63: add     esp, 28h
0x6BCC66: lea     edx, [esp+90h+var_1C]
0x6BCC6A: push    edx; int
0x6BCC6B: lea     eax, [esp+94h+var_28]
0x6BCC6F: push    eax; int
0x6BCC70: sub     esp, 8
0x6BCC73: fstp    [esp+0A0h+var_9C]; int
0x6BCC77: lea     ecx, [esp+0A0h+var_58]
0x6BCC7B: fld     [esp+0A0h+arg_0]
0x6BCC82: lea     edx, [esp+0A0h+var_64]
0x6BCC86: fstp    [esp+0A0h+var_A0]; float
0x6BCC89: push    ecx; int
0x6BCC8A: fld     [esp+0A4h+var_78]
0x6BCC8E: sub     esp, 8
0x6BCC91: fstp    [esp+0ACh+var_A8]; float
0x6BCC95: fld     [esp+0ACh+var_40]
0x6BCC99: fstp    [esp+0ACh+var_AC]; float
0x6BCC9C: push    edx; int
0x6BCC9D: fld     [esp+0B0h+var_74]
0x6BCCA1: sub     esp, 8
0x6BCCA4: fstp    [esp+0B8h+var_B4]; float
0x6BCCA8: fld     [esp+0B8h+var_34]
0x6BCCAF: fstp    [esp+0B8h+var_B8]; float
0x6BCCB2: call    sub_6D3720
0x6BCCB7: mov     eax, [esp+0B8h+var_6C]
0x6BCCBB: mov     [edi-24h], eax
0x6BCCBE: mov     ecx, [esp+0B8h+var_68]
0x6BCCC2: mov     [edi-20h], ecx
0x6BCCC5: mov     edx, [esp+0B8h+var_64]
0x6BCCC9: mov     [edi-1Ch], edx
0x6BCCCC: mov     eax, [esp+0B8h+var_30]
0x6BCCD3: mov     ecx, [esp+0B8h+var_2C]
0x6BCCDA: mov     edx, [esp+0B8h+var_28]
0x6BCCE1: mov     [esi+10h], eax
0x6BCCE4: mov     eax, [esp+0B8h+var_24]
0x6BCCEB: mov     [esi+14h], ecx
0x6BCCEE: mov     ecx, [esp+0B8h+var_20]
0x6BCCF5: mov     [esi+18h], edx
0x6BCCF8: mov     edx, [esp+0B8h+var_1C]
0x6BCCFF: mov     [esi+1Ch], eax
0x6BCD02: mov     eax, [esp+0B8h+var_60]
0x6BCD06: mov     [esi+20h], ecx
0x6BCD09: mov     [esi+24h], edx
0x6BCD0C: mov     [edi+50h], eax
0x6BCD0F: mov     ecx, [esp+0B8h+var_5C]
0x6BCD13: mov     [edi+54h], ecx
0x6BCD16: mov     edx, [esp+0B8h+var_58]
0x6BCD1A: mov     [edi+58h], edx
0x6BCD1D: mov     edi, [esp+0B8h+var_70]
0x6BCD21: add     esp, 28h
0x6BCD24: jmp     short loc_6BCD28
0x6BCD26: fstp    st
0x6BCD28: add     dword ptr [ebp+0], 1
0x6BCD2C: test    edi, edi
0x6BCD2E: jz      short loc_6BCD4D
0x6BCD30: mov     eax, [edi-4]
0x6BCD33: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6BCD38: lea     esi, [edi-4]
0x6BCD3B: push    eax; int
0x6BCD3C: push    40h ; '@'; unsigned int
0x6BCD3E: push    edi; void *
0x6BCD3F: call    $LN21
0x6BCD44: push    esi
0x6BCD45: call    FormHeapFree
0x6BCD4A: add     esp, 4
0x6BCD4D: mov     ecx, [esp+90h+arg_4]
0x6BCD54: mov     [ecx], ebx
0x6BCD56: mov     edx, [ebp+0]
0x6BCD59: push    40h ; '@'
0x6BCD5B: push    edx
0x6BCD5C: push    ebx
0x6BCD5D: call    sub_6BC600
0x6BCD62: add     esp, 0Ch
0x6BCD65: mov     al, 1
0x6BCD67: mov     ecx, [esp+90h+var_C]
0x6BCD6E: mov     large fs:0, ecx
0x6BCD75: pop     ecx
0x6BCD76: pop     edi
0x6BCD77: pop     esi
0x6BCD78: pop     ebp
0x6BCD79: pop     ebx
0x6BCD7A: add     esp, 7Ch
0x6BCD7D: retn
0x6BCD7E: xor     al, al
0x6BCD80: mov     ecx, [esp+90h+var_C]
0x6BCD87: mov     large fs:0, ecx
0x6BCD8E: pop     ecx
0x6BCD8F: pop     edi
0x6BCD90: pop     esi
0x6BCD91: pop     ebp
0x6BCD92: pop     ebx
0x6BCD93: add     esp, 7Ch
0x6BCD96: retn
