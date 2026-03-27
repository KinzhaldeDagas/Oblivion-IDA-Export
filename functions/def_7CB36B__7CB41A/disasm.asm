0x7CB41A: mov     eax, 1
0x7CB41F: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB426: push    0
0x7CB428: push    eax
0x7CB429: push    19h
0x7CB42B: call    sub_76C730
0x7CB430: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB437: push    0
0x7CB439: push    4
0x7CB43B: push    17h
0x7CB43D: call    sub_76C730
0x7CB442: push    0
0x7CB444: push    1
0x7CB446: push    0Eh
0x7CB448: jmp     loc_7CB549
0x7CB44D: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB454: push    0
0x7CB456: push    1
0x7CB458: push    1Bh
0x7CB45A: call    sub_76C730
0x7CB45F: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB466: push    0
0x7CB468: push    0
0x7CB46A: push    0Eh
0x7CB46C: call    sub_76C730
0x7CB471: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB478: push    0
0x7CB47A: push    0
0x7CB47C: push    0Fh
0x7CB47E: call    sub_76C730
0x7CB483: cmp     [esp+0Ch+arg_6], 0
0x7CB488: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB48F: push    0
0x7CB491: jz      short loc_7CB49C
0x7CB493: push    3
0x7CB495: push    17h
0x7CB497: jmp     loc_7CB550
0x7CB49C: push    4
0x7CB49E: push    17h
0x7CB4A0: jmp     loc_7CB550
0x7CB4A5: lea     eax, [ebp-6]
0x7CB4A8: cmp     eax, 3
0x7CB4AB: ja      short loc_7CB51F
0x7CB4AD: mov     eax, [esi+8]
0x7CB4B0: mov     ecx, [edi+18h]
0x7CB4B3: mov     edx, [ecx]
0x7CB4B5: push    eax
0x7CB4B6: mov     eax, [edx+8]
0x7CB4B9: call    eax
0x7CB4BB: mov     eax, [esi+8]
0x7CB4BE: test    byte ptr [eax+18h], 1
0x7CB4C2: jz      loc_7CB555
0x7CB4C8: mov     ecx, [edi+18h]
0x7CB4CB: mov     edx, [ecx]
0x7CB4CD: mov     eax, [edx+64h]
0x7CB4D0: push    0
0x7CB4D2: push    0
0x7CB4D4: push    1Bh
0x7CB4D6: call    eax
0x7CB4D8: mov     esi, [esi+8]
0x7CB4DB: mov     cx, [esi+18h]
0x7CB4DF: shr     cx, 9
0x7CB4E3: test    cl, 1
0x7CB4E6: jnz     short loc_7CB555
0x7CB4E8: mov     ecx, [edi+18h]
0x7CB4EB: mov     edx, [ecx]
0x7CB4ED: mov     eax, [edx+64h]
0x7CB4F0: push    0
0x7CB4F2: push    1
0x7CB4F4: push    0Fh
0x7CB4F6: call    eax
0x7CB4F8: mov     ecx, [edi+18h]
0x7CB4FB: mov     edx, [ecx]
0x7CB4FD: mov     eax, [edx+64h]
0x7CB500: push    0
0x7CB502: push    5
0x7CB504: push    19h
0x7CB506: call    eax
0x7CB508: mov     edi, [edi+18h]
0x7CB50B: mov     edx, [edi]
0x7CB50D: mov     eax, [edx+64h]
0x7CB510: push    0
0x7CB512: push    80h ; '€'
0x7CB517: push    18h
0x7CB519: mov     ecx, edi
0x7CB51B: call    eax
0x7CB51D: jmp     short loc_7CB555
0x7CB51F: lea     ecx, [ebp-4]
0x7CB522: cmp     ecx, 0DAh ; 'Ú'
0x7CB528: ja      short loc_7CB555
0x7CB52A: cmp     [esp+18h+var_1], 0
0x7CB52F: push    0
0x7CB531: jz      short loc_7CB58C
0x7CB533: push    1
0x7CB535: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB53C: push    1Bh
0x7CB53E: call    sub_76C730
0x7CB543: push    0
0x7CB545: push    0
0x7CB547: push    0Fh
0x7CB549: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB550: call    sub_76C730
0x7CB555: test    ebx, ebx
0x7CB557: fldz
0x7CB559: jz      short loc_7CB5A9
0x7CB55B: test    dword ptr [ebx+1Ch], 80000h
0x7CB562: jbe     short loc_7CB5A9
0x7CB564: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB56B: fstp    st
0x7CB56D: fld1
0x7CB56F: push    0
0x7CB571: fstp    [esp+1Ch+arg_5C]
0x7CB575: mov     edx, [esp+1Ch+arg_5C]
0x7CB579: push    edx
0x7CB57A: push    0AFh ; '¯'
0x7CB57F: call    sub_76C730
0x7CB584: fld     dword ptr ds:0A906F8h
0x7CB58A: jmp     short loc_7CB5D6
0x7CB58C: cmp     [esp+1Ch+var_2], 0
0x7CB591: push    0
0x7CB593: jz      short loc_7CB535
0x7CB595: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB59C: push    1Bh
0x7CB59E: call    sub_76C730
0x7CB5A3: push    0
0x7CB5A5: push    1
0x7CB5A7: jmp     short loc_7CB547
0x7CB5A9: lea     ecx, [ebp-177h]
0x7CB5AF: fstp    [esp+18h+arg_5C]
0x7CB5B3: cmp     ecx, 3
0x7CB5B6: ja      short loc_7CB5F4
0x7CB5B8: mov     edx, [esp+18h+arg_5C]
0x7CB5BC: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB5C3: push    0
0x7CB5C5: push    edx
0x7CB5C6: push    0AFh ; '¯'
0x7CB5CB: call    sub_76C730
0x7CB5D0: fld     dword ptr ds:0A906F4h
0x7CB5D6: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB5DD: fstp    [esp+18h+arg_5C]
0x7CB5E1: mov     eax, [esp+18h+arg_5C]
0x7CB5E5: push    0
0x7CB5E7: push    eax
0x7CB5E8: push    0C3h ; 'Ã'
0x7CB5ED: call    sub_76C730
0x7CB5F2: jmp     short loc_7CB64C
0x7CB5F4: mov     esi, ds:0B455A0h[ebp*4]
0x7CB5FB: cmp     dword ptr [esi+30h], 0
0x7CB5FF: jnz     short loc_7CB609
0x7CB601: call    sub_772DF0
0x7CB606: mov     [esi+30h], eax
0x7CB609: mov     ecx, [esp+18h+arg_5C]
0x7CB60D: push    0
0x7CB60F: push    ecx
0x7CB610: mov     ecx, [esi+30h]
0x7CB613: push    0AFh ; '¯'
0x7CB618: call    sub_772CD0
0x7CB61D: fldz
0x7CB61F: mov     esi, ds:0B455A0h[ebp*4]
0x7CB626: fstp    [esp+18h+arg_5C]
0x7CB62A: cmp     dword ptr [esi+30h], 0
0x7CB62E: jnz     short loc_7CB638
0x7CB630: call    sub_772DF0
0x7CB635: mov     [esi+30h], eax
0x7CB638: mov     edx, [esp+18h+arg_5C]
0x7CB63C: mov     ecx, [esi+30h]
0x7CB63F: push    0
0x7CB641: push    edx
0x7CB642: push    0C3h ; 'Ã'
0x7CB647: call    sub_772CD0
0x7CB64C: mov     eax, ds:0B42EB8h
0x7CB651: test    eax, eax
0x7CB653: jz      short loc_7CB663
0x7CB655: cmp     byte ptr [eax+7], 0
0x7CB659: jnz     short loc_7CB663
0x7CB65B: fldz
0x7CB65D: fstp    dword ptr ds:0B4668Ch
0x7CB663: lea     ecx, [ebp-123h]
0x7CB669: cmp     ecx, 6
0x7CB66C: ja      loc_7CB86A
0x7CB672: cmp     byte ptr ds:0B43076h, 0
0x7CB679: jz      loc_7CB86A
0x7CB67F: mov     edx, [eax+0Ch]
0x7CB682: mov     esi, [edx]
0x7CB684: lea     eax, [esp+18h+arg_5C]
0x7CB688: push    eax
0x7CB689: mov     ecx, esi
0x7CB68B: call    sub_405AD0
0x7CB690: mov     eax, [eax]
0x7CB692: mov     ecx, [eax+88h]
0x7CB698: mov     [esp+18h+arg_28], ecx
0x7CB69C: mov     edx, [eax+8Ch]
0x7CB6A2: mov     [esp+18h+arg_2C], edx
0x7CB6A6: mov     eax, [eax+90h]
0x7CB6AC: lea     ecx, [esp+18h+arg_5C]; this
0x7CB6B0: mov     [esp+18h+arg_30], eax
0x7CB6B4: call    sub_7016A0
0x7CB6B9: lea     ecx, [esp+18h+arg_5C]
0x7CB6BD: push    ecx
0x7CB6BE: mov     ecx, esi
0x7CB6C0: call    sub_405AD0
0x7CB6C5: mov     eax, [eax]
0x7CB6C7: fld     dword ptr [eax+0F8h]
0x7CB6CD: lea     ecx, [esp+18h+arg_5C]; this
0x7CB6D1: fmul    qword ptr ds:0A43310h
0x7CB6D7: fstp    [esp+18h+arg_34]
0x7CB6DB: call    sub_7016A0
0x7CB6E0: fld     dword ptr ds:0A3C778h
0x7CB6E6: push    ecx
0x7CB6E7: fstp    [esp+1Ch+var_1C]; float
0x7CB6EA: lea     edx, [esp+1Ch+arg_8]
0x7CB6EE: push    edx; int
0x7CB6EF: lea     eax, [esp+20h+arg_18]
0x7CB6F3: push    eax; int
0x7CB6F4: lea     ecx, [esp+24h+arg_28]
0x7CB6F8: push    ecx; int
0x7CB6F9: mov     ecx, ds:0B43124h
0x7CB6FF: call    sub_70C720
0x7CB704: mov     ecx, ds:0B43104h
0x7CB70A: call    sub_701640
0x7CB70F: mov     ecx, ds:0B43104h
0x7CB715: mov     [esp+18h+arg_5C], eax
0x7CB719: call    sub_701670
0x7CB71E: fld     [esp+18h+arg_18]
0x7CB722: fadd    qword ptr ds:0A2F928h
0x7CB728: mov     esi, eax
0x7CB72A: mov     [esp+18h+arg_58], esi
0x7CB72E: fmul    qword ptr ds:0A2FAA0h
0x7CB734: fldz
0x7CB736: fcom    st(1)
0x7CB738: fnstsw  ax
0x7CB73A: test    ah, 5
0x7CB73D: jp      short loc_7CB743
0x7CB73F: fstp    st
0x7CB741: jmp     short loc_7CB745
0x7CB743: fstp    st(1)
0x7CB745: fild    [esp+18h+arg_5C]
0x7CB749: push    ecx
0x7CB74A: fstp    [esp+1Ch+arg_5C]
0x7CB74E: fmul    [esp+1Ch+arg_5C]
0x7CB752: fstp    [esp+1Ch+arg_64]
0x7CB759: fld     [esp+1Ch+arg_64]
0x7CB760: fstp    [esp+1Ch+var_1C]; float
0x7CB763: call    FloatFloor
0x7CB768: add     esp, 4
0x7CB76B: call    Double_To_SInt32
0x7CB770: fld     [esp+18h+arg_C]
0x7CB774: fld1
0x7CB776: mov     [esp+18h+arg_38], eax
0x7CB77A: fadd    st(1), st
0x7CB77C: fxch    st(1)
0x7CB77E: fmul    qword ptr ds:0A2FAA0h
0x7CB784: fcom    st(1)
0x7CB786: fnstsw  ax
0x7CB788: test    ah, 5
0x7CB78B: jp      short loc_7CB791
0x7CB78D: fstp    st(1)
0x7CB78F: jmp     short loc_7CB793
0x7CB791: fstp    st
0x7CB793: fild    [esp+18h+arg_58]
0x7CB797: push    ecx
0x7CB798: fstp    [esp+1Ch+arg_64]
0x7CB79F: fmul    [esp+1Ch+arg_64]
0x7CB7A6: fstp    [esp+1Ch+arg_58]
0x7CB7AA: fld     [esp+1Ch+arg_58]
0x7CB7AE: fstp    [esp+1Ch+var_1C]; float
0x7CB7B1: call    sub_484370
0x7CB7B6: add     esp, 4
0x7CB7B9: call    Double_To_SInt32
0x7CB7BE: fld     [esp+18h+arg_8]
0x7CB7C2: fld1
0x7CB7C4: mov     edx, esi
0x7CB7C6: fadd    st(1), st
0x7CB7C8: sub     edx, eax
0x7CB7CA: fxch    st(1)
0x7CB7CC: mov     [esp+18h+arg_3C], edx
0x7CB7D0: fmul    qword ptr ds:0A2FAA0h
0x7CB7D6: fcom    st(1)
0x7CB7D8: fnstsw  ax
0x7CB7DA: test    ah, 5
0x7CB7DD: jp      short loc_7CB7E3
0x7CB7DF: fstp    st(1)
0x7CB7E1: jmp     short loc_7CB7E5
0x7CB7E3: fstp    st
0x7CB7E5: fmul    [esp+18h+arg_5C]
0x7CB7E9: push    ecx
0x7CB7EA: fstp    [esp+1Ch+arg_5C]
0x7CB7EE: fld     [esp+1Ch+arg_5C]
0x7CB7F2: fstp    [esp+1Ch+var_1C]; float
0x7CB7F5: call    sub_484370
0x7CB7FA: add     esp, 4
0x7CB7FD: call    Double_To_SInt32
0x7CB802: fld     [esp+18h+arg_1C]
0x7CB806: fadd    qword ptr ds:0A2F928h
0x7CB80C: mov     [esp+18h+arg_40], eax
0x7CB810: fmul    qword ptr ds:0A2FAA0h
0x7CB816: fldz
0x7CB818: fcom    st(1)
0x7CB81A: fnstsw  ax
0x7CB81C: test    ah, 5
0x7CB81F: jp      short loc_7CB825
0x7CB821: fstp    st
0x7CB823: jmp     short loc_7CB827
0x7CB825: fstp    st(1)
0x7CB827: fmul    [esp+18h+arg_64]
0x7CB82E: push    ecx
0x7CB82F: fstp    [esp+1Ch+arg_5C]
0x7CB833: fld     [esp+1Ch+arg_5C]
0x7CB837: fstp    [esp+1Ch+var_1C]; float
0x7CB83A: call    FloatFloor
0x7CB83F: add     esp, 4
0x7CB842: call    Double_To_SInt32
0x7CB847: sub     esi, eax
0x7CB849: mov     eax, ds:0B43104h
0x7CB84E: mov     [esp+18h+arg_44], esi
0x7CB852: mov     eax, [eax+280h]
0x7CB858: mov     ecx, [eax]
0x7CB85A: lea     edx, [esp+18h+arg_38]
0x7CB85E: push    edx
0x7CB85F: push    eax
0x7CB860: mov     eax, [ecx+12Ch]
0x7CB866: call    eax
0x7CB868: jmp     short def_7CA265; jumptable 007CA265 default case, cases 1,4,5,12-15,24,47,48,51,76-78,80,82-84,87-89,91,93-95,98-100,102,104-106,109-111,113,115-117,121-123,127-130,135-137,141-144,148-150,154-157,161-163,167-170,175-177,181-184,188-190,194-197,201-203,207-210,214-216,220-225,230,231,233,234,236-245,247,248,250-259,267-270,275,276,279,282,283,286,289,290,293,296-351,378,380-383,392,393,404-413
0x7CB86A: mov     ebp, ds:0B455A0h[ebp*4]
0x7CB871: cmp     dword ptr [ebp+30h], 0
0x7CB875: jnz     short loc_7CB87F
0x7CB877: call    sub_772DF0
0x7CB87C: mov     [ebp+30h], eax
0x7CB87F: mov     ecx, [ebp+30h]
0x7CB882: push    0
0x7CB884: push    0
0x7CB886: push    0AEh ; '®'
0x7CB88B: call    sub_772CD0
