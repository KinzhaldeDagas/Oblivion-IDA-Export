0x7C6570: sub     esp, 8
0x7C6573: fldz
0x7C6575: push    ebx
0x7C6576: push    ebp
0x7C6577: fstp    [esp+10h+var_8]
0x7C657B: push    esi
0x7C657C: mov     esi, [ecx+0E8h]
0x7C6582: test    esi, esi
0x7C6584: push    edi
0x7C6585: mov     [esp+18h+var_4], ecx
0x7C6589: jz      short loc_7C65DE
0x7C658B: mov     edi, [esp+18h+arg_18]
0x7C658F: mov     ebx, [esp+18h+arg_8]
0x7C6593: mov     ebp, [esp+18h+arg_4]
0x7C6597: mov     ecx, [esi+8]
0x7C659A: test    ecx, ecx
0x7C659C: lea     eax, [esi+8]
0x7C659F: mov     esi, [esi]
0x7C65A1: jz      short loc_7C65D6
0x7C65A3: mov     edx, [esp+18h+arg_0]
0x7C65A7: push    edi; int
0x7C65A8: sub     esp, 0Ch
0x7C65AB: mov     eax, esp
0x7C65AD: mov     [eax], edx
0x7C65AF: mov     [eax+4], ebp
0x7C65B2: mov     [eax+8], ebx
0x7C65B5: call    sub_7D31B0
0x7C65BA: fadd    [esp+18h+var_8]
0x7C65BE: fstp    [esp+18h+var_8]
0x7C65C2: fldz
0x7C65C4: fcomp   [esp+18h+var_8]
0x7C65C8: fnstsw  ax
0x7C65CA: test    ah, 5
0x7C65CD: jp      short loc_7C65D6
0x7C65CF: mov     eax, [esp+18h+arg_C]
0x7C65D3: add     dword ptr [eax], 1
0x7C65D6: test    esi, esi
0x7C65D8: jnz     short loc_7C6597
0x7C65DA: mov     ecx, [esp+18h+var_4]
0x7C65DE: mov     ecx, [ecx+118h]
0x7C65E4: lea     eax, [esp+18h+arg_18]
0x7C65E8: push    eax
0x7C65E9: call    sub_405AD0
0x7C65EE: mov     eax, [eax]
0x7C65F0: mov     ecx, [eax+0E0h]
0x7C65F6: mov     edx, [eax+0E4h]
0x7C65FC: mov     eax, [eax+0E8h]
0x7C6602: mov     edi, ds:0A2807Ch
0x7C6608: mov     [esp+18h+arg_8], eax
0x7C660C: mov     eax, [esp+18h+arg_18]
0x7C6610: test    eax, eax
0x7C6612: mov     [esp+18h+arg_0], ecx
0x7C6616: mov     [esp+18h+arg_4], edx
0x7C661A: jz      short loc_7C6636
0x7C661C: mov     esi, eax
0x7C661E: add     eax, 4
0x7C6621: push    eax; lpAddend
0x7C6622: call    edi ; InterlockedDecrement
0x7C6624: test    eax, eax
0x7C6626: jnz     short loc_7C6636
0x7C6628: test    esi, esi
0x7C662A: jz      short loc_7C6636
0x7C662C: mov     edx, [esi]
0x7C662E: mov     eax, [edx]
0x7C6630: push    1
0x7C6632: mov     ecx, esi
0x7C6634: call    eax
0x7C6636: fld     [esp+18h+arg_4]
0x7C663A: fld     [esp+18h+arg_8]
0x7C663E: fcom    st(1)
0x7C6640: fnstsw  ax
0x7C6642: test    ah, 5
0x7C6645: jp      short loc_7C664F
0x7C6647: fxch    st(1)
0x7C6649: fst     [esp+18h+arg_18]
0x7C664D: jmp     short loc_7C6655
0x7C664F: fst     [esp+18h+arg_18]
0x7C6653: fxch    st(1)
0x7C6655: fld     [esp+18h+arg_0]
0x7C6659: fld     [esp+18h+arg_18]
0x7C665D: fcomp   st(1)
0x7C665F: fnstsw  ax
0x7C6661: test    ah, 5
0x7C6664: jp      short loc_7C666C
0x7C6666: fstp    st(1)
0x7C6668: fstp    st(1)
0x7C666A: jmp     short loc_7C667D
0x7C666C: fstp    st
0x7C666E: fcom    st(1)
0x7C6670: fnstsw  ax
0x7C6672: test    ah, 41h
0x7C6675: jnz     short loc_7C667B
0x7C6677: fstp    st(1)
0x7C6679: jmp     short loc_7C667D
0x7C667B: fstp    st
0x7C667D: mov     ecx, [esp+18h+arg_10]
0x7C6681: fstp    [esp+18h+arg_18]
0x7C6685: fld     [esp+18h+arg_18]
0x7C6689: mov     eax, [esp+18h+var_4]
0x7C668D: lea     edx, [esp+18h+arg_18]
0x7C6691: fstp    dword ptr [ecx]
0x7C6693: mov     ecx, [eax+118h]
0x7C6699: push    edx
0x7C669A: call    sub_405AD0
0x7C669F: mov     eax, [eax]
0x7C66A1: mov     ecx, [eax+0ECh]
0x7C66A7: mov     edx, [eax+0F0h]
0x7C66AD: mov     eax, [eax+0F4h]
0x7C66B3: mov     [esp+18h+arg_8], eax
0x7C66B7: mov     eax, [esp+18h+arg_18]
0x7C66BB: test    eax, eax
0x7C66BD: mov     [esp+18h+arg_0], ecx
0x7C66C1: mov     [esp+18h+arg_4], edx
0x7C66C5: jz      short loc_7C66E1
0x7C66C7: mov     esi, eax
0x7C66C9: add     eax, 4
0x7C66CC: push    eax; lpAddend
0x7C66CD: call    edi ; InterlockedDecrement
0x7C66CF: test    eax, eax
0x7C66D1: jnz     short loc_7C66E1
0x7C66D3: test    esi, esi
0x7C66D5: jz      short loc_7C66E1
0x7C66D7: mov     edx, [esi]
0x7C66D9: mov     eax, [edx]
0x7C66DB: push    1
0x7C66DD: mov     ecx, esi
0x7C66DF: call    eax
0x7C66E1: fld     [esp+18h+arg_4]
0x7C66E5: fld     [esp+18h+arg_8]
0x7C66E9: fcom    st(1)
0x7C66EB: fnstsw  ax
0x7C66ED: test    ah, 5
0x7C66F0: jp      short loc_7C66FA
0x7C66F2: fxch    st(1)
0x7C66F4: fst     [esp+18h+arg_18]
0x7C66F8: jmp     short loc_7C6700
0x7C66FA: fst     [esp+18h+arg_18]
0x7C66FE: fxch    st(1)
0x7C6700: fld     [esp+18h+arg_0]
0x7C6704: fld     [esp+18h+arg_18]
0x7C6708: fcomp   st(1)
0x7C670A: fnstsw  ax
0x7C670C: test    ah, 5
0x7C670F: jp      short loc_7C6717
0x7C6711: fstp    st(1)
0x7C6713: fstp    st(1)
0x7C6715: jmp     short loc_7C6724
0x7C6717: fstp    st
0x7C6719: fcom    st(1)
0x7C671B: fnstsw  ax
0x7C671D: test    ah, 41h
0x7C6720: jz      short loc_7C6713
0x7C6722: fstp    st
0x7C6724: mov     ecx, [esp+18h+arg_14]
0x7C6728: fstp    [esp+18h+arg_18]
0x7C672C: fld     [esp+18h+arg_18]
0x7C6730: pop     edi
0x7C6731: pop     esi
0x7C6732: fstp    dword ptr [ecx]
0x7C6734: fld     [esp+10h+var_8]
0x7C6738: pop     ebp
0x7C6739: pop     ebx
0x7C673A: add     esp, 8
0x7C673D: retn    1Ch
