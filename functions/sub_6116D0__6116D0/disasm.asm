0x6116D0: sub     esp, 0Ch
0x6116D3: push    ebx
0x6116D4: mov     ebx, ecx
0x6116D6: cmp     dword ptr [ebx+58h], 0
0x6116DA: mov     [esp+10h+var_C], ebx
0x6116DE: jz      loc_611AA4
0x6116E4: mov     ecx, ds:0B33B00h
0x6116EA: call    sub_45A500
0x6116EF: test    al, al
0x6116F1: jnz     loc_611AA4
0x6116F7: mov     ecx, [ebx+58h]
0x6116FA: mov     eax, [ecx+8]
0x6116FD: test    eax, eax
0x6116FF: push    esi
0x611700: jz      loc_611ABD
0x611706: cmp     byte ptr [eax+20h], 12h
0x61170A: jnz     loc_611ABD
0x611710: push    edi
0x611711: push    0; int
0x611713: push    offset ??_R0?AVDialoguePackage@@@8; struct TypeDescriptor *
0x611718: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x61171D: push    0; int
0x61171F: push    eax; void *
0x611720: call    OblivionDynamicCast
0x611725: mov     edi, eax
0x611727: add     esp, 14h
0x61172A: test    edi, edi
0x61172C: mov     [esp+18h+var_4], edi
0x611730: jz      loc_611AA2
0x611736: cmp     dword ptr [edi+3Ch], 0
0x61173A: jz      short loc_611743
0x61173C: mov     ecx, edi
0x61173E: call    sub_625D70
0x611743: mov     ecx, edi
0x611745: call    NiDX9TextureData__GetLevels
0x61174A: mov     ecx, edi
0x61174C: mov     esi, eax
0x61174E: call    sub_779480
0x611753: push    esi
0x611754: mov     ecx, offset unk_B3BD7C
0x611759: mov     edi, eax
0x61175B: call    sub_642B40
0x611760: push    edi
0x611761: mov     ecx, offset unk_B3BD7C
0x611766: call    sub_642B40
0x61176B: test    esi, esi
0x61176D: jz      short loc_61177C
0x61176F: mov     ecx, [esi+58h]
0x611772: mov     eax, [ecx]
0x611774: mov     edx, [eax+4A8h]
0x61177A: call    edx
0x61177C: test    edi, edi
0x61177E: jz      short loc_61178D
0x611780: mov     ecx, [edi+58h]
0x611783: mov     eax, [ecx]
0x611785: mov     edx, [eax+4A8h]
0x61178B: call    edx
0x61178D: test    esi, esi
0x61178F: jz      short loc_6117DD
0x611791: test    edi, edi
0x611793: jz      short loc_6117DD
0x611795: mov     ecx, [esi+58h]
0x611798: mov     eax, [ecx]
0x61179A: mov     edx, [eax+480h]
0x6117A0: push    edi
0x6117A1: call    edx
0x6117A3: mov     ecx, [edi+58h]
0x6117A6: mov     eax, [ecx]
0x6117A8: mov     edx, [eax+480h]
0x6117AE: push    esi
0x6117AF: call    edx
0x6117B1: fld1
0x6117B3: fst     dword ptr [esi+100h]
0x6117B9: push    0
0x6117BB: fstp    dword ptr [edi+100h]
0x6117C1: mov     ecx, [esi+58h]
0x6117C4: mov     eax, [ecx]
0x6117C6: mov     edx, [eax+258h]
0x6117CC: call    edx
0x6117CE: mov     ecx, [edi+58h]
0x6117D1: mov     eax, [ecx]
0x6117D3: mov     edx, [eax+258h]
0x6117D9: push    0
0x6117DB: call    edx
0x6117DD: mov     eax, [esi]
0x6117DF: mov     edx, [eax+164h]
0x6117E5: mov     ecx, esi
0x6117E7: call    edx
0x6117E9: test    eax, eax
0x6117EB: jz      short loc_6117F8
0x6117ED: push    0
0x6117EF: push    1
0x6117F1: mov     ecx, eax
0x6117F3: call    sub_475440
0x6117F8: mov     eax, [edi]
0x6117FA: mov     edx, [eax+164h]
0x611800: mov     ecx, edi
0x611802: call    edx
0x611804: test    eax, eax
0x611806: jz      short loc_611813
0x611808: push    0
0x61180A: push    1
0x61180C: mov     ecx, eax
0x61180E: call    sub_475440
0x611813: mov     ecx, [esi+58h]
0x611816: test    ecx, ecx
0x611818: jz      short loc_611826
0x61181A: mov     eax, [ecx]
0x61181C: mov     edx, [eax+1E0h]
0x611822: push    0
0x611824: call    edx
0x611826: mov     ecx, [edi+58h]
0x611829: test    ecx, ecx
0x61182B: jz      short loc_611839
0x61182D: mov     eax, [ecx]
0x61182F: mov     edx, [eax+1E0h]
0x611835: push    0
0x611837: call    edx
0x611839: push    ebp
0x61183A: mov     ecx, edi
0x61183C: call    sub_5E0380
0x611841: mov     ecx, esi
0x611843: call    sub_5E0380
0x611848: mov     eax, [esi]
0x61184A: mov     edx, [eax+44h]
0x61184D: push    30000h
0x611852: mov     ecx, esi
0x611854: call    edx
0x611856: lea     ebp, [esi+44h]
0x611859: mov     ecx, ebp
0x61185B: call    ExtraDataList__GetExtraPackage
0x611860: test    eax, eax
0x611862: jz      loc_6119CC
0x611868: mov     ebx, [esi+58h]
0x61186B: mov     ecx, ebp
0x61186D: call    ExtraDataList__GetExtraPackage
0x611872: mov     [ebx+8], eax
0x611875: mov     eax, [esi+58h]
0x611878: mov     ecx, [eax+8]
0x61187B: push    ecx
0x61187C: mov     ecx, [esp+14h]
0x611880: call    sub_5E8DE0
0x611885: mov     ebx, [esi+58h]
0x611888: mov     ecx, ebp
0x61188A: call    sub_41FB40
0x61188F: mov     [ebx+4], eax
0x611892: mov     eax, [esi+58h]
0x611895: mov     ebx, [esp+10h]
0x611899: mov     ebp, [eax]
0x61189B: add     ebx, 44h ; 'D'
0x61189E: mov     ecx, ebx
0x6118A0: mov     [esp+10h+arg_0], eax
0x6118A4: add     ebp, 0D0h ; 'Ð'
0x6118AA: call    sub_41FB60
0x6118AF: mov     ecx, [esp+10h+arg_0]
0x6118B3: mov     edx, [ebp+0]
0x6118B6: push    eax
0x6118B7: call    edx
0x6118B9: mov     ebp, [esi]
0x6118BB: mov     ecx, ebx
0x6118BD: call    sub_41FB80
0x6118C2: mov     ecx, esi
0x6118C4: push    eax
0x6118C5: mov     eax, [ebp+17Ch]
0x6118CB: call    eax
0x6118CD: mov     eax, [esi+58h]
0x6118D0: mov     ebp, [eax]
0x6118D2: mov     ecx, ebx
0x6118D4: mov     [esp+18h+var_4], eax
0x6118D8: add     ebp, 394h
0x6118DE: call    sub_41FBA0
0x6118E3: mov     ecx, [esp+18h+var_4]
0x6118E7: mov     edx, [ebp+0]
0x6118EA: push    eax
0x6118EB: call    edx
0x6118ED: lea     ecx, [esi+44h]
0x6118F0: call    sub_4246D0
0x6118F5: mov     eax, ds:0B33A98h
0x6118FA: cmp     byte ptr [eax+0CD4h], 0
0x611901: jnz     short loc_611910
0x611903: mov     ecx, [esi+58h]
0x611906: mov     edx, [ecx]
0x611908: mov     eax, [edx+18h]
0x61190B: push    1
0x61190D: push    esi
0x61190E: call    eax
0x611910: mov     ebx, [esp+1Ch+var_C]
0x611914: mov     ecx, edi
0x611916: call    sub_5E6B40
0x61191B: test    al, al
0x61191D: jz      loc_611A82
0x611923: mov     edx, [edi]
0x611925: mov     eax, [edx+44h]
0x611928: push    30000h
0x61192D: mov     ecx, edi
0x61192F: call    eax
0x611931: lea     esi, [edi+44h]
0x611934: mov     ecx, esi
0x611936: call    ExtraDataList__GetExtraPackage
0x61193B: test    eax, eax
0x61193D: jz      loc_611A27
0x611943: mov     ebp, [edi+58h]
0x611946: mov     ecx, esi
0x611948: call    ExtraDataList__GetExtraPackage
0x61194D: mov     [ebp+8], eax
0x611950: mov     ecx, [edi+58h]
0x611953: mov     edx, [ecx+8]
0x611956: push    edx
0x611957: mov     ecx, ebx
0x611959: call    sub_5E8DE0
0x61195E: mov     ebx, [edi+58h]
0x611961: mov     ecx, esi
0x611963: call    sub_41FB40
0x611968: mov     [ebx+4], eax
0x61196B: mov     ebx, [edi+58h]
0x61196E: mov     ebp, [ebx]
0x611970: mov     ecx, esi
0x611972: add     ebp, 0D0h ; 'Ð'
0x611978: call    sub_41FB60
0x61197D: push    eax
0x61197E: mov     eax, [ebp+0]
0x611981: mov     ecx, ebx
0x611983: call    eax
0x611985: mov     ebx, [esp+1Ch+var_C]
0x611989: mov     ebp, [edi]
0x61198B: add     ebx, 44h ; 'D'
0x61198E: mov     ecx, ebx
0x611990: call    sub_41FB80
0x611995: mov     edx, [ebp+17Ch]
0x61199B: mov     ecx, edi
0x61199D: push    eax
0x61199E: call    edx
0x6119A0: mov     eax, [edi+58h]
0x6119A3: mov     ebp, [eax]
0x6119A5: mov     ecx, ebx
0x6119A7: mov     [esp+1Ch+var_8], eax
0x6119AB: add     ebp, 394h
0x6119B1: call    sub_41FBA0
0x6119B6: mov     ecx, [esp+1Ch+var_8]
0x6119BA: push    eax
0x6119BB: mov     eax, [ebp+0]
0x6119BE: call    eax
0x6119C0: mov     ecx, esi
0x6119C2: call    sub_4246D0
0x6119C7: jmp     loc_611A62
0x6119CC: mov     ecx, [esi+58h]
0x6119CF: xor     ebp, ebp
0x6119D1: mov     [ecx+8], ebp
0x6119D4: mov     edx, [esi+58h]
0x6119D7: mov     [edx+4], ebp
0x6119DA: mov     ecx, [esi+58h]
0x6119DD: mov     eax, [ecx]
0x6119DF: mov     edx, [eax+0D0h]
0x6119E5: push    ebp
0x6119E6: call    edx
0x6119E8: mov     eax, [esi]
0x6119EA: mov     edx, [eax+17Ch]
0x6119F0: push    ebp
0x6119F1: mov     ecx, esi
0x6119F3: call    edx
0x6119F5: mov     ecx, [esi+58h]
0x6119F8: mov     eax, [ecx]
0x6119FA: mov     edx, [eax+394h]
0x611A00: push    ebp
0x611A01: call    edx
0x611A03: mov     eax, ds:0B33A98h
0x611A08: cmp     byte ptr [eax+0CD4h], 0
0x611A0F: jnz     loc_611914
0x611A15: mov     ecx, [esi+58h]
0x611A18: mov     edx, [ecx]
0x611A1A: mov     eax, [edx+18h]
0x611A1D: push    1
0x611A1F: push    esi
0x611A20: call    eax
0x611A22: jmp     loc_611914
0x611A27: mov     eax, [edi+58h]
0x611A2A: xor     esi, esi
0x611A2C: cmp     eax, esi
0x611A2E: jz      short loc_611A62
0x611A30: mov     [eax+8], esi
0x611A33: mov     ecx, [edi+58h]
0x611A36: mov     [ecx+4], esi
0x611A39: mov     ecx, [edi+58h]
0x611A3C: mov     edx, [ecx]
0x611A3E: mov     eax, [edx+0D0h]
0x611A44: push    esi
0x611A45: call    eax
0x611A47: mov     edx, [edi]
0x611A49: mov     eax, [edx+17Ch]
0x611A4F: push    esi
0x611A50: mov     ecx, edi
0x611A52: call    eax
0x611A54: mov     ecx, [edi+58h]
0x611A57: mov     edx, [ecx]
0x611A59: mov     eax, [edx+394h]
0x611A5F: push    esi
0x611A60: call    eax
0x611A62: mov     ecx, [edi+58h]
0x611A65: test    ecx, ecx
0x611A67: jz      short loc_611A82
0x611A69: mov     edx, ds:0B33A98h
0x611A6F: cmp     byte ptr [edx+0CD4h], 0
0x611A76: jnz     short loc_611A82
0x611A78: mov     eax, [ecx]
0x611A7A: mov     edx, [eax+18h]
0x611A7D: push    1
0x611A7F: push    edi
0x611A80: call    edx
0x611A82: mov     ecx, ds:0B33B00h
0x611A88: call    sub_45A500
0x611A8D: test    al, al
0x611A8F: pop     ebp
0x611A90: jz      short loc_611AA9
0x611A92: mov     eax, [esp+18h+var_4]
0x611A96: mov     ecx, ds:0B33B00h
0x611A9C: push    eax
0x611A9D: call    sub_45C7A0
0x611AA2: pop     edi
0x611AA3: pop     esi
0x611AA4: pop     ebx
0x611AA5: add     esp, 0Ch
0x611AA8: retn
0x611AA9: mov     ecx, [esp+18h+var_4]
0x611AAD: mov     edx, [ecx]
0x611AAF: mov     eax, [edx+10h]
0x611AB2: push    1
0x611AB4: call    eax
0x611AB6: pop     edi
0x611AB7: pop     esi
0x611AB8: pop     ebx
0x611AB9: add     esp, 0Ch
0x611ABC: retn
0x611ABD: mov     edx, [ecx]
0x611ABF: mov     eax, [edx+4C8h]
0x611AC5: push    4
0x611AC7: call    eax
0x611AC9: mov     ecx, [ebx+58h]
0x611ACC: mov     edx, [ecx]
0x611ACE: mov     esi, eax
0x611AD0: mov     eax, [edx+4A8h]
0x611AD6: call    eax
0x611AD8: mov     ecx, [ebx+58h]
0x611ADB: mov     edx, [ecx]
0x611ADD: mov     eax, [edx+480h]
0x611AE3: push    esi
0x611AE4: call    eax
0x611AE6: fld1
0x611AE8: pop     esi
0x611AE9: fstp    dword ptr [ebx+100h]
0x611AEF: pop     ebx
0x611AF0: add     esp, 0Ch
0x611AF3: retn
