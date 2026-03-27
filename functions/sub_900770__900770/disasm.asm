0x900770: push    ebp
0x900771: mov     ebp, esp
0x900773: and     esp, 0FFFFFFF0h
0x900776: sub     esp, 0A4h
0x90077C: push    ebx
0x90077D: mov     ebx, ds:0BA9DE4h
0x900783: push    esi
0x900784: push    edi
0x900785: mov     edi, large fs:2Ch
0x90078C: mov     eax, [edi+ebx*4]
0x90078F: mov     ecx, [eax+1A4h]
0x900795: cmp     ecx, [eax+1A8h]
0x90079B: jnb     short loc_9007C8
0x90079D: mov     esi, eax
0x90079F: mov     ecx, [esi+1A4h]
0x9007A5: mov     dword ptr [ecx], offset aLtheightfield; "LtHeightField"
0x9007AB: mov     dword ptr [ecx+0Ch], offset aBta
0x9007B2: rdtsc
0x9007B4: mov     [esp+0B0h+var_9C], eax
0x9007B8: mov     edx, [esp+0B0h+var_9C]
0x9007BC: mov     [ecx+4], edx
0x9007BF: add     ecx, 10h
0x9007C2: mov     [esi+1A4h], ecx
0x9007C8: mov     eax, [ebp+arg_0]
0x9007CB: mov     esi, [eax]
0x9007CD: mov     ecx, [ebp+arg_4]
0x9007D0: mov     edx, [ecx]
0x9007D2: mov     eax, [eax+8]
0x9007D5: mov     ecx, [ecx+8]
0x9007D8: push    eax
0x9007D9: push    ecx
0x9007DA: lea     ecx, [esp+0B8h+var_70]
0x9007DE: mov     [esp+0B8h+var_8C], edx
0x9007E2: call    sub_8B1FF0
0x9007E7: mov     edx, [esi]
0x9007E9: lea     eax, [esp+0B0h+var_94]
0x9007ED: push    eax
0x9007EE: mov     ecx, esi
0x9007F0: call    dword ptr [edx+1Ch]
0x9007F3: mov     ebx, [edi+ebx*4]
0x9007F6: mov     ecx, [ebx+19Ch]
0x9007FC: test    ecx, ecx
0x9007FE: mov     eax, dword ptr [esp+0B0h+var_94]
0x900802: mov     [esp+0B0h+var_98], eax
0x900806: mov     [esp+0B0h+var_80], ebx
0x90080A: jnz     short loc_900812
0x90080C: mov     ecx, ds:0BA7D9Ch
0x900812: mov     edx, [ecx+20h]
0x900815: shl     eax, 4
0x900818: mov     [esp+0B0h+var_84], eax
0x90081C: add     eax, 10h
0x90081F: and     eax, 0FFFFFFF0h
0x900822: lea     edi, [edx+eax]
0x900825: cmp     edi, [ecx+2Ch]
0x900828: ja      short loc_900835
0x90082A: mov     [ecx+20h], edi
0x90082D: mov     edi, edx
0x90082F: mov     [esp+0B0h+var_88], edi
0x900833: jmp     short loc_900841
0x900835: mov     edx, [ecx]
0x900837: push    eax
0x900838: call    dword ptr [edx+0Ch]
0x90083B: mov     [esp+0B0h+var_88], eax
0x90083F: mov     edi, eax
0x900841: mov     ecx, ds:0BA9DE4h
0x900847: mov     eax, large fs:2Ch
0x90084D: mov     eax, [eax+ecx*4]
0x900850: mov     edx, [eax+1A4h]
0x900856: cmp     edx, [eax+1A8h]
0x90085C: jnb     short loc_900880
0x90085E: mov     ecx, [ebx+1A4h]
0x900864: mov     dword ptr [ecx], offset aStgetspheres; "StgetSpheres"
0x90086A: rdtsc
0x90086C: mov     [esp+0B0h+var_9C], eax
0x900870: mov     eax, [esp+0B0h+var_9C]
0x900874: mov     [ecx+4], eax
0x900877: add     ecx, 0Ch
0x90087A: mov     [ebx+1A4h], ecx
0x900880: mov     edx, [esi]
0x900882: push    edi
0x900883: mov     ecx, esi
0x900885: call    dword ptr [edx+20h]
0x900888: mov     ecx, ds:0BA9DE4h
0x90088E: mov     esi, eax
0x900890: mov     eax, large fs:2Ch
0x900896: mov     eax, [eax+ecx*4]
0x900899: mov     edx, [eax+1A4h]
0x90089F: cmp     edx, [eax+1A8h]
0x9008A5: jnb     short loc_9008C9
0x9008A7: mov     ecx, [ebx+1A4h]
0x9008AD: mov     dword ptr [ecx], offset aSttransform; "Sttransform"
0x9008B3: rdtsc
0x9008B5: mov     [esp+0B0h+var_9C], eax
0x9008B9: mov     eax, [esp+0B0h+var_9C]
0x9008BD: mov     [ecx+4], eax
0x9008C0: add     ecx, 0Ch
0x9008C3: mov     [ebx+1A4h], ecx
0x9008C9: mov     edx, [esp+0B0h+var_98]
0x9008CD: movaps  xmm1, [esp+0B0h+var_70]
0x9008D2: movaps  xmm2, [esp+0B0h+anonymous_0]
0x9008D7: movaps  xmm3, [esp+0B0h+anonymous_1]
0x9008DC: movaps  xmm4, [esp+0B0h+anonymous_2]
0x9008E1: mov     ecx, edi
0x9008E3: mov     eax, esi
0x9008E5: sub     ecx, esi
0x9008E7: movaps  xmm0, xmmword ptr [eax]
0x9008EA: fld     dword ptr [eax+0Ch]
0x9008ED: movaps  xmm5, xmm0
0x9008F0: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x9008F4: movaps  xmm6, xmm3
0x9008F7: mulps   xmm6, xmm5
0x9008FA: movaps  xmm5, xmm0
0x9008FD: shufps  xmm5, xmm0, 55h ; 'U'
0x900901: movaps  xmm7, xmm2
0x900904: mulps   xmm7, xmm5
0x900907: movaps  xmm5, xmm0
0x90090A: shufps  xmm5, xmm0, 0
0x90090E: movaps  xmm0, xmm1
0x900911: mulps   xmm0, xmm5
0x900914: addps   xmm6, xmm4
0x900917: addps   xmm0, xmm7
0x90091A: addps   xmm0, xmm6
0x90091D: movaps  xmmword ptr [ecx+eax], xmm0
0x900921: fstp    dword ptr [eax+ecx+0Ch]
0x900925: add     eax, 10h
0x900928: dec     edx
0x900929: test    edx, edx
0x90092B: jg      short loc_9008E7
0x90092D: mov     ecx, large fs:2Ch
0x900934: mov     edx, ds:0BA9DE4h
0x90093A: mov     eax, [ecx+edx*4]
0x90093D: mov     ecx, [eax+1A4h]
0x900943: cmp     ecx, [eax+1A8h]
0x900949: jnb     short loc_90096D
0x90094B: mov     ecx, [ebx+1A4h]
0x900951: mov     dword ptr [ecx], offset aStcollide_0; "Stcollide"
0x900957: rdtsc
0x900959: mov     [esp+0B0h+var_9C], eax
0x90095D: mov     edx, [esp+0B0h+var_9C]
0x900961: mov     [ecx+4], edx
0x900964: add     ecx, 0Ch
0x900967: mov     [ebx+1A4h], ecx
0x90096D: mov     ecx, [ebx+19Ch]
0x900973: test    ecx, ecx
0x900975: jnz     short loc_90097D
0x900977: mov     ecx, ds:0BA7D9Ch
0x90097D: mov     eax, [esp+0B0h+var_84]
0x900981: mov     esi, [ecx+20h]
0x900984: add     eax, 10h
0x900987: and     eax, 0FFFFFFF0h
0x90098A: lea     edx, [esi+eax]
0x90098D: cmp     edx, [ecx+2Ch]
0x900990: ja      short loc_90099B
0x900992: mov     [ecx+20h], edx
0x900995: mov     [esp+0B0h+var_9C], esi
0x900999: jmp     short loc_9009A7
0x90099B: mov     edx, [ecx]
0x90099D: push    eax
0x90099E: call    dword ptr [edx+0Ch]
0x9009A1: mov     [esp+0B0h+var_9C], eax
0x9009A5: mov     esi, eax
0x9009A7: mov     eax, [esp+0B0h+var_98]
0x9009AB: mov     [esp+0B0h+var_7C], edi
0x9009AF: mov     edi, [ebp+arg_8]
0x9009B2: mov     ecx, [edi+8]
0x9009B5: mov     [esp+0B0h+var_78], eax
0x9009B9: mov     [esp+0B0h+var_74], ecx
0x9009BD: mov     ecx, [esp+0B0h+var_8C]
0x9009C1: mov     edx, [ecx]
0x9009C3: push    esi
0x9009C4: lea     eax, [esp+0B4h+var_7C]
0x9009C8: push    eax
0x9009C9: call    dword ptr [edx+1Ch]
0x9009CC: mov     ecx, ds:0BA9DE4h
0x9009D2: mov     edx, large fs:2Ch
0x9009D9: mov     eax, [edx+ecx*4]
0x9009DC: mov     ecx, [eax+1A4h]
0x9009E2: cmp     ecx, [eax+1A8h]
0x9009E8: jnb     short loc_900A0C
0x9009EA: mov     ecx, [ebx+1A4h]
0x9009F0: mov     dword ptr [ecx], offset aStexamine_0; "Stexamine"
0x9009F6: rdtsc
0x9009F8: mov     [esp+0B0h+var_8C], eax
0x9009FC: mov     edx, [esp+0B0h+var_8C]
0x900A00: mov     [ecx+4], edx
0x900A03: add     ecx, 0Ch
0x900A06: mov     [ebx+1A4h], ecx
0x900A0C: mov     eax, [edi+8]
0x900A0F: mov     [esp+0B0h+var_8C], eax
0x900A13: mov     eax, [esp+0B0h+var_98]
0x900A17: dec     eax
0x900A18: js      loc_900B28
0x900A1E: mov     edi, [esp+0B0h+var_88]
0x900A22: mov     ebx, [ebp+arg_C]
0x900A25: sub     edi, esi
0x900A27: inc     eax
0x900A28: mov     [esp+0B0h+var_98], eax
0x900A2C: lea     esp, [esp+0]
0x900A30: fld     dword ptr [esi+0Ch]
0x900A33: fcomp   [esp+0B0h+var_8C]
0x900A37: fnstsw  ax
0x900A39: test    ah, 41h
0x900A3C: jp      loc_900B0E
0x900A42: fld     dword ptr [edi+esi+0Ch]
0x900A46: movaps  xmm1, xmmword ptr [esi]
0x900A49: mov     eax, [ebp+arg_4]
0x900A4C: fchs
0x900A4E: fsub    dword ptr [esi+0Ch]
0x900A51: mov     ecx, [ebp+arg_0]
0x900A54: mov     [esp+0B0h+var_C], eax
0x900A5B: mov     eax, [eax+8]
0x900A5E: mov     [esp+0B0h+var_10], ecx
0x900A65: fstp    [esp+0B0h+var_84]
0x900A69: movss   xmm0, [esp+0B0h+var_84]
0x900A6F: movaps  xmm4, xmmword ptr [eax+20h]
0x900A73: movaps  xmm2, xmm0
0x900A76: shufps  xmm2, xmm0, 0
0x900A7A: movaps  xmm0, xmmword ptr [edi+esi]
0x900A7E: mulps   xmm2, xmm1
0x900A81: addps   xmm0, xmm2
0x900A84: movaps  xmm2, xmmword ptr [eax+30h]
0x900A88: movaps  xmm3, xmm0
0x900A8B: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x900A8F: mov     edx, [esi+0Ch]
0x900A92: mulps   xmm4, xmm3
0x900A95: movaps  xmm3, xmmword ptr [eax+10h]
0x900A99: addps   xmm4, xmm2
0x900A9C: movaps  xmm2, xmm0
0x900A9F: shufps  xmm2, xmm0, 55h ; 'U'
0x900AA3: mulps   xmm3, xmm2
0x900AA6: movaps  xmm2, xmm0
0x900AA9: shufps  xmm2, xmm0, 0
0x900AAD: movaps  xmm0, xmmword ptr [eax]
0x900AB0: mulps   xmm0, xmm2
0x900AB3: addps   xmm0, xmm3
0x900AB6: addps   xmm0, xmm4
0x900AB9: movaps  [esp+0B0h+anonymous_3], xmm0
0x900AC1: movaps  xmm2, xmmword ptr [eax+20h]
0x900AC5: movaps  xmm3, xmmword ptr [eax+10h]
0x900AC9: movaps  xmm0, xmm1
0x900ACC: shufps  xmm0, xmm1, 0AAh ; 'ª'
0x900AD0: mulps   xmm2, xmm0
0x900AD3: movaps  xmm0, xmm1
0x900AD6: shufps  xmm0, xmm1, 55h ; 'U'
0x900ADA: mulps   xmm3, xmm0
0x900ADD: movaps  xmm0, xmm1
0x900AE0: shufps  xmm0, xmm1, 0
0x900AE4: movaps  xmm1, xmmword ptr [eax]
0x900AE7: mov     eax, [ebx]
0x900AE9: mulps   xmm1, xmm0
0x900AEC: lea     ecx, [esp+0B0h+anonymous_3]
0x900AF3: addps   xmm1, xmm3
0x900AF6: addps   xmm1, xmm2
0x900AF9: push    ecx
0x900AFA: movaps  [esp+0B4h+var_20], xmm1
0x900B02: mov     ecx, ebx
0x900B04: mov     dword ptr [esp+0B4h+var_20+0Ch], edx
0x900B0B: call    dword ptr [eax+4]
0x900B0E: mov     eax, [esp+0B0h+var_98]
0x900B12: add     esi, 10h
0x900B15: dec     eax
0x900B16: mov     [esp+0B0h+var_98], eax
0x900B1A: jnz     loc_900A30
0x900B20: mov     ebx, [esp+0B0h+var_80]
0x900B24: mov     esi, [esp+0B0h+var_9C]
0x900B28: mov     ecx, [ebx+19Ch]
0x900B2E: test    ecx, ecx
0x900B30: jnz     short loc_900B38
0x900B32: mov     ecx, ds:0BA7D9Ch
0x900B38: cmp     esi, [ecx+28h]
0x900B3B: mov     [ecx+20h], esi
0x900B3E: jnz     short loc_900B46
0x900B40: mov     edx, [ecx]
0x900B42: push    esi
0x900B43: call    dword ptr [edx+10h]
0x900B46: mov     ecx, [ebx+19Ch]
0x900B4C: test    ecx, ecx
0x900B4E: jnz     short loc_900B56
0x900B50: mov     ecx, ds:0BA7D9Ch
0x900B56: mov     eax, [esp+0B0h+var_88]
0x900B5A: cmp     eax, [ecx+28h]
0x900B5D: mov     [ecx+20h], eax
0x900B60: jnz     short loc_900B68
0x900B62: mov     edx, [ecx]
0x900B64: push    eax
0x900B65: call    dword ptr [edx+10h]
0x900B68: mov     ecx, ds:0BA9DE4h
0x900B6E: mov     eax, large fs:2Ch
0x900B74: mov     eax, [eax+ecx*4]
0x900B77: mov     edx, [eax+1A4h]
0x900B7D: cmp     edx, [eax+1A8h]
0x900B83: jnb     short loc_900BA7
0x900B85: mov     ecx, [ebx+1A4h]
0x900B8B: mov     dword ptr [ecx], offset aLt_0; "lt"
0x900B91: rdtsc
0x900B93: mov     [esp+0B0h+var_80], eax
0x900B97: mov     eax, [esp+0B0h+var_80]
0x900B9B: mov     [ecx+4], eax
0x900B9E: add     ecx, 0Ch
0x900BA1: mov     [ebx+1A4h], ecx
0x900BA7: pop     edi
0x900BA8: pop     esi
0x900BA9: pop     ebx
0x900BAA: mov     esp, ebp
0x900BAC: pop     ebp
0x900BAD: retn
