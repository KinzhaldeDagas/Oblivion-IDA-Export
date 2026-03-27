0x7BED40: sub     esp, 6D4h
0x7BED46: mov     eax, ds:0B30AACh
0x7BED4B: xor     eax, esp
0x7BED4D: mov     [esp+6D4h+var_4], eax
0x7BED54: push    ebx
0x7BED55: push    ebp
0x7BED56: push    esi
0x7BED57: push    edi
0x7BED58: xor     ebx, ebx
0x7BED5A: push    44h ; 'D'
0x7BED5C: lea     eax, [esp+6E8h+var_464]
0x7BED63: push    ebx
0x7BED64: mov     esi, offset aImagespace2xVH; "imagespace\\2x\\v\\HDRbase.v.hlsl"
0x7BED69: push    eax
0x7BED6A: mov     ebp, ecx
0x7BED6C: mov     [esp+6F0h+FullPath], esi
0x7BED73: mov     [esp+6F0h+var_468], ebx
0x7BED7A: call    __memset
0x7BED7F: push    44h ; 'D'
0x7BED81: lea     ecx, [esp+6F4h+var_418]
0x7BED88: push    ebx
0x7BED89: push    ecx
0x7BED8A: mov     [esp+6FCh+var_420], esi
0x7BED91: mov     [esp+6FCh+var_41C], ebx
0x7BED98: call    __memset
0x7BED9D: push    44h ; 'D'
0x7BED9F: lea     edx, [esp+700h+var_3CC]
0x7BEDA6: push    ebx
0x7BEDA7: push    edx
0x7BEDA8: mov     [esp+708h+var_3D4], esi
0x7BEDAF: mov     [esp+708h+var_3D0], ebx
0x7BEDB6: call    __memset
0x7BEDBB: push    44h ; 'D'
0x7BEDBD: lea     eax, [esp+70Ch+var_380]
0x7BEDC4: push    ebx
0x7BEDC5: push    eax
0x7BEDC6: mov     [esp+714h+var_388], esi
0x7BEDCD: mov     [esp+714h+var_384], ebx
0x7BEDD4: call    __memset
0x7BEDD9: push    3Ch ; '<'
0x7BEDDB: lea     ecx, [esp+718h+var_32C]
0x7BEDE2: push    ebx
0x7BEDE3: push    ecx
0x7BEDE4: mov     [esp+720h+var_33C], esi
0x7BEDEB: mov     [esp+720h+var_338], offset aTex2; "TEX2"
0x7BEDF6: mov     [esp+720h+var_334], ebx
0x7BEDFD: mov     [esp+720h+var_330], ebx
0x7BEE04: call    __memset
0x7BEE09: push    44h ; 'D'
0x7BEE0B: lea     edx, [esp+724h+var_2E8]
0x7BEE12: push    ebx
0x7BEE13: push    edx
0x7BEE14: mov     [esp+72Ch+var_2F0], esi
0x7BEE1B: mov     [esp+72Ch+var_2EC], ebx
0x7BEE22: call    __memset
0x7BEE27: add     esp, 48h
0x7BEE2A: push    44h ; 'D'
0x7BEE2C: lea     eax, [esp+6E8h+var_29C]
0x7BEE33: push    ebx
0x7BEE34: push    eax
0x7BEE35: mov     [esp+6F0h+var_2A4], esi
0x7BEE3C: mov     [esp+6F0h+var_2A0], ebx
0x7BEE43: call    __memset
0x7BEE48: push    44h ; 'D'
0x7BEE4A: lea     ecx, [esp+6F4h+var_250]
0x7BEE51: push    ebx
0x7BEE52: push    ecx
0x7BEE53: mov     [esp+6FCh+var_258], esi
0x7BEE5A: mov     [esp+6FCh+var_254], ebx
0x7BEE61: call    __memset
0x7BEE66: push    3Ch ; '<'
0x7BEE68: lea     edx, [esp+700h+var_6BC]
0x7BEE6C: push    ebx
0x7BEE6D: mov     esi, offset aImagespace2xPH; "imagespace\\2x\\p\\HDRblur.p.hlsl"
0x7BEE72: mov     edi, offset aTextap; "TEXTAP"
0x7BEE77: push    edx
0x7BEE78: mov     [esp+708h+var_6CC], esi
0x7BEE7C: mov     [esp+708h+var_6C8], edi
0x7BEE80: mov     [esp+708h+var_6C4], offset a16
0x7BEE88: mov     [esp+708h+var_6C0], ebx
0x7BEE8C: call    __memset
0x7BEE91: mov     [esp+708h+var_680], esi
0x7BEE98: mov     [esp+708h+var_67C], edi
0x7BEE9F: mov     [esp+708h+var_678], offset a9; "9"
0x7BEEAA: mov     [esp+708h+var_674], ebx
0x7BEEB1: push    3Ch ; '<'
0x7BEEB3: lea     eax, [esp+70Ch+var_670]
0x7BEEBA: push    ebx
0x7BEEBB: push    eax
0x7BEEBC: call    __memset
0x7BEEC1: push    3Ch ; '<'
0x7BEEC3: lea     ecx, [esp+718h+var_624]
0x7BEECA: push    ebx
0x7BEECB: push    ecx
0x7BEECC: mov     [esp+720h+var_634], esi
0x7BEED3: mov     [esp+720h+var_630], edi
0x7BEEDA: mov     [esp+720h+var_62C], offset a15
0x7BEEE5: mov     [esp+720h+var_628], ebx
0x7BEEEC: call    __memset
0x7BEEF1: push    44h ; 'D'
0x7BEEF3: lea     edx, [esp+724h+var_5E0]
0x7BEEFA: push    ebx
0x7BEEFB: push    edx
0x7BEEFC: mov     [esp+72Ch+var_5E8], esi
0x7BEF03: mov     [esp+72Ch+var_5E4], ebx
0x7BEF0A: call    __memset
0x7BEF0F: add     esp, 48h
0x7BEF12: push    2Ch ; ','
0x7BEF14: lea     eax, [esp+6E8h+var_57C]
0x7BEF1B: push    ebx
0x7BEF1C: push    eax
0x7BEF1D: mov     [esp+6F0h+var_59C], esi
0x7BEF24: mov     [esp+6F0h+var_598], offset aShblend; "SHBLEND"
0x7BEF2F: mov     [esp+6F0h+var_594], ebx
0x7BEF36: mov     [esp+6F0h+var_590], offset aTonemap; "TONEMAP"
0x7BEF41: mov     [esp+6F0h+var_58C], ebx
0x7BEF48: mov     [esp+6F0h+var_588], offset aSwfilter; "SWFILTER"
0x7BEF53: mov     [esp+6F0h+var_584], ebx
0x7BEF5A: mov     [esp+6F0h+var_580], ebx
0x7BEF61: call    __memset
0x7BEF66: push    3Ch ; '<'
0x7BEF68: lea     ecx, [esp+6F4h+var_540]
0x7BEF6F: push    ebx
0x7BEF70: push    ecx
0x7BEF71: mov     [esp+6FCh+var_550], esi
0x7BEF78: mov     [esp+6FCh+var_54C], offset aBrightfilter; "BRIGHTFILTER"
0x7BEF83: mov     [esp+6FCh+var_548], ebx
0x7BEF8A: mov     [esp+6FCh+var_544], ebx
0x7BEF91: call    __memset
0x7BEF96: push    3Ch ; '<'
0x7BEF98: lea     edx, [esp+700h+var_4F4]
0x7BEF9F: push    ebx
0x7BEFA0: push    edx
0x7BEFA1: mov     [esp+708h+var_504], esi
0x7BEFA8: mov     [esp+708h+var_500], offset aAdapt; "ADAPT"
0x7BEFB3: mov     [esp+708h+var_4FC], ebx
0x7BEFBA: mov     [esp+708h+var_4F8], ebx
0x7BEFC1: call    __memset
0x7BEFC6: push    3Ch ; '<'
0x7BEFC8: lea     eax, [esp+70Ch+var_4A8]
0x7BEFCF: push    ebx
0x7BEFD0: push    eax
0x7BEFD1: mov     [esp+714h+var_4B8], esi
0x7BEFD8: mov     [esp+714h+var_4B4], offset aLumclamp; "LUMCLAMP"
0x7BEFE3: mov     [esp+714h+var_4B0], ebx
0x7BEFEA: mov     [esp+714h+var_4AC], ebx
0x7BEFF1: call    __memset
0x7BEFF6: add     esp, 30h
0x7BEFF9: xor     esi, esi
0x7BEFFB: jmp     short loc_7BF000
0x7BEFFD: align 10h
0x7BF000: mov     edi, esi
0x7BF002: imul    edi, 4Ch ; 'L'
0x7BF005: mov     eax, [esp+edi+6E4h+FullPath]
0x7BF00C: cmp     eax, ebx
0x7BF00E: mov     [esp+6E4h+var_6D4], edi
0x7BF012: jz      loc_7BF0AE
0x7BF018: lea     ecx, [esp+6E4h+FileName]
0x7BF01F: push    ecx; int
0x7BF020: push    eax; FullPath
0x7BF021: call    sub_801030
0x7BF026: push    esi
0x7BF027: lea     edx, [esp+6F0h+var_20C]
0x7BF02E: push    offset aHdr03i_vso; "HDR%03i.vso"
0x7BF033: push    edx
0x7BF034: call    __sprintf
0x7BF039: add     esp, 14h
0x7BF03C: push    ebx; int
0x7BF03D: push    ebx; int
0x7BF03E: lea     eax, [esp+6ECh+var_20C]
0x7BF045: push    eax; int
0x7BF046: push    offset aVs_1_1; "vs_1_1"
0x7BF04B: lea     ecx, [esp+edi+6F4h+var_468]
0x7BF052: push    ecx; int
0x7BF053: lea     edx, [esp+6F8h+FileName]
0x7BF05A: push    edx; lpFileName
0x7BF05B: mov     ecx, ebp
0x7BF05D: call    CreateVertexShader
0x7BF062: mov     edi, [ebp+esi*4+90h]
0x7BF069: cmp     edi, eax
0x7BF06B: mov     [esp+6E4h+var_6D0], eax
0x7BF06F: jz      short loc_7BF0AA
0x7BF071: cmp     edi, ebx
0x7BF073: jz      short loc_7BF095
0x7BF075: lea     eax, [edi+4]
0x7BF078: push    eax; lpAddend
0x7BF079: call    dword ptr ds:0A2807Ch
0x7BF07F: test    eax, eax
0x7BF081: jnz     short loc_7BF091
0x7BF083: cmp     edi, ebx
0x7BF085: jz      short loc_7BF091
0x7BF087: mov     edx, [edi]
0x7BF089: mov     eax, [edx]
0x7BF08B: push    1
0x7BF08D: mov     ecx, edi
0x7BF08F: call    eax
0x7BF091: mov     eax, [esp+6E4h+var_6D0]
0x7BF095: cmp     eax, ebx
0x7BF097: mov     [ebp+esi*4+90h], eax
0x7BF09E: jz      short loc_7BF0AA
0x7BF0A0: add     eax, 4
0x7BF0A3: push    eax; lpAddend
0x7BF0A4: call    dword ptr ds:0A28078h
0x7BF0AA: mov     edi, [esp+6E4h+var_6D4]
0x7BF0AE: cmp     [esp+edi+6E4h+var_6CC], ebx
0x7BF0B2: jz      loc_7BF17C
0x7BF0B8: cmp     esi, ebx
0x7BF0BA: mov     word ptr [esp+6E4h+var_6D0], 34h ; '4'
0x7BF0C1: jnz     short loc_7BF0D5
0x7BF0C3: cmp     ds:0B43071h, bl
0x7BF0C9: jz      short loc_7BF0E9
0x7BF0CB: lea     ecx, [esp+6E4h+var_6D0]
0x7BF0CF: mov     [esp+6E4h+var_6C4], ecx
0x7BF0D3: jmp     short loc_7BF0E9
0x7BF0D5: cmp     esi, 4
0x7BF0D8: jnz     short loc_7BF0E9
0x7BF0DA: cmp     ds:0B43071h, bl
0x7BF0E0: jz      short loc_7BF0E9
0x7BF0E2: mov     [esp+6E4h+var_588], ebx
0x7BF0E9: mov     eax, [esp+edi+6E4h+var_6CC]
0x7BF0ED: lea     edx, [esp+6E4h+FileName]
0x7BF0F4: push    edx; int
0x7BF0F5: push    eax; FullPath
0x7BF0F6: call    sub_801030
0x7BF0FB: push    esi
0x7BF0FC: lea     ecx, [esp+6F0h+var_20C]
0x7BF103: push    offset aHdr03i_pso; "HDR%03i.pso"
0x7BF108: push    ecx
0x7BF109: call    __sprintf
0x7BF10E: add     esp, 14h
0x7BF111: push    ebx; int
0x7BF112: push    ebx; int
0x7BF113: lea     edx, [esp+6ECh+var_20C]
0x7BF11A: push    edx; int
0x7BF11B: push    offset aPs_2_0; "ps_2_0"
0x7BF120: lea     eax, [esp+edi+6F4h+var_6C8]
0x7BF124: push    eax; int
0x7BF125: lea     ecx, [esp+6F8h+FileName]
0x7BF12C: push    ecx; lpFileName
0x7BF12D: mov     ecx, ebp
0x7BF12F: call    CreatePixelShader
0x7BF134: mov     edi, [ebp+esi*4+0B0h]
0x7BF13B: cmp     edi, eax
0x7BF13D: mov     [esp+6E4h+var_6D4], eax
0x7BF141: jz      short loc_7BF17C
0x7BF143: cmp     edi, ebx
0x7BF145: jz      short loc_7BF167
0x7BF147: lea     edx, [edi+4]
0x7BF14A: push    edx; lpAddend
0x7BF14B: call    dword ptr ds:0A2807Ch
0x7BF151: test    eax, eax
0x7BF153: jnz     short loc_7BF163
0x7BF155: cmp     edi, ebx
0x7BF157: jz      short loc_7BF163
0x7BF159: mov     eax, [edi]
0x7BF15B: mov     edx, [eax]
0x7BF15D: push    1
0x7BF15F: mov     ecx, edi
0x7BF161: call    edx
0x7BF163: mov     eax, [esp+6E4h+var_6D4]
0x7BF167: cmp     eax, ebx
0x7BF169: mov     [ebp+esi*4+0B0h], eax
0x7BF170: jz      short loc_7BF17C
0x7BF172: add     eax, 4
0x7BF175: push    eax; lpAddend
0x7BF176: call    dword ptr ds:0A28078h
0x7BF17C: add     esi, 1
0x7BF17F: cmp     esi, 8
0x7BF182: jl      loc_7BF000
0x7BF188: mov     ecx, [esp+6E4h+var_4]
0x7BF18F: pop     edi
0x7BF190: pop     esi
0x7BF191: pop     ebp
0x7BF192: pop     ebx
0x7BF193: xor     ecx, esp
0x7BF195: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7BF19A: add     esp, 6D4h
0x7BF1A0: retn
