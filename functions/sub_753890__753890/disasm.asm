0x753890: push    ebp
0x753891: mov     ebp, esp
0x753893: and     esp, 0FFFFFFF8h
0x753896: sub     esp, 124h
0x75389C: fldz
0x75389E: push    ebx
0x75389F: push    esi
0x7538A0: mov     esi, ecx
0x7538A2: fcomp   dword ptr [esi+1Ch]
0x7538A5: push    edi
0x7538A6: mov     [esp+130h+var_11C], esi
0x7538AA: fnstsw  ax
0x7538AC: test    ah, 44h
0x7538AF: jnp     loc_753AFB
0x7538B5: mov     ebx, [ebp+arg_4]
0x7538B8: cmp     word ptr [ebx+48h], 0
0x7538BD: jz      loc_753AFB
0x7538C3: lea     ecx, [esi+30h]
0x7538C6: push    offset Vector3_InitValue?
0x7538CB: call    sub_8AA350
0x7538D0: test    al, al
0x7538D2: jnz     loc_753AFB
0x7538D8: mov     ecx, [esi+18h]
0x7538DB: test    ecx, ecx
0x7538DD: jz      loc_753AFB
0x7538E3: fldz
0x7538E5: fcomp   dword ptr [esi+20h]
0x7538E8: fnstsw  ax
0x7538EA: test    ah, 44h
0x7538ED: jp      short loc_75391B
0x7538EF: cmp     byte ptr [esi+24h], 0
0x7538F3: fld     [ebp+arg_0]
0x7538F6: push    ebx; int
0x7538F7: push    ecx
0x7538F8: fstp    [esp+138h+var_138]; float
0x7538FB: mov     ecx, esi
0x7538FD: jz      short loc_75390D
0x7538FF: call    sub_753400
0x753904: pop     edi
0x753905: pop     esi
0x753906: pop     ebx
0x753907: mov     esp, ebp
0x753909: pop     ebp
0x75390A: retn    8
0x75390D: call    sub_753610
0x753912: pop     edi
0x753913: pop     esi
0x753914: pop     ebx
0x753915: mov     esp, ebp
0x753917: pop     ebp
0x753918: retn    8
0x75391B: mov     eax, [esp+130h+var_11C]
0x75391F: lea     esi, [ecx+64h]
0x753922: mov     ecx, 0Dh
0x753927: lea     edi, [esp+130h+var_9C]
0x75392E: rep movsd
0x753930: mov     esi, [eax+10h]
0x753933: add     esi, 64h ; 'd'
0x753936: mov     ecx, 0Dh
0x75393B: lea     edi, [esp+130h+var_68]
0x753942: rep movsd
0x753944: lea     ecx, [esp+130h+var_34]
0x75394B: push    ecx
0x75394C: lea     ecx, [esp+134h+var_68]
0x753953: call    sub_718A80
0x753958: lea     edx, [esp+130h+var_9C]
0x75395F: push    edx
0x753960: lea     eax, [esp+134h+var_D0]
0x753964: push    eax
0x753965: lea     ecx, [esp+138h+var_34]
0x75396C: call    sub_53D7A0
0x753971: mov     eax, [esp+130h+var_A4]
0x753978: mov     ecx, [esp+130h+var_AC]
0x75397F: mov     edx, [esp+130h+var_A8]
0x753986: mov     [esp+130h+var_108], eax
0x75398A: mov     eax, [esp+130h+var_11C]
0x75398E: mov     [esp+130h+var_110], ecx
0x753992: add     eax, 30h ; '0'
0x753995: push    eax
0x753996: lea     ecx, [esp+134h+var_DC]
0x75399A: push    ecx
0x75399B: lea     ecx, [esp+138h+var_D0]
0x75399F: mov     [esp+138h+var_10C], edx
0x7539A3: call    sub_7101F0
0x7539A8: lea     ecx, [esp+130h+var_DC]
0x7539AC: call    sub_43F350
0x7539B1: fstp    st
0x7539B3: xor     esi, esi
0x7539B5: cmp     [ebx+48h], si
0x7539B9: jbe     loc_753AFB
0x7539BF: nop
0x7539C0: mov     eax, [ebx+5Ch]
0x7539C3: fld     [ebp+arg_0]
0x7539C6: movzx   ecx, si
0x7539C9: lea     edx, ds:0[ecx*8]
0x7539D0: sub     edx, ecx
0x7539D2: lea     eax, [eax+edx*4]
0x7539D5: mov     [esp+130h+var_F8], eax
0x7539D9: fsub    dword ptr [eax+14h]
0x7539DC: fstp    dword ptr [esp+130h+var_118]
0x7539E0: fldz
0x7539E2: fcomp   dword ptr [esp+130h+var_118]
0x7539E6: fnstsw  ax
0x7539E8: test    ah, 44h
0x7539EB: jnp     loc_753AEE
0x7539F1: mov     eax, [ebx+1Ch]
0x7539F4: lea     ecx, [ecx+ecx*2]
0x7539F7: mov     edx, [eax+ecx*4]
0x7539FA: lea     eax, [eax+ecx*4]
0x7539FD: mov     ecx, [eax+4]
0x753A00: mov     [esp+130h+var_104], edx
0x753A04: fld     [esp+130h+var_104]
0x753A08: fsub    [esp+130h+var_110]
0x753A0C: mov     edx, [eax+8]
0x753A0F: mov     [esp+130h+var_100], ecx
0x753A13: mov     [esp+130h+var_FC], edx
0x753A17: fstp    [esp+130h+var_F4]
0x753A1B: lea     ecx, [esp+130h+var_F4]
0x753A1F: fld     [esp+130h+var_100]
0x753A23: fsub    [esp+130h+var_10C]
0x753A27: fstp    [esp+130h+var_F0]
0x753A2B: fld     [esp+130h+var_FC]
0x753A2F: fsub    [esp+130h+var_108]
0x753A33: fstp    [esp+130h+var_EC]
0x753A37: call    sub_404C90
0x753A3C: fstp    [esp+130h+var_120]
0x753A40: fldz
0x753A42: fld     [esp+130h+var_120]
0x753A46: fucom   st(1)
0x753A48: fnstsw  ax
0x753A4A: fstp    st(1)
0x753A4C: test    ah, 44h
0x753A4F: jnp     loc_753AEC
0x753A55: mov     edi, [esp+130h+var_11C]
0x753A59: cmp     byte ptr [edi+24h], 0
0x753A5D: jz      short loc_753A71
0x753A5F: fld     dword ptr [edi+28h]
0x753A62: fcompp
0x753A64: fnstsw  ax
0x753A66: test    ah, 1
0x753A69: jnz     loc_753AEE
0x753A6F: jmp     short loc_753A73
0x753A71: fstp    st
0x753A73: lea     eax, [esp+130h+var_104]
0x753A77: push    eax
0x753A78: lea     ecx, [esp+134h+var_DC]
0x753A7C: push    ecx
0x753A7D: lea     edx, [esp+138h+var_110]
0x753A81: push    edx
0x753A82: lea     eax, [esp+13Ch+var_E8]
0x753A86: push    eax
0x753A87: mov     ecx, edi
0x753A89: call    sub_753280
0x753A8E: fldz
0x753A90: fcomp   dword ptr [edi+20h]
0x753A93: fnstsw  ax
0x753A95: fld     dword ptr [esp+130h+var_118]
0x753A99: test    ah, 44h
0x753A9C: fmul    dword ptr [edi+1Ch]
0x753A9F: jp      short loc_753AAB
0x753AA1: fstp    [esp+130h+var_120]
0x753AA5: fld     [esp+130h+var_120]
0x753AA9: jmp     short loc_753ACF
0x753AAB: fstp    [esp+130h+var_118]
0x753AAF: fld     [esp+130h+var_120]
0x753AB3: fld     dword ptr [edi+20h]
0x753AB6: call    __CIpow
0x753ABB: fstp    [esp+130h+var_120]
0x753ABF: fld     [esp+130h+var_120]
0x753AC3: fdivr   [esp+130h+var_118]
0x753AC7: fstp    [esp+130h+var_120]
0x753ACB: fld     [esp+130h+var_120]
0x753ACF: push    ecx
0x753AD0: lea     ecx, [esp+134h+var_E8]
0x753AD4: fstp    [esp+134h+var_134]; float
0x753AD7: call    NiPoint3__MutliplyByValue
0x753ADC: lea     ecx, [esp+130h+var_E8]
0x753AE0: push    ecx
0x753AE1: mov     ecx, [esp+134h+var_F8]
0x753AE5: call    sub_4121D0
0x753AEA: jmp     short loc_753AEE
0x753AEC: fstp    st
0x753AEE: add     esi, 1
0x753AF1: cmp     si, [ebx+48h]
0x753AF5: jb      loc_7539C0
0x753AFB: pop     edi
0x753AFC: pop     esi
0x753AFD: pop     ebx
0x753AFE: mov     esp, ebp
0x753B00: pop     ebp
0x753B01: retn    8
