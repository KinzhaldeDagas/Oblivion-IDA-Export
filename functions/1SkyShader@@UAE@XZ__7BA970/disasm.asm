0x7BA970: push    0FFFFFFFFh
0x7BA972: push    offset ??1SkyShader@@UAE@XZ_SEH
0x7BA977: mov     eax, large fs:0
0x7BA97D: push    eax
0x7BA97E: push    ecx
0x7BA97F: push    ebx
0x7BA980: push    ebp
0x7BA981: push    esi
0x7BA982: push    edi
0x7BA983: mov     eax, ds:0B30AACh
0x7BA988: xor     eax, esp
0x7BA98A: push    eax
0x7BA98B: lea     eax, [esp+24h+var_C]
0x7BA98F: mov     large fs:0, eax
0x7BA995: mov     esi, ecx
0x7BA997: mov     [esp+24h+var_10], esi
0x7BA99B: mov     dword ptr [esi], offset ??_7SkyShader@@6B@; const SkyShader::`vftable'
0x7BA9A1: mov     ecx, [esi+0B8h]
0x7BA9A7: xor     ebx, ebx
0x7BA9A9: or      edi, 0FFFFFFFFh
0x7BA9AC: cmp     ecx, ebx
0x7BA9AE: mov     [esp+24h+var_4], 18h
0x7BA9B6: jz      short loc_7BA9C8
0x7BA9B8: add     [ecx+60h], edi
0x7BA9BB: jnz     short loc_7BA9C2
0x7BA9BD: call    sub_7604D0
0x7BA9C2: mov     [esi+0B8h], ebx
0x7BA9C8: mov     ecx, [esi+0BCh]
0x7BA9CE: cmp     ecx, ebx
0x7BA9D0: jz      short loc_7BA9E2
0x7BA9D2: add     [ecx+60h], edi
0x7BA9D5: jnz     short loc_7BA9DC
0x7BA9D7: call    sub_7604D0
0x7BA9DC: mov     [esi+0BCh], ebx
0x7BA9E2: mov     ecx, [esi+0C0h]
0x7BA9E8: cmp     ecx, ebx
0x7BA9EA: jz      short loc_7BA9FC
0x7BA9EC: add     [ecx+60h], edi
0x7BA9EF: jnz     short loc_7BA9F6
0x7BA9F1: call    sub_7604D0
0x7BA9F6: mov     [esi+0C0h], ebx
0x7BA9FC: mov     edi, [esi+0C4h]
0x7BAA02: cmp     edi, ebx
0x7BAA04: mov     ebp, ds:0A2807Ch
0x7BAA0A: jz      short loc_7BAA2A
0x7BAA0C: lea     eax, [edi+4]
0x7BAA0F: push    eax; lpAddend
0x7BAA10: call    ebp ; InterlockedDecrement
0x7BAA12: test    eax, eax
0x7BAA14: jnz     short loc_7BAA24
0x7BAA16: cmp     edi, ebx
0x7BAA18: jz      short loc_7BAA24
0x7BAA1A: mov     edx, [edi]
0x7BAA1C: mov     eax, [edx]
0x7BAA1E: push    1
0x7BAA20: mov     ecx, edi
0x7BAA22: call    eax
0x7BAA24: mov     [esi+0C4h], ebx
0x7BAA2A: mov     edi, [esi+0C8h]
0x7BAA30: cmp     edi, ebx
0x7BAA32: jz      short loc_7BAA52
0x7BAA34: lea     ecx, [edi+4]
0x7BAA37: push    ecx; lpAddend
0x7BAA38: call    ebp ; InterlockedDecrement
0x7BAA3A: test    eax, eax
0x7BAA3C: jnz     short loc_7BAA4C
0x7BAA3E: cmp     edi, ebx
0x7BAA40: jz      short loc_7BAA4C
0x7BAA42: mov     edx, [edi]
0x7BAA44: mov     eax, [edx]
0x7BAA46: push    1
0x7BAA48: mov     ecx, edi
0x7BAA4A: call    eax
0x7BAA4C: mov     [esi+0C8h], ebx
0x7BAA52: mov     edi, [esi+0CCh]
0x7BAA58: cmp     edi, ebx
0x7BAA5A: jz      short loc_7BAA7A
0x7BAA5C: lea     ecx, [edi+4]
0x7BAA5F: push    ecx; lpAddend
0x7BAA60: call    ebp ; InterlockedDecrement
0x7BAA62: test    eax, eax
0x7BAA64: jnz     short loc_7BAA74
0x7BAA66: cmp     edi, ebx
0x7BAA68: jz      short loc_7BAA74
0x7BAA6A: mov     edx, [edi]
0x7BAA6C: mov     eax, [edx]
0x7BAA6E: push    1
0x7BAA70: mov     ecx, edi
0x7BAA72: call    eax
0x7BAA74: mov     [esi+0CCh], ebx
0x7BAA7A: mov     edi, [esi+0D0h]
0x7BAA80: cmp     edi, ebx
0x7BAA82: jz      short loc_7BAAA2
0x7BAA84: lea     ecx, [edi+4]
0x7BAA87: push    ecx; lpAddend
0x7BAA88: call    ebp ; InterlockedDecrement
0x7BAA8A: test    eax, eax
0x7BAA8C: jnz     short loc_7BAA9C
0x7BAA8E: cmp     edi, ebx
0x7BAA90: jz      short loc_7BAA9C
0x7BAA92: mov     edx, [edi]
0x7BAA94: mov     eax, [edx]
0x7BAA96: push    1
0x7BAA98: mov     ecx, edi
0x7BAA9A: call    eax
0x7BAA9C: mov     [esi+0D0h], ebx
0x7BAAA2: mov     edi, [esi+0D4h]
0x7BAAA8: cmp     edi, ebx
0x7BAAAA: jz      short loc_7BAACA
0x7BAAAC: lea     ecx, [edi+4]
0x7BAAAF: push    ecx; lpAddend
0x7BAAB0: call    ebp ; InterlockedDecrement
0x7BAAB2: test    eax, eax
0x7BAAB4: jnz     short loc_7BAAC4
0x7BAAB6: cmp     edi, ebx
0x7BAAB8: jz      short loc_7BAAC4
0x7BAABA: mov     edx, [edi]
0x7BAABC: mov     eax, [edx]
0x7BAABE: push    1
0x7BAAC0: mov     ecx, edi
0x7BAAC2: call    eax
0x7BAAC4: mov     [esi+0D4h], ebx
0x7BAACA: mov     edi, [esi+0D8h]
0x7BAAD0: cmp     edi, ebx
0x7BAAD2: jz      short loc_7BAAF2
0x7BAAD4: lea     ecx, [edi+4]
0x7BAAD7: push    ecx; lpAddend
0x7BAAD8: call    ebp ; InterlockedDecrement
0x7BAADA: test    eax, eax
0x7BAADC: jnz     short loc_7BAAEC
0x7BAADE: cmp     edi, ebx
0x7BAAE0: jz      short loc_7BAAEC
0x7BAAE2: mov     edx, [edi]
0x7BAAE4: mov     eax, [edx]
0x7BAAE6: push    1
0x7BAAE8: mov     ecx, edi
0x7BAAEA: call    eax
0x7BAAEC: mov     [esi+0D8h], ebx
0x7BAAF2: mov     ecx, [esi+0B4h]
0x7BAAF8: cmp     ecx, ebx
0x7BAAFA: jz      short loc_7BAB0D
0x7BAAFC: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BAB00: jnz     short loc_7BAB07
0x7BAB02: call    sub_7604D0
0x7BAB07: mov     [esi+0B4h], ebx
0x7BAB0D: mov     ecx, [esi+0ACh]
0x7BAB13: cmp     ecx, ebx
0x7BAB15: jz      short loc_7BAB28
0x7BAB17: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BAB1B: jnz     short loc_7BAB22
0x7BAB1D: call    sub_7604D0
0x7BAB22: mov     [esi+0ACh], ebx
0x7BAB28: mov     edi, [esi+7Ch]
0x7BAB2B: cmp     edi, ebx
0x7BAB2D: jz      short loc_7BAB4A
0x7BAB2F: lea     ecx, [edi+4]
0x7BAB32: push    ecx; lpAddend
0x7BAB33: call    ebp ; InterlockedDecrement
0x7BAB35: test    eax, eax
0x7BAB37: jnz     short loc_7BAB47
0x7BAB39: cmp     edi, ebx
0x7BAB3B: jz      short loc_7BAB47
0x7BAB3D: mov     edx, [edi]
0x7BAB3F: mov     eax, [edx]
0x7BAB41: push    1
0x7BAB43: mov     ecx, edi
0x7BAB45: call    eax
0x7BAB47: mov     [esi+7Ch], ebx
0x7BAB4A: mov     edi, [esi+80h]
0x7BAB50: cmp     edi, ebx
0x7BAB52: jz      short loc_7BAB72
0x7BAB54: lea     ecx, [edi+4]
0x7BAB57: push    ecx; lpAddend
0x7BAB58: call    ebp ; InterlockedDecrement
0x7BAB5A: test    eax, eax
0x7BAB5C: jnz     short loc_7BAB6C
0x7BAB5E: cmp     edi, ebx
0x7BAB60: jz      short loc_7BAB6C
0x7BAB62: mov     edx, [edi]
0x7BAB64: mov     eax, [edx]
0x7BAB66: push    1
0x7BAB68: mov     ecx, edi
0x7BAB6A: call    eax
0x7BAB6C: mov     [esi+80h], ebx
0x7BAB72: mov     edi, [esi+84h]
0x7BAB78: cmp     edi, ebx
0x7BAB7A: jz      short loc_7BAB9A
0x7BAB7C: lea     ecx, [edi+4]
0x7BAB7F: push    ecx; lpAddend
0x7BAB80: call    ebp ; InterlockedDecrement
0x7BAB82: test    eax, eax
0x7BAB84: jnz     short loc_7BAB94
0x7BAB86: cmp     edi, ebx
0x7BAB88: jz      short loc_7BAB94
0x7BAB8A: mov     edx, [edi]
0x7BAB8C: mov     eax, [edx]
0x7BAB8E: push    1
0x7BAB90: mov     ecx, edi
0x7BAB92: call    eax
0x7BAB94: mov     [esi+84h], ebx
0x7BAB9A: mov     edi, [esi+8Ch]
0x7BABA0: cmp     edi, ebx
0x7BABA2: jz      short loc_7BABC2
0x7BABA4: lea     ecx, [edi+4]
0x7BABA7: push    ecx; lpAddend
0x7BABA8: call    ebp ; InterlockedDecrement
0x7BABAA: test    eax, eax
0x7BABAC: jnz     short loc_7BABBC
0x7BABAE: cmp     edi, ebx
0x7BABB0: jz      short loc_7BABBC
0x7BABB2: mov     edx, [edi]
0x7BABB4: mov     eax, [edx]
0x7BABB6: push    1
0x7BABB8: mov     ecx, edi
0x7BABBA: call    eax
0x7BABBC: mov     [esi+8Ch], ebx
0x7BABC2: mov     edi, [esi+90h]
0x7BABC8: cmp     edi, ebx
0x7BABCA: jz      short loc_7BABEA
0x7BABCC: lea     ecx, [edi+4]
0x7BABCF: push    ecx; lpAddend
0x7BABD0: call    ebp ; InterlockedDecrement
0x7BABD2: test    eax, eax
0x7BABD4: jnz     short loc_7BABE4
0x7BABD6: cmp     edi, ebx
0x7BABD8: jz      short loc_7BABE4
0x7BABDA: mov     edx, [edi]
0x7BABDC: mov     eax, [edx]
0x7BABDE: push    1
0x7BABE0: mov     ecx, edi
0x7BABE2: call    eax
0x7BABE4: mov     [esi+90h], ebx
0x7BABEA: mov     edi, [esi+94h]
0x7BABF0: cmp     edi, ebx
0x7BABF2: jz      short loc_7BAC12
0x7BABF4: lea     ecx, [edi+4]
0x7BABF7: push    ecx; lpAddend
0x7BABF8: call    ebp ; InterlockedDecrement
0x7BABFA: test    eax, eax
0x7BABFC: jnz     short loc_7BAC0C
0x7BABFE: cmp     edi, ebx
0x7BAC00: jz      short loc_7BAC0C
0x7BAC02: mov     edx, [edi]
0x7BAC04: mov     eax, [edx]
0x7BAC06: push    1
0x7BAC08: mov     ecx, edi
0x7BAC0A: call    eax
0x7BAC0C: mov     [esi+94h], ebx
0x7BAC12: mov     edi, [esi+88h]
0x7BAC18: cmp     edi, ebx
0x7BAC1A: jz      short loc_7BAC3A
0x7BAC1C: lea     ecx, [edi+4]
0x7BAC1F: push    ecx; lpAddend
0x7BAC20: call    ebp ; InterlockedDecrement
0x7BAC22: test    eax, eax
0x7BAC24: jnz     short loc_7BAC34
0x7BAC26: cmp     edi, ebx
0x7BAC28: jz      short loc_7BAC34
0x7BAC2A: mov     edx, [edi]
0x7BAC2C: mov     eax, [edx]
0x7BAC2E: push    1
0x7BAC30: mov     ecx, edi
0x7BAC32: call    eax
0x7BAC34: mov     [esi+88h], ebx
0x7BAC3A: mov     edi, [esi+98h]
0x7BAC40: cmp     edi, ebx
0x7BAC42: jz      short loc_7BAC62
0x7BAC44: lea     ecx, [edi+4]
0x7BAC47: push    ecx; lpAddend
0x7BAC48: call    ebp ; InterlockedDecrement
0x7BAC4A: test    eax, eax
0x7BAC4C: jnz     short loc_7BAC5C
0x7BAC4E: cmp     edi, ebx
0x7BAC50: jz      short loc_7BAC5C
0x7BAC52: mov     edx, [edi]
0x7BAC54: mov     eax, [edx]
0x7BAC56: push    1
0x7BAC58: mov     ecx, edi
0x7BAC5A: call    eax
0x7BAC5C: mov     [esi+98h], ebx
0x7BAC62: mov     edi, [esi+9Ch]
0x7BAC68: cmp     edi, ebx
0x7BAC6A: jz      short loc_7BAC8A
0x7BAC6C: lea     ecx, [edi+4]
0x7BAC6F: push    ecx; lpAddend
0x7BAC70: call    ebp ; InterlockedDecrement
0x7BAC72: test    eax, eax
0x7BAC74: jnz     short loc_7BAC84
0x7BAC76: cmp     edi, ebx
0x7BAC78: jz      short loc_7BAC84
0x7BAC7A: mov     edx, [edi]
0x7BAC7C: mov     eax, [edx]
0x7BAC7E: push    1
0x7BAC80: mov     ecx, edi
0x7BAC82: call    eax
0x7BAC84: mov     [esi+9Ch], ebx
0x7BAC8A: mov     edi, [esi+0A0h]
0x7BAC90: cmp     edi, ebx
0x7BAC92: jz      short loc_7BACB2
0x7BAC94: lea     ecx, [edi+4]
0x7BAC97: push    ecx; lpAddend
0x7BAC98: call    ebp ; InterlockedDecrement
0x7BAC9A: test    eax, eax
0x7BAC9C: jnz     short loc_7BACAC
0x7BAC9E: cmp     edi, ebx
0x7BACA0: jz      short loc_7BACAC
0x7BACA2: mov     edx, [edi]
0x7BACA4: mov     eax, [edx]
0x7BACA6: push    1
0x7BACA8: mov     ecx, edi
0x7BACAA: call    eax
0x7BACAC: mov     [esi+0A0h], ebx
0x7BACB2: mov     edi, [esi+0A4h]
0x7BACB8: cmp     edi, ebx
0x7BACBA: jz      short loc_7BACDA
0x7BACBC: lea     ecx, [edi+4]
0x7BACBF: push    ecx; lpAddend
0x7BACC0: call    ebp ; InterlockedDecrement
0x7BACC2: test    eax, eax
0x7BACC4: jnz     short loc_7BACD4
0x7BACC6: cmp     edi, ebx
0x7BACC8: jz      short loc_7BACD4
0x7BACCA: mov     edx, [edi]
0x7BACCC: mov     eax, [edx]
0x7BACCE: push    1
0x7BACD0: mov     ecx, edi
0x7BACD2: call    eax
0x7BACD4: mov     [esi+0A4h], ebx
0x7BACDA: mov     edi, [esi+0A8h]
0x7BACE0: cmp     edi, ebx
0x7BACE2: jz      short loc_7BAD02
0x7BACE4: lea     ecx, [edi+4]
0x7BACE7: push    ecx; lpAddend
0x7BACE8: call    ebp ; InterlockedDecrement
0x7BACEA: test    eax, eax
0x7BACEC: jnz     short loc_7BACFC
0x7BACEE: cmp     edi, ebx
0x7BACF0: jz      short loc_7BACFC
0x7BACF2: mov     edx, [edi]
0x7BACF4: mov     eax, [edx]
0x7BACF6: push    1
0x7BACF8: mov     ecx, edi
0x7BACFA: call    eax
0x7BACFC: mov     [esi+0A8h], ebx
0x7BAD02: mov     edi, [esi+0D8h]
0x7BAD08: cmp     edi, ebx
0x7BAD0A: mov     byte ptr [esp+24h+var_4], 17h
0x7BAD0F: jz      short loc_7BAD29
0x7BAD11: lea     ecx, [edi+4]
0x7BAD14: push    ecx; lpAddend
0x7BAD15: call    ebp ; InterlockedDecrement
0x7BAD17: test    eax, eax
0x7BAD19: jnz     short loc_7BAD29
0x7BAD1B: cmp     edi, ebx
0x7BAD1D: jz      short loc_7BAD29
0x7BAD1F: mov     edx, [edi]
0x7BAD21: mov     eax, [edx]
0x7BAD23: push    1
0x7BAD25: mov     ecx, edi
0x7BAD27: call    eax
0x7BAD29: mov     edi, [esi+0D4h]
0x7BAD2F: cmp     edi, ebx
0x7BAD31: mov     byte ptr [esp+24h+var_4], 16h
0x7BAD36: jz      short loc_7BAD50
0x7BAD38: lea     ecx, [edi+4]
0x7BAD3B: push    ecx; lpAddend
0x7BAD3C: call    ebp ; InterlockedDecrement
0x7BAD3E: test    eax, eax
0x7BAD40: jnz     short loc_7BAD50
0x7BAD42: cmp     edi, ebx
0x7BAD44: jz      short loc_7BAD50
0x7BAD46: mov     edx, [edi]
0x7BAD48: mov     eax, [edx]
0x7BAD4A: push    1
0x7BAD4C: mov     ecx, edi
0x7BAD4E: call    eax
0x7BAD50: mov     edi, [esi+0D0h]
0x7BAD56: cmp     edi, ebx
0x7BAD58: mov     byte ptr [esp+24h+var_4], 15h
0x7BAD5D: jz      short loc_7BAD77
0x7BAD5F: lea     ecx, [edi+4]
0x7BAD62: push    ecx; lpAddend
0x7BAD63: call    ebp ; InterlockedDecrement
0x7BAD65: test    eax, eax
0x7BAD67: jnz     short loc_7BAD77
0x7BAD69: cmp     edi, ebx
0x7BAD6B: jz      short loc_7BAD77
0x7BAD6D: mov     edx, [edi]
0x7BAD6F: mov     eax, [edx]
0x7BAD71: push    1
0x7BAD73: mov     ecx, edi
0x7BAD75: call    eax
0x7BAD77: mov     edi, [esi+0CCh]
0x7BAD7D: cmp     edi, ebx
0x7BAD7F: mov     byte ptr [esp+24h+var_4], 14h
0x7BAD84: jz      short loc_7BAD9E
0x7BAD86: lea     ecx, [edi+4]
0x7BAD89: push    ecx; lpAddend
0x7BAD8A: call    ebp ; InterlockedDecrement
0x7BAD8C: test    eax, eax
0x7BAD8E: jnz     short loc_7BAD9E
0x7BAD90: cmp     edi, ebx
0x7BAD92: jz      short loc_7BAD9E
0x7BAD94: mov     edx, [edi]
0x7BAD96: mov     eax, [edx]
0x7BAD98: push    1
0x7BAD9A: mov     ecx, edi
0x7BAD9C: call    eax
0x7BAD9E: mov     edi, [esi+0C8h]
0x7BADA4: cmp     edi, ebx
0x7BADA6: mov     byte ptr [esp+24h+var_4], 13h
0x7BADAB: jz      short loc_7BADC5
0x7BADAD: lea     ecx, [edi+4]
0x7BADB0: push    ecx; lpAddend
0x7BADB1: call    ebp ; InterlockedDecrement
0x7BADB3: test    eax, eax
0x7BADB5: jnz     short loc_7BADC5
0x7BADB7: cmp     edi, ebx
0x7BADB9: jz      short loc_7BADC5
0x7BADBB: mov     edx, [edi]
0x7BADBD: mov     eax, [edx]
0x7BADBF: push    1
0x7BADC1: mov     ecx, edi
0x7BADC3: call    eax
0x7BADC5: mov     edi, [esi+0C4h]
0x7BADCB: cmp     edi, ebx
0x7BADCD: mov     byte ptr [esp+24h+var_4], 12h
0x7BADD2: jz      short loc_7BADEC
0x7BADD4: lea     ecx, [edi+4]
0x7BADD7: push    ecx; lpAddend
0x7BADD8: call    ebp ; InterlockedDecrement
0x7BADDA: test    eax, eax
0x7BADDC: jnz     short loc_7BADEC
0x7BADDE: cmp     edi, ebx
0x7BADE0: jz      short loc_7BADEC
0x7BADE2: mov     edx, [edi]
0x7BADE4: mov     eax, [edx]
0x7BADE6: push    1
0x7BADE8: mov     ecx, edi
0x7BADEA: call    eax
0x7BADEC: mov     ecx, [esi+0C0h]
0x7BADF2: or      edi, 0FFFFFFFFh
0x7BADF5: cmp     ecx, ebx
0x7BADF7: mov     byte ptr [esp+24h+var_4], 11h
0x7BADFC: jz      short loc_7BAE08
0x7BADFE: add     [ecx+60h], edi
0x7BAE01: jnz     short loc_7BAE08
0x7BAE03: call    sub_7604D0
0x7BAE08: mov     ecx, [esi+0BCh]
0x7BAE0E: cmp     ecx, ebx
0x7BAE10: mov     byte ptr [esp+24h+var_4], 10h
0x7BAE15: jz      short loc_7BAE21
0x7BAE17: add     [ecx+60h], edi
0x7BAE1A: jnz     short loc_7BAE21
0x7BAE1C: call    sub_7604D0
0x7BAE21: mov     ecx, [esi+0B8h]
0x7BAE27: cmp     ecx, ebx
0x7BAE29: mov     byte ptr [esp+24h+var_4], 0Fh
0x7BAE2E: jz      short loc_7BAE3A
0x7BAE30: add     [ecx+60h], edi
0x7BAE33: jnz     short loc_7BAE3A
0x7BAE35: call    sub_7604D0
0x7BAE3A: mov     ecx, [esi+0B4h]
0x7BAE40: cmp     ecx, ebx
0x7BAE42: mov     byte ptr [esp+24h+var_4], 0Eh
0x7BAE47: jz      short loc_7BAE53
0x7BAE49: add     [ecx+60h], edi
0x7BAE4C: jnz     short loc_7BAE53
0x7BAE4E: call    sub_7604D0
0x7BAE53: mov     ecx, [esi+0B0h]
0x7BAE59: cmp     ecx, ebx
0x7BAE5B: mov     byte ptr [esp+24h+var_4], 0Dh
0x7BAE60: jz      short loc_7BAE6C
0x7BAE62: add     [ecx+60h], edi
0x7BAE65: jnz     short loc_7BAE6C
0x7BAE67: call    sub_7604D0
0x7BAE6C: mov     ecx, [esi+0ACh]
0x7BAE72: cmp     ecx, ebx
0x7BAE74: mov     byte ptr [esp+24h+var_4], 0Ch
0x7BAE79: jz      short loc_7BAE85
0x7BAE7B: add     [ecx+60h], edi
0x7BAE7E: jnz     short loc_7BAE85
0x7BAE80: call    sub_7604D0
0x7BAE85: mov     edi, [esi+0A8h]
0x7BAE8B: cmp     edi, ebx
0x7BAE8D: mov     byte ptr [esp+24h+var_4], 0Bh
0x7BAE92: jz      short loc_7BAEAC
0x7BAE94: lea     ecx, [edi+4]
0x7BAE97: push    ecx; lpAddend
0x7BAE98: call    ebp ; InterlockedDecrement
0x7BAE9A: test    eax, eax
0x7BAE9C: jnz     short loc_7BAEAC
0x7BAE9E: cmp     edi, ebx
0x7BAEA0: jz      short loc_7BAEAC
0x7BAEA2: mov     edx, [edi]
0x7BAEA4: mov     eax, [edx]
0x7BAEA6: push    1
0x7BAEA8: mov     ecx, edi
0x7BAEAA: call    eax
0x7BAEAC: mov     edi, [esi+0A4h]
0x7BAEB2: cmp     edi, ebx
0x7BAEB4: mov     byte ptr [esp+24h+var_4], 0Ah
0x7BAEB9: jz      short loc_7BAED3
0x7BAEBB: lea     ecx, [edi+4]
0x7BAEBE: push    ecx; lpAddend
0x7BAEBF: call    ebp ; InterlockedDecrement
0x7BAEC1: test    eax, eax
0x7BAEC3: jnz     short loc_7BAED3
0x7BAEC5: cmp     edi, ebx
0x7BAEC7: jz      short loc_7BAED3
0x7BAEC9: mov     edx, [edi]
0x7BAECB: mov     eax, [edx]
0x7BAECD: push    1
0x7BAECF: mov     ecx, edi
0x7BAED1: call    eax
0x7BAED3: mov     edi, [esi+0A0h]
0x7BAED9: cmp     edi, ebx
0x7BAEDB: mov     byte ptr [esp+24h+var_4], 9
0x7BAEE0: jz      short loc_7BAEFA
0x7BAEE2: lea     ecx, [edi+4]
0x7BAEE5: push    ecx; lpAddend
0x7BAEE6: call    ebp ; InterlockedDecrement
0x7BAEE8: test    eax, eax
0x7BAEEA: jnz     short loc_7BAEFA
0x7BAEEC: cmp     edi, ebx
0x7BAEEE: jz      short loc_7BAEFA
0x7BAEF0: mov     edx, [edi]
0x7BAEF2: mov     eax, [edx]
0x7BAEF4: push    1
0x7BAEF6: mov     ecx, edi
0x7BAEF8: call    eax
0x7BAEFA: mov     edi, [esi+9Ch]
0x7BAF00: cmp     edi, ebx
0x7BAF02: mov     byte ptr [esp+24h+var_4], 8
0x7BAF07: jz      short loc_7BAF21
0x7BAF09: lea     ecx, [edi+4]
0x7BAF0C: push    ecx; lpAddend
0x7BAF0D: call    ebp ; InterlockedDecrement
0x7BAF0F: test    eax, eax
0x7BAF11: jnz     short loc_7BAF21
0x7BAF13: cmp     edi, ebx
0x7BAF15: jz      short loc_7BAF21
0x7BAF17: mov     edx, [edi]
0x7BAF19: mov     eax, [edx]
0x7BAF1B: push    1
0x7BAF1D: mov     ecx, edi
0x7BAF1F: call    eax
0x7BAF21: mov     edi, [esi+98h]
0x7BAF27: cmp     edi, ebx
0x7BAF29: mov     byte ptr [esp+24h+var_4], 7
0x7BAF2E: jz      short loc_7BAF48
0x7BAF30: lea     ecx, [edi+4]
0x7BAF33: push    ecx; lpAddend
0x7BAF34: call    ebp ; InterlockedDecrement
0x7BAF36: test    eax, eax
0x7BAF38: jnz     short loc_7BAF48
0x7BAF3A: cmp     edi, ebx
0x7BAF3C: jz      short loc_7BAF48
0x7BAF3E: mov     edx, [edi]
0x7BAF40: mov     eax, [edx]
0x7BAF42: push    1
0x7BAF44: mov     ecx, edi
0x7BAF46: call    eax
0x7BAF48: mov     edi, [esi+94h]
0x7BAF4E: cmp     edi, ebx
0x7BAF50: mov     byte ptr [esp+24h+var_4], 6
0x7BAF55: jz      short loc_7BAF6F
0x7BAF57: lea     ecx, [edi+4]
0x7BAF5A: push    ecx; lpAddend
0x7BAF5B: call    ebp ; InterlockedDecrement
0x7BAF5D: test    eax, eax
0x7BAF5F: jnz     short loc_7BAF6F
0x7BAF61: cmp     edi, ebx
0x7BAF63: jz      short loc_7BAF6F
0x7BAF65: mov     edx, [edi]
0x7BAF67: mov     eax, [edx]
0x7BAF69: push    1
0x7BAF6B: mov     ecx, edi
0x7BAF6D: call    eax
0x7BAF6F: mov     edi, [esi+90h]
0x7BAF75: cmp     edi, ebx
0x7BAF77: mov     byte ptr [esp+24h+var_4], 5
0x7BAF7C: jz      short loc_7BAF96
0x7BAF7E: lea     ecx, [edi+4]
0x7BAF81: push    ecx; lpAddend
0x7BAF82: call    ebp ; InterlockedDecrement
0x7BAF84: test    eax, eax
0x7BAF86: jnz     short loc_7BAF96
0x7BAF88: cmp     edi, ebx
0x7BAF8A: jz      short loc_7BAF96
0x7BAF8C: mov     edx, [edi]
0x7BAF8E: mov     eax, [edx]
0x7BAF90: push    1
0x7BAF92: mov     ecx, edi
0x7BAF94: call    eax
0x7BAF96: mov     edi, [esi+8Ch]
0x7BAF9C: cmp     edi, ebx
0x7BAF9E: mov     byte ptr [esp+24h+var_4], 4
0x7BAFA3: jz      short loc_7BAFBD
0x7BAFA5: lea     ecx, [edi+4]
0x7BAFA8: push    ecx; lpAddend
0x7BAFA9: call    ebp ; InterlockedDecrement
0x7BAFAB: test    eax, eax
0x7BAFAD: jnz     short loc_7BAFBD
0x7BAFAF: cmp     edi, ebx
0x7BAFB1: jz      short loc_7BAFBD
0x7BAFB3: mov     edx, [edi]
0x7BAFB5: mov     eax, [edx]
0x7BAFB7: push    1
0x7BAFB9: mov     ecx, edi
0x7BAFBB: call    eax
0x7BAFBD: mov     edi, [esi+88h]
0x7BAFC3: cmp     edi, ebx
0x7BAFC5: mov     byte ptr [esp+24h+var_4], 3
0x7BAFCA: jz      short loc_7BAFE4
0x7BAFCC: lea     ecx, [edi+4]
0x7BAFCF: push    ecx; lpAddend
0x7BAFD0: call    ebp ; InterlockedDecrement
0x7BAFD2: test    eax, eax
0x7BAFD4: jnz     short loc_7BAFE4
0x7BAFD6: cmp     edi, ebx
0x7BAFD8: jz      short loc_7BAFE4
0x7BAFDA: mov     edx, [edi]
0x7BAFDC: mov     eax, [edx]
0x7BAFDE: push    1
0x7BAFE0: mov     ecx, edi
0x7BAFE2: call    eax
0x7BAFE4: mov     edi, [esi+84h]
0x7BAFEA: cmp     edi, ebx
0x7BAFEC: mov     byte ptr [esp+24h+var_4], 2
0x7BAFF1: jz      short loc_7BB00B
0x7BAFF3: lea     ecx, [edi+4]
0x7BAFF6: push    ecx; lpAddend
0x7BAFF7: call    ebp ; InterlockedDecrement
0x7BAFF9: test    eax, eax
0x7BAFFB: jnz     short loc_7BB00B
0x7BAFFD: cmp     edi, ebx
0x7BAFFF: jz      short loc_7BB00B
0x7BB001: mov     edx, [edi]
0x7BB003: mov     eax, [edx]
0x7BB005: push    1
0x7BB007: mov     ecx, edi
0x7BB009: call    eax
0x7BB00B: mov     edi, [esi+80h]
0x7BB011: cmp     edi, ebx
0x7BB013: mov     byte ptr [esp+24h+var_4], 1
0x7BB018: jz      short loc_7BB032
0x7BB01A: lea     ecx, [edi+4]
0x7BB01D: push    ecx; lpAddend
0x7BB01E: call    ebp ; InterlockedDecrement
0x7BB020: test    eax, eax
0x7BB022: jnz     short loc_7BB032
0x7BB024: cmp     edi, ebx
0x7BB026: jz      short loc_7BB032
0x7BB028: mov     edx, [edi]
0x7BB02A: mov     eax, [edx]
0x7BB02C: push    1
0x7BB02E: mov     ecx, edi
0x7BB030: call    eax
0x7BB032: mov     edi, [esi+7Ch]
0x7BB035: cmp     edi, ebx
0x7BB037: mov     byte ptr [esp+24h+var_4], bl
0x7BB03B: jz      short loc_7BB055
0x7BB03D: lea     ecx, [edi+4]
0x7BB040: push    ecx; lpAddend
0x7BB041: call    ebp ; InterlockedDecrement
0x7BB043: test    eax, eax
0x7BB045: jnz     short loc_7BB055
0x7BB047: cmp     edi, ebx
0x7BB049: jz      short loc_7BB055
0x7BB04B: mov     edx, [edi]
0x7BB04D: mov     eax, [edx]
0x7BB04F: push    1
0x7BB051: mov     ecx, edi
0x7BB053: call    eax
0x7BB055: mov     ecx, esi; this
0x7BB057: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7BB05F: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x7BB064: mov     ecx, dword ptr [esp+24h+var_C]
0x7BB068: mov     large fs:0, ecx
0x7BB06F: pop     ecx
0x7BB070: pop     edi
0x7BB071: pop     esi
0x7BB072: pop     ebp
0x7BB073: pop     ebx
0x7BB074: add     esp, 10h
0x7BB077: retn
