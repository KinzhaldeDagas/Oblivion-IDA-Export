0x8984E0: push    ebp
0x8984E1: mov     ebp, esp
0x8984E3: and     esp, 0FFFFFFF0h
0x8984E6: sub     esp, 94h
0x8984EC: mov     eax, ds:0B30AACh
0x8984F1: xor     eax, esp
0x8984F3: mov     [esp+94h+var_4], eax
0x8984FA: cmp     byte ptr [ecx+8], 0
0x8984FE: push    ebx
0x8984FF: push    esi
0x898500: push    edi
0x898501: mov     [esp+0A0h+var_7C], ecx
0x898505: mov     [esp+0A0h+var_88], 0
0x89850D: jz      loc_89873B
0x898513: fldz
0x898515: fcomp   dword ptr ds:0BA7B9Ch
0x89851B: fnstsw  ax
0x89851D: test    ah, 44h
0x898520: jnp     loc_89873B
0x898526: fld     [ebp+arg_0]
0x898529: add     ecx, 0Ch
0x89852C: fdiv    qword ptr ds:0A96A60h
0x898532: mov     [esp+0A0h+var_84], ecx
0x898536: call    Double_To_SInt32
0x89853B: mov     ecx, 1
0x898540: sub     ecx, eax
0x898542: mov     [esp+0A0h+var_90], ecx
0x898546: fild    [esp+0A0h+var_90]
0x89854A: fstp    [esp+0A0h+var_74]
0x89854E: mov     edi, edi
0x898550: mov     ecx, [esp+0A0h+var_84]
0x898554: test    ecx, ecx
0x898556: jz      short loc_898570
0x898558: lea     edx, [esp+0A0h+var_78]
0x89855C: push    edx
0x89855D: call    sub_677C70
0x898562: or      [esp+0A0h+var_88], 1
0x898567: cmp     dword ptr [eax], 0
0x89856A: jz      short loc_898570
0x89856C: mov     bl, 1
0x89856E: jmp     short loc_898572
0x898570: xor     bl, bl
0x898572: test    byte ptr [esp+0A0h+var_88], 1
0x898577: jz      short loc_8985A2
0x898579: mov     esi, [esp+0A0h+var_78]
0x89857D: and     [esp+0A0h+var_88], 0FFFFFFFEh
0x898582: test    esi, esi
0x898584: jz      short loc_8985A2
0x898586: lea     eax, [esi+4]
0x898589: push    eax; lpAddend
0x89858A: call    dword ptr ds:0A2807Ch
0x898590: test    eax, eax
0x898592: jnz     short loc_8985A2
0x898594: test    esi, esi
0x898596: jz      short loc_8985A2
0x898598: mov     edx, [esi]
0x89859A: mov     eax, [edx]
0x89859C: push    1
0x89859E: mov     ecx, esi
0x8985A0: call    eax
0x8985A2: test    bl, bl
0x8985A4: jz      loc_89873B
0x8985AA: lea     ecx, [esp+0A0h+var_80]
0x8985AE: push    ecx
0x8985AF: mov     ecx, [esp+0A4h+var_84]
0x8985B3: call    sub_677C70
0x8985B8: mov     edi, [eax]
0x8985BA: mov     eax, [esp+0A0h+var_80]
0x8985BE: test    eax, eax
0x8985C0: jz      short loc_8985E0
0x8985C2: mov     esi, eax
0x8985C4: add     eax, 4
0x8985C7: push    eax; lpAddend
0x8985C8: call    dword ptr ds:0A2807Ch
0x8985CE: test    eax, eax
0x8985D0: jnz     short loc_8985E0
0x8985D2: test    esi, esi
0x8985D4: jz      short loc_8985E0
0x8985D6: mov     edx, [esi]
0x8985D8: mov     eax, [edx]
0x8985DA: push    1
0x8985DC: mov     ecx, esi
0x8985DE: call    eax
0x8985E0: mov     esi, [edi+8]
0x8985E3: fld     dword ptr ds:0BA7B9Ch
0x8985E9: mov     edi, [esp+0A0h+var_7C]
0x8985ED: mov     edx, [edi]
0x8985EF: mov     eax, [edx+1Ch]
0x8985F2: push    ecx
0x8985F3: mov     ecx, edi
0x8985F5: fstp    [esp+0A4h+var_A4]
0x8985F8: call    eax
0x8985FA: fld     dword ptr ds:0BA7B9Ch
0x898600: fld     qword ptr ds:0A3C770h
0x898606: fmul    st(1), st
0x898608: fxch    st(2)
0x89860A: faddp   st(1), st
0x89860C: fstp    [esp+0A0h+var_90]
0x898610: fldz
0x898612: fcom    [esp+0A0h+var_90]
0x898616: fnstsw  ax
0x898618: test    ah, 41h
0x89861B: jnz     short loc_898623
0x89861D: fstp    [esp+0A0h+var_90]
0x898621: jmp     short loc_898625
0x898623: fstp    st
0x898625: fld     [esp+0A0h+var_90]
0x898629: fld     dword ptr ds:0B2E8A8h
0x89862F: fcom    st(1)
0x898631: fnstsw  ax
0x898633: fstp    st(1)
0x898635: test    ah, 5
0x898638: jp      short loc_898640
0x89863A: fstp    [esp+0A0h+var_90]
0x89863E: jmp     short loc_898642
0x898640: fstp    st
0x898642: fld     [esp+0A0h+var_90]
0x898646: mov     edx, [edi]
0x898648: fmul    [esp+0A0h+var_74]
0x89864C: mov     eax, [edx+1Ch]
0x89864F: push    ecx
0x898650: mov     ecx, edi
0x898652: fstp    [esp+0A4h+var_90]
0x898656: fmul    dword ptr ds:0B3F9A4h
0x89865C: fstp    [esp+0A4h+var_8C]
0x898660: fld     [esp+0A4h+var_8C]
0x898664: fstp    [esp+0A4h+var_A4]
0x898667: call    eax
0x898669: fstp    [esp+0A0h+var_8C]
0x89866D: fld     dword ptr ds:0BA7BA0h
0x898673: fadd    [esp+0A0h+var_8C]
0x898677: fstp    [esp+0A0h+var_8C]
0x89867B: fld     [esp+0A0h+var_8C]
0x89867F: fld     dword ptr ds:0B3F9A0h
0x898685: fcom    st(1)
0x898687: fnstsw  ax
0x898689: test    ah, 5
0x89868C: jp      short loc_89869C
0x89868E: fsubp   st(1), st
0x898690: fstp    [esp+0A0h+var_8C]
0x898694: fld     [esp+0A0h+var_8C]
0x898698: fldz
0x89869A: jmp     short loc_8986BB
0x89869C: fldz
0x89869E: fcom    st(2)
0x8986A0: fnstsw  ax
0x8986A2: test    ah, 41h
0x8986A5: jnz     loc_898737
0x8986AB: fxch    st(1)
0x8986AD: faddp   st(2), st
0x8986AF: fxch    st(1)
0x8986B1: fstp    [esp+0A0h+var_8C]
0x8986B5: fld     [esp+0A0h+var_8C]
0x8986B9: fxch    st(1)
0x8986BB: fst     [esp+0A0h+var_60]
0x8986BF: push    ecx
0x8986C0: fld     [esp+0A4h+var_90]
0x8986C4: lea     ecx, [esp+0A4h+var_70]
0x8986C8: fstp    [esp+0A4h+var_5C]
0x8986CC: fst     [esp+0A4h+var_58]
0x8986D0: fst     [esp+0A4h+var_54]
0x8986D4: fst     [esp+0A4h+var_70]
0x8986D8: fst     [esp+0A4h+var_6C]
0x8986DC: fld1
0x8986DE: fstp    [esp+0A4h+var_68]
0x8986E2: fstp    [esp+0A4h+var_64]
0x8986E6: fstp    [esp+0A4h+var_A4]; float
0x8986E9: push    ecx; int
0x8986EA: lea     ecx, [esp+0A8h+var_40]
0x8986EE: call    sub_8B1EB0
0x8986F3: lea     edx, [esp+0A0h+var_60]
0x8986F7: push    edx
0x8986F8: lea     eax, [esp+0A4h+var_40]
0x8986FC: push    eax
0x8986FD: lea     ecx, [esp+0A8h+var_50]
0x898701: call    sub_88FE00
0x898706: test    esi, esi
0x898708: jz      short loc_898727
0x89870A: mov     ecx, esi
0x89870C: call    sub_8A6410
0x898711: fld     [ebp+arg_0]
0x898714: mov     ecx, [esi+50h]
0x898717: mov     edx, [ecx]
0x898719: mov     edx, [edx+6Ch]
0x89871C: lea     eax, [esp+0A0h+var_50]
0x898720: push    eax
0x898721: push    ecx
0x898722: fstp    [esp+0A8h+var_A8]
0x898725: call    edx
0x898727: mov     eax, [esp+0A0h+var_84]
0x89872B: mov     ecx, [eax+4]
0x89872E: mov     [esp+0A0h+var_84], ecx
0x898732: jmp     loc_898550
0x898737: fstp    st(1)
0x898739: jmp     short loc_8986BB
0x89873B: mov     ecx, [esp+0A0h+var_4]
0x898742: pop     edi
0x898743: pop     esi
0x898744: pop     ebx
0x898745: xor     ecx, esp
0x898747: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89874C: mov     esp, ebp
0x89874E: pop     ebp
0x89874F: retn    4
