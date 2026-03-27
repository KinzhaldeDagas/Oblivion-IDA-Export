0x69BA90: sub     esp, 18h
0x69BA93: push    ebx
0x69BA94: push    ebp
0x69BA95: mov     ebp, [esp+20h+arg_0]
0x69BA99: push    esi
0x69BA9A: push    edi
0x69BA9B: xor     edi, edi
0x69BA9D: cmp     ebp, edi
0x69BA9F: mov     ebx, ecx
0x69BAA1: jz      short loc_69BAAC
0x69BAA3: lea     eax, [ebp+0Ch]
0x69BAA6: mov     [esp+28h+var_18], eax
0x69BAAA: jmp     short loc_69BAB0
0x69BAAC: mov     [esp+28h+var_18], edi
0x69BAB0: mov     edx, [ebp+0]
0x69BAB3: mov     eax, [edx+18h]
0x69BAB6: mov     ecx, ebp
0x69BAB8: call    eax
0x69BABA: test    eax, eax
0x69BABC: jnz     short loc_69BAD0
0x69BABE: fldz
0x69BAC0: mov     edx, [ebx]
0x69BAC2: mov     eax, [edx+2Ch]
0x69BAC5: push    ecx
0x69BAC6: fstp    [esp+2Ch+var_2C]
0x69BAC9: push    edi
0x69BACA: mov     ecx, ebx
0x69BACC: call    eax
0x69BACE: jmp     short loc_69BAD2
0x69BAD0: fld1
0x69BAD2: fstp    [esp+28h+var_14]
0x69BAD6: push    edi
0x69BAD7: fld     [esp+2Ch+var_14]
0x69BADB: lea     ecx, [ebp+0Ch]
0x69BADE: fmul    [esp+2Ch+arg_20]
0x69BAE2: push    2
0x69BAE4: fstp    [esp+30h+var_14]
0x69BAE8: call    EffectItemList_GetStrongestItem
0x69BAED: mov     edx, [esp+28h+arg_8]
0x69BAF1: lea     ecx, [esp+28h+var_8]
0x69BAF5: push    ecx
0x69BAF6: mov     ecx, [esp+2Ch+arg_C]
0x69BAFA: sub     esp, 0Ch
0x69BAFD: mov     esi, eax
0x69BAFF: mov     eax, esp
0x69BB01: mov     [eax], edx
0x69BB03: mov     edx, [esp+38h+arg_10]
0x69BB07: mov     [eax+4], ecx
0x69BB0A: push    2; float
0x69BB0C: push    ebp; int
0x69BB0D: mov     ecx, ebx
0x69BB0F: mov     [esp+40h+var_C], esi
0x69BB13: mov     [esp+40h+var_4], edi
0x69BB17: mov     [esp+40h+var_8], edi
0x69BB1B: mov     [eax+8], edx
0x69BB1E: call    MagicCaster_GetTargetsInArea?
0x69BB23: cmp     [esp+28h+var_18], edi
0x69BB27: mov     byte ptr [esp+28h+arg_0], 0
0x69BB2C: jz      loc_69BCF6
0x69BB32: mov     eax, [esp+28h+var_18]
0x69BB36: mov     edi, [eax+4]
0x69BB39: test    edi, edi
0x69BB3B: jz      loc_69BCD6
0x69BB41: cmp     dword ptr [edi+10h], 2
0x69BB45: jnz     loc_69BCD6
0x69BB4B: cmp     dword ptr [edi], 454C4554h
0x69BB51: jz      loc_69BCD6
0x69BB57: mov     edx, [ebx]
0x69BB59: mov     eax, [edx+40h]
0x69BB5C: push    0
0x69BB5E: push    edi
0x69BB5F: push    ebp
0x69BB60: mov     ecx, ebx
0x69BB62: call    eax
0x69BB64: cmp     edi, [esp+28h+var_C]
0x69BB68: mov     esi, eax
0x69BB6A: jz      short loc_69BB70
0x69BB6C: or      dword ptr [esi+14h], 0Eh
0x69BB70: fld     [esp+28h+var_14]
0x69BB74: push    ecx
0x69BB75: mov     ecx, esi
0x69BB77: fstp    [esp+2Ch+var_2C]; float
0x69BB7A: call    ActiveEffect_Base_ApplyScalingFactor
0x69BB7F: mov     edi, [esp+28h+arg_18]
0x69BB83: test    edi, edi
0x69BB85: jz      loc_69BC85
0x69BB8B: mov     edx, [edi]
0x69BB8D: mov     eax, [edx+124h]
0x69BB93: mov     ecx, edi
0x69BB95: call    eax
0x69BB97: test    eax, eax
0x69BB99: jz      loc_69BC69
0x69BB9F: mov     edx, [ebx]
0x69BBA1: mov     eax, [edx+20h]
0x69BBA4: mov     ecx, ebx
0x69BBA6: call    eax
0x69BBA8: cmp     edi, eax
0x69BBAA: jz      loc_69BC69
0x69BBB0: mov     eax, [esp+28h+arg_14]
0x69BBB4: test    eax, eax
0x69BBB6: jz      short loc_69BBE4
0x69BBB8: mov     ecx, [esp+28h+arg_18]
0x69BBBC: mov     edi, [eax]
0x69BBBE: mov     edx, [ecx]
0x69BBC0: mov     eax, [edx+124h]
0x69BBC6: push    esi
0x69BBC7: add     edi, 21Ch
0x69BBCD: call    eax
0x69BBCF: mov     ecx, [esp+28h+arg_18]
0x69BBD3: mov     edx, [edi]
0x69BBD5: push    eax
0x69BBD6: call    edx
0x69BBD8: test    al, al
0x69BBDA: mov     edi, [esp+28h+arg_18]
0x69BBDE: jz      loc_69BC69
0x69BBE4: mov     eax, [edi]
0x69BBE6: mov     edx, [eax+124h]
0x69BBEC: mov     ecx, edi
0x69BBEE: call    edx
0x69BBF0: mov     edx, [eax]
0x69BBF2: push    0
0x69BBF4: push    esi
0x69BBF5: push    ebp
0x69BBF6: mov     ecx, eax
0x69BBF8: mov     eax, [edx]
0x69BBFA: push    ebx
0x69BBFB: call    eax
0x69BBFD: test    al, al
0x69BBFF: jz      short loc_69BC69
0x69BC01: mov     ecx, [esp+28h+arg_14]
0x69BC05: mov     ecx, [ecx+68h]; this
0x69BC08: test    ecx, ecx
0x69BC0A: jz      short loc_69BC77
0x69BC0C: call    MagicCaster_GetParentActor
0x69BC11: mov     edi, eax
0x69BC13: test    edi, edi
0x69BC15: mov     [esp+28h+var_10], edi
0x69BC19: jz      short loc_69BC30
0x69BC1B: cmp     byte ptr [esp+28h+arg_0], 0
0x69BC20: jnz     short loc_69BC30
0x69BC22: mov     edx, [ebp+0]
0x69BC25: mov     eax, [edx+18h]
0x69BC28: mov     ecx, ebp
0x69BC2A: call    eax
0x69BC2C: test    eax, eax
0x69BC2E: jz      short loc_69BC3F
0x69BC30: mov     edx, [ebp+0]
0x69BC33: mov     eax, [edx+18h]
0x69BC36: mov     ecx, ebp
0x69BC38: call    eax
0x69BC3A: cmp     eax, 5
0x69BC3D: jnz     short loc_69BC65
0x69BC3F: fldz
0x69BC41: mov     edi, [edi]
0x69BC43: push    ecx
0x69BC44: fstp    [esp+2Ch+var_2C]
0x69BC47: push    1
0x69BC49: lea     ecx, [ebp+0Ch]
0x69BC4C: mov     byte ptr [esp+30h+arg_0], 1
0x69BC51: add     edi, 39Ch
0x69BC57: call    EffectItemList_GetSchoolAV
0x69BC5C: mov     ecx, [esp+30h+var_10]
0x69BC60: mov     edx, [edi]
0x69BC62: push    eax
0x69BC63: call    edx
0x69BC65: mov     edi, [esp+28h+arg_18]
0x69BC69: mov     eax, [edi]
0x69BC6B: mov     edx, [eax+124h]
0x69BC71: mov     ecx, edi
0x69BC73: call    edx
0x69BC75: jmp     short loc_69BC87
0x69BC77: mov     [esp+28h+var_10], 0
0x69BC7F: mov     edi, [esp+28h+var_10]
0x69BC83: jmp     short loc_69BC30
0x69BC85: xor     eax, eax
0x69BC87: fld     [esp+28h+arg_24]
0x69BC8B: push    ecx
0x69BC8C: fstp    [esp+2Ch+var_2C]; float
0x69BC8F: lea     ecx, [esp+2Ch+arg_0]
0x69BC93: push    ecx; int
0x69BC94: mov     ecx, [esp+30h+arg_14]
0x69BC98: lea     edx, [esp+30h+var_8]
0x69BC9C: push    edx; int
0x69BC9D: mov     edx, [esp+34h+arg_8]
0x69BCA1: push    ecx; int
0x69BCA2: mov     ecx, [esp+38h+arg_C]
0x69BCA6: push    eax; int
0x69BCA7: sub     esp, 0Ch
0x69BCAA: mov     eax, esp
0x69BCAC: mov     [eax], edx
0x69BCAE: mov     edx, [esp+48h+arg_10]
0x69BCB2: mov     [eax+4], ecx
0x69BCB5: mov     [eax+8], edx
0x69BCB8: mov     eax, [esp+48h+arg_4]
0x69BCBC: push    eax; int
0x69BCBD: push    esi; int
0x69BCBE: push    ebp; int
0x69BCBF: mov     ecx, ebx
0x69BCC1: call    MagicCaster_ApplyAOE??
0x69BCC6: test    esi, esi
0x69BCC8: jz      short loc_69BCDA
0x69BCCA: mov     edx, [esi]
0x69BCCC: mov     eax, [edx]
0x69BCCE: push    1
0x69BCD0: mov     ecx, esi
0x69BCD2: call    eax
0x69BCD4: jmp     short loc_69BCDA
0x69BCD6: mov     edi, [esp+28h+arg_18]
0x69BCDA: mov     ecx, [esp+28h+var_18]
0x69BCDE: mov     eax, [ecx+8]
0x69BCE1: test    eax, eax
0x69BCE3: jz      short loc_69BCFC
0x69BCE5: add     eax, 0FFFFFFFCh
0x69BCE8: mov     [esp+28h+var_18], eax
0x69BCEC: jnz     loc_69BB32
0x69BCF2: mov     esi, [esp+28h+var_C]
0x69BCF6: mov     edi, [esp+28h+arg_18]
0x69BCFA: jmp     short loc_69BD00
0x69BCFC: mov     esi, [esp+28h+var_C]
0x69BD00: mov     edx, [esp+28h+arg_14]
0x69BD04: mov     ecx, [edx+74h]
0x69BD07: call    EffectSetting_GetProjectileType
0x69BD0C: push    1
0x69BD0E: cmp     eax, 3
0x69BD11: push    2
0x69BD13: lea     ecx, [ebp+0Ch]
0x69BD16: setz    byte ptr [esp+30h+arg_18]
0x69BD1B: call    EffectItemList_GetStrongestItem
0x69BD20: cmp     byte ptr [esp+28h+arg_18], 0
0x69BD25: jnz     loc_69BDD2
0x69BD2B: test    eax, eax
0x69BD2D: jz      short loc_69BD6F
0x69BD2F: fld     [esp+28h+arg_24]
0x69BD33: mov     edx, [esp+28h+arg_4]
0x69BD37: sub     esp, 8
0x69BD3A: fstp    [esp+30h+var_2C]; float
0x69BD3E: lea     ecx, [esp+30h+var_8]
0x69BD42: fld     [esp+30h+arg_20]
0x69BD46: fstp    [esp+30h+var_30]; float
0x69BD49: push    ecx; int
0x69BD4A: mov     ecx, [esp+34h+arg_8]
0x69BD4E: push    eax; int
0x69BD4F: push    ebp; int
0x69BD50: push    edx; int
0x69BD51: mov     edx, [esp+40h+arg_C]
0x69BD55: sub     esp, 0Ch
0x69BD58: mov     eax, esp
0x69BD5A: mov     [eax], ecx
0x69BD5C: mov     ecx, [esp+4Ch+arg_10]
0x69BD60: mov     [eax+4], edx
0x69BD63: mov     [eax+8], ecx
0x69BD66: mov     ecx, ebx
0x69BD68: call    MagicCaster_ExplosionCalcs????
0x69BD6D: jmp     short loc_69BDD2
0x69BD6F: test    edi, edi
0x69BD71: jz      short loc_69BDD2
0x69BD73: mov     edx, [edi]
0x69BD75: mov     eax, [edx+190h]
0x69BD7B: mov     ecx, edi
0x69BD7D: call    eax
0x69BD7F: test    al, al
0x69BD81: jz      short loc_69BDD2
0x69BD83: test    esi, esi
0x69BD85: jz      short loc_69BDD2
0x69BD87: mov     ecx, [esi+1Ch]
0x69BD8A: mov     edx, [ecx+58h]
0x69BD8D: shr     edx, 1Dh
0x69BD90: test    dl, 1
0x69BD93: jz      short loc_69BDD2
0x69BD95: push    ebp
0x69BD96: lea     eax, [edi+68h]
0x69BD99: push    eax
0x69BD9A: mov     ecx, ebx
0x69BD9C: call    sub_699EB0
0x69BDA1: test    al, al
0x69BDA3: jz      short loc_69BDD2
0x69BDA5: mov     ecx, esi
0x69BDA7: call    EffectItem_MagickaCost
0x69BDAC: mov     edx, [esp+28h+arg_C]
0x69BDB0: push    ecx
0x69BDB1: mov     ecx, [esp+2Ch+arg_8]
0x69BDB5: fstp    [esp+2Ch+var_2C]; float
0x69BDB8: push    esi; int
0x69BDB9: sub     esp, 0Ch
0x69BDBC: mov     eax, esp
0x69BDBE: mov     [eax], ecx
0x69BDC0: mov     ecx, [esp+3Ch+arg_10]
0x69BDC4: mov     [eax+4], edx
0x69BDC7: mov     [eax+8], ecx
0x69BDCA: push    edi; int
0x69BDCB: mov     ecx, ebx
0x69BDCD: call    sub_699900
0x69BDD2: mov     eax, [esp+28h+var_4]
0x69BDD6: test    eax, eax
0x69BDD8: jz      short loc_69BDF2
0x69BDDA: lea     ebx, [ebx+0]
0x69BDE0: mov     esi, [eax+4]
0x69BDE3: push    eax
0x69BDE4: call    FormHeapFree
0x69BDE9: add     esp, 4
0x69BDEC: test    esi, esi
0x69BDEE: mov     eax, esi
0x69BDF0: jnz     short loc_69BDE0
0x69BDF2: pop     edi
0x69BDF3: pop     esi
0x69BDF4: pop     ebp
0x69BDF5: pop     ebx
0x69BDF6: add     esp, 18h
0x69BDF9: retn    28h ; '('
