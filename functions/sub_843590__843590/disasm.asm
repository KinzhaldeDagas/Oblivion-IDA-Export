0x843590: push    0FFFFFFFFh
0x843592: push    offset SEH_882120
0x843597: mov     eax, large fs:0
0x84359D: push    eax
0x84359E: push    ebx
0x84359F: push    ebp
0x8435A0: push    esi
0x8435A1: push    edi
0x8435A2: mov     eax, ds:0B30AACh
0x8435A7: xor     eax, esp
0x8435A9: push    eax
0x8435AA: lea     eax, [esp+20h+var_C]
0x8435AE: mov     large fs:0, eax
0x8435B4: mov     esi, ecx
0x8435B6: mov     ebx, [esp+20h+arg_8]
0x8435BA: mov     eax, [ebx+10h]
0x8435BD: mov     edi, ds:0B45760h
0x8435C3: push    eax
0x8435C4: call    sub_848C40
0x8435C9: mov     ebx, [ebx+0Ch]
0x8435CC: push    ebx
0x8435CD: mov     ecx, esi
0x8435CF: call    sub_848E50
0x8435D4: mov     ecx, [esp+20h+arg_0]
0x8435D8: mov     eax, [esi]
0x8435DA: mov     edx, [eax+0BCh]
0x8435E0: push    0
0x8435E2: push    ebx
0x8435E3: push    ecx
0x8435E4: mov     ecx, esi
0x8435E6: call    edx
0x8435E8: mov     eax, [edi+24h]
0x8435EB: mov     ebx, [esp+20h+arg_C]
0x8435EF: mov     ebp, [eax]
0x8435F1: mov     edx, [ebx]
0x8435F3: mov     eax, [edx+88h]
0x8435F9: push    0
0x8435FB: mov     ecx, ebx
0x8435FD: mov     [esp+24h+arg_8], ebp
0x843601: call    eax
0x843603: mov     ebp, [ebp+4]
0x843606: cmp     ebp, eax
0x843608: mov     [esp+20h+arg_0], eax
0x84360C: jz      short loc_843648
0x84360E: test    ebp, ebp
0x843610: jz      short loc_843633
0x843612: lea     ecx, [ebp+4]
0x843615: push    ecx; lpAddend
0x843616: call    dword ptr ds:0A2807Ch
0x84361C: test    eax, eax
0x84361E: jnz     short loc_84362F
0x843620: test    ebp, ebp
0x843622: jz      short loc_84362F
0x843624: mov     edx, [ebp+0]
0x843627: mov     eax, [edx]
0x843629: push    1
0x84362B: mov     ecx, ebp
0x84362D: call    eax
0x84362F: mov     eax, [esp+20h+arg_0]
0x843633: test    eax, eax
0x843635: mov     ecx, [esp+20h+arg_8]
0x843639: mov     [ecx+4], eax
0x84363C: jz      short loc_843648
0x84363E: add     eax, 4
0x843641: push    eax; lpAddend
0x843642: call    dword ptr ds:0A28078h
0x843648: mov     edx, [esp+20h+arg_8]
0x84364C: push    ebx
0x84364D: push    edx
0x84364E: mov     ecx, esi
0x843650: call    sub_848FA0
0x843655: mov     eax, [edi+24h]
0x843658: mov     ebp, [eax+4]
0x84365B: push    0
0x84365D: push    ebx
0x84365E: mov     ecx, esi
0x843660: mov     [esp+28h+arg_8], ebp
0x843664: call    sub_848FD0
0x843669: mov     ebp, [ebp+4]
0x84366C: cmp     ebp, eax
0x84366E: mov     [esp+20h+arg_0], eax
0x843672: jz      short loc_8436AE
0x843674: test    ebp, ebp
0x843676: jz      short loc_843699
0x843678: lea     ecx, [ebp+4]
0x84367B: push    ecx; lpAddend
0x84367C: call    dword ptr ds:0A2807Ch
0x843682: test    eax, eax
0x843684: jnz     short loc_843695
0x843686: test    ebp, ebp
0x843688: jz      short loc_843695
0x84368A: mov     edx, [ebp+0]
0x84368D: mov     eax, [edx]
0x84368F: push    1
0x843691: mov     ecx, ebp
0x843693: call    eax
0x843695: mov     eax, [esp+20h+arg_0]
0x843699: test    eax, eax
0x84369B: mov     ecx, [esp+20h+arg_8]
0x84369F: mov     [ecx+4], eax
0x8436A2: jz      short loc_8436AE
0x8436A4: add     eax, 4
0x8436A7: push    eax; lpAddend
0x8436A8: call    dword ptr ds:0A28078h
0x8436AE: mov     edx, [esp+20h+arg_8]
0x8436B2: push    ebx
0x8436B3: push    edx
0x8436B4: mov     ecx, esi
0x8436B6: call    sub_848FA0
0x8436BB: mov     ecx, [edi+24h]
0x8436BE: mov     ebx, [ecx+14h]
0x8436C1: mov     eax, ds:0B43108h
0x8436C6: mov     ebp, [ebx+4]
0x8436C9: add     ebx, 4
0x8436CC: cmp     ebp, eax
0x8436CE: mov     [esp+20h+arg_8], eax
0x8436D2: jz      short loc_843709
0x8436D4: test    ebp, ebp
0x8436D6: jz      short loc_8436F9
0x8436D8: lea     edx, [ebp+4]
0x8436DB: push    edx; lpAddend
0x8436DC: call    dword ptr ds:0A2807Ch
0x8436E2: test    eax, eax
0x8436E4: jnz     short loc_8436F5
0x8436E6: test    ebp, ebp
0x8436E8: jz      short loc_8436F5
0x8436EA: mov     eax, [ebp+0]
0x8436ED: mov     edx, [eax]
0x8436EF: push    1
0x8436F1: mov     ecx, ebp
0x8436F3: call    edx
0x8436F5: mov     eax, [esp+20h+arg_8]
0x8436F9: test    eax, eax
0x8436FB: mov     [ebx], eax
0x8436FD: jz      short loc_843709
0x8436FF: add     eax, 4
0x843702: push    eax; lpAddend
0x843703: call    dword ptr ds:0A28078h
0x843709: mov     eax, [edi+24h]
0x84370C: mov     ebp, [eax+18h]
0x84370F: mov     eax, ds:0B4310Ch
0x843714: mov     ebx, [ebp+4]
0x843717: cmp     ebx, eax
0x843719: mov     ecx, eax
0x84371B: mov     [esp+20h+arg_8], ecx
0x84371F: jz      short loc_843756
0x843721: test    ebx, ebx
0x843723: jz      short loc_843745
0x843725: lea     ecx, [ebx+4]
0x843728: push    ecx; lpAddend
0x843729: call    dword ptr ds:0A2807Ch
0x84372F: test    eax, eax
0x843731: jnz     short loc_843741
0x843733: test    ebx, ebx
0x843735: jz      short loc_843741
0x843737: mov     edx, [ebx]
0x843739: mov     eax, [edx]
0x84373B: push    1
0x84373D: mov     ecx, ebx
0x84373F: call    eax
0x843741: mov     ecx, [esp+20h+arg_8]
0x843745: test    ecx, ecx
0x843747: mov     [ebp+4], ecx
0x84374A: jz      short loc_843756
0x84374C: add     ecx, 4
0x84374F: push    ecx; lpAddend
0x843750: call    dword ptr ds:0A28078h
0x843756: mov     ebx, 1
0x84375B: add     [edi+60h], ebx
0x84375E: mov     [esp+20h+arg_8], edi
0x843762: mov     edx, [esi+38h]
0x843765: lea     ecx, [esp+20h+arg_8]
0x843769: push    ecx
0x84376A: push    edx
0x84376B: lea     ecx, [esi+40h]
0x84376E: mov     [esp+28h+var_4], 0
0x843776: call    sub_76CE40
0x84377B: or      eax, 0FFFFFFFFh
0x84377E: add     [edi+60h], eax
0x843781: mov     [esp+20h+var_4], eax
0x843785: jnz     short loc_84378E
0x843787: mov     ecx, edi
0x843789: call    sub_7604D0
0x84378E: add     [esi+38h], ebx
0x843791: mov     ecx, [esp+20h+var_C]
0x843795: mov     large fs:0, ecx
0x84379C: pop     ecx
0x84379D: pop     edi
0x84379E: pop     esi
0x84379F: pop     ebp
0x8437A0: pop     ebx
0x8437A1: add     esp, 0Ch
0x8437A4: retn    10h
