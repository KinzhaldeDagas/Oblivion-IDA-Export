0x5677B0: sub     esp, 24h
0x5677B3: mov     eax, [esp+24h+arg_4]
0x5677B7: sub     eax, 1
0x5677BA: push    ebx
0x5677BB: push    esi
0x5677BC: push    edi
0x5677BD: mov     edi, ecx
0x5677BF: mov     [esp+30h+var_24], 0
0x5677C7: jz      loc_567A01
0x5677CD: sub     eax, 1
0x5677D0: jz      loc_56785C
0x5677D6: sub     eax, 1
0x5677D9: jnz     loc_567B6B
0x5677DF: mov     ecx, [edi+24h]
0x5677E2: test    ecx, ecx
0x5677E4: jz      short loc_5677ED
0x5677E6: call    TESPackage_LocationData_GetRadius
0x5677EB: jmp     short loc_5677EF
0x5677ED: xor     eax, eax
0x5677EF: test    eax, eax
0x5677F1: mov     ebx, eax
0x5677F3: mov     [esp+30h+var_24], ebx
0x5677F7: jnz     short loc_56783E
0x5677F9: mov     ecx, [edi+24h]
0x5677FC: test    ecx, ecx
0x5677FE: jz      short loc_56783A
0x567800: call    sub_5697E0
0x567805: mov     esi, eax
0x567807: test    esi, esi
0x567809: jz      short loc_56783A
0x56780B: mov     ecx, esi
0x56780D: call    sub_4D74B0
0x567812: test    al, al
0x567814: jnz     loc_567A4B
0x56781A: mov     eax, [esi]
0x56781C: mov     edx, [eax+170h]
0x567822: mov     ecx, esi
0x567824: call    edx
0x567826: push    eax
0x567827: call    sub_46D5C0
0x56782C: add     esp, 4
0x56782F: call    Double_To_SInt32
0x567834: mov     ebx, eax
0x567836: mov     [esp+30h+var_24], eax
0x56783A: test    ebx, ebx
0x56783C: jz      short loc_567846
0x56783E: test    ebx, ebx
0x567840: jge     loc_567B6B
0x567846: mov     eax, ds:0B36B28h
0x56784B: pop     edi
0x56784C: mov     [esp+2Ch+var_24], eax
0x567850: fild    [esp+2Ch+var_24]
0x567854: pop     esi
0x567855: pop     ebx
0x567856: add     esp, 24h
0x567859: retn    8
0x56785C: mov     ebx, [esp+30h+arg_0]
0x567860: mov     ecx, ebx
0x567862: call    sub_5EAE10
0x567867: mov     esi, eax
0x567869: test    esi, esi
0x56786B: jz      loc_5679EB
0x567871: mov     edx, [esi]
0x567873: mov     eax, [edx+174h]
0x567879: mov     ecx, esi
0x56787B: call    eax
0x56787D: mov     ecx, esi
0x56787F: call    sub_4D74B0
0x567884: test    al, al
0x567886: jnz     loc_567A4B
0x56788C: mov     edx, [esi]
0x56788E: mov     eax, [edx+170h]
0x567894: mov     ecx, esi
0x567896: call    eax
0x567898: cmp     eax, ds:0B35EB0h
0x56789E: jz      loc_567B37
0x5678A4: mov     edx, [esi]
0x5678A6: mov     eax, [edx+170h]
0x5678AC: mov     ecx, esi
0x5678AE: call    eax
0x5678B0: cmp     eax, ds:0B35EACh
0x5678B6: jz      loc_567B37
0x5678BC: mov     ecx, [edi+28h]
0x5678BF: test    ecx, ecx
0x5678C1: jz      short loc_5678E0
0x5678C3: call    sub_569E60
0x5678C8: test    eax, eax
0x5678CA: jz      short loc_5678E0
0x5678CC: mov     ecx, [edi+28h]
0x5678CF: call    sub_452A60
0x5678D4: test    eax, eax
0x5678D6: mov     [esp+30h+var_24], eax
0x5678DA: jnz     loc_567B6B
0x5678E0: mov     edx, [esi]
0x5678E2: mov     eax, [edx+190h]
0x5678E8: mov     ecx, esi
0x5678EA: call    eax
0x5678EC: test    al, al
0x5678EE: jnz     loc_5679EB
0x5678F4: mov     edx, [esi]
0x5678F6: mov     eax, [edx+170h]
0x5678FC: mov     ecx, esi
0x5678FE: call    eax
0x567900: push    eax
0x567901: call    sub_46D5C0
0x567906: add     esp, 4
0x567909: call    Double_To_SInt32
0x56790E: mov     edx, [esi]
0x567910: mov     edi, eax
0x567912: mov     eax, [edx+170h]
0x567918: mov     ecx, esi
0x56791A: mov     [esp+30h+var_24], edi
0x56791E: call    eax
0x567920: movzx   eax, byte ptr [eax+4]
0x567924: cmp     eax, 12h
0x567927: jz      loc_5679E3
0x56792D: cmp     eax, 17h
0x567930: jz      loc_5679E3
0x567936: cmp     eax, 1Ch
0x567939: jz      loc_5679E3
0x56793F: mov     edx, [ebx]
0x567941: mov     eax, [edx+26Ch]
0x567947: mov     ecx, ebx
0x567949: call    eax
0x56794B: fiadd   [esp+30h+var_24]
0x56794F: call    Double_To_SInt32
0x567954: mov     edi, eax
0x567956: mov     ecx, ebx
0x567958: mov     [esp+30h+var_24], edi
0x56795C: call    sub_5E40C0
0x567961: fstp    [esp+30h+arg_0]
0x567965: mov     edx, [esi]
0x567967: mov     eax, [edx+174h]
0x56796D: mov     ecx, esi
0x56796F: call    eax
0x567971: fld     dword ptr [eax+8]
0x567974: fstp    [esp+30h+arg_4]
0x567978: fld     [esp+30h+arg_0]
0x56797C: fld     [esp+30h+arg_4]
0x567980: fcom    st(1)
0x567982: fnstsw  ax
0x567984: test    ah, 5
0x567987: jp      short loc_5679DF
0x567989: mov     edx, [ebx]
0x56798B: fsubp   st(1), st
0x56798D: mov     edx, [edx+15Ch]
0x567993: lea     eax, [esp+30h+var_18]
0x567997: push    eax
0x567998: fstp    qword ptr [esp+34h+var_24+4]
0x56799C: mov     ecx, ebx
0x56799E: call    edx
0x5679A0: fld     dword ptr [eax+8]
0x5679A3: fmul    qword ptr ds:0A2FAA0h
0x5679A9: fcomp   qword ptr [esp+30h+var_24+4]
0x5679AD: fnstsw  ax
0x5679AF: test    ah, 41h
0x5679B2: jnz     short loc_5679E3
0x5679B4: mov     eax, [ebx]
0x5679B6: mov     edx, [eax+15Ch]
0x5679BC: lea     ecx, [esp+30h+var_C]
0x5679C0: push    ecx
0x5679C1: mov     ecx, ebx
0x5679C3: call    edx
0x5679C5: fld     dword ptr [eax+8]
0x5679C8: fmul    qword ptr ds:0A2FAA0h
0x5679CE: fiadd   [esp+30h+var_24]
0x5679D2: call    Double_To_SInt32
0x5679D7: mov     edi, eax
0x5679D9: mov     [esp+30h+var_24], edi
0x5679DD: jmp     short loc_5679E3
0x5679DF: fstp    st(1)
0x5679E1: fstp    st
0x5679E3: test    edi, edi
0x5679E5: jnz     loc_567B6B
0x5679EB: mov     eax, ds:0B36B28h
0x5679F0: pop     edi
0x5679F1: mov     [esp+2Ch+var_24], eax
0x5679F5: fild    [esp+2Ch+var_24]
0x5679F9: pop     esi
0x5679FA: pop     ebx
0x5679FB: add     esp, 24h
0x5679FE: retn    8
0x567A01: mov     ecx, [edi+24h]
0x567A04: test    ecx, ecx
0x567A06: jz      short loc_567A0F
0x567A08: call    TESPackage_LocationData_GetRadius
0x567A0D: jmp     short loc_567A11
0x567A0F: xor     eax, eax
0x567A11: test    eax, eax
0x567A13: mov     ebx, eax
0x567A15: mov     [esp+30h+var_24], ebx
0x567A19: jnz     loc_567B6B
0x567A1F: mov     ecx, [edi+24h]
0x567A22: test    ecx, ecx
0x567A24: jz      loc_567B5D
0x567A2A: call    sub_5697E0
0x567A2F: mov     esi, eax
0x567A31: test    esi, esi
0x567A33: jz      loc_567B4C
0x567A39: mov     ecx, [esp+30h+arg_0]
0x567A3D: mov     edx, [ecx]
0x567A3F: mov     eax, [edx+380h]
0x567A45: call    eax
0x567A47: cmp     esi, eax
0x567A49: jnz     short loc_567A60
0x567A4B: pop     edi
0x567A4C: mov     [esp+2Ch+var_24], 0Ah
0x567A54: fild    [esp+2Ch+var_24]
0x567A58: pop     esi
0x567A59: pop     ebx
0x567A5A: add     esp, 24h
0x567A5D: retn    8
0x567A60: mov     ecx, esi
0x567A62: call    sub_4D74B0
0x567A67: test    al, al
0x567A69: jnz     short loc_567A4B
0x567A6B: mov     edx, [esi]
0x567A6D: mov     eax, [edx+190h]
0x567A73: mov     ecx, esi
0x567A75: call    eax
0x567A77: test    al, al
0x567A79: mov     edx, [esi]
0x567A7B: mov     ecx, esi
0x567A7D: jz      short loc_567ADE
0x567A7F: mov     eax, [edx+18Ch]
0x567A85: call    eax
0x567A87: cmp     eax, 9
0x567A8A: jnz     short loc_567AA1
0x567A8C: pop     edi
0x567A8D: mov     [esp+2Ch+var_24], 5Ah ; 'Z'
0x567A95: fild    [esp+2Ch+var_24]
0x567A99: pop     esi
0x567A9A: pop     ebx
0x567A9B: add     esp, 24h
0x567A9E: retn    8
0x567AA1: mov     edx, [esi]
0x567AA3: mov     eax, [edx+170h]
0x567AA9: mov     ecx, esi
0x567AAB: call    eax
0x567AAD: push    eax
0x567AAE: call    sub_46D5C0
0x567AB3: add     esp, 4
0x567AB6: call    Double_To_SInt32
0x567ABB: mov     [esp+30h+arg_0], eax
0x567ABF: fild    [esp+30h+arg_0]
0x567AC3: fadd    qword ptr ds:0A46E48h
0x567AC9: call    Double_To_SInt32
0x567ACE: mov     ebx, eax
0x567AD0: mov     [esp+30h+var_24], ebx
0x567AD4: test    ebx, ebx
0x567AD6: jl      loc_567B61
0x567ADC: jmp     short loc_567B5D
0x567ADE: mov     eax, [edx+170h]
0x567AE4: call    eax
0x567AE6: cmp     eax, ds:0B35EB0h
0x567AEC: jz      short loc_567B37
0x567AEE: mov     edx, [esi]
0x567AF0: mov     eax, [edx+170h]
0x567AF6: mov     ecx, esi
0x567AF8: call    eax
0x567AFA: cmp     eax, ds:0B35EACh
0x567B00: jz      short loc_567B37
0x567B02: mov     edx, [esi]
0x567B04: mov     eax, [edx+170h]
0x567B0A: mov     ecx, esi
0x567B0C: call    eax
0x567B0E: push    eax
0x567B0F: call    sub_46D5C0
0x567B14: add     esp, 4
0x567B17: call    Double_To_SInt32
0x567B1C: mov     [esp+30h+arg_0], eax
0x567B20: fild    [esp+30h+arg_0]
0x567B24: fadd    qword ptr ds:0A46E48h
0x567B2A: call    Double_To_SInt32
0x567B2F: mov     ebx, eax
0x567B31: mov     [esp+30h+var_24], eax
0x567B35: jmp     short loc_567AD4
0x567B37: pop     edi
0x567B38: mov     [esp+2Ch+var_24], 14h
0x567B40: fild    [esp+2Ch+var_24]
0x567B44: pop     esi
0x567B45: pop     ebx
0x567B46: add     esp, 24h
0x567B49: retn    8
0x567B4C: mov     ecx, [edi+24h]
0x567B4F: call    sub_569740
0x567B54: cmp     eax, 3
0x567B57: jz      loc_567A4B
0x567B5D: test    ebx, ebx
0x567B5F: jnz     short loc_567B6B
0x567B61: mov     ecx, ds:0B36B28h
0x567B67: mov     [esp+30h+var_24], ecx
0x567B6B: fild    [esp+30h+var_24]
0x567B6F: pop     edi
0x567B70: pop     esi
0x567B71: pop     ebx
0x567B72: add     esp, 24h
0x567B75: retn    8
