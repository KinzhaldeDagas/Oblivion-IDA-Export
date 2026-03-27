0x7AC9A0: sub     esp, 0Ch
0x7AC9A3: cmp     byte ptr ds:0B42CE8h, 0
0x7AC9AA: push    ebx
0x7AC9AB: push    ebp
0x7AC9AC: push    esi
0x7AC9AD: push    edi
0x7AC9AE: mov     edi, [esp+1Ch+arg_0]
0x7AC9B2: mov     [esp+1Ch+var_C], ecx
0x7AC9B6: movzx   esi, di
0x7AC9B9: jz      short loc_7AC9D4
0x7AC9BB: cmp     edi, 49h ; 'I'
0x7AC9BE: jnz     short loc_7AC9C7
0x7AC9C0: mov     edi, 48h ; 'H'
0x7AC9C5: jmp     short loc_7AC9D4
0x7AC9C7: cmp     edi, 16Fh
0x7AC9CD: jnz     short loc_7AC9D4
0x7AC9CF: mov     edi, 16Eh
0x7AC9D4: push    1; a1
0x7AC9D6: call    GetShaderDefinition
0x7AC9DB: mov     ebp, [eax+4]
0x7AC9DE: mov     ecx, [esp+20h+var_C]
0x7AC9E2: add     eax, 4
0x7AC9E5: movzx   eax, si
0x7AC9E8: mov     [esp+20h+arg_0], eax
0x7AC9EC: lea     eax, [eax+eax*4]
0x7AC9EF: lea     ebx, [ecx+eax*4]
0x7AC9F2: add     esp, 4
0x7AC9F5: cmp     dword ptr [ebx+114h], 0
0x7AC9FC: jbe     loc_7ACF2B
0x7ACA02: mov     edx, [ebx+108h]
0x7ACA08: mov     eax, [edx+8]
0x7ACA0B: mov     ecx, [eax]
0x7ACA0D: mov     esi, [ecx+0BCh]
0x7ACA13: xor     eax, eax
0x7ACA15: cmp     esi, eax
0x7ACA17: mov     [esp+1Ch+var_8], eax
0x7ACA1B: mov     [esp+1Ch+var_4], eax
0x7ACA1F: jz      loc_7ACAAE
0x7ACA25: mov     edx, [esi]
0x7ACA27: mov     eax, [edx+1Ch]
0x7ACA2A: mov     ecx, esi
0x7ACA2C: call    eax
0x7ACA2E: cmp     eax, 1
0x7ACA31: jl      short loc_7ACA7A
0x7ACA33: mov     edx, [esi]
0x7ACA35: mov     eax, [edx+1Ch]
0x7ACA38: mov     ecx, esi
0x7ACA3A: call    eax
0x7ACA3C: cmp     eax, 5
0x7ACA3F: jg      short loc_7ACA7A
0x7ACA41: mov     ecx, [esp+1Ch+arg_4]
0x7ACA45: push    ecx
0x7ACA46: push    edi
0x7ACA47: mov     [esp+24h+var_8], esi
0x7ACA4B: call    sub_7D1320
0x7ACA50: mov     ecx, [esi+30h]
0x7ACA53: mov     edx, [ecx]
0x7ACA55: mov     eax, [edx+48h]
0x7ACA58: add     esp, 8
0x7ACA5B: call    eax
0x7ACA5D: mov     ecx, [esi+2Ch]
0x7ACA60: mov     edx, [ecx]
0x7ACA62: mov     eax, [edx+48h]
0x7ACA65: call    eax
0x7ACA67: cmp     esi, ebp
0x7ACA69: jz      short loc_7ACAAE
0x7ACA6B: mov     ecx, [ebp+30h]
0x7ACA6E: mov     edx, [ecx]
0x7ACA70: mov     eax, [edx+48h]
0x7ACA73: call    eax
0x7ACA75: mov     ecx, [ebp+2Ch]
0x7ACA78: jmp     short loc_7ACAA7
0x7ACA7A: mov     edx, [esi]
0x7ACA7C: mov     eax, [edx+1Ch]
0x7ACA7F: mov     ecx, esi
0x7ACA81: call    eax
0x7ACA83: cmp     eax, 1Bh
0x7ACA86: jnz     short loc_7ACAAE
0x7ACA88: mov     ecx, [esp+1Ch+arg_4]
0x7ACA8C: push    ecx
0x7ACA8D: push    edi
0x7ACA8E: mov     [esp+24h+var_4], esi
0x7ACA92: call    sub_7FD260
0x7ACA97: mov     ecx, [esi+30h]
0x7ACA9A: mov     edx, [ecx]
0x7ACA9C: mov     eax, [edx+48h]
0x7ACA9F: add     esp, 8
0x7ACAA2: call    eax
0x7ACAA4: mov     ecx, [esi+2Ch]
0x7ACAA7: mov     edx, [ecx]
0x7ACAA9: mov     eax, [edx+48h]
0x7ACAAC: call    eax
0x7ACAAE: cmp     byte ptr ds:0B2BB7Ch, 0
0x7ACAB5: jz      loc_7ACD4B
0x7ACABB: cmp     edi, 48h ; 'H'
0x7ACABE: jz      loc_7ACD19
0x7ACAC4: cmp     edi, 49h ; 'I'
0x7ACAC7: jz      loc_7ACD19
0x7ACACD: cmp     edi, 168h
0x7ACAD3: jb      short loc_7ACAE1
0x7ACAD5: cmp     edi, 175h
0x7ACADB: jbe     loc_7ACD19
0x7ACAE1: cmp     edi, 0Ch
0x7ACAE4: jz      loc_7ACCE7
0x7ACAEA: cmp     edi, 0Dh
0x7ACAED: jz      loc_7ACCE7
0x7ACAF3: cmp     edi, 195h
0x7ACAF9: jb      short loc_7ACB07
0x7ACAFB: cmp     edi, 197h
0x7ACB01: jbe     loc_7ACCE7
0x7ACB07: cmp     edi, 54h ; 'T'
0x7ACB0A: jz      loc_7ACCB5
0x7ACB10: cmp     edi, 5Fh ; '_'
0x7ACB13: jz      loc_7ACCB5
0x7ACB19: cmp     edi, 6Ah ; 'j'
0x7ACB1C: jz      loc_7ACCB5
0x7ACB22: cmp     edi, 75h ; 'u'
0x7ACB25: jz      loc_7ACCB5
0x7ACB2B: cmp     edi, 82h ; '‚'
0x7ACB31: jz      loc_7ACCB5
0x7ACB37: cmp     edi, 90h
0x7ACB3D: jz      loc_7ACCB5
0x7ACB43: cmp     edi, 9Dh
0x7ACB49: jz      loc_7ACCB5
0x7ACB4F: cmp     edi, 0AAh ; 'ª'
0x7ACB55: jz      loc_7ACCB5
0x7ACB5B: cmp     edi, 0B8h ; '¸'
0x7ACB61: jz      loc_7ACCB5
0x7ACB67: cmp     edi, 0C5h ; 'Å'
0x7ACB6D: jz      loc_7ACCB5
0x7ACB73: cmp     edi, 0D2h ; 'Ò'
0x7ACB79: jz      loc_7ACCB5
0x7ACB7F: cmp     edi, 0DFh ; 'ß'
0x7ACB85: jz      loc_7ACCB5
0x7ACB8B: cmp     edi, 0EEh ; 'î'
0x7ACB91: jz      loc_7ACCB5
0x7ACB97: cmp     edi, 0F5h ; 'õ'
0x7ACB9D: jz      loc_7ACCB5
0x7ACBA3: cmp     edi, 0FCh ; 'ü'
0x7ACBA9: jz      loc_7ACCB5
0x7ACBAF: cmp     edi, 103h
0x7ACBB5: jz      loc_7ACCB5
0x7ACBBB: cmp     edi, 10Bh
0x7ACBC1: jz      loc_7ACCB5
0x7ACBC7: cmp     edi, 11Bh
0x7ACBCD: jz      loc_7ACCB5
0x7ACBD3: cmp     edi, 122h
0x7ACBD9: jz      loc_7ACCB5
0x7ACBDF: cmp     edi, 129h
0x7ACBE5: jz      loc_7ACCB5
0x7ACBEB: cmp     edi, 194h
0x7ACBF1: jz      loc_7ACCB5
0x7ACBF7: cmp     edi, 18h
0x7ACBFA: jz      loc_7ACCB5
0x7ACC00: cmp     edi, 2Fh ; '/'
0x7ACC03: jz      loc_7ACCB5
0x7ACC09: cmp     edi, 30h ; '0'
0x7ACC0C: jz      loc_7ACCB5
0x7ACC12: cmp     edi, 33h ; '3'
0x7ACC15: jz      loc_7ACCB5
0x7ACC1B: cmp     edi, 0E7h ; 'ç'
0x7ACC21: jz      loc_7ACCB5
0x7ACC27: cmp     edi, 113h
0x7ACC2D: jz      loc_7ACCB5
0x7ACC33: cmp     edi, 114h
0x7ACC39: jz      short loc_7ACCB5
0x7ACC3B: cmp     edi, 0Eh
0x7ACC3E: jnz     short loc_7ACC73
0x7ACC40: mov     eax, [esp+1Ch+arg_0]
0x7ACC44: mov     edi, [esp+1Ch+var_C]
0x7ACC48: lea     ecx, [eax+eax*4+41h]
0x7ACC4C: lea     esi, [edi+ecx*4]
0x7ACC4F: push    offset sub_7AA390
0x7ACC54: mov     ecx, esi
0x7ACC56: call    sub_7AA550
0x7ACC5B: mov     ecx, [edi+2264h]
0x7ACC61: push    0Eh
0x7ACC63: push    esi
0x7ACC64: call    sub_7F86C0
0x7ACC69: pop     edi
0x7ACC6A: pop     esi
0x7ACC6B: pop     ebp
0x7ACC6C: pop     ebx
0x7ACC6D: add     esp, 0Ch
0x7ACC70: retn    8
0x7ACC73: cmp     edi, 17Bh
0x7ACC79: jnz     loc_7ACD4B
0x7ACC7F: mov     eax, [esp+1Ch+arg_0]
0x7ACC83: mov     edi, [esp+1Ch+var_C]
0x7ACC87: lea     edx, [eax+eax*4+41h]
0x7ACC8B: lea     esi, [edi+edx*4]
0x7ACC8E: push    offset sub_7AA390
0x7ACC93: mov     ecx, esi
0x7ACC95: call    sub_7AA550
0x7ACC9A: mov     ecx, [edi+2264h]
0x7ACCA0: push    17Bh
0x7ACCA5: push    esi
0x7ACCA6: call    sub_7F8DB0
0x7ACCAB: pop     edi
0x7ACCAC: pop     esi
0x7ACCAD: pop     ebp
0x7ACCAE: pop     ebx
0x7ACCAF: add     esp, 0Ch
0x7ACCB2: retn    8
0x7ACCB5: mov     eax, [esp+1Ch+arg_0]
0x7ACCB9: mov     ebx, [esp+1Ch+var_C]
0x7ACCBD: lea     eax, [eax+eax*4+41h]
0x7ACCC1: lea     esi, [ebx+eax*4]
0x7ACCC4: push    offset sub_7AA390
0x7ACCC9: mov     ecx, esi
0x7ACCCB: call    sub_7AA550
0x7ACCD0: mov     ecx, [ebx+2264h]
0x7ACCD6: push    edi
0x7ACCD7: push    esi
0x7ACCD8: call    sub_7F7EE0
0x7ACCDD: pop     edi
0x7ACCDE: pop     esi
0x7ACCDF: pop     ebp
0x7ACCE0: pop     ebx
0x7ACCE1: add     esp, 0Ch
0x7ACCE4: retn    8
0x7ACCE7: mov     eax, [esp+1Ch+arg_0]
0x7ACCEB: mov     ebx, [esp+1Ch+var_C]
0x7ACCEF: lea     ecx, [eax+eax*4+41h]
0x7ACCF3: lea     esi, [ebx+ecx*4]
0x7ACCF6: push    offset sub_7AA390
0x7ACCFB: mov     ecx, esi
0x7ACCFD: call    sub_7AA550
0x7ACD02: mov     ecx, [ebx+2264h]
0x7ACD08: push    edi
0x7ACD09: push    esi
0x7ACD0A: call    sub_7F7680
0x7ACD0F: pop     edi
0x7ACD10: pop     esi
0x7ACD11: pop     ebp
0x7ACD12: pop     ebx
0x7ACD13: add     esp, 0Ch
0x7ACD16: retn    8
0x7ACD19: mov     eax, [esp+1Ch+arg_0]
0x7ACD1D: mov     ebx, [esp+1Ch+var_C]
0x7ACD21: lea     edx, [eax+eax*4+41h]
0x7ACD25: lea     esi, [ebx+edx*4]
0x7ACD28: push    offset sub_7AA390
0x7ACD2D: mov     ecx, esi
0x7ACD2F: call    sub_7AA550
0x7ACD34: mov     ecx, [ebx+2264h]
0x7ACD3A: push    edi
0x7ACD3B: push    esi
0x7ACD3C: call    sub_7F6FC0
0x7ACD41: pop     edi
0x7ACD42: pop     esi
0x7ACD43: pop     ebp
0x7ACD44: pop     ebx
0x7ACD45: add     esp, 0Ch
0x7ACD48: retn    8
0x7ACD4B: cmp     byte ptr ds:0B42E97h, 0
0x7ACD52: mov     eax, [ebx+108h]
0x7ACD58: mov     esi, [eax+8]
0x7ACD5B: lea     ecx, [eax+8]
0x7ACD5E: mov     eax, [eax]
0x7ACD60: mov     [esp+1Ch+arg_4], eax
0x7ACD64: jz      short loc_7ACD8C
0x7ACD66: mov     ecx, [esp+1Ch+var_C]
0x7ACD6A: mov     eax, [ecx+21F0h]
0x7ACD70: test    eax, eax
0x7ACD72: jz      short loc_7ACD8C
0x7ACD74: mov     ebp, [esi]
0x7ACD76: cmp     ebp, [eax+8]
0x7ACD79: lea     ecx, [eax+8]
0x7ACD7C: mov     edx, eax
0x7ACD7E: mov     eax, [eax]
0x7ACD80: jz      short loc_7ACD88
0x7ACD82: test    eax, eax
0x7ACD84: jnz     short loc_7ACD76
0x7ACD86: jmp     short loc_7ACD8C
0x7ACD88: test    edx, edx
0x7ACD8A: jnz     short loc_7ACE0B
0x7ACD8C: cmp     edi, 160h
0x7ACD92: jb      short loc_7ACD9C
0x7ACD94: cmp     edi, 162h
0x7ACD9A: jbe     short loc_7ACDA7
0x7ACD9C: lea     edx, [edi-156h]
0x7ACDA2: cmp     edx, 2
0x7ACDA5: ja      short loc_7ACDB9
0x7ACDA7: mov     ecx, [esp+1Ch+var_C]
0x7ACDAB: push    esi
0x7ACDAC: add     ecx, 2200h
0x7ACDB2: call    sub_7ABDE0
0x7ACDB7: jmp     short loc_7ACDE9
0x7ACDB9: mov     ebp, [esp+1Ch+var_C]
0x7ACDBD: cmp     byte ptr [ebp+21E2h], 0
0x7ACDC4: jz      short loc_7ACDE0
0x7ACDC6: cmp     [esp+1Ch+var_8], 0
0x7ACDCB: jnz     short loc_7ACDD4
0x7ACDCD: cmp     [esp+1Ch+var_4], 0
0x7ACDD2: jz      short loc_7ACDE0
0x7ACDD4: push    esi
0x7ACDD5: lea     ecx, [ebp+2214h]
0x7ACDDB: call    sub_7ABDE0
0x7ACDE0: push    edi; float
0x7ACDE1: push    esi; int
0x7ACDE2: mov     ecx, ebp
0x7ACDE4: call    sub_7A9820
0x7ACDE9: add     dword ptr ds:0B42CBCh, 1
0x7ACDF0: mov     eax, [esi]
0x7ACDF2: mov     ecx, [eax+0B4h]
0x7ACDF8: mov     edx, [ecx]
0x7ACDFA: mov     eax, [edx+5Ch]
0x7ACDFD: call    eax
0x7ACDFF: movzx   eax, ax
0x7ACE02: movzx   ecx, ax; void *
0x7ACE05: add     ds:0B42CB4h, ecx
0x7ACE0B: cmp     [esp+1Ch+var_8], 0
0x7ACE10: jz      short loc_7ACE1A
0x7ACE12: push    edi
0x7ACE13: call    sub_7D1800
0x7ACE18: jmp     short loc_7ACE27
0x7ACE1A: cmp     [esp+1Ch+var_4], 0
0x7ACE1F: jz      short loc_7ACE2A
0x7ACE21: push    edi
0x7ACE22: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7ACE27: add     esp, 4
0x7ACE2A: cmp     [esp+1Ch+arg_4], 0
0x7ACE2F: mov     ebx, [esp+1Ch+var_C]
0x7ACE33: jz      loc_7ACEFF
0x7ACE39: lea     esp, [esp+0]
0x7ACE40: cmp     byte ptr ds:0B42E97h, 0
0x7ACE47: mov     ecx, [esp+1Ch+arg_4]
0x7ACE4B: mov     edx, [ecx]
0x7ACE4D: mov     ebp, [ecx+8]
0x7ACE50: lea     eax, [ecx+8]
0x7ACE53: mov     [esp+1Ch+arg_4], edx
0x7ACE57: jz      short loc_7ACE7C
0x7ACE59: mov     eax, [ebx+21F0h]
0x7ACE5F: test    eax, eax
0x7ACE61: jz      short loc_7ACE7C
0x7ACE63: mov     esi, [ebp+0]
0x7ACE66: cmp     esi, [eax+8]
0x7ACE69: lea     ecx, [eax+8]
0x7ACE6C: mov     edx, eax
0x7ACE6E: mov     eax, [eax]
0x7ACE70: jz      short loc_7ACE78
0x7ACE72: test    eax, eax
0x7ACE74: jnz     short loc_7ACE66
0x7ACE76: jmp     short loc_7ACE7C
0x7ACE78: test    edx, edx
0x7ACE7A: jnz     short loc_7ACEF4
0x7ACE7C: cmp     edi, 160h
0x7ACE82: jb      short loc_7ACE8C
0x7ACE84: cmp     edi, 162h
0x7ACE8A: jbe     short loc_7ACE97
0x7ACE8C: lea     eax, [edi-156h]
0x7ACE92: cmp     eax, 2
0x7ACE95: ja      short loc_7ACEA5
0x7ACE97: push    ebp
0x7ACE98: lea     ecx, [ebx+2200h]
0x7ACE9E: call    sub_7ABDE0
0x7ACEA3: jmp     short loc_7ACED1
0x7ACEA5: cmp     byte ptr [ebx+21E2h], 0
0x7ACEAC: jz      short loc_7ACEC8
0x7ACEAE: cmp     [esp+1Ch+var_8], 0
0x7ACEB3: jnz     short loc_7ACEBC
0x7ACEB5: cmp     [esp+1Ch+var_4], 0
0x7ACEBA: jz      short loc_7ACEC8
0x7ACEBC: push    ebp
0x7ACEBD: lea     ecx, [ebx+2214h]
0x7ACEC3: call    sub_7ABDE0
0x7ACEC8: push    edi; float
0x7ACEC9: push    ebp; int
0x7ACECA: mov     ecx, ebx
0x7ACECC: call    sub_7A9820
0x7ACED1: add     dword ptr ds:0B42CBCh, 1
0x7ACED8: mov     ecx, [ebp+0]
0x7ACEDB: mov     ecx, [ecx+0B4h]
0x7ACEE1: mov     edx, [ecx]
0x7ACEE3: mov     eax, [edx+5Ch]
0x7ACEE6: call    eax
0x7ACEE8: movzx   eax, ax
0x7ACEEB: movzx   ecx, ax
0x7ACEEE: add     ds:0B42CB4h, ecx
0x7ACEF4: cmp     [esp+1Ch+arg_4], 0
0x7ACEF9: jnz     loc_7ACE40
0x7ACEFF: cmp     byte ptr ds:0B42CDAh, 0
0x7ACF06: jnz     short loc_7ACF2B
0x7ACF08: mov     eax, [esp+1Ch+arg_0]
0x7ACF0C: lea     edx, [eax+eax*4+41h]
0x7ACF10: lea     esi, [ebx+edx*4]
0x7ACF13: mov     ecx, esi
0x7ACF15: call    sub_7A9C30
0x7ACF1A: mov     eax, [esi+4]
0x7ACF1D: mov     [esi+0Ch], eax
0x7ACF20: xor     eax, eax
0x7ACF22: mov     [esi+4], eax
0x7ACF25: mov     [esi+8], eax
0x7ACF28: mov     [esi+10h], eax
0x7ACF2B: pop     edi
0x7ACF2C: pop     esi
0x7ACF2D: pop     ebp
0x7ACF2E: pop     ebx
0x7ACF2F: add     esp, 0Ch
0x7ACF32: retn    8
