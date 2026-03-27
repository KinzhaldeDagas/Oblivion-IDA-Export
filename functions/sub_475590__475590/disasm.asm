0x475590: sub     esp, 1Ch
0x475593: push    ebx
0x475594: push    esi
0x475595: mov     esi, ecx
0x475597: mov     ecx, ds:0B33B00h
0x47559D: xor     ebx, ebx
0x47559F: push    edi
0x4755A0: mov     [esp+28h+var_18], ebx
0x4755A4: mov     [esp+28h+var_10], ebx
0x4755A8: call    sub_45A170
0x4755AD: test    al, al
0x4755AF: jz      loc_475652
0x4755B5: mov     ecx, ds:0B33B00h
0x4755BB: push    4; Size
0x4755BD: lea     eax, [esp+2Ch+Dst]
0x4755C1: push    eax; Dst
0x4755C2: call    SaveLoad_LoadData
0x4755C7: cmp     [esp+28h+Dst], 4B4F4C42h
0x4755CF: jz      short loc_475639
0x4755D1: mov     eax, ds:0B33B00h
0x4755D6: mov     edi, [eax+80h]
0x4755DC: cmp     edi, ebx
0x4755DE: jz      short loc_47561D
0x4755E0: mov     ecx, [edi]
0x4755E2: push    ecx; a1
0x4755E3: call    TESForm_LookupByFormID
0x4755E8: mov     edx, [edi+5]
0x4755EB: movzx   ecx, byte ptr [edi+9]
0x4755EF: add     esp, 4
0x4755F2: push    edx
0x4755F3: mov     edx, [eax]
0x4755F5: push    ecx
0x4755F6: mov     ecx, eax
0x4755F8: mov     eax, [edx+0D4h]
0x4755FE: call    eax
0x475600: mov     ecx, [edi]
0x475602: push    eax
0x475603: push    ecx
0x475604: push    125Eh
0x475609: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x47560E: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x475613: call    PrintError
0x475618: add     esp, 1Ch
0x47561B: jmp     short loc_475639
0x47561D: movzx   edx, byte ptr [eax+7Ch]
0x475621: push    edx
0x475622: push    125Eh
0x475627: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x47562C: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x475631: call    PrintError
0x475636: add     esp, 10h
0x475639: mov     ecx, ds:0B33B00h
0x47563F: mov     eax, [ecx+14h]
0x475642: push    2; Size
0x475644: lea     edx, [esp+2Ch+var_18]
0x475648: push    edx; Dst
0x475649: mov     [esp+30h+var_10], eax
0x47564D: call    SaveLoad_LoadData
0x475652: mov     edi, [esp+28h+arg_0]
0x475656: cmp     edi, ebx
0x475658: mov     [esp+28h+var_14], ebx
0x47565C: jz      short loc_475672
0x47565E: mov     eax, [edi]
0x475660: mov     edx, [eax+190h]
0x475666: mov     ecx, edi
0x475668: call    edx
0x47566A: test    al, al
0x47566C: jz      short loc_475672
0x47566E: mov     [esp+28h+var_14], edi
0x475672: mov     ecx, ds:0B33B00h
0x475678: push    ebp
0x475679: push    4; Size
0x47567B: lea     eax, [esi+0BCh]
0x475681: push    eax; Dst
0x475682: call    SaveLoad_LoadData
0x475687: push    4; Size
0x475689: lea     ecx, [esi+0C0h]
0x47568F: push    ecx; Dst
0x475690: mov     ecx, ds:0B33B00h
0x475696: call    SaveLoad_LoadData
0x47569B: mov     ecx, ds:0B33B00h
0x4756A1: push    0Ch; Size
0x4756A3: lea     edx, [esi+0Ch]
0x4756A6: push    edx; Dst
0x4756A7: call    SaveLoad_LoadData
0x4756AC: mov     ecx, ds:0B33B00h
0x4756B2: push    4; Size
0x4756B4: lea     eax, [esi+38h]
0x4756B7: push    eax; Dst
0x4756B8: call    SaveLoad_LoadData
0x4756BD: push    1; Size
0x4756BF: lea     ecx, [esi+90h]
0x4756C5: push    ecx; Dst
0x4756C6: mov     ecx, ds:0B33B00h
0x4756CC: call    SaveLoad_LoadData
0x4756D1: mov     ecx, ds:0B33B00h
0x4756D7: push    1; Size
0x4756D9: lea     edx, [esp+30h+var_19]
0x4756DD: push    edx; Dst
0x4756DE: call    SaveLoad_LoadData
0x4756E3: xor     ecx, ecx
0x4756E5: mov     [esp+2Ch+arg_0], ecx
0x4756E9: lea     ebp, [esi+3Ch]
0x4756EC: lea     edi, [esi+48h]
0x4756EF: mov     [esp+2Ch+var_C], 5
0x4756F7: jmp     short loc_475700
0x4756F9: align 10h
0x475700: mov     eax, 1
0x475705: shl     eax, cl
0x475707: movsx   ecx, [esp+2Ch+var_19]
0x47570C: test    ecx, eax
0x47570E: jz      loc_4757E4
0x475714: mov     ecx, ds:0B33B00h
0x47571A: push    2; Size
0x47571C: push    ebp; Dst
0x47571D: call    SaveLoad_LoadData
0x475722: mov     ecx, ds:0B33B00h
0x475728: push    4; Size
0x47572A: push    edi; Dst
0x47572B: call    SaveLoad_LoadData
0x475730: mov     ecx, ds:0B33B00h
0x475736: lea     ebx, [edi+34h]
0x475739: push    4; Size
0x47573B: lea     edx, [ebx-20h]
0x47573E: push    edx; Dst
0x47573F: call    SaveLoad_LoadData
0x475744: mov     ecx, ds:0B33B00h
0x47574A: push    2; Size
0x47574C: lea     eax, [ebp+34h]
0x47574F: push    eax; Dst
0x475750: call    SaveLoad_LoadData
0x475755: mov     ecx, ds:0B33B00h
0x47575B: push    4; Size
0x47575D: push    ebx; Dst
0x47575E: call    SaveLoad_LoadData
0x475763: push    1; Size
0x475765: lea     ecx, [esp+30h+var_4]
0x475769: push    ecx; Dst
0x47576A: mov     ecx, ds:0B33B00h
0x475770: call    SaveLoad_LoadData
0x475775: mov     eax, [esp+2Ch+var_4]
0x475779: cmp     al, 0FEh ; 'þ'
0x47577B: mov     dword ptr [edi+58h], 0
0x475782: jz      short loc_4757E4
0x475784: fld     dword ptr [esi+94h]
0x47578A: mov     ebx, [esp+2Ch+arg_0]
0x47578E: push    eax
0x47578F: push    ecx
0x475790: mov     byte ptr [esi+0C4h], 1
0x475797: fstp    [esp+34h+var_34]
0x47579A: mov     edx, [edi]
0x47579C: movzx   eax, word ptr [ebp+0]
0x4757A0: push    edx
0x4757A1: push    eax
0x4757A2: push    ebx
0x4757A3: mov     ecx, esi
0x4757A5: call    sub_474AB0
0x4757AA: mov     ecx, [edi+58h]
0x4757AD: test    ecx, ecx
0x4757AF: jz      short loc_4757C2
0x4757B1: fld     dword ptr [esi+94h]
0x4757B7: push    ecx
0x4757B8: fstp    [esp+30h+var_30]; float
0x4757BB: call    sub_49F5F0
0x4757C0: jmp     short loc_4757E4
0x4757C2: call    sub_49F550
0x4757C7: movzx   ecx, ax
0x4757CA: push    ecx
0x4757CB: mov     ecx, ds:0B33B00h
0x4757D1: call    SaveLoad_AdvanceBufferOffset
0x4757D6: push    ecx
0x4757D7: fldz
0x4757D9: mov     ecx, esi
0x4757DB: fstp    [esp+30h+var_30]; float
0x4757DE: push    ebx; int
0x4757DF: call    sub_470FC0
0x4757E4: mov     ecx, [esp+2Ch+arg_0]
0x4757E8: add     ecx, 1
0x4757EB: add     ebp, 2
0x4757EE: add     edi, 4
0x4757F1: sub     [esp+2Ch+var_C], 1
0x4757F6: mov     [esp+2Ch+arg_0], ecx
0x4757FA: jnz     loc_475700
0x475800: fld     dword ptr [esi+94h]
0x475806: mov     edi, [esp+2Ch+var_14]
0x47580A: push    ecx
0x47580B: fstp    [esp+30h+var_30]; float
0x47580E: push    esi; AnimSequenceSingle *
0x47580F: push    edi; float
0x475810: call    sub_475020
0x475815: mov     [esi+0CCh], eax
0x47581B: mov     edx, ds:0B33B00h
0x475821: add     esp, 0Ch
0x475824: cmp     byte ptr [edx+7Ch], 4Ch ; 'L'
0x475828: jnb     short loc_475844
0x47582A: fld     dword ptr [esi+94h]
0x475830: push    ecx
0x475831: fstp    [esp+30h+var_30]; float
0x475834: push    esi; AnimSequenceSingle *
0x475835: push    edi; float
0x475836: call    sub_475020
0x47583B: add     esp, 0Ch
0x47583E: mov     [esi+0D0h], eax
0x475844: mov     eax, [esi+0CCh]
0x47584A: test    eax, eax
0x47584C: jz      short loc_47585D
0x47584E: cmp     dword ptr [eax], 1
0x475851: jnz     short loc_47585D
0x475853: mov     dword ptr [esi+0B0h], 0
0x47585D: mov     ecx, ds:0B33B00h
0x475863: push    1; Size
0x475865: lea     eax, [esi+0C4h]
0x47586B: push    eax; Dst
0x47586C: call    SaveLoad_LoadData
0x475871: mov     ecx, ds:0B33B00h
0x475877: mov     [esp+2Ch+var_1A], 1
0x47587C: cmp     byte ptr [ecx+7Ch], 40h ; '@'
0x475880: jb      short loc_475899
0x475882: push    1; Size
0x475884: lea     edx, [esp+30h+var_1A]
0x475888: push    edx; Dst
0x475889: call    SaveLoad_LoadData
0x47588E: cmp     [esp+2Ch+var_1A], 0
0x475893: jz      loc_4759E9
0x475899: mov     ecx, [esp+2Ch+var_14]
0x47589D: mov     eax, [ecx+5Ch]
0x4758A0: mov     edx, [eax+30h]
0x4758A3: add     ecx, 5Ch ; '\'
0x4758A6: xor     bl, bl
0x4758A8: call    edx
0x4758AA: test    eax, eax
0x4758AC: jz      loc_4759C2
0x4758B2: mov     eax, [esi+98h]
0x4758B8: mov     ecx, [eax+7Ch]
0x4758BB: mov     edx, [ecx]
0x4758BD: mov     eax, [edx+4Ch]
0x4758C0: push    offset aMagicnode; "magicNode"
0x4758C5: call    eax
0x4758C7: test    eax, eax
0x4758C9: jz      loc_4759C2
0x4758CF: mov     edx, [eax]
0x4758D1: mov     ecx, eax
0x4758D3: mov     eax, [edx+8]
0x4758D6: call    eax
0x4758D8: test    eax, eax
0x4758DA: jz      loc_4759C2
0x4758E0: cmp     word ptr [eax+0B6h], 0
0x4758E8: jbe     loc_4759C2
0x4758EE: mov     ecx, [eax+0B0h]
0x4758F4: mov     eax, [ecx]
0x4758F6: test    eax, eax
0x4758F8: jz      loc_4759C2
0x4758FE: mov     eax, [eax+0Ch]
0x475901: push    eax
0x475902: push    offset stru_B3CAC0
0x475907: call    NiRTTI_Cast
0x47590C: mov     edi, eax
0x47590E: add     esp, 8
0x475911: test    edi, edi
0x475913: jz      loc_4759C2
0x475919: lea     edx, [esp+2Ch+arg_0]
0x47591D: push    edx
0x47591E: push    offset aSpecialidle_ca; "SpecialIdle_Cast"
0x475923: lea     ecx, [edi+58h]
0x475926: call    NiTMap_GetAt
0x47592B: test    al, al
0x47592D: jz      loc_4759C2
0x475933: mov     ebp, [esp+2Ch+arg_0]
0x475937: test    ebp, ebp
0x475939: jz      loc_4759C2
0x47593F: fldz
0x475941: push    ecx
0x475942: mov     ecx, edi
0x475944: fstp    [esp+30h+var_30]; float
0x475947: call    sub_4715C0
0x47594C: fldz
0x47594E: push    0; int
0x475950: sub     esp, 8
0x475953: fstp    [esp+38h+var_34]; float
0x475957: fld1
0x475959: mov     ecx, edi
0x47595B: fstp    [esp+38h+var_38]; float
0x47595E: push    0; int
0x475960: push    0; int
0x475962: push    ebp; int
0x475963: call    sub_470B20
0x475968: or      word ptr [edi+8], 8
0x47596D: fld     dword ptr [esi+94h]
0x475973: push    ecx
0x475974: mov     ecx, ebp
0x475976: fstp    [esp+30h+var_30]; float
0x475979: call    sub_49F5F0
0x47597E: mov     ecx, ds:0B33B00h
0x475984: push    4; Size
0x475986: lea     eax, [esp+30h+var_4]
0x47598A: push    eax; Dst
0x47598B: call    SaveLoad_LoadData
0x475990: mov     ecx, [esp+2Ch+var_14]
0x475994: mov     edi, [ecx+60h]
0x475997: test    edi, edi
0x475999: jz      short loc_4759C0
0x47599B: fld     dword ptr [ebp+30h]
0x47599E: push    ecx
0x47599F: fmul    qword ptr ds:0A31C70h
0x4759A5: mov     ecx, edi
0x4759A7: fstp    [esp+30h+arg_0]
0x4759AB: fld     [esp+30h+arg_0]
0x4759AF: fstp    [esp+30h+var_30]; float
0x4759B2: push    1; char
0x4759B4: call    MagicCaster_CastingVFX_ClearSomething???
0x4759B9: fld     [esp+2Ch+var_4]
0x4759BD: fstp    dword ptr [edi+10h]
0x4759C0: mov     bl, 1
0x4759C2: mov     edx, ds:0B33B00h
0x4759C8: cmp     byte ptr [edx+7Ch], 40h ; '@'
0x4759CC: jb      short loc_4759E9
0x4759CE: test    bl, bl
0x4759D0: jnz     short loc_4759E9
0x4759D2: call    sub_49F550
0x4759D7: mov     ecx, ds:0B33B00h
0x4759DD: movzx   eax, ax
0x4759E0: add     eax, 4
0x4759E3: push    eax
0x4759E4: call    SaveLoad_AdvanceBufferOffset
0x4759E9: fld     dword ptr [esi+94h]
0x4759EF: push    1; int
0x4759F1: lea     ecx, [esi+18h]
0x4759F4: push    ecx; int
0x4759F5: push    ecx
0x4759F6: mov     ecx, esi
0x4759F8: fstp    [esp+38h+var_38]; float
0x4759FB: call    sub_471230
0x475A00: mov     ecx, ds:0B33B00h
0x475A06: call    sub_45A170
0x475A0B: test    al, al
0x475A0D: pop     ebp
0x475A0E: jz      loc_475B2E
0x475A14: mov     ecx, ds:0B33B00h
0x475A1A: mov     edi, [ecx+80h]
0x475A20: test    edi, edi
0x475A22: mov     esi, [ecx+14h]
0x475A25: jz      loc_475AD1
0x475A2B: mov     edx, [edi]
0x475A2D: push    edx; a1
0x475A2E: call    TESForm_LookupByFormID
0x475A33: movzx   ecx, word ptr [esp+2Ch+var_18]
0x475A38: mov     ebx, [esp+2Ch+var_10]
0x475A3C: add     ecx, ebx
0x475A3E: add     esp, 4
0x475A41: cmp     esi, ecx
0x475A43: jbe     short loc_475A88
0x475A45: mov     edx, [edi+5]
0x475A48: movzx   ecx, byte ptr [edi+9]
0x475A4C: push    edx
0x475A4D: mov     edx, [eax]
0x475A4F: push    ecx
0x475A50: mov     ecx, eax
0x475A52: mov     eax, [edx+0D4h]
0x475A58: call    eax
0x475A5A: mov     ecx, [edi]
0x475A5C: movzx   edx, word ptr [esp+30h+var_18]
0x475A61: push    eax
0x475A62: push    ecx
0x475A63: push    12DAh
0x475A68: sub     esi, edx
0x475A6A: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x475A6F: sub     esi, ebx
0x475A71: push    esi; ArgList
0x475A72: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x475A77: call    PrintError
0x475A7C: add     esp, 20h
0x475A7F: pop     edi
0x475A80: pop     esi
0x475A81: pop     ebx
0x475A82: add     esp, 1Ch
0x475A85: retn    4
0x475A88: jnb     loc_475B2E
0x475A8E: mov     ecx, [edi+5]
0x475A91: movzx   edx, byte ptr [edi+9]
0x475A95: push    ecx
0x475A96: push    edx
0x475A97: mov     edx, [eax]
0x475A99: mov     ecx, eax
0x475A9B: mov     eax, [edx+0D4h]
0x475AA1: call    eax
0x475AA3: mov     ecx, [edi]
0x475AA5: movzx   edx, word ptr [esp+30h+var_18]
0x475AAA: push    eax
0x475AAB: push    ecx
0x475AAC: push    12DAh
0x475AB1: sub     edx, esi
0x475AB3: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x475AB8: add     edx, ebx
0x475ABA: push    edx; ArgList
0x475ABB: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x475AC0: call    PrintError
0x475AC5: add     esp, 20h
0x475AC8: pop     edi
0x475AC9: pop     esi
0x475ACA: pop     ebx
0x475ACB: add     esp, 1Ch
0x475ACE: retn    4
0x475AD1: movzx   eax, word ptr [esp+28h+var_18]
0x475AD6: mov     edi, [esp+28h+var_10]
0x475ADA: lea     edx, [eax+edi]
0x475ADD: cmp     esi, edx
0x475ADF: jbe     short loc_475B0B
0x475AE1: movzx   ecx, byte ptr [ecx+7Ch]
0x475AE5: push    ecx
0x475AE6: push    12DAh
0x475AEB: sub     esi, eax
0x475AED: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x475AF2: sub     esi, edi
0x475AF4: push    esi; ArgList
0x475AF5: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x475AFA: call    PrintError
0x475AFF: add     esp, 14h
0x475B02: pop     edi
0x475B03: pop     esi
0x475B04: pop     ebx
0x475B05: add     esp, 1Ch
0x475B08: retn    4
0x475B0B: jnb     short loc_475B2E
0x475B0D: movzx   edx, byte ptr [ecx+7Ch]
0x475B11: push    edx
0x475B12: push    12DAh
0x475B17: sub     eax, esi
0x475B19: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x475B1E: add     eax, edi
0x475B20: push    eax; ArgList
0x475B21: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x475B26: call    PrintError
0x475B2B: add     esp, 14h
0x475B2E: pop     edi
0x475B2F: pop     esi
0x475B30: pop     ebx
0x475B31: add     esp, 1Ch
0x475B34: retn    4
