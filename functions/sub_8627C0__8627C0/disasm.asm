0x8627C0: sub     esp, 0C4h
0x8627C6: push    ebx
0x8627C7: push    ebp
0x8627C8: push    esi
0x8627C9: mov     esi, [esp+0D0h+arg_0]
0x8627D0: xor     ebp, ebp
0x8627D2: mov     ecx, esi
0x8627D4: mov     [esp+0D0h+var_C4], ebp
0x8627D8: call    sub_7EE1F0
0x8627DD: mov     ebx, eax
0x8627DF: cmp     ebx, ebp
0x8627E1: jnz     short loc_8627F4
0x8627E3: mov     ecx, esi
0x8627E5: call    sub_7EE1D0
0x8627EA: mov     ebx, eax
0x8627EC: cmp     ebx, ebp
0x8627EE: jz      loc_862AA2
0x8627F4: fldz
0x8627F6: mov     [esp+0D0h+var_B8], offset unk_B46298
0x8627FE: fld     dword ptr ds:0A3D65Ch
0x862804: push    edi
0x862805: mov     eax, ds:0B42E88h
0x86280A: cmp     [esp+0D4h+var_C4], eax
0x86280E: jge     loc_862A9D
0x862814: lea     esi, [ebx+8]
0x862817: mov     ecx, 0Dh
0x86281C: lea     edi, [esp+0D4h+var_74]
0x862820: rep movsd
0x862822: fld     [esp+0D4h+var_74]
0x862826: fstp    [esp+0D4h+var_40]
0x86282D: fld     [esp+0D4h+var_70]
0x862831: fstp    [esp+0D4h+var_3C]
0x862838: fld     [esp+0D4h+var_6C]
0x86283C: fstp    [esp+0D4h+var_38]
0x862843: fld     [esp+0D4h+var_50]
0x86284A: fstp    [esp+0D4h+var_34]
0x862851: fld     [esp+0D4h+var_68]
0x862855: fstp    [esp+0D4h+var_30]
0x86285C: fld     [esp+0D4h+var_64]
0x862860: fstp    [esp+0D4h+var_2C]
0x862867: mov     edi, [esp+0D4h+var_B8]
0x86286B: fld     [esp+0D4h+var_60]
0x86286F: mov     ecx, 10h
0x862874: fstp    [esp+0D4h+var_28]
0x86287B: lea     esi, [esp+0D4h+var_40]
0x862882: fld     [esp+0D4h+var_4C]
0x862889: mov     eax, 5
0x86288E: fstp    [esp+0D4h+var_24]
0x862895: fld     [esp+0D4h+var_5C]
0x862899: fstp    [esp+0D4h+var_20]
0x8628A0: fld     [esp+0D4h+var_58]
0x8628A4: fstp    [esp+0D4h+var_1C]
0x8628AB: fld     [esp+0D4h+var_54]
0x8628B2: fstp    [esp+0D4h+var_18]
0x8628B9: fld     [esp+0D4h+var_48]
0x8628C0: fstp    [esp+0D4h+var_14]
0x8628C7: fxch    st(1)
0x8628C9: fst     [esp+0D4h+var_10]
0x8628D0: fst     [esp+0D4h+var_C]
0x8628D7: fst     [esp+0D4h+var_8]
0x8628DE: fld     [esp+0D4h+var_44]
0x8628E5: fstp    [esp+0D4h+var_4]
0x8628EC: rep movsd
0x8628EE: fld     dword ptr [ebx+40h]
0x8628F1: fstp    [esp+0D4h+var_C0]
0x8628F5: fld1
0x8628F7: fstp    [esp+0D4h+var_BC]
0x8628FB: test    al, 1
0x8628FD: fld     [esp+0D4h+var_C0]
0x862901: jz      short loc_86290D
0x862903: fld     st
0x862905: fmul    [esp+0D4h+var_BC]
0x862909: fstp    [esp+0D4h+var_BC]
0x86290D: shr     eax, 1
0x86290F: jz      short loc_862919
0x862911: fmul    st, st
0x862913: fstp    [esp+0D4h+var_C0]
0x862917: jmp     short loc_8628FB
0x862919: fstp    st
0x86291B: fld     [esp+0D4h+var_BC]
0x86291F: fstp    [esp+0D4h+var_C0]
0x862923: fld     [esp+0D4h+var_C0]
0x862927: fld1
0x862929: fsubrp  st(1), st
0x86292B: fstp    dword ptr [ebp+0B46218h]
0x862931: movzx   eax, byte ptr [ebx+44h]
0x862935: cmp     eax, 3; switch 4 cases
0x862938: ja      def_86293E
0x86293E: jmp     ds:jpt_86293E[eax*4]; switch jump
0x862945: fst     [esp+0D4h+var_B4]; jumptable 0086293E case 0
0x862949: mov     ecx, [esp+0D4h+var_B4]
0x86294D: fst     [esp+0D4h+var_AC]
0x862951: mov     eax, [esp+0D4h+var_AC]
0x862955: fxch    st(1)
0x862957: mov     ss:dword_B47008[ebp], ecx
0x86295D: fst     [esp+0D4h+var_B0]
0x862961: mov     edx, [esp+0D4h+var_B0]
0x862965: fst     [esp+0D4h+var_A8]
0x862969: mov     ecx, [esp+0D4h+var_A8]
0x86296D: mov     ss:dword_B4700C[ebp], edx
0x862973: mov     ss:dword_B47010[ebp], eax
0x862979: mov     ss:flt_B47014[ebp], ecx
0x86297F: jmp     loc_862A60
0x862984: fxch    st(1); jumptable 0086293E case 1
0x862986: fst     [esp+0D4h+var_94]
0x86298A: mov     edx, [esp+0D4h+var_94]
0x86298E: fst     [esp+0D4h+var_90]
0x862992: mov     eax, [esp+0D4h+var_90]
0x862996: fst     [esp+0D4h+var_88]
0x86299A: mov     ss:dword_B47008[ebp], edx
0x8629A0: mov     edx, [esp+0D4h+var_88]
0x8629A4: fxch    st(1)
0x8629A6: fst     [esp+0D4h+var_8C]
0x8629AA: mov     ecx, [esp+0D4h+var_8C]
0x8629AE: mov     ss:dword_B4700C[ebp], eax
0x8629B4: mov     ss:dword_B47010[ebp], ecx
0x8629BA: mov     ss:flt_B47014[ebp], edx
0x8629C0: jmp     loc_862A5E
0x8629C5: fst     [esp+0D4h+var_84]; jumptable 0086293E case 2
0x8629C9: mov     eax, [esp+0D4h+var_84]
0x8629CD: fxch    st(1)
0x8629CF: mov     ss:dword_B47008[ebp], eax
0x8629D5: fst     [esp+0D4h+var_80]
0x8629D9: mov     ecx, [esp+0D4h+var_80]
0x8629DD: fst     [esp+0D4h+var_7C]
0x8629E1: mov     edx, [esp+0D4h+var_7C]
0x8629E5: fst     [esp+0D4h+var_78]
0x8629E9: mov     eax, [esp+0D4h+var_78]
0x8629ED: mov     ss:dword_B4700C[ebp], ecx
0x8629F3: mov     ss:dword_B47010[ebp], edx
0x8629F9: mov     ss:flt_B47014[ebp], eax
0x8629FF: jmp     short loc_862A60
0x862A01: fxch    st(1); jumptable 0086293E case 3
0x862A03: fst     [esp+0D4h+var_A4]
0x862A07: mov     ecx, [esp+0D4h+var_A4]
0x862A0B: fst     [esp+0D4h+var_A0]
0x862A0F: mov     edx, [esp+0D4h+var_A0]
0x862A13: mov     ss:dword_B47008[ebp], ecx
0x862A19: fst     [esp+0D4h+var_9C]
0x862A1D: mov     eax, [esp+0D4h+var_9C]
0x862A21: fst     [esp+0D4h+var_98]
0x862A25: mov     ecx, [esp+0D4h+var_98]
0x862A29: mov     ss:dword_B4700C[ebp], edx
0x862A2F: mov     ss:dword_B47010[ebp], eax
0x862A35: mov     ss:flt_B47014[ebp], ecx
0x862A3B: jmp     short loc_862A60
