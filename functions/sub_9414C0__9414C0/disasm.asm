0x9414C0: sub     esp, 54h
0x9414C3: push    ebx
0x9414C4: push    ebp
0x9414C5: mov     ebp, [esp+5Ch+arg_4]
0x9414C9: push    esi
0x9414CA: push    edi
0x9414CB: push    ecx
0x9414CC: mov     eax, esp
0x9414CE: mov     byte ptr [eax], 0
0x9414D1: mov     eax, [esp+68h+arg_0]
0x9414D5: push    eax
0x9414D6: lea     ecx, [esp+6Ch+var_50]
0x9414DA: mov     [esp+6Ch+var_40], 41h ; 'A'
0x9414DF: mov     [esp+6Ch+var_3F], 42h ; 'B'
0x9414E4: mov     [esp+6Ch+var_3E], 43h ; 'C'
0x9414E9: mov     [esp+6Ch+var_3D], 44h ; 'D'
0x9414EE: mov     [esp+6Ch+var_3C], 45h ; 'E'
0x9414F3: mov     [esp+6Ch+var_3B], 46h ; 'F'
0x9414F8: mov     [esp+6Ch+var_3A], 47h ; 'G'
0x9414FD: mov     [esp+6Ch+var_39], 48h ; 'H'
0x941502: mov     [esp+6Ch+var_38], 49h ; 'I'
0x941507: mov     [esp+6Ch+var_37], 4Ah ; 'J'
0x94150C: mov     [esp+6Ch+var_36], 4Bh ; 'K'
0x941511: mov     [esp+6Ch+var_35], 4Ch ; 'L'
0x941516: mov     [esp+6Ch+var_34], 4Dh ; 'M'
0x94151B: mov     [esp+6Ch+var_33], 4Eh ; 'N'
0x941520: mov     [esp+6Ch+var_32], 4Fh ; 'O'
0x941525: mov     [esp+6Ch+var_31], 50h ; 'P'
0x94152A: mov     [esp+6Ch+var_30], 51h ; 'Q'
0x94152F: mov     [esp+6Ch+var_2F], 52h ; 'R'
0x941534: mov     [esp+6Ch+var_2E], 53h ; 'S'
0x941539: mov     [esp+6Ch+var_2D], 54h ; 'T'
0x94153E: mov     [esp+6Ch+var_2C], 55h ; 'U'
0x941543: mov     [esp+6Ch+var_2B], 56h ; 'V'
0x941548: mov     [esp+6Ch+var_2A], 57h ; 'W'
0x94154D: mov     [esp+6Ch+var_29], 58h ; 'X'
0x941552: mov     [esp+6Ch+var_28], 59h ; 'Y'
0x941557: mov     [esp+6Ch+var_27], 5Ah ; 'Z'
0x94155C: mov     [esp+6Ch+var_26], 61h ; 'a'
0x941561: mov     [esp+6Ch+var_25], 62h ; 'b'
0x941566: mov     [esp+6Ch+var_24], 63h ; 'c'
0x94156B: mov     [esp+6Ch+var_23], 64h ; 'd'
0x941570: mov     [esp+6Ch+var_22], 65h ; 'e'
0x941575: mov     [esp+6Ch+var_21], 66h ; 'f'
0x94157A: mov     [esp+6Ch+var_20], 67h ; 'g'
0x94157F: mov     [esp+6Ch+var_1F], 68h ; 'h'
0x941584: mov     [esp+6Ch+var_1E], 69h ; 'i'
0x941589: mov     [esp+6Ch+var_1D], 6Ah ; 'j'
0x94158E: mov     [esp+6Ch+var_1C], 6Bh ; 'k'
0x941593: mov     [esp+6Ch+var_1B], 6Ch ; 'l'
0x941598: mov     [esp+6Ch+var_1A], 6Dh ; 'm'
0x94159D: mov     [esp+6Ch+var_19], 6Eh ; 'n'
0x9415A2: mov     [esp+6Ch+var_18], 6Fh ; 'o'
0x9415A7: mov     [esp+6Ch+var_17], 70h ; 'p'
0x9415AC: mov     [esp+6Ch+var_16], 71h ; 'q'
0x9415B1: mov     [esp+6Ch+var_15], 72h ; 'r'
0x9415B6: mov     [esp+6Ch+var_14], 73h ; 's'
0x9415BB: mov     [esp+6Ch+var_13], 74h ; 't'
0x9415C0: mov     [esp+6Ch+var_12], 75h ; 'u'
0x9415C5: mov     [esp+6Ch+var_11], 76h ; 'v'
0x9415CA: mov     [esp+6Ch+var_10], 77h ; 'w'
0x9415CF: mov     [esp+6Ch+var_F], 78h ; 'x'
0x9415D4: mov     [esp+6Ch+var_E], 79h ; 'y'
0x9415D9: mov     [esp+6Ch+var_D], 7Ah ; 'z'
0x9415DE: mov     byte ptr [esp+6Ch+var_C], 30h ; '0'
0x9415E3: mov     byte ptr [esp+6Ch+var_C+1], 31h ; '1'
0x9415E8: mov     byte ptr [esp+6Ch+var_C+2], 32h ; '2'
0x9415ED: mov     byte ptr [esp+6Ch+var_C+3], 33h ; '3'
0x9415F2: mov     [esp+6Ch+var_8], 34h ; '4'
0x9415F7: mov     [esp+6Ch+var_7], 35h ; '5'
0x9415FC: mov     [esp+6Ch+var_6], 36h ; '6'
0x941601: mov     [esp+6Ch+var_5], 37h ; '7'
0x941606: mov     [esp+6Ch+var_4], 38h ; '8'
0x94160B: mov     [esp+6Ch+var_3], 39h ; '9'
0x941610: mov     [esp+6Ch+var_2], 2Bh ; '+'
0x941615: mov     [esp+6Ch+var_1], 2Fh ; '/'
0x94161A: call    sub_9183A0
0x94161F: mov     edi, [esp+64h+arg_8]
0x941623: test    edi, edi
0x941625: mov     ebx, 13h
0x94162A: jle     loc_94174B
0x941630: cmp     edi, 3
0x941633: mov     byte ptr [esp+64h+arg_8], 0
0x941638: mov     word ptr [esp+64h+arg_8+1], 0
0x94163F: mov     esi, 3
0x941644: jge     short loc_941648
0x941646: mov     esi, edi
0x941648: push    esi
0x941649: lea     ecx, [esp+68h+arg_8]
0x94164D: push    ebp
0x94164E: push    ecx
0x94164F: call    sub_8B1890
0x941654: movzx   eax, byte ptr [esp+70h+arg_8]
0x941659: mov     edx, eax
0x94165B: shr     edx, 2
0x94165E: mov     cl, [esp+edx+70h+var_40]
0x941662: mov     [esp+70h+var_54], cl
0x941666: movzx   ecx, byte ptr [esp+70h+arg_8+1]
0x94166B: and     eax, 3
0x94166E: mov     edx, ecx
0x941670: shr     edx, 4
0x941673: shl     eax, 4
0x941676: or      edx, eax
0x941678: mov     al, [esp+edx+70h+var_40]
0x94167C: mov     [esp+70h+var_53], al
0x941680: movzx   eax, byte ptr [esp+70h+arg_8+2]
0x941685: and     ecx, 0Fh
0x941688: mov     edx, eax
0x94168A: shr     edx, 6
0x94168D: shl     ecx, 2
0x941690: or      edx, ecx
0x941692: mov     cl, [esp+edx+70h+var_40]
0x941696: and     eax, 3Fh
0x941699: mov     dl, [esp+eax+70h+var_40]
0x94169D: add     esp, 0Ch
0x9416A0: add     ebp, esi
0x9416A2: sub     edi, esi
0x9416A4: cmp     esi, 3
0x9416A7: mov     [esp+64h+var_52], cl
0x9416AB: mov     [esp+64h+var_51], dl
0x9416AF: jl      short loc_94171D
0x9416B1: push    4
0x9416B3: lea     eax, [esp+68h+var_54]
0x9416B7: push    eax
0x9416B8: lea     ecx, [esp+6Ch+var_50]
0x9416BC: call    sub_918390
0x9416C1: dec     ebx
0x9416C2: jnz     short loc_9416D9
0x9416C4: push    1
0x9416C6: push    offset asc_A366D0; "\n"
0x9416CB: lea     ecx, [esp+6Ch+var_50]
0x9416CF: call    sub_918390
0x9416D4: mov     ebx, 13h
0x9416D9: mov     ecx, [esp+64h+arg_0]
0x9416DD: mov     edx, [ecx]
0x9416DF: lea     eax, [esp+64h+arg_4]
0x9416E3: push    eax
0x9416E4: call    dword ptr [edx+8]
0x9416E7: cmp     byte ptr [eax], 0
0x9416EA: jz      short loc_941707
0x9416EC: test    edi, edi
0x9416EE: jg      loc_941630
0x9416F4: lea     ecx, [esp+64h+var_50]
0x9416F8: call    sub_918180
0x9416FD: xor     eax, eax
0x9416FF: pop     edi
0x941700: pop     esi
0x941701: pop     ebp
0x941702: pop     ebx
0x941703: add     esp, 54h
0x941706: retn
0x941707: lea     ecx, [esp+64h+var_50]
0x94170B: call    sub_918180
0x941710: mov     eax, 1
0x941715: pop     edi
0x941716: pop     esi
0x941717: pop     ebp
0x941718: pop     ebx
0x941719: add     esp, 54h
0x94171C: retn
0x94171D: dec     esi
0x94171E: jz      short loc_941731
0x941720: dec     esi
0x941721: jnz     short loc_94174B
0x941723: push    4
0x941725: lea     ecx, [esp+68h+var_54]
0x941729: mov     [esp+68h+var_51], 3Dh ; '='
0x94172E: push    ecx
0x94172F: jmp     short loc_941742
0x941731: mov     al, 3Dh ; '='
0x941733: push    4
0x941735: lea     edx, [esp+68h+var_54]
0x941739: mov     [esp+68h+var_51], al
0x94173D: mov     [esp+68h+var_52], al
0x941741: push    edx
0x941742: lea     ecx, [esp+6Ch+var_50]
0x941746: call    sub_918390
0x94174B: lea     ecx, [esp+64h+var_50]
0x94174F: call    sub_918180
0x941754: pop     edi
0x941755: pop     esi
0x941756: pop     ebp
0x941757: xor     eax, eax
0x941759: pop     ebx
0x94175A: add     esp, 54h
0x94175D: retn
