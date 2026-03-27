0x4FF710: push    0FFFFFFFFh
0x4FF712: push    offset SEH_4FF710
0x4FF717: mov     eax, large fs:0
0x4FF71D: push    eax
0x4FF71E: mov     eax, 1150h
0x4FF723: call    __alloca_probe
0x4FF728: mov     eax, ds:0B30AACh
0x4FF72D: xor     eax, esp
0x4FF72F: mov     [esp+115Ch+var_10], eax
0x4FF736: push    ebx
0x4FF737: push    ebp
0x4FF738: push    esi
0x4FF739: push    edi
0x4FF73A: mov     eax, ds:0B30AACh
0x4FF73F: xor     eax, esp
0x4FF741: push    eax; ArgList
0x4FF742: lea     eax, [esp+1170h+var_C]
0x4FF749: mov     large fs:0, eax
0x4FF74F: mov     eax, [esp+1170h+arg_0]
0x4FF756: mov     edi, [esp+1170h+arg_4]
0x4FF75D: mov     esi, [esp+1170h+arg_8]
0x4FF764: xor     ebx, ebx
0x4FF766: push    200h
0x4FF76B: mov     [esp+1174h+var_1158], ecx
0x4FF76F: lea     ecx, [esp+1174h+ArgList]
0x4FF773: push    ebx
0x4FF774: push    ecx
0x4FF775: mov     [esp+117Ch+var_1154], eax
0x4FF779: mov     [esp+117Ch+var_F50], ebx
0x4FF780: mov     [esp+117Ch+var_F44], ebx
0x4FF787: mov     [esp+117Ch+var_F4C], bl
0x4FF78E: mov     [esp+117Ch+var_F48], ebx
0x4FF795: mov     [esp+117Ch+var_F40], ebx
0x4FF79C: call    __memset
0x4FF7A1: add     esp, 0Ch
0x4FF7A4: lea     ecx, [esp+1170h+var_F3C]
0x4FF7AB: call    sub_4F32E0
0x4FF7B0: mov     eax, [esi+410h]
0x4FF7B6: lea     ecx, [eax-10h]; switch 16 cases
0x4FF7B9: cmp     ecx, 0Fh
0x4FF7BC: lea     ebp, [esi+208h]
0x4FF7C2: mov     [esp+1170h+var_4], ebx
0x4FF7C9: mov     [esi+40Ch], ebx
0x4FF7CF: mov     [ebp+0], ebx
0x4FF7D2: ja      def_4FF7DF; jumptable 004FF7DF default case, cases 26,27
0x4FF7D8: movzx   edx, ds:byte_500114[ecx]
0x4FF7DF: jmp     ds:jpt_4FF7DF[edx*4]; switch jump
0x4FF7E6: push    ebx; jumptable 004FF7DF case 16
0x4FF7E7: push    ebx
0x4FF7E8: push    ebp
0x4FF7E9: lea     eax, [esi+4]
0x4FF7EC: push    eax
0x4FF7ED: lea     ecx, [esp+1180h+ArgList]
0x4FF7F1: push    ecx
0x4FF7F2: push    edi
0x4FF7F3: call    sub_4FD7C0
0x4FF7F8: add     esp, 18h
0x4FF7FB: test    eax, eax
0x4FF7FD: jz      loc_4FFA22
0x4FF803: mov     [esp+1170h+var_115C], offset off_B0AF4C
0x4FF80B: mov     eax, [esp+1170h+var_115C]
0x4FF80F: mov     ecx, [eax-4]
0x4FF812: lea     edx, [esp+1170h+ArgList]
0x4FF816: push    edx; Str2
0x4FF817: push    ecx; Str1
0x4FF818: call    __strcmp
0x4FF81D: add     esp, 8
0x4FF820: test    eax, eax
0x4FF822: jz      short loc_4FF87D
0x4FF824: mov     eax, [esp+1170h+var_115C]
0x4FF828: mov     ecx, [eax]
0x4FF82A: lea     edx, [esp+1170h+ArgList]
0x4FF82E: push    edx; Str2
0x4FF82F: push    ecx; Str1
0x4FF830: call    __strcmp
0x4FF835: add     esp, 8
0x4FF838: test    eax, eax
0x4FF83A: jz      short loc_4FF87D
0x4FF83C: mov     eax, [esp+1170h+var_115C]
0x4FF840: add     eax, 28h ; '('
0x4FF843: add     ebx, 1
0x4FF846: cmp     eax, offset Script_ConsoleCommandList.shortName
0x4FF84B: mov     [esp+1170h+var_115C], eax
0x4FF84F: jl      short loc_4FF80B
0x4FF851: push    offset aSyntaxError__2; "Syntax Error.  Invalid block type in 'b"...
0x4FF856: push    edi; int
0x4FF857: call    sub_4FCE30
0x4FF85C: add     esp, 8
0x4FF85F: lea     ecx, [esp+1170h+var_F3C]; void *
0x4FF866: mov     [esp+1170h+var_4], 0FFFFFFFFh
0x4FF871: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x4FF876: xor     al, al
0x4FF878: jmp     loc_5000C7
0x4FF87D: mov     edx, [esi+40Ch]
0x4FF883: mov     ecx, [esp+1170h+var_1158]
0x4FF887: lea     ebx, [ebx+ebx*4]
0x4FF88A: add     ebx, ebx
0x4FF88C: add     ebx, ebx
0x4FF88E: mov     ax, ds:word_B0AF50[ebx+ebx]
0x4FF896: add     ebx, ebx
0x4FF898: push    esi
0x4FF899: mov     [esi+edx+20Ch], ax
0x4FF8A1: add     dword ptr [esi+40Ch], 2
0x4FF8A8: push    edi
0x4FF8A9: call    sub_4FD370
0x4FF8AE: cmp     eax, 0FFFFFFFFh
0x4FF8B1: jnz     short loc_4FF8DF
0x4FF8B3: push    offset aMismatchedBe_0; "Mismatched begin/end block."
0x4FF8B8: push    edi; int
0x4FF8B9: call    sub_4FCE30
0x4FF8BE: add     esp, 8
0x4FF8C1: lea     ecx, [esp+1170h+var_F3C]; void *
0x4FF8C8: mov     [esp+1170h+var_4], 0FFFFFFFFh
0x4FF8D3: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x4FF8D8: xor     al, al
0x4FF8DA: jmp     loc_5000C7
0x4FF8DF: mov     ecx, [esi+40Ch]
0x4FF8E5: mov     dword ptr [esi+ecx+20Ch], 55555555h
0x4FF8F0: mov     eax, [esi+40Ch]
0x4FF8F6: mov     ecx, [edi+24h]
0x4FF8F9: add     ecx, eax
0x4FF8FB: add     eax, 4
0x4FF8FE: mov     [esi+40Ch], eax
0x4FF904: lea     eax, Script_BlockTypeList[ebx]
0x4FF90A: test    eax, eax
0x4FF90C: mov     ds:0B361F8h, ecx
0x4FF912: jz      loc_4FF9FF
0x4FF918: cmp     byte ptr [eax+10h], 0
0x4FF91C: jz      short loc_4FF950
0x4FF91E: cmp     byte ptr [edi+38h], 0
0x4FF922: jz      short loc_4FF950
0x4FF924: push    offset aInvalidBlockTy; "Invalid block type for quest script."
0x4FF929: push    edi; int
0x4FF92A: call    sub_4FCE30
0x4FF92F: add     esp, 8
0x4FF932: lea     ecx, [esp+1170h+var_F3C]; void *
0x4FF939: mov     [esp+1170h+var_4], 0FFFFFFFFh
0x4FF944: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x4FF949: xor     al, al
0x4FF94B: jmp     loc_5000C7
0x4FF950: mov     edx, [eax+14h]
0x4FF953: test    edx, edx
0x4FF955: mov     [esp+1170h+var_1158], edx
0x4FF959: jz      loc_4FF9FF
0x4FF95F: movzx   edx, word ptr [eax+12h]
0x4FF963: mov     ebx, [eax+1Ch]
0x4FF966: lea     ecx, [esp+1170h+var_82C]
0x4FF96D: mov     [esp+1170h+var_115C], edx
0x4FF971: call    sub_4FCC40
0x4FF976: mov     eax, [ebp+0]
0x4FF979: lea     eax, [eax+esi+4]
0x4FF97D: lea     edx, [esp+1170h+var_828]
0x4FF984: sub     edx, eax
0x4FF986: mov     cl, [eax]
0x4FF988: mov     [edx+eax], cl
0x4FF98B: add     eax, 1
0x4FF98E: test    cl, cl
0x4FF990: jnz     short loc_4FF986
0x4FF992: mov     ecx, [esi]
0x4FF994: mov     eax, [esp+1170h+var_1158]
0x4FF998: push    edi
0x4FF999: lea     edx, [esp+1174h+var_82C]
0x4FF9A0: push    edx
0x4FF9A1: mov     [esp+1178h+var_82C], ecx
0x4FF9A8: mov     ecx, [esp+1178h+var_115C]
0x4FF9AC: push    eax
0x4FF9AD: push    ecx
0x4FF9AE: mov     [esp+1180h+Size], 0
0x4FF9B9: call    ebx
0x4FF9BB: add     esp, 10h
0x4FF9BE: test    al, al
0x4FF9C0: jz      loc_4FF8C1
0x4FF9C6: mov     edx, [esp+1170h+Size]
0x4FF9CD: mov     ecx, [esi+40Ch]
0x4FF9D3: push    edx; Size
0x4FF9D4: lea     eax, [esp+1174h+Src]
0x4FF9DB: push    eax; Src
0x4FF9DC: lea     edx, [esi+ecx+20Ch]
0x4FF9E3: push    edx; Dst
0x4FF9E4: call    _memcpy
0x4FF9E9: mov     eax, [esp+117Ch+Size]
0x4FF9F0: mov     ecx, ds:0B361F8h
0x4FF9F6: add     esp, 0Ch
0x4FF9F9: add     [esi+40Ch], eax
0x4FF9FF: test    ecx, ecx
0x4FFA01: jz      loc_4FFDB9; jumptable 004FF7DF cases 25,28-30
0x4FFA07: mov     eax, [edi+24h]
0x4FFA0A: mov     edx, [esi+40Ch]
0x4FFA10: add     edx, eax
0x4FFA12: mov     ebx, esi
0x4FFA14: sub     ebx, eax
0x4FFA16: mov     [ebx+ecx+20Ch], edx
0x4FFA1D: jmp     loc_4FFDB9; jumptable 004FF7DF cases 25,28-30
0x4FFA22: push    offset aSyntaxError__3; "Syntax Error.  Missing block type in 'b"...
0x4FFA27: push    edi; int
0x4FFA28: call    sub_4FCE30
0x4FFA2D: add     esp, 8
0x4FFA30: lea     ecx, [esp+1170h+var_F3C]; void *
0x4FFA37: mov     [esp+1170h+var_4], 0FFFFFFFFh
0x4FFA42: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x4FFA47: xor     al, al
0x4FFA49: jmp     loc_5000C7
0x4FFA4E: mov     eax, ds:0B361F8h; jumptable 004FF7DF case 17
0x4FFA53: cmp     eax, ebx
0x4FFA55: jz      short loc_4FFA72
0x4FFA57: mov     ecx, [edi+20h]
0x4FFA5A: mov     edx, [edi+24h]
0x4FFA5D: lea     eax, [ecx+eax+4]
0x4FFA61: mov     ecx, [eax]
0x4FFA63: sub     edx, ecx
0x4FFA65: mov     [eax], edx
0x4FFA67: mov     ds:0B361F8h, ebx
0x4FFA6D: jmp     loc_4FFDB9; jumptable 004FF7DF cases 25,28-30
0x4FFA72: push    offset aSyntaxError_Fa; "Syntax Error.  Failed to store the 'beg"...
0x4FFA77: push    edi; int
0x4FFA78: call    sub_4FCE30
0x4FFA7D: add     esp, 8
0x4FFA80: lea     ecx, [esp+1170h+var_F3C]; void *
0x4FFA87: mov     [esp+1170h+var_4], 0FFFFFFFFh
0x4FFA92: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x4FFA97: xor     al, al
0x4FFA99: jmp     loc_5000C7
0x4FFA9E: push    ebx; jumptable 004FF7DF cases 18-20,31
0x4FFA9F: push    ebx
0x4FFAA0: push    ebp
0x4FFAA1: lea     eax, [esi+4]
0x4FFAA4: push    eax
0x4FFAA5: lea     ecx, [esp+1180h+ArgList]
0x4FFAA9: push    ecx
0x4FFAAA: push    edi
0x4FFAAB: call    sub_4FD7C0
0x4FFAB0: add     esp, 18h
0x4FFAB3: test    eax, eax
0x4FFAB5: jz      loc_4FFB64
0x4FFABB: push    20h ; ' '; Size
0x4FFABD: call    FormHeapAlloc
0x4FFAC2: add     esp, 4
0x4FFAC5: mov     [esp+1170h+var_1158], eax
0x4FFAC9: cmp     eax, ebx
0x4FFACB: mov     byte ptr [esp+1170h+var_4], 1
0x4FFAD3: jz      short loc_4FFAE0
0x4FFAD5: mov     ecx, eax
0x4FFAD7: call    sub_517A80
0x4FFADC: mov     ebp, eax
0x4FFADE: jmp     short loc_4FFAE2
0x4FFAE0: xor     ebp, ebp
0x4FFAE2: mov     eax, [esi+410h]
0x4FFAE8: cmp     eax, 14h
0x4FFAEB: mov     byte ptr [esp+1170h+var_4], 0
0x4FFAF3: jz      short loc_4FFB01
0x4FFAF5: cmp     eax, 1Fh
0x4FFAF8: jz      short loc_4FFB01
0x4FFAFA: mov     eax, 1
0x4FFAFF: jmp     short loc_4FFB03
0x4FFB01: xor     eax, eax
0x4FFB03: push    ebx; a3
0x4FFB04: lea     edx, [esp+1174h+ArgList]
0x4FFB08: lea     ecx, [ebp+18h]; this
0x4FFB0B: push    edx; a2
0x4FFB0C: mov     [ebp+10h], al
0x4FFB0F: call    BSStringT_Set
0x4FFB14: mov     eax, [ebp+18h]
0x4FFB17: mov     ecx, [esp+1170h+var_1154]
0x4FFB1B: push    ebp
0x4FFB1C: push    eax
0x4FFB1D: call    sub_4FAA90
0x4FFB22: test    al, al
0x4FFB24: jnz     short loc_4FFB30
0x4FFB26: add     dword ptr [edi+34h], 1
0x4FFB2A: mov     eax, [edi+34h]
0x4FFB2D: mov     [ebp+0], eax
0x4FFB30: push    ebp
0x4FFB31: lea     ecx, [edi+3Ch]
0x4FFB34: call    BSSimpleList_PushBack
0x4FFB39: cmp     dword ptr [esi+410h], 1Fh
0x4FFB40: jnz     loc_4FFDB9; jumptable 004FF7DF cases 25,28-30
0x4FFB46: mov     eax, [ebp+0]
0x4FFB49: push    ebx; char
0x4FFB4A: push    1; char
0x4FFB4C: lea     ecx, [esp+1178h+ArgList]
0x4FFB50: push    ecx; Str
0x4FFB51: mov     ecx, edi
0x4FFB53: mov     [esp+117Ch+var_F44], eax
0x4FFB5A: call    sub_4FD0A0
0x4FFB5F: jmp     loc_4FFDB9; jumptable 004FF7DF cases 25,28-30
0x4FFB64: push    offset aMissingVariabl; "Missing variable name in variable decla"...
0x4FFB69: push    edi; int
0x4FFB6A: call    sub_4FCE30
0x4FFB6F: add     esp, 8
0x4FFB72: lea     ecx, [esp+1170h+var_F3C]; void *
0x4FFB79: mov     [esp+1170h+var_4], 0FFFFFFFFh
0x4FFB84: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x4FFB89: xor     al, al
0x4FFB8B: jmp     loc_5000C7
0x4FFB90: push    1; jumptable 004FF7DF case 21
0x4FFB92: push    1
0x4FFB94: push    ebp
0x4FFB95: lea     eax, [esi+4]
0x4FFB98: push    eax
0x4FFB99: lea     edx, [esp+1180h+ArgList]
0x4FFB9D: push    edx
0x4FFB9E: push    edi
0x4FFB9F: call    sub_4FD7C0
0x4FFBA4: add     esp, 18h
0x4FFBA7: test    eax, eax
0x4FFBA9: jnz     short loc_4FFBD7
0x4FFBAB: push    offset aMissingVaria_0; "Missing variable name in set command."
0x4FFBB0: push    edi; int
0x4FFBB1: call    sub_4FCE30
0x4FFBB6: add     esp, 8
0x4FFBB9: lea     ecx, [esp+1170h+var_F3C]; void *
0x4FFBC0: mov     [esp+1170h+var_4], 0FFFFFFFFh
0x4FFBCB: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x4FFBD0: xor     al, al
0x4FFBD2: jmp     loc_5000C7
0x4FFBD7: cmp     [esp+1170h+var_F4C], 0
0x4FFBDF: jnz     short loc_4FFBF9
0x4FFBE1: lea     eax, [esp+1170h+ArgList]
0x4FFBE5: push    eax; ArgList
0x4FFBE6: push    offset aUnknownVaria_0; "Unknown variable '%s'."
0x4FFBEB: push    edi; int
0x4FFBEC: call    sub_4FCE30
0x4FFBF1: add     esp, 0Ch
0x4FFBF4: jmp     loc_4FF8C1
0x4FFBF9: lea     ecx, [esp+1170h+var_82C]
0x4FFC00: call    sub_4FCC00
0x4FFC05: push    ebx
0x4FFC06: push    ebx
0x4FFC07: push    ebp
0x4FFC08: lea     eax, [esi+4]
0x4FFC0B: push    eax
0x4FFC0C: lea     ecx, [esp+1180h+var_82C]
0x4FFC13: push    ecx
0x4FFC14: push    edi
0x4FFC15: call    sub_4FD7C0
0x4FFC1A: movsx   edx, byte ptr [esp+1188h+var_82C]
0x4FFC22: push    edx; C
0x4FFC23: call    _tolower
0x4FFC28: add     esp, 1Ch
0x4FFC2B: cmp     eax, 74h ; 't'
0x4FFC2E: jnz     loc_4FFDF9
0x4FFC34: movsx   eax, byte ptr [esp+1170h+var_82C+1]
0x4FFC3C: push    eax; C
0x4FFC3D: call    _tolower
0x4FFC42: add     esp, 4
0x4FFC45: cmp     eax, 6Fh ; 'o'
0x4FFC48: jnz     loc_4FFDF9
0x4FFC4E: cmp     [esp+1170h+var_F50], ebx
0x4FFC55: jbe     short loc_4FFCA3
0x4FFC57: mov     al, 47h ; 'G'
0x4FFC59: cmp     [esp+1170h+var_F4C], al
0x4FFC60: jnz     short loc_4FFC71
0x4FFC62: mov     ecx, [esi+40Ch]
0x4FFC68: mov     [esi+ecx+20Ch], al
0x4FFC6F: jmp     short loc_4FFC7F
0x4FFC71: mov     edx, [esi+40Ch]
0x4FFC77: mov     byte ptr [esi+edx+20Ch], 72h ; 'r'
0x4FFC7F: add     dword ptr [esi+40Ch], 1
0x4FFC86: mov     eax, [esi+40Ch]
0x4FFC8C: mov     cx, word ptr [esp+1170h+var_F50]
0x4FFC94: mov     [eax+esi+20Ch], cx
0x4FFC9C: add     dword ptr [esi+40Ch], 2
0x4FFCA3: cmp     [esp+1170h+var_F44], ebx
0x4FFCAA: jbe     short loc_4FFCE4
0x4FFCAC: mov     edx, [esi+40Ch]
0x4FFCB2: mov     al, [esp+1170h+var_F4C]
0x4FFCB9: mov     [esi+edx+20Ch], al
0x4FFCC0: add     dword ptr [esi+40Ch], 1
0x4FFCC7: mov     eax, [esi+40Ch]
0x4FFCCD: mov     cx, word ptr [esp+1170h+var_F44]
0x4FFCD5: mov     [eax+esi+20Ch], cx
0x4FFCDD: add     dword ptr [esi+40Ch], 2
0x4FFCE4: mov     edx, [ebp+0]
0x4FFCE7: push    edx
0x4FFCE8: lea     eax, [esi+4]
0x4FFCEB: push    eax
0x4FFCEC: call    sub_4FCB90
0x4FFCF1: add     esp, 8
0x4FFCF4: test    al, al
0x4FFCF6: jz      loc_4FF8C1
0x4FFCFC: lea     eax, [esi+4]
0x4FFCFF: push    ebp
0x4FFD00: push    eax
0x4FFD01: call    sub_4FCBD0
0x4FFD06: push    200h
0x4FFD0B: lea     eax, [esp+117Ch+var_410]
0x4FFD12: push    ebx
0x4FFD13: push    eax
0x4FFD14: call    __memset
0x4FFD19: mov     edx, [ebp+0]
0x4FFD1C: add     esp, 14h
0x4FFD1F: lea     ecx, [esp+1170h+var_410]
0x4FFD26: push    ecx
0x4FFD27: mov     ecx, [esp+1174h+var_1158]
0x4FFD2B: lea     eax, [edx+esi+4]
0x4FFD2F: push    eax
0x4FFD30: push    esi
0x4FFD31: push    edi
0x4FFD32: mov     [esp+1180h+var_1154], ebx
0x4FFD36: call    sub_4FDAF0
0x4FFD3B: cmp     eax, ebx
0x4FFD3D: mov     [esp+1170h+var_1154], eax
0x4FFD41: jnz     short loc_4FFD4D
0x4FFD43: push    offset aSyntaxError__5; "Syntax Error.  Missing expression in se"...
0x4FFD48: jmp     loc_4FF8B8
0x4FFD4D: lea     ecx, [esp+1170h+var_1154]
0x4FFD51: push    ecx; int
0x4FFD52: lea     edx, [esp+1174h+var_410]
0x4FFD59: push    edx; Src
0x4FFD5A: lea     ecx, [esp+1178h+var_F3C]
0x4FFD61: call    sub_4F4080
0x4FFD66: cmp     [esp+1170h+var_F3C], ebx
0x4FFD6D: jz      short loc_4FFD79
0x4FFD6F: push    offset aInfixtopostfix; "InfixToPostfix Error."
0x4FFD74: jmp     loc_4FF8B8
0x4FFD79: mov     ecx, [esi+40Ch]
0x4FFD7F: mov     dx, word ptr [esp+1170h+var_1154]
0x4FFD84: mov     [esi+ecx+20Ch], dx
0x4FFD8C: mov     edx, [esp+1170h+var_1154]
0x4FFD90: add     dword ptr [esi+40Ch], 2
0x4FFD97: mov     ecx, [esi+40Ch]
0x4FFD9D: push    edx; Size
0x4FFD9E: push    eax; Src
0x4FFD9F: lea     eax, [ecx+esi+20Ch]
0x4FFDA6: push    eax; Dst
0x4FFDA7: call    _memcpy
0x4FFDAC: mov     ecx, [esp+117Ch+var_1154]
0x4FFDB0: add     esp, 0Ch
0x4FFDB3: add     [esi+40Ch], ecx
0x4FFDB9: mov     eax, [esi+410h]; jumptable 004FF7DF cases 25,28-30
0x4FFDBF: cmp     eax, 12h
0x4FFDC2: jl      short loc_4FFDD6
0x4FFDC4: cmp     eax, 14h
0x4FFDC7: jle     loc_5000AE
0x4FFDCD: cmp     eax, 1Fh
0x4FFDD0: jz      loc_5000AE
0x4FFDD6: mov     eax, [edi+24h]
0x4FFDD9: mov     ecx, [esi+40Ch]
0x4FFDDF: lea     edx, [eax+ecx+0Ah]
0x4FFDE3: cmp     edx, 4000h
0x4FFDE9: jb      loc_500029
0x4FFDEF: push    offset aMax_script_siz; "MAX_SCRIPT_SIZE exceeded.\r\nCompiled s"...
0x4FFDF4: jmp     loc_4FF8B8
0x4FFDF9: push    offset aSyntaxError__6; "Syntax Error.  Missing \"to\" in set co"...
0x4FFDFE: jmp     loc_4FF8B8
0x4FFE03: lea     ebp, [esi+4]; jumptable 004FF7DF cases 22,24
0x4FFE06: push    ebx
0x4FFE07: push    ebp
0x4FFE08: mov     [esp+1178h+var_1154], ebx
0x4FFE0C: call    sub_4FCB90
0x4FFE11: add     esp, 8
0x4FFE14: test    al, al
0x4FFE16: jnz     short loc_4FFE22
0x4FFE18: push    offset aMismatchedPare; "Mismatched parentheses."
0x4FFE1D: jmp     loc_4FF8B8
0x4FFE22: lea     edx, [esp+1170h+var_1154]
0x4FFE26: push    edx
0x4FFE27: push    ebp
0x4FFE28: call    sub_4FCBD0
0x4FFE2D: push    200h
0x4FFE32: lea     eax, [esp+117Ch+var_210]
0x4FFE39: push    ebx
0x4FFE3A: push    eax
0x4FFE3B: call    __memset
0x4FFE40: mov     edx, [esp+1184h+var_1154]
0x4FFE44: mov     ebp, [esp+1184h+var_1158]
0x4FFE48: add     esp, 14h
0x4FFE4B: lea     ecx, [esp+1170h+var_210]
0x4FFE52: push    ecx
0x4FFE53: lea     eax, [esi+edx+4]
0x4FFE57: push    eax
0x4FFE58: push    esi
0x4FFE59: push    edi
0x4FFE5A: mov     ecx, ebp
0x4FFE5C: mov     [esp+1180h+var_115C], ebx
0x4FFE60: call    sub_4FDAF0
0x4FFE65: cmp     eax, ebx
0x4FFE67: mov     [esp+1170h+var_115C], eax
0x4FFE6B: jz      loc_4FF8C1
0x4FFE71: lea     ecx, [esp+1170h+var_115C]
0x4FFE75: push    ecx; int
0x4FFE76: lea     edx, [esp+1174h+var_210]
0x4FFE7D: push    edx; Src
0x4FFE7E: lea     ecx, [esp+1178h+var_F3C]
0x4FFE85: call    sub_4F4080
0x4FFE8A: mov     [esp+1170h+var_1158], eax
0x4FFE8E: mov     eax, [esp+1170h+var_F3C]
0x4FFE95: cmp     eax, ebx
0x4FFE97: jz      short loc_4FFEA6
0x4FFE99: mov     eax, ds:0B09DC0h[eax*4]
0x4FFEA0: push    eax
0x4FFEA1: jmp     loc_4FF8B8
0x4FFEA6: push    esi
0x4FFEA7: push    edi
0x4FFEA8: mov     ecx, ebp
0x4FFEAA: call    sub_4FD430
0x4FFEAF: cmp     eax, 0FFFFFFFFh
0x4FFEB2: jnz     short loc_4FFEBE
0x4FFEB4: push    offset aMismatchedIfTh; "Mismatched if/then/else block."
0x4FFEB9: jmp     loc_4FF8B8
0x4FFEBE: mov     ecx, [esi+40Ch]
0x4FFEC4: mov     [esi+ecx+20Ch], ax
0x4FFECC: mov     dx, word ptr [esp+1170h+var_115C]
0x4FFED1: mov     ecx, 2
0x4FFED6: add     [esi+40Ch], ecx
0x4FFEDC: mov     eax, [esi+40Ch]
0x4FFEE2: mov     [eax+esi+20Ch], dx
0x4FFEEA: add     [esi+40Ch], ecx
0x4FFEF0: mov     ecx, [esp+1170h+var_115C]
0x4FFEF4: mov     eax, [esi+40Ch]
0x4FFEFA: mov     edx, [esp+1170h+var_1158]
0x4FFEFE: push    ecx; Size
0x4FFEFF: push    edx; Src
0x4FFF00: lea     eax, [eax+esi+20Ch]
0x4FFF07: push    eax; Dst
0x4FFF08: call    _memcpy
0x4FFF0D: mov     ecx, [esp+117Ch+var_115C]
0x4FFF11: add     esp, 0Ch
0x4FFF14: jmp     loc_4FFDB3
0x4FFF19: mov     ecx, [esp+1170h+var_1158]; jumptable 004FF7DF case 23
0x4FFF1D: push    esi
0x4FFF1E: push    edi
0x4FFF1F: call    sub_4FD430
0x4FFF24: cmp     eax, 0FFFFFFFFh
0x4FFF27: jz      short loc_4FFEB4
0x4FFF29: mov     edx, [esi+40Ch]
0x4FFF2F: mov     [esi+edx+20Ch], ax
0x4FFF37: add     dword ptr [esi+40Ch], 2
0x4FFF3E: jmp     loc_4FFDB9; jumptable 004FF7DF cases 25,28-30
0x4FFF43: lea     ecx, [eax-100h]; jumptable 004FF7DF default case, cases 26,27
0x4FFF49: cmp     ecx, 82h ; '‚'
0x4FFF4F: ja      short loc_4FFF5D
0x4FFF51: lea     ebp, [ecx+ecx*4]
0x4FFF54: lea     ebp, ds:0B0B420h[ebp*8]
0x4FFF5B: jmp     short loc_4FFF75
0x4FFF5D: lea     ecx, [eax-1000h]
0x4FFF63: cmp     ecx, 170h
0x4FFF69: ja      short loc_4FFF79
0x4FFF6B: lea     ebp, [ecx+ecx*4]
0x4FFF6E: lea     ebp, ds:0B0C8C0h[ebp*8]
0x4FFF75: cmp     ebp, ebx
0x4FFF77: jnz     short loc_4FFF8D
0x4FFF79: push    eax; ArgList
0x4FFF7A: push    offset aUnknownFunctio; "Unknown function code %d."
0x4FFF7F: push    edi; int
0x4FFF80: call    sub_4FCE30
0x4FFF85: add     esp, 0Ch
0x4FFF88: jmp     loc_4FF8C1
0x4FFF8D: mov     al, [ebp+10h]
0x4FFF90: test    al, al
0x4FFF92: jz      short loc_500001
0x4FFF94: cmp     byte ptr [edi+38h], 0
0x4FFF98: jz      short loc_4FFFAC
0x4FFF9A: cmp     [esi+414h], ebx
0x4FFFA0: jnz     short loc_4FFFAC
0x4FFFA2: push    offset aReferenceFun_0; "Reference function requires explicit re"...
0x4FFFA7: jmp     loc_4FF8B8
0x4FFFAC: test    al, al
0x4FFFAE: jz      short loc_500001
0x4FFFB0: mov     eax, [esi+414h]
0x4FFFB6: cmp     eax, ebx
0x4FFFB8: jbe     short loc_500001
0x4FFFBA: push    eax
0x4FFFBB: mov     ecx, edi
0x4FFFBD: call    sub_4FCD20
0x4FFFC2: push    ebx; int
0x4FFFC3: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4FFFC8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FFFCD: mov     [esp+117Ch+var_1158], eax
0x4FFFD1: mov     eax, [eax+8]
0x4FFFD4: push    ebx; int
0x4FFFD5: push    eax; void *
0x4FFFD6: call    OblivionDynamicCast
0x4FFFDB: add     esp, 14h
0x4FFFDE: cmp     eax, ebx
0x4FFFE0: jnz     short loc_500001
0x4FFFE2: mov     eax, [esp+1170h+var_1158]
0x4FFFE6: cmp     [eax+0Ch], ebx
0x4FFFE9: jnz     short loc_500001
0x4FFFEB: mov     eax, [eax]
0x4FFFED: push    eax; ArgList
0x4FFFEE: push    offset aSyntaxError__7; "Syntax error.  Invalid reference '%s' ("...
0x4FFFF3: push    edi; int
0x4FFFF4: call    sub_4FCE30
0x4FFFF9: add     esp, 0Ch
0x4FFFFC: jmp     loc_4FF8C1
0x500001: mov     edx, [ebp+14h]
0x500004: cmp     edx, ebx
0x500006: jz      loc_4FFDB9; jumptable 004FF7DF cases 25,28-30
0x50000C: movzx   ecx, word ptr [ebp+12h]
0x500010: mov     eax, [ebp+1Ch]
0x500013: push    edi
0x500014: push    esi
0x500015: push    edx
0x500016: push    ecx
0x500017: call    eax
0x500019: add     esp, 10h
0x50001C: test    al, al
0x50001E: jnz     loc_4FFDB9; jumptable 004FF7DF cases 25,28-30
0x500024: jmp     loc_4FF8C1
0x500029: cmp     dword ptr [esi+414h], 0
0x500030: jbe     short loc_500059
0x500032: mov     ecx, [edi+20h]
0x500035: mov     word ptr [eax+ecx], 1Ch
0x50003B: mov     edx, [edi+20h]
0x50003E: mov     ecx, 2
0x500043: add     [edi+24h], ecx
0x500046: mov     eax, [edi+24h]
0x500049: mov     bx, [esi+414h]
0x500050: mov     [eax+edx], bx
0x500054: add     [edi+24h], ecx
0x500057: jmp     short loc_50005E
0x500059: mov     ecx, 2
0x50005E: movzx   ebx, word ptr [esi+410h]
0x500065: mov     eax, [edi+24h]
0x500068: mov     edx, [edi+20h]
0x50006B: mov     [eax+edx], bx
0x50006F: add     [edi+24h], ecx
0x500072: movzx   ebx, word ptr [esi+40Ch]
0x500079: mov     eax, [edi+24h]
0x50007C: mov     edx, [edi+20h]
0x50007F: mov     [eax+edx], bx
0x500083: add     [edi+24h], ecx
0x500086: mov     ecx, [esi+40Ch]
0x50008C: mov     eax, [edi+24h]
0x50008F: push    ecx; Size
0x500090: mov     ecx, [edi+20h]
0x500093: lea     edx, [esi+20Ch]
0x500099: push    edx; Src
0x50009A: add     ecx, eax
0x50009C: push    ecx; Dst
0x50009D: call    _memcpy
0x5000A2: mov     edx, [esi+40Ch]
0x5000A8: add     esp, 0Ch
0x5000AB: add     [edi+24h], edx
0x5000AE: lea     ecx, [esp+1170h+var_F3C]; void *
0x5000B5: mov     [esp+1170h+var_4], 0FFFFFFFFh
0x5000C0: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x5000C5: mov     al, 1
0x5000C7: mov     ecx, [esp+1170h+var_C]
0x5000CE: mov     large fs:0, ecx
0x5000D5: pop     ecx
0x5000D6: pop     edi
0x5000D7: pop     esi
0x5000D8: pop     ebp
0x5000D9: pop     ebx
0x5000DA: mov     ecx, [esp+115Ch+var_10]
0x5000E1: xor     ecx, esp
0x5000E3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5000E8: add     esp, 115Ch
0x5000EE: retn    0Ch
