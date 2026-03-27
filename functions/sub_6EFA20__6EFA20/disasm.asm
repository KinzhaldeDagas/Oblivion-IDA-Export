0x6EFA20: push    0FFFFFFFFh
0x6EFA22: push    offset SEH_6EFA20
0x6EFA27: mov     eax, large fs:0
0x6EFA2D: push    eax
0x6EFA2E: sub     esp, 0A0h
0x6EFA34: mov     eax, ds:0B30AACh
0x6EFA39: xor     eax, esp
0x6EFA3B: mov     [esp+0ACh+var_10], eax
0x6EFA42: push    ebx
0x6EFA43: push    ebp
0x6EFA44: push    esi
0x6EFA45: push    edi
0x6EFA46: mov     eax, ds:0B30AACh
0x6EFA4B: xor     eax, esp
0x6EFA4D: push    eax
0x6EFA4E: lea     eax, [esp+0C0h+var_C]
0x6EFA55: mov     large fs:0, eax
0x6EFA5B: mov     ebp, [esp+0C0h+arg_0]
0x6EFA62: mov     edi, [esp+0C0h+arg_4]
0x6EFA69: mov     esi, [esp+0C0h+arg_8]
0x6EFA70: mov     ebx, [esp+0C0h+arg_C]
0x6EFA77: sub     esp, 1Ch
0x6EFA7A: mov     ecx, esp
0x6EFA7C: mov     [esp+0DCh+var_A4], esp
0x6EFA80: push    8; MaxCount
0x6EFA82: mov     dword ptr [ecx+18h], 0Fh
0x6EFA89: mov     dword ptr [ecx+14h], 0
0x6EFA90: push    offset aFregt003; "FREGT003"
0x6EFA95: mov     byte ptr [ecx+4], 0
0x6EFA99: call    sub_414500
0x6EFA9E: lea     ecx, [esp+0DCh+var_54]; this
0x6EFAA5: call    sub_6F6110
0x6EFAAA: xor     eax, eax
0x6EFAAC: push    eax
0x6EFAAD: sub     esp, 1Ch
0x6EFAB0: mov     ecx, esp
0x6EFAB2: mov     [esp+0E0h+var_A4], esp
0x6EFAB6: push    0FFFFFFFFh
0x6EFAB8: push    eax
0x6EFAB9: mov     dword ptr [ecx+18h], 0Fh
0x6EFAC0: mov     [ecx+14h], eax
0x6EFAC3: push    ebp
0x6EFAC4: mov     [esp+0ECh+var_4], eax
0x6EFACB: mov     [ecx+4], al
0x6EFACE: call    sub_414420
0x6EFAD3: lea     ecx, [esp+0E0h+var_54]
0x6EFADA: call    sub_6F66E0
0x6EFADF: test    al, al
0x6EFAE1: lea     ecx, [esp+0C0h+var_54]; this
0x6EFAE5: jnz     short loc_6EFAFE
0x6EFAE7: mov     [esp+0C0h+var_4], 0FFFFFFFFh
0x6EFAF2: call    ??1BSFaceGenBinaryFile@@UAE@XZ; BSFaceGenBinaryFile::~BSFaceGenBinaryFile(void)
0x6EFAF7: xor     al, al
0x6EFAF9: jmp     loc_6EFFCE
0x6EFAFE: push    38h ; '8'
0x6EFB00: push    1
0x6EFB02: lea     eax, [esp+0C8h+var_8C]
0x6EFB06: push    eax
0x6EFB07: call    sub_6F5E50
0x6EFB0C: test    al, al
0x6EFB0E: jnz     short loc_6EFB2B
0x6EFB10: lea     ecx, [esp+0C0h+var_54]; this
0x6EFB14: mov     [esp+0C0h+var_4], 0FFFFFFFFh
0x6EFB1F: call    ??1BSFaceGenBinaryFile@@UAE@XZ; BSFaceGenBinaryFile::~BSFaceGenBinaryFile(void)
0x6EFB24: xor     al, al
0x6EFB26: jmp     loc_6EFFCE
0x6EFB2B: mov     ecx, [esp+0C0h+var_7C]
0x6EFB2F: mov     [edi], ecx
0x6EFB31: mov     ecx, esi
0x6EFB33: call    sub_559930
0x6EFB38: mov     ecx, ebx
0x6EFB3A: call    sub_559930
0x6EFB3F: mov     eax, [esp+0C0h+var_88]
0x6EFB43: mov     edi, [esp+0C0h+var_84]
0x6EFB47: lea     ecx, [eax+7]
0x6EFB4A: and     ecx, 0FFFFFFF8h
0x6EFB4D: sub     ecx, eax
0x6EFB4F: add     eax, ecx
0x6EFB51: sub     esp, 40h
0x6EFB54: mov     [esp+100h+var_9C], ecx
0x6EFB58: mov     ecx, [esp+100h+var_8C]
0x6EFB5C: mov     [esp+100h+var_A4], esp
0x6EFB60: imul    ecx, eax
0x6EFB63: mov     [esp+100h+var_90], eax
0x6EFB67: mov     eax, esp
0x6EFB69: push    offset sub_794EB0; a5
0x6EFB6E: push    offset sub_6EF4A0; a4
0x6EFB73: push    3; size
0x6EFB75: push    10h; a2
0x6EFB77: add     eax, 10h
0x6EFB7A: push    eax; a1
0x6EFB7B: mov     [esp+114h+var_94], ecx
0x6EFB82: call    ArrayConstructor
0x6EFB87: push    edi
0x6EFB88: mov     ecx, esi
0x6EFB8A: call    sub_6EF920
0x6EFB8F: xor     ebp, ebp
0x6EFB91: cmp     [esp+0C0h+var_84], ebp
0x6EFB95: mov     [esp+0C0h+var_A8], ebp
0x6EFB99: jbe     loc_6EFD5E
0x6EFB9F: xor     edi, edi
0x6EFBA1: mov     [esp+0C0h+var_98], edi
0x6EFBA5: jmp     short loc_6EFBB8
0x6EFBA7: jmp     short loc_6EFBB0
0x6EFBA9: align 10h
0x6EFBB0: mov     edi, [esp+0C0h+var_98]
0x6EFBB4: mov     ebp, [esp+0C0h+var_A8]
0x6EFBB8: mov     ecx, [esi+4]
0x6EFBBB: test    ecx, ecx
0x6EFBBD: jz      short loc_6EFBCB
0x6EFBBF: mov     eax, [esi+8]
0x6EFBC2: sub     eax, ecx
0x6EFBC4: sar     eax, 6
0x6EFBC7: cmp     ebp, eax
0x6EFBC9: jb      short loc_6EFBD0
0x6EFBCB: call    __invalid_parameter_noinfo
0x6EFBD0: mov     eax, [esi+4]
0x6EFBD3: push    1
0x6EFBD5: add     eax, edi
0x6EFBD7: push    4
0x6EFBD9: push    eax
0x6EFBDA: lea     ecx, [esp+0CCh+var_54]
0x6EFBDE: call    sub_6F5D40
0x6EFBE3: test    al, al
0x6EFBE5: jz      loc_6EFB10
0x6EFBEB: mov     ecx, [esi+4]
0x6EFBEE: test    ecx, ecx
0x6EFBF0: jz      short loc_6EFBFE
0x6EFBF2: mov     eax, [esi+8]
0x6EFBF5: sub     eax, ecx
0x6EFBF7: sar     eax, 6
0x6EFBFA: cmp     ebp, eax
0x6EFBFC: jb      short loc_6EFC03
0x6EFBFE: call    __invalid_parameter_noinfo
0x6EFC03: mov     edx, [esi+4]
0x6EFC06: mov     eax, [esp+0C0h+var_88]
0x6EFC0A: mov     [edi+edx+4], eax
0x6EFC0E: mov     ecx, [esi+4]
0x6EFC11: test    ecx, ecx
0x6EFC13: jz      short loc_6EFC21
0x6EFC15: mov     eax, [esi+8]
0x6EFC18: sub     eax, ecx
0x6EFC1A: sar     eax, 6
0x6EFC1D: cmp     ebp, eax
0x6EFC1F: jb      short loc_6EFC26
0x6EFC21: call    __invalid_parameter_noinfo
0x6EFC26: mov     ecx, [esi+4]
0x6EFC29: mov     edx, [esp+0C0h+var_8C]
0x6EFC2D: mov     [edi+ecx+8], edx
0x6EFC31: mov     ecx, [esi+4]
0x6EFC34: test    ecx, ecx
0x6EFC36: jz      short loc_6EFC44
0x6EFC38: mov     eax, [esi+8]
0x6EFC3B: sub     eax, ecx
0x6EFC3D: sar     eax, 6
0x6EFC40: cmp     ebp, eax
0x6EFC42: jb      short loc_6EFC49
0x6EFC44: call    __invalid_parameter_noinfo
0x6EFC49: mov     ebp, [esp+0C0h+var_94]
0x6EFC4D: sub     ebp, [esp+0C0h+var_90]
0x6EFC51: mov     eax, [esi+4]
0x6EFC54: mov     ecx, [esp+0C0h+var_9C]
0x6EFC58: mov     [edi+eax+0Ch], ecx
0x6EFC5C: mov     [esp+0C0h+var_A4], ebp
0x6EFC60: mov     [esp+0C0h+var_AC], 0
0x6EFC68: mov     [esp+0C0h+var_A0], edi
0x6EFC6C: jmp     short loc_6EFC78
0x6EFC6E: align 10h
0x6EFC70: mov     ebp, [esp+0C0h+var_A4]
0x6EFC74: mov     edi, [esp+0C0h+var_98]
0x6EFC78: mov     ecx, [esi+4]
0x6EFC7B: test    ecx, ecx
0x6EFC7D: jz      short loc_6EFC8D
0x6EFC7F: mov     eax, [esi+8]
0x6EFC82: sub     eax, ecx
0x6EFC84: sar     eax, 6
0x6EFC87: cmp     [esp+0C0h+var_A8], eax
0x6EFC8B: jb      short loc_6EFC92
0x6EFC8D: call    __invalid_parameter_noinfo
0x6EFC92: mov     edx, [esi+4]
0x6EFC95: mov     eax, [esp+0C0h+var_A0]
0x6EFC99: lea     ecx, [eax+edx+10h]; int
0x6EFC9D: mov     edx, [esp+0C0h+var_94]
0x6EFCA1: push    0; int
0x6EFCA3: push    edx; int
0x6EFCA4: call    sub_6EF4B0
0x6EFCA9: mov     ecx, [esi+4]
0x6EFCAC: test    ecx, ecx
0x6EFCAE: jz      short loc_6EFCBE
0x6EFCB0: mov     eax, [esi+8]
0x6EFCB3: sub     eax, ecx
0x6EFCB5: sar     eax, 6
0x6EFCB8: cmp     [esp+0C0h+var_A8], eax
0x6EFCBC: jb      short loc_6EFCC3
0x6EFCBE: call    __invalid_parameter_noinfo
0x6EFCC3: mov     eax, [esi+4]
0x6EFCC6: mov     ecx, [esp+0C0h+var_AC]
0x6EFCCA: add     eax, edi
0x6EFCCC: lea     edi, [eax+ecx+14h]
0x6EFCD0: mov     ecx, [edi]
0x6EFCD2: test    ecx, ecx
0x6EFCD4: jz      short loc_6EFCE4
0x6EFCD6: mov     edx, [esp+0C0h+var_AC]
0x6EFCDA: mov     eax, [eax+edx+18h]
0x6EFCDE: sub     eax, ecx
0x6EFCE0: cmp     ebp, eax
0x6EFCE2: jb      short loc_6EFCE9
0x6EFCE4: call    __invalid_parameter_noinfo
0x6EFCE9: mov     edi, [edi]
0x6EFCEB: add     edi, ebp
0x6EFCED: xor     ebp, ebp
0x6EFCEF: cmp     [esp+0C0h+var_8C], ebp
0x6EFCF3: jbe     short loc_6EFD2B
0x6EFCF5: mov     eax, [esp+0C0h+var_88]
0x6EFCF9: lea     esp, [esp+0]
0x6EFD00: push    eax
0x6EFD01: push    1
0x6EFD03: push    edi
0x6EFD04: lea     ecx, [esp+0CCh+var_54]
0x6EFD08: call    sub_6F5D40
0x6EFD0D: test    al, al
0x6EFD0F: jz      loc_6EFDA2
0x6EFD15: mov     eax, [esp+0C0h+var_88]
0x6EFD19: mov     ecx, [esp+0C0h+var_9C]
0x6EFD1D: lea     edx, [eax+ecx]
0x6EFD20: add     ebp, 1
0x6EFD23: sub     edi, edx
0x6EFD25: cmp     ebp, [esp+0C0h+var_8C]
0x6EFD29: jb      short loc_6EFD00
0x6EFD2B: mov     eax, [esp+0C0h+var_AC]
0x6EFD2F: add     [esp+0C0h+var_A0], 10h
0x6EFD34: add     eax, 10h
0x6EFD37: cmp     eax, 30h ; '0'
0x6EFD3A: mov     [esp+0C0h+var_AC], eax
0x6EFD3E: jb      loc_6EFC70
0x6EFD44: mov     eax, [esp+0C0h+var_A8]
0x6EFD48: add     [esp+0C0h+var_98], 40h ; '@'
0x6EFD4D: add     eax, 1
0x6EFD50: cmp     eax, [esp+0C0h+var_84]
0x6EFD54: mov     [esp+0C0h+var_A8], eax
0x6EFD58: jb      loc_6EFBB0
0x6EFD5E: mov     esi, [esp+0C0h+var_80]
0x6EFD62: sub     esp, 40h
0x6EFD65: mov     eax, esp
0x6EFD67: mov     [esp+100h+var_A4], esp
0x6EFD6B: push    offset sub_794EB0; a5
0x6EFD70: push    offset sub_6EF4A0; a4
0x6EFD75: push    3; size
0x6EFD77: push    10h; a2
0x6EFD79: add     eax, 10h
0x6EFD7C: push    eax; a1
0x6EFD7D: call    ArrayConstructor
0x6EFD82: push    esi
0x6EFD83: mov     ecx, ebx
0x6EFD85: call    sub_6EF920
0x6EFD8A: xor     esi, esi
0x6EFD8C: cmp     [esp+0C0h+var_80], esi
0x6EFD90: mov     [esp+0C0h+var_A8], esi
0x6EFD94: jbe     loc_6EFF87
0x6EFD9A: xor     edi, edi
0x6EFD9C: mov     [esp+0C0h+var_AC], edi
0x6EFDA0: jmp     short loc_6EFDF8
0x6EFDA2: mov     [esp+0C0h+var_54], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6EFDAA: mov     [esp+0C0h+var_4], 1
0x6EFDB5: mov     ecx, [esp+0C0h+var_14]
0x6EFDBC: test    ecx, ecx
0x6EFDBE: jz      short loc_6EFDC8
0x6EFDC0: mov     eax, [ecx]
0x6EFDC2: mov     edx, [eax]
0x6EFDC4: push    1
0x6EFDC6: call    edx
0x6EFDC8: lea     ecx, [esp+0C0h+var_54]; this
0x6EFDCC: mov     [esp+0C0h+var_14], 0
0x6EFDD7: mov     [esp+0C0h+var_4], 0FFFFFFFFh
0x6EFDE2: call    ??1FutBinaryFileC@@UAE@XZ; FutBinaryFileC::~FutBinaryFileC(void)
0x6EFDE7: xor     al, al
0x6EFDE9: jmp     loc_6EFFCE
0x6EFDEE: align 10h
0x6EFDF0: mov     esi, [esp+0C0h+var_A8]
0x6EFDF4: mov     edi, [esp+0C0h+var_AC]
0x6EFDF8: mov     ecx, [ebx+4]
0x6EFDFB: test    ecx, ecx
0x6EFDFD: jz      short loc_6EFE0B
0x6EFDFF: mov     eax, [ebx+8]
0x6EFE02: sub     eax, ecx
0x6EFE04: sar     eax, 6
0x6EFE07: cmp     esi, eax
0x6EFE09: jb      short loc_6EFE10
0x6EFE0B: call    __invalid_parameter_noinfo
0x6EFE10: mov     eax, [ebx+4]
0x6EFE13: push    1
0x6EFE15: add     eax, edi
0x6EFE17: push    4
0x6EFE19: push    eax
0x6EFE1A: lea     ecx, [esp+0CCh+var_54]
0x6EFE1E: call    sub_6F5D40
0x6EFE23: test    al, al
0x6EFE25: jz      loc_6EFB10
0x6EFE2B: mov     ecx, [ebx+4]
0x6EFE2E: test    ecx, ecx
0x6EFE30: jz      short loc_6EFE3E
0x6EFE32: mov     eax, [ebx+8]
0x6EFE35: sub     eax, ecx
0x6EFE37: sar     eax, 6
0x6EFE3A: cmp     esi, eax
0x6EFE3C: jb      short loc_6EFE43
0x6EFE3E: call    __invalid_parameter_noinfo
0x6EFE43: mov     ecx, [esp+0C0h+var_88]
0x6EFE47: mov     eax, [ebx+4]
0x6EFE4A: mov     [eax+edi+4], ecx
0x6EFE4E: mov     ecx, [ebx+4]
0x6EFE51: test    ecx, ecx
0x6EFE53: jz      short loc_6EFE61
0x6EFE55: mov     eax, [ebx+8]
0x6EFE58: sub     eax, ecx
0x6EFE5A: sar     eax, 6
0x6EFE5D: cmp     esi, eax
0x6EFE5F: jb      short loc_6EFE66
0x6EFE61: call    __invalid_parameter_noinfo
0x6EFE66: mov     edx, [ebx+4]
0x6EFE69: mov     eax, [esp+0C0h+var_8C]
0x6EFE6D: mov     [edx+edi+8], eax
0x6EFE71: mov     ecx, [ebx+4]
0x6EFE74: test    ecx, ecx
0x6EFE76: jz      short loc_6EFE84
0x6EFE78: mov     eax, [ebx+8]
0x6EFE7B: sub     eax, ecx
0x6EFE7D: sar     eax, 6
0x6EFE80: cmp     esi, eax
0x6EFE82: jb      short loc_6EFE89
0x6EFE84: call    __invalid_parameter_noinfo
0x6EFE89: mov     ecx, [ebx+4]
0x6EFE8C: mov     edx, [esp+0C0h+var_9C]
0x6EFE90: mov     eax, [esp+0C0h+var_AC]
0x6EFE94: mov     [ecx+edi+0Ch], edx
0x6EFE98: mov     edi, [esp+0C0h+var_94]
0x6EFE9C: sub     edi, [esp+0C0h+var_90]
0x6EFEA0: xor     ebp, ebp
0x6EFEA2: mov     [esp+0C0h+var_A4], edi
0x6EFEA6: mov     [esp+0C0h+var_A0], eax
0x6EFEAA: jmp     short loc_6EFEB8
0x6EFEAC: align 10h
0x6EFEB0: mov     edi, [esp+0C0h+var_A4]
0x6EFEB4: mov     esi, [esp+0C0h+var_A8]
0x6EFEB8: mov     ecx, [ebx+4]
0x6EFEBB: test    ecx, ecx
0x6EFEBD: jz      short loc_6EFECB
0x6EFEBF: mov     eax, [ebx+8]
0x6EFEC2: sub     eax, ecx
0x6EFEC4: sar     eax, 6
0x6EFEC7: cmp     esi, eax
0x6EFEC9: jb      short loc_6EFED0
0x6EFECB: call    __invalid_parameter_noinfo
0x6EFED0: mov     ecx, [ebx+4]
0x6EFED3: mov     edx, [esp+0C0h+var_A0]
0x6EFED7: mov     eax, [esp+0C0h+var_94]
0x6EFEDB: push    0; int
0x6EFEDD: lea     ecx, [ecx+edx+10h]; int
0x6EFEE1: push    eax; int
0x6EFEE2: call    sub_6EF4B0
0x6EFEE7: mov     ecx, [ebx+4]
0x6EFEEA: test    ecx, ecx
0x6EFEEC: jz      short loc_6EFEFA
0x6EFEEE: mov     eax, [ebx+8]
0x6EFEF1: sub     eax, ecx
0x6EFEF3: sar     eax, 6
0x6EFEF6: cmp     esi, eax
0x6EFEF8: jb      short loc_6EFEFF
0x6EFEFA: call    __invalid_parameter_noinfo
0x6EFEFF: mov     eax, [ebx+4]
0x6EFF02: add     eax, [esp+0C0h+var_AC]
0x6EFF06: mov     ecx, [eax+ebp+14h]
0x6EFF0A: test    ecx, ecx
0x6EFF0C: lea     esi, [eax+ebp+14h]
0x6EFF10: jz      short loc_6EFF1C
0x6EFF12: mov     eax, [eax+ebp+18h]
0x6EFF16: sub     eax, ecx
0x6EFF18: cmp     edi, eax
0x6EFF1A: jb      short loc_6EFF21
0x6EFF1C: call    __invalid_parameter_noinfo
0x6EFF21: mov     esi, [esi]
0x6EFF23: add     esi, edi
0x6EFF25: xor     edi, edi
0x6EFF27: cmp     [esp+0C0h+var_8C], edi
0x6EFF2B: jbe     short loc_6EFF5C
0x6EFF2D: mov     eax, [esp+0C0h+var_88]
0x6EFF31: push    eax
0x6EFF32: push    1
0x6EFF34: push    esi
0x6EFF35: lea     ecx, [esp+0CCh+var_54]
0x6EFF39: call    sub_6F5D40
0x6EFF3E: test    al, al
0x6EFF40: jz      loc_6EFFF6
0x6EFF46: mov     eax, [esp+0C0h+var_88]
0x6EFF4A: mov     ecx, [esp+0C0h+var_9C]
0x6EFF4E: lea     edx, [eax+ecx]
0x6EFF51: add     edi, 1
0x6EFF54: sub     esi, edx
0x6EFF56: cmp     edi, [esp+0C0h+var_8C]
0x6EFF5A: jb      short loc_6EFF31
0x6EFF5C: add     [esp+0C0h+var_A0], 10h
0x6EFF61: add     ebp, 10h
0x6EFF64: cmp     ebp, 30h ; '0'
0x6EFF67: jb      loc_6EFEB0
0x6EFF6D: mov     eax, [esp+0C0h+var_A8]
0x6EFF71: add     [esp+0C0h+var_AC], 40h ; '@'
0x6EFF76: add     eax, 1
0x6EFF79: cmp     eax, [esp+0C0h+var_80]
0x6EFF7D: mov     [esp+0C0h+var_A8], eax
0x6EFF81: jb      loc_6EFDF0
0x6EFF87: mov     [esp+0C0h+var_54], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6EFF8F: mov     ecx, [esp+0C0h+var_14]
0x6EFF96: test    ecx, ecx
0x6EFF98: mov     [esp+0C0h+var_4], 3
0x6EFFA3: jz      short loc_6EFFAD
0x6EFFA5: mov     eax, [ecx]
0x6EFFA7: mov     edx, [eax]
0x6EFFA9: push    1
0x6EFFAB: call    edx
0x6EFFAD: lea     ecx, [esp+0C0h+var_54]; this
0x6EFFB1: mov     [esp+0C0h+var_14], 0
0x6EFFBC: mov     [esp+0C0h+var_4], 0FFFFFFFFh
0x6EFFC7: call    ??1FutBinaryFileC@@UAE@XZ; FutBinaryFileC::~FutBinaryFileC(void)
0x6EFFCC: mov     al, 1
0x6EFFCE: mov     ecx, [esp+0C0h+var_C]
0x6EFFD5: mov     large fs:0, ecx
0x6EFFDC: pop     ecx
0x6EFFDD: pop     edi
0x6EFFDE: pop     esi
0x6EFFDF: pop     ebp
0x6EFFE0: pop     ebx
0x6EFFE1: mov     ecx, [esp+0ACh+var_10]
0x6EFFE8: xor     ecx, esp
0x6EFFEA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6EFFEF: add     esp, 0ACh
0x6EFFF5: retn
0x6EFFF6: mov     [esp+0C0h+var_54], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6EFFFE: mov     [esp+0C0h+var_4], 2
0x6F0009: jmp     loc_6EFDB5
