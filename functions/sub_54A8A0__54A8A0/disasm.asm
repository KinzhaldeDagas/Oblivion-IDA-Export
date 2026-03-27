0x54A8A0: push    0FFFFFFFFh
0x54A8A2: push    offset SEH_54A8A0
0x54A8A7: mov     eax, large fs:0
0x54A8AD: push    eax
0x54A8AE: sub     esp, 30h
0x54A8B1: push    ebx
0x54A8B2: push    ebp
0x54A8B3: push    esi
0x54A8B4: push    edi
0x54A8B5: mov     eax, ds:0B30AACh
0x54A8BA: xor     eax, esp
0x54A8BC: push    eax
0x54A8BD: lea     eax, [esp+50h+var_C]
0x54A8C1: mov     large fs:0, eax
0x54A8C7: mov     esi, ecx
0x54A8C9: mov     [esp+50h+var_24], esi
0x54A8CD: push    11h
0x54A8CF: push    2
0x54A8D1: lea     ecx, [esp+58h+var_20]
0x54A8D5: call    sub_54EA00
0x54A8DA: xor     ebp, ebp
0x54A8DC: cmp     byte ptr [esi+1DAh], 0
0x54A8E3: mov     [esp+50h+var_4], ebp
0x54A8E7: jnz     loc_54AB8D
0x54A8ED: mov     ebx, [esp+50h+arg_0]
0x54A8F1: cmp     ebx, ebp
0x54A8F3: jz      loc_54AB8D
0x54A8F9: fldz
0x54A8FB: fld     [esp+50h+arg_4]
0x54A8FF: fcom    st(1)
0x54A901: fnstsw  ax
0x54A903: fstp    st(1)
0x54A905: test    ah, 5
0x54A908: jnp     loc_54AB8B
0x54A90E: push    ecx
0x54A90F: lea     ecx, [esp+54h+var_20]
0x54A913: fstp    [esp+54h+var_54]; float
0x54A916: call    sub_54E580
0x54A91B: mov     edx, [esp+50h+var_14]
0x54A91F: mov     eax, 4
0x54A924: sub     eax, ebx
0x54A926: mov     [esp+50h+var_38], eax
0x54A92A: mov     eax, 8
0x54A92F: sub     eax, ebx
0x54A931: mov     [esp+50h+var_34], eax
0x54A935: mov     eax, 0Ch
0x54A93A: sub     eax, ebx
0x54A93C: mov     [esp+50h+var_30], eax
0x54A940: mov     eax, 10h
0x54A945: sub     eax, ebx
0x54A947: mov     [esp+50h+var_2C], eax
0x54A94B: mov     eax, 14h
0x54A950: sub     eax, ebx
0x54A952: mov     [esp+50h+var_28], eax
0x54A956: mov     eax, 0FFFFFFF8h
0x54A95B: sub     eax, ebx
0x54A95D: mov     edi, 2
0x54A962: mov     [esp+50h+arg_4], 8
0x54A96A: lea     ecx, [ebx+8]
0x54A96D: mov     [esp+50h+var_3C], eax
0x54A971: jmp     short loc_54A977
0x54A973: mov     eax, [esp+50h+var_3C]
0x54A977: cmp     ebp, [esp+50h+var_10]
0x54A97B: fld     dword ptr [ecx-8]
0x54A97E: fstp    [esp+50h+arg_0]
0x54A982: jnb     short loc_54A9A7
0x54A984: add     eax, ecx
0x54A986: fld     dword ptr [eax+edx]
0x54A989: lea     esi, [eax+edx]
0x54A98C: fld     [esp+50h+arg_0]
0x54A990: fld     st
0x54A992: fucomp  st(2)
0x54A994: fnstsw  ax
0x54A996: fstp    st(1)
0x54A998: test    ah, 44h
0x54A99B: jnp     short loc_54A9A5
0x54A99D: fstp    dword ptr [esi]
0x54A99F: mov     edx, [esp+50h+var_14]
0x54A9A3: jmp     short loc_54A9A7
0x54A9A5: fstp    st
0x54A9A7: fld     dword ptr [ecx-4]
0x54A9AA: lea     eax, [edi-1]
0x54A9AD: cmp     eax, [esp+50h+var_10]
0x54A9B1: fstp    [esp+50h+arg_0]
0x54A9B5: jnb     short loc_54A9E0
0x54A9B7: mov     eax, [esp+50h+var_3C]
0x54A9BB: add     eax, ecx
0x54A9BD: fld     dword ptr [eax+edx+4]
0x54A9C1: lea     esi, [eax+edx+4]
0x54A9C5: fld     [esp+50h+arg_0]
0x54A9C9: fld     st
0x54A9CB: fucomp  st(2)
0x54A9CD: fnstsw  ax
0x54A9CF: fstp    st(1)
0x54A9D1: test    ah, 44h
0x54A9D4: jnp     short loc_54A9DE
0x54A9D6: fstp    dword ptr [esi]
0x54A9D8: mov     edx, [esp+50h+var_14]
0x54A9DC: jmp     short loc_54A9E0
0x54A9DE: fstp    st
0x54A9E0: cmp     edi, [esp+50h+var_10]
0x54A9E4: fld     dword ptr [ecx]
0x54A9E6: fstp    [esp+50h+arg_0]
0x54A9EA: jnb     short loc_54AA0F
0x54A9EC: mov     esi, [esp+50h+arg_4]
0x54A9F0: fld     dword ptr [esi+edx]
0x54A9F3: fld     [esp+50h+arg_0]
0x54A9F7: fld     st
0x54A9F9: fucomp  st(2)
0x54A9FB: fnstsw  ax
0x54A9FD: fstp    st(1)
0x54A9FF: test    ah, 44h
0x54AA02: jnp     short loc_54AA0D
0x54AA04: fstp    dword ptr [esi+edx]
0x54AA07: mov     edx, [esp+50h+var_14]
0x54AA0B: jmp     short loc_54AA0F
0x54AA0D: fstp    st
0x54AA0F: fld     dword ptr [ecx+4]
0x54AA12: lea     eax, [edi+1]
0x54AA15: cmp     eax, [esp+50h+var_10]
0x54AA19: fstp    [esp+50h+arg_0]
0x54AA1D: jnb     short loc_54AA46
0x54AA1F: mov     eax, [esp+50h+var_38]
0x54AA23: add     eax, ecx
0x54AA25: fld     dword ptr [eax+edx]
0x54AA28: lea     esi, [eax+edx]
0x54AA2B: fld     [esp+50h+arg_0]
0x54AA2F: fld     st
0x54AA31: fucomp  st(2)
0x54AA33: fnstsw  ax
0x54AA35: fstp    st(1)
0x54AA37: test    ah, 44h
0x54AA3A: jnp     short loc_54AA44
0x54AA3C: fstp    dword ptr [esi]
0x54AA3E: mov     edx, [esp+50h+var_14]
0x54AA42: jmp     short loc_54AA46
0x54AA44: fstp    st
0x54AA46: fld     dword ptr [ecx+8]
0x54AA49: lea     eax, [edi+2]
0x54AA4C: cmp     eax, [esp+50h+var_10]
0x54AA50: fstp    [esp+50h+arg_0]
0x54AA54: jnb     short loc_54AA7D
0x54AA56: mov     eax, [esp+50h+var_34]
0x54AA5A: add     eax, ecx
0x54AA5C: fld     dword ptr [eax+edx]
0x54AA5F: lea     esi, [eax+edx]
0x54AA62: fld     [esp+50h+arg_0]
0x54AA66: fld     st
0x54AA68: fucomp  st(2)
0x54AA6A: fnstsw  ax
0x54AA6C: fstp    st(1)
0x54AA6E: test    ah, 44h
0x54AA71: jnp     short loc_54AA7B
0x54AA73: fstp    dword ptr [esi]
0x54AA75: mov     edx, [esp+50h+var_14]
0x54AA79: jmp     short loc_54AA7D
0x54AA7B: fstp    st
0x54AA7D: fld     dword ptr [ecx+0Ch]
0x54AA80: lea     eax, [edi+3]
0x54AA83: cmp     eax, [esp+50h+var_10]
0x54AA87: fstp    [esp+50h+arg_0]
0x54AA8B: jnb     short loc_54AAB4
0x54AA8D: mov     eax, [esp+50h+var_30]
0x54AA91: add     eax, ecx
0x54AA93: fld     dword ptr [eax+edx]
0x54AA96: lea     esi, [eax+edx]
0x54AA99: fld     [esp+50h+arg_0]
0x54AA9D: fld     st
0x54AA9F: fucomp  st(2)
0x54AAA1: fnstsw  ax
0x54AAA3: fstp    st(1)
0x54AAA5: test    ah, 44h
0x54AAA8: jnp     short loc_54AAB2
0x54AAAA: fstp    dword ptr [esi]
0x54AAAC: mov     edx, [esp+50h+var_14]
0x54AAB0: jmp     short loc_54AAB4
0x54AAB2: fstp    st
0x54AAB4: fld     dword ptr [ecx+10h]
0x54AAB7: lea     eax, [edi+4]
0x54AABA: cmp     eax, [esp+50h+var_10]
0x54AABE: fstp    [esp+50h+arg_0]
0x54AAC2: jnb     short loc_54AAEB
0x54AAC4: mov     eax, [esp+50h+var_2C]
0x54AAC8: add     eax, ecx
0x54AACA: fld     dword ptr [eax+edx]
0x54AACD: lea     esi, [eax+edx]
0x54AAD0: fld     [esp+50h+arg_0]
0x54AAD4: fld     st
0x54AAD6: fucomp  st(2)
0x54AAD8: fnstsw  ax
0x54AADA: fstp    st(1)
0x54AADC: test    ah, 44h
0x54AADF: jnp     short loc_54AAE9
0x54AAE1: fstp    dword ptr [esi]
0x54AAE3: mov     edx, [esp+50h+var_14]
0x54AAE7: jmp     short loc_54AAEB
0x54AAE9: fstp    st
0x54AAEB: fld     dword ptr [ecx+14h]
0x54AAEE: lea     eax, [edi+5]
0x54AAF1: cmp     eax, [esp+50h+var_10]
0x54AAF5: fstp    [esp+50h+arg_0]
0x54AAF9: jnb     short loc_54AB22
0x54AAFB: mov     eax, [esp+50h+var_28]
0x54AAFF: add     eax, ecx
0x54AB01: fld     dword ptr [eax+edx]
0x54AB04: lea     esi, [eax+edx]
0x54AB07: fld     [esp+50h+arg_0]
0x54AB0B: fld     st
0x54AB0D: fucomp  st(2)
0x54AB0F: fnstsw  ax
0x54AB11: fstp    st(1)
0x54AB13: test    ah, 44h
0x54AB16: jnp     short loc_54AB20
0x54AB18: fstp    dword ptr [esi]
0x54AB1A: mov     edx, [esp+50h+var_14]
0x54AB1E: jmp     short loc_54AB22
0x54AB20: fstp    st
0x54AB22: mov     eax, [esp+50h+arg_4]
0x54AB26: add     eax, 20h ; ' '
0x54AB29: add     ebp, 8
0x54AB2C: add     ecx, 20h ; ' '
0x54AB2F: add     edi, 8
0x54AB32: cmp     eax, 30h ; '0'
0x54AB35: mov     [esp+50h+arg_4], eax
0x54AB39: jb      loc_54A973
0x54AB3F: cmp     ebp, 11h
0x54AB42: jnb     short loc_54AB78
0x54AB44: cmp     ebp, [esp+50h+var_10]
0x54AB48: fld     dword ptr [ebx+ebp*4]
0x54AB4B: fstp    [esp+50h+arg_0]
0x54AB4F: jnb     short loc_54AB70
0x54AB51: fld     dword ptr [edx+ebp*4]
0x54AB54: fld     [esp+50h+arg_0]
0x54AB58: fld     st
0x54AB5A: fucomp  st(2)
0x54AB5C: fnstsw  ax
0x54AB5E: fstp    st(1)
0x54AB60: test    ah, 44h
0x54AB63: jnp     short loc_54AB6E
0x54AB65: fstp    dword ptr [edx+ebp*4]
0x54AB68: mov     edx, [esp+50h+var_14]
0x54AB6C: jmp     short loc_54AB70
0x54AB6E: fstp    st
0x54AB70: add     ebp, 1
0x54AB73: cmp     ebp, 11h
0x54AB76: jb      short loc_54AB44
0x54AB78: mov     ecx, [esp+50h+var_24]
0x54AB7C: add     ecx, 5Ch ; '\'
0x54AB7F: push    ecx
0x54AB80: lea     ecx, [esp+54h+var_20]
0x54AB84: call    sub_54F350
0x54AB89: jmp     short loc_54AB8D
0x54AB8B: fstp    st
0x54AB8D: lea     ecx, [esp+50h+var_20]; this
0x54AB91: mov     [esp+50h+var_4], 0FFFFFFFFh
0x54AB99: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54AB9E: mov     ecx, [esp+50h+var_C]
0x54ABA2: mov     large fs:0, ecx
0x54ABA9: pop     ecx
0x54ABAA: pop     edi
0x54ABAB: pop     esi
0x54ABAC: pop     ebp
0x54ABAD: pop     ebx
0x54ABAE: add     esp, 3Ch
0x54ABB1: retn    8
