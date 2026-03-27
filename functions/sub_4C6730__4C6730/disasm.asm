0x4C6730: push    0FFFFFFFFh
0x4C6732: push    offset SEH_4C6730
0x4C6737: mov     eax, large fs:0
0x4C673D: push    eax
0x4C673E: sub     esp, 78h
0x4C6741: push    ebx
0x4C6742: push    ebp
0x4C6743: push    esi
0x4C6744: push    edi
0x4C6745: mov     eax, ds:0B30AACh
0x4C674A: xor     eax, esp
0x4C674C: push    eax
0x4C674D: lea     eax, [esp+98h+var_C]
0x4C6754: mov     large fs:0, eax
0x4C675A: mov     esi, ecx
0x4C675C: mov     [esp+98h+var_80], esi
0x4C6760: xor     ebx, ebx
0x4C6762: mov     [esp+98h+var_84], ebx
0x4C6766: mov     eax, [esi+24h]
0x4C6769: cmp     [eax], ebx
0x4C676B: jz      loc_4C6F39
0x4C6771: xor     edi, edi
0x4C6773: mov     [esp+98h+var_7C], edi
0x4C6777: mov     ecx, [esp+98h+var_80]
0x4C677B: mov     ecx, [ecx+20h]; this
0x4C677E: test    ecx, ecx
0x4C6780: jz      loc_4C6F09
0x4C6786: cmp     edi, 4
0x4C6789: jge     loc_4C6F09
0x4C678F: lea     esi, [edi+2]
0x4C6792: call    TESObjectCELL_GetNiNode?
0x4C6797: test    eax, eax
0x4C6799: jz      short loc_4C67C7
0x4C679B: movzx   edx, word ptr [eax+0B6h]
0x4C67A2: cmp     edx, esi
0x4C67A4: jbe     short loc_4C67C7
0x4C67A6: mov     eax, [eax+0B0h]
0x4C67AC: mov     eax, [eax+esi*4]
0x4C67AF: test    eax, eax
0x4C67B1: jz      short loc_4C67C7
0x4C67B3: cmp     word ptr [eax+0B6h], 0
0x4C67BB: jbe     short loc_4C67C7
0x4C67BD: mov     ecx, [eax+0B0h]
0x4C67C3: mov     ebp, [ecx]
0x4C67C5: jmp     short loc_4C67C9
0x4C67C7: xor     ebp, ebp
0x4C67C9: test    ebp, ebp
0x4C67CB: mov     [esp+98h+var_74], ebp
0x4C67CF: jz      loc_4C6F09
0x4C67D5: cmp     [esp+98h+arg_0], 0
0x4C67DD: jz      loc_4C6EE2
0x4C67E3: cmp     word ptr [ebp+0B6h], 0
0x4C67EB: jbe     loc_4C6EE2
0x4C67F1: mov     edx, [ebp+0B0h]
0x4C67F7: mov     ecx, [edx]
0x4C67F9: test    ecx, ecx
0x4C67FB: jz      loc_4C6EE2
0x4C6801: mov     eax, [ecx]
0x4C6803: mov     edx, [eax+0Ch]
0x4C6806: call    edx
0x4C6808: mov     esi, eax
0x4C680A: test    esi, esi
0x4C680C: jz      loc_4C6EE2
0x4C6812: mov     eax, [esi+0B4h]
0x4C6818: movzx   ecx, word ptr [eax+8]
0x4C681C: mov     edx, [eax+1Ch]
0x4C681F: movzx   ecx, cx
0x4C6822: push    edx
0x4C6823: push    ecx
0x4C6824: lea     ecx, [eax+0Ch]
0x4C6827: call    sub_72A0F0
0x4C682C: mov     eax, [esi+0B4h]
0x4C6832: or      word ptr [eax+2Eh], 0Fh
0x4C6837: push    4
0x4C6839: mov     ecx, esi
0x4C683B: call    NiNode_GetNiPropertyByID
0x4C6840: mov     esi, eax
0x4C6842: test    esi, esi
0x4C6844: jz      short loc_4C6869
0x4C6846: mov     edx, [esi]
0x4C6848: mov     eax, [edx+54h]
0x4C684B: mov     ecx, esi
0x4C684D: call    eax
0x4C684F: cmp     eax, 5
0x4C6852: jl      short loc_4C6869
0x4C6854: mov     edx, [esi]
0x4C6856: mov     eax, [edx+54h]
0x4C6859: mov     ecx, esi
0x4C685B: call    eax
0x4C685D: cmp     eax, 0Ah
0x4C6860: jg      short loc_4C6869
0x4C6862: mov     eax, 1
0x4C6867: jmp     short loc_4C686B
0x4C6869: xor     eax, eax
0x4C686B: neg     eax
0x4C686D: sbb     eax, eax
0x4C686F: and     eax, esi
0x4C6871: mov     [esp+98h+var_78], eax
0x4C6875: jz      loc_4C6EE2
0x4C687B: mov     ecx, [esp+98h+var_80]
0x4C687F: mov     edx, [ecx+24h]
0x4C6882: mov     eax, [edx+edi*4+30h]
0x4C6886: cmp     dword ptr [eax+1Ch], 0
0x4C688A: jz      short loc_4C68A5
0x4C688C: lea     ecx, [esp+98h+var_10]
0x4C6893: push    ecx
0x4C6894: mov     ecx, [eax+1Ch]
0x4C6897: call    sub_4C1670
0x4C689C: mov     [esp+98h+var_70], eax
0x4C68A0: or      ebx, 1
0x4C68A3: jmp     short loc_4C68B8
0x4C68A5: mov     [esp+98h+var_34], 0
0x4C68AD: lea     edx, [esp+98h+var_34]
0x4C68B1: mov     [esp+98h+var_70], edx
0x4C68B5: or      ebx, 2
0x4C68B8: mov     esi, [esp+98h+var_80]
0x4C68BC: mov     eax, [esi+24h]
0x4C68BF: mov     eax, [eax+edi*4+30h]
0x4C68C3: xor     ebp, ebp
0x4C68C5: cmp     [eax+18h], ebp
0x4C68C8: jz      short loc_4C68E3
0x4C68CA: lea     ecx, [esp+98h+var_14]
0x4C68D1: push    ecx
0x4C68D2: mov     ecx, [eax+18h]
0x4C68D5: call    sub_4C1670
0x4C68DA: mov     [esp+98h+var_6C], eax
0x4C68DE: or      ebx, 4
0x4C68E1: jmp     short loc_4C68F2
0x4C68E3: mov     [esp+98h+var_38], ebp
0x4C68E7: lea     edx, [esp+98h+var_38]
0x4C68EB: mov     [esp+98h+var_6C], edx
0x4C68EF: or      ebx, 8
0x4C68F2: mov     eax, [esi+24h]
0x4C68F5: mov     eax, [eax+edi*4+30h]
0x4C68F9: cmp     [eax+14h], ebp
0x4C68FC: jz      short loc_4C6917
0x4C68FE: lea     ecx, [esp+98h+var_18]
0x4C6905: push    ecx
0x4C6906: mov     ecx, [eax+14h]
0x4C6909: call    sub_4C1670
0x4C690E: mov     [esp+98h+var_68], eax
0x4C6912: or      ebx, 10h
0x4C6915: jmp     short loc_4C6926
0x4C6917: mov     [esp+98h+var_3C], ebp
0x4C691B: lea     edx, [esp+98h+var_3C]
0x4C691F: mov     [esp+98h+var_68], edx
0x4C6923: or      ebx, 20h
0x4C6926: mov     eax, [esi+24h]
0x4C6929: mov     eax, [eax+edi*4+30h]
0x4C692D: cmp     [eax+10h], ebp
0x4C6930: jz      short loc_4C6946
0x4C6932: lea     ecx, [esp+98h+var_1C]
0x4C6936: push    ecx
0x4C6937: mov     ecx, [eax+10h]
0x4C693A: call    sub_4C1670
0x4C693F: mov     edi, eax
0x4C6941: or      ebx, 40h
0x4C6944: jmp     short loc_4C6958
0x4C6946: mov     [esp+98h+var_40], 0
0x4C694E: lea     edi, [esp+98h+var_40]
0x4C6952: or      ebx, 80h
0x4C6958: mov     ebp, [esp+98h+var_80]
0x4C695C: mov     edx, [ebp+24h]
0x4C695F: mov     esi, [esp+98h+var_7C]
0x4C6963: mov     eax, [edx+esi*4+30h]
0x4C6967: cmp     dword ptr [eax+0Ch], 0
0x4C696B: jz      short loc_4C6986
0x4C696D: lea     ecx, [esp+98h+var_20]
0x4C6971: push    ecx
0x4C6972: mov     ecx, [eax+0Ch]
0x4C6975: call    sub_4C1670
0x4C697A: mov     [esp+98h+var_64], eax
0x4C697E: or      ebx, 100h
0x4C6984: jmp     short loc_4C699C
0x4C6986: mov     [esp+98h+var_44], 0
0x4C698E: lea     edx, [esp+98h+var_44]
0x4C6992: mov     [esp+98h+var_64], edx
0x4C6996: or      ebx, 200h
0x4C699C: mov     eax, [ebp+24h]
0x4C699F: mov     eax, [eax+esi*4+30h]
0x4C69A3: cmp     dword ptr [eax+8], 0
0x4C69A7: jz      short loc_4C69C0
0x4C69A9: lea     ecx, [esp+98h+var_24]
0x4C69AD: push    ecx
0x4C69AE: mov     ecx, [eax+8]
0x4C69B1: call    sub_4C1670
0x4C69B6: mov     ebp, eax
0x4C69B8: or      ebx, 400h
0x4C69BE: jmp     short loc_4C69D2
0x4C69C0: mov     [esp+98h+var_48], 0
0x4C69C8: lea     ebp, [esp+98h+var_48]
0x4C69CC: or      ebx, 800h
0x4C69D2: mov     edx, [esp+98h+var_80]
0x4C69D6: mov     eax, [edx+24h]
0x4C69D9: mov     eax, [eax+esi*4+30h]
0x4C69DD: cmp     dword ptr [eax+4], 0
0x4C69E1: jz      short loc_4C69FC
0x4C69E3: lea     ecx, [esp+98h+var_28]
0x4C69E7: push    ecx
0x4C69E8: mov     ecx, [eax+4]
0x4C69EB: call    sub_4C1670
0x4C69F0: mov     [esp+98h+var_60], eax
0x4C69F4: or      ebx, 1000h
0x4C69FA: jmp     short loc_4C6A12
0x4C69FC: mov     [esp+98h+var_4C], 0
0x4C6A04: lea     edx, [esp+98h+var_4C]
0x4C6A08: mov     [esp+98h+var_60], edx
0x4C6A0C: or      ebx, 2000h
0x4C6A12: mov     eax, [esp+98h+var_80]
0x4C6A16: mov     ecx, [eax+24h]
0x4C6A19: mov     eax, [ecx+esi*4+30h]
0x4C6A1D: cmp     dword ptr [eax], 0
0x4C6A20: jz      short loc_4C6A3A
0x4C6A22: mov     ecx, [eax]
0x4C6A24: lea     edx, [esp+98h+var_2C]
0x4C6A28: push    edx
0x4C6A29: call    sub_4C1670
0x4C6A2E: mov     [esp+98h+var_5C], eax
0x4C6A32: or      ebx, 4000h
0x4C6A38: jmp     short loc_4C6A50
0x4C6A3A: mov     [esp+98h+var_50], 0
0x4C6A42: lea     eax, [esp+98h+var_50]
0x4C6A46: mov     [esp+98h+var_5C], eax
0x4C6A4A: or      ebx, 8000h
0x4C6A50: mov     ecx, [esp+98h+var_80]
0x4C6A54: mov     edx, [ecx+24h]
0x4C6A57: cmp     dword ptr [edx+esi*4+20h], 0
0x4C6A5C: lea     eax, [edx+esi*4+20h]
0x4C6A60: jz      short loc_4C6A85
0x4C6A62: lea     ecx, [esp+98h+var_30]
0x4C6A66: push    ecx
0x4C6A67: mov     ecx, [eax]
0x4C6A69: call    sub_4C1670
0x4C6A6E: mov     [esp+98h+var_58], eax
0x4C6A72: mov     [esp+98h+var_4], 10h
0x4C6A7D: or      ebx, 10000h
0x4C6A83: jmp     short loc_4C6AA6
0x4C6A85: mov     [esp+98h+var_54], 0
0x4C6A8D: lea     edx, [esp+98h+var_54]
0x4C6A91: mov     [esp+98h+var_58], edx
0x4C6A95: mov     [esp+98h+var_4], 11h
0x4C6AA0: or      ebx, 20000h
0x4C6AA6: mov     ebp, [ebp+0]
0x4C6AA9: mov     eax, [esp+98h+var_70]
0x4C6AAD: mov     ecx, [eax]
0x4C6AAF: mov     eax, [esp+98h+var_68]
0x4C6AB3: mov     esi, [eax]
0x4C6AB5: mov     edx, [esp+98h+var_6C]
0x4C6AB9: mov     edx, [edx]
0x4C6ABB: mov     eax, [esp+98h+var_64]
0x4C6ABF: mov     edi, [edi]
0x4C6AC1: mov     eax, [eax]
0x4C6AC3: push    ecx
0x4C6AC4: mov     [esp+9Ch+var_64], ebp
0x4C6AC8: mov     ebp, [esp+9Ch+var_60]
0x4C6ACC: mov     ebp, [ebp+0]
0x4C6ACF: mov     ecx, [esp+9Ch+var_64]
0x4C6AD3: push    edx
0x4C6AD4: push    esi
0x4C6AD5: mov     [esp+0A4h+var_60], ebp
0x4C6AD9: mov     ebp, [esp+0A4h+var_5C]
0x4C6ADD: mov     ebp, [ebp+0]
0x4C6AE0: mov     edx, [esp+0A4h+var_60]
0x4C6AE4: push    edi
0x4C6AE5: push    eax
0x4C6AE6: push    ecx
0x4C6AE7: mov     ecx, [esp+0B0h+var_78]
0x4C6AEB: mov     [esp+0B0h+var_5C], ebp
0x4C6AEF: mov     eax, [esp+0B0h+var_5C]
0x4C6AF3: mov     ebp, [esp+0B0h+var_58]
0x4C6AF7: mov     ebp, [ebp+0]
0x4C6AFA: push    edx
0x4C6AFB: push    eax
0x4C6AFC: push    ebp
0x4C6AFD: mov     [esp+0BCh+var_84], ebx
0x4C6B01: call    sub_7D8BA0
0x4C6B06: test    ebx, 20000h
0x4C6B0C: mov     [esp+98h+var_4], 10h
0x4C6B17: jz      short loc_4C6B2C
0x4C6B19: and     ebx, 0FFFDFFFFh
0x4C6B1F: lea     ecx, [esp+98h+var_54]; this
0x4C6B23: mov     [esp+98h+var_84], ebx
0x4C6B27: call    sub_7016A0
0x4C6B2C: test    ebx, 10000h
0x4C6B32: mov     [esp+98h+var_4], 0Fh
0x4C6B3D: jz      short loc_4C6B52
0x4C6B3F: and     ebx, 0FFFEFFFFh
0x4C6B45: lea     ecx, [esp+98h+var_30]; this
0x4C6B49: mov     [esp+98h+var_84], ebx
0x4C6B4D: call    sub_7016A0
0x4C6B52: test    ebx, 8000h
0x4C6B58: mov     [esp+98h+var_4], 0Eh
0x4C6B63: jz      short loc_4C6B78
0x4C6B65: and     ebx, 0FFFF7FFFh
0x4C6B6B: lea     ecx, [esp+98h+var_50]; this
0x4C6B6F: mov     [esp+98h+var_84], ebx
0x4C6B73: call    sub_7016A0
0x4C6B78: test    ebx, 4000h
0x4C6B7E: mov     [esp+98h+var_4], 0Dh
0x4C6B89: jz      short loc_4C6B9E
0x4C6B8B: and     ebx, 0FFFFBFFFh
0x4C6B91: lea     ecx, [esp+98h+var_2C]; this
0x4C6B95: mov     [esp+98h+var_84], ebx
0x4C6B99: call    sub_7016A0
0x4C6B9E: test    ebx, 2000h
0x4C6BA4: mov     [esp+98h+var_4], 0Ch
0x4C6BAF: jz      short loc_4C6BC4
0x4C6BB1: and     ebx, 0FFFFDFFFh
0x4C6BB7: lea     ecx, [esp+98h+var_4C]; this
0x4C6BBB: mov     [esp+98h+var_84], ebx
0x4C6BBF: call    sub_7016A0
0x4C6BC4: test    ebx, 1000h
0x4C6BCA: mov     [esp+98h+var_4], 0Bh
0x4C6BD5: jz      short loc_4C6BEA
0x4C6BD7: and     ebx, 0FFFFEFFFh
0x4C6BDD: lea     ecx, [esp+98h+var_28]; this
0x4C6BE1: mov     [esp+98h+var_84], ebx
0x4C6BE5: call    sub_7016A0
0x4C6BEA: test    ebx, 800h
0x4C6BF0: mov     [esp+98h+var_4], 0Ah
0x4C6BFB: jz      short loc_4C6C10
0x4C6BFD: and     ebx, 0FFFFF7FFh
0x4C6C03: lea     ecx, [esp+98h+var_48]; this
0x4C6C07: mov     [esp+98h+var_84], ebx
0x4C6C0B: call    sub_7016A0
0x4C6C10: test    ebx, 400h
0x4C6C16: mov     [esp+98h+var_4], 9
0x4C6C21: jz      short loc_4C6C36
0x4C6C23: and     ebx, 0FFFFFBFFh
0x4C6C29: lea     ecx, [esp+98h+var_24]; this
0x4C6C2D: mov     [esp+98h+var_84], ebx
0x4C6C31: call    sub_7016A0
0x4C6C36: test    ebx, 200h
0x4C6C3C: mov     [esp+98h+var_4], 8
0x4C6C47: jz      short loc_4C6C5C
0x4C6C49: and     ebx, 0FFFFFDFFh
0x4C6C4F: lea     ecx, [esp+98h+var_44]; this
0x4C6C53: mov     [esp+98h+var_84], ebx
0x4C6C57: call    sub_7016A0
0x4C6C5C: test    ebx, 100h
0x4C6C62: mov     [esp+98h+var_4], 7
0x4C6C6D: jz      short loc_4C6C82
0x4C6C6F: and     ebx, 0FFFFFEFFh
0x4C6C75: lea     ecx, [esp+98h+var_20]; this
0x4C6C79: mov     [esp+98h+var_84], ebx
0x4C6C7D: call    sub_7016A0
0x4C6C82: test    bl, bl
0x4C6C84: mov     [esp+98h+var_4], 6
0x4C6C8F: jns     short loc_4C6CA4
0x4C6C91: and     ebx, 0FFFFFF7Fh
0x4C6C97: lea     ecx, [esp+98h+var_40]; this
0x4C6C9B: mov     [esp+98h+var_84], ebx
0x4C6C9F: call    sub_7016A0
0x4C6CA4: test    bl, 40h
0x4C6CA7: mov     [esp+98h+var_4], 5
0x4C6CB2: jz      short loc_4C6CC4
0x4C6CB4: and     ebx, 0FFFFFFBFh
0x4C6CB7: lea     ecx, [esp+98h+var_1C]; this
0x4C6CBB: mov     [esp+98h+var_84], ebx
0x4C6CBF: call    sub_7016A0
0x4C6CC4: test    bl, 20h
0x4C6CC7: mov     [esp+98h+var_4], 4
0x4C6CD2: jz      short loc_4C6CE4
0x4C6CD4: and     ebx, 0FFFFFFDFh
0x4C6CD7: lea     ecx, [esp+98h+var_3C]; this
0x4C6CDB: mov     [esp+98h+var_84], ebx
0x4C6CDF: call    sub_7016A0
0x4C6CE4: test    bl, 10h
0x4C6CE7: mov     [esp+98h+var_4], 3
0x4C6CF2: jz      short loc_4C6D07
0x4C6CF4: and     ebx, 0FFFFFFEFh
0x4C6CF7: lea     ecx, [esp+98h+var_18]; this
0x4C6CFE: mov     [esp+98h+var_84], ebx
0x4C6D02: call    sub_7016A0
0x4C6D07: test    bl, 8
0x4C6D0A: mov     [esp+98h+var_4], 2
0x4C6D15: jz      short loc_4C6D27
0x4C6D17: and     ebx, 0FFFFFFF7h
0x4C6D1A: lea     ecx, [esp+98h+var_38]; this
0x4C6D1E: mov     [esp+98h+var_84], ebx
0x4C6D22: call    sub_7016A0
0x4C6D27: test    bl, 4
0x4C6D2A: mov     [esp+98h+var_4], 1
0x4C6D35: jz      short loc_4C6D4A
0x4C6D37: and     ebx, 0FFFFFFFBh
0x4C6D3A: lea     ecx, [esp+98h+var_14]; this
0x4C6D41: mov     [esp+98h+var_84], ebx
0x4C6D45: call    sub_7016A0
0x4C6D4A: xor     edi, edi
0x4C6D4C: test    bl, 2
0x4C6D4F: mov     [esp+98h+var_4], edi
0x4C6D56: jz      short loc_4C6D68
0x4C6D58: and     ebx, 0FFFFFFFDh
0x4C6D5B: lea     ecx, [esp+98h+var_34]; this
0x4C6D5F: mov     [esp+98h+var_84], ebx
0x4C6D63: call    sub_7016A0
0x4C6D68: test    bl, 1
0x4C6D6B: mov     [esp+98h+var_4], 0FFFFFFFFh
0x4C6D76: jz      short loc_4C6D87
0x4C6D78: lea     ecx, [esp+98h+var_10]; this
0x4C6D7F: and     ebx, 0FFFFFFFEh
0x4C6D82: call    sub_7016A0
0x4C6D87: mov     ebp, [esp+98h+var_80]
0x4C6D8B: mov     ecx, [ebp+24h]
0x4C6D8E: mov     esi, [esp+98h+var_7C]
0x4C6D92: mov     eax, [ecx+esi*4+30h]
0x4C6D96: cmp     [eax+1Ch], edi
0x4C6D99: jz      short loc_4C6DAC
0x4C6D9B: mov     ecx, [eax+1Ch]
0x4C6D9E: call    sub_4C8D20
0x4C6DA3: movzx   edx, al
0x4C6DA6: mov     [esp+98h+var_58], edx
0x4C6DAA: jmp     short loc_4C6DB0
0x4C6DAC: mov     [esp+98h+var_58], edi
0x4C6DB0: mov     eax, [ebp+24h]
0x4C6DB3: mov     eax, [eax+esi*4+30h]
0x4C6DB7: cmp     [eax+18h], edi
0x4C6DBA: jz      short loc_4C6DCD
0x4C6DBC: mov     ecx, [eax+18h]
0x4C6DBF: call    sub_4C8D20
0x4C6DC4: movzx   ecx, al
0x4C6DC7: mov     [esp+98h+var_5C], ecx
0x4C6DCB: jmp     short loc_4C6DD1
0x4C6DCD: mov     [esp+98h+var_5C], edi
0x4C6DD1: mov     edx, [ebp+24h]
0x4C6DD4: mov     eax, [edx+esi*4+30h]
0x4C6DD8: cmp     [eax+14h], edi
0x4C6DDB: jz      short loc_4C6DEE
0x4C6DDD: mov     ecx, [eax+14h]
0x4C6DE0: call    sub_4C8D20
0x4C6DE5: movzx   eax, al
0x4C6DE8: mov     [esp+98h+var_60], eax
0x4C6DEC: jmp     short loc_4C6DF2
0x4C6DEE: mov     [esp+98h+var_60], edi
0x4C6DF2: mov     ecx, [ebp+24h]
0x4C6DF5: mov     eax, [ecx+esi*4+30h]
0x4C6DF9: cmp     [eax+10h], edi
0x4C6DFC: jz      short loc_4C6E0F
0x4C6DFE: mov     ecx, [eax+10h]
0x4C6E01: call    sub_4C8D20
0x4C6E06: movzx   edx, al
0x4C6E09: mov     [esp+98h+var_64], edx
0x4C6E0D: jmp     short loc_4C6E13
0x4C6E0F: mov     [esp+98h+var_64], edi
0x4C6E13: mov     eax, [ebp+24h]
0x4C6E16: mov     eax, [eax+esi*4+30h]
0x4C6E1A: cmp     [eax+0Ch], edi
0x4C6E1D: jz      short loc_4C6E30
0x4C6E1F: mov     ecx, [eax+0Ch]
0x4C6E22: call    sub_4C8D20
0x4C6E27: movzx   ecx, al
0x4C6E2A: mov     [esp+98h+var_68], ecx
0x4C6E2E: jmp     short loc_4C6E34
0x4C6E30: mov     [esp+98h+var_68], edi
0x4C6E34: mov     edx, [ebp+24h]
0x4C6E37: mov     eax, [edx+esi*4+30h]
0x4C6E3B: cmp     [eax+8], edi
0x4C6E3E: jz      short loc_4C6E4B
0x4C6E40: mov     ecx, [eax+8]
0x4C6E43: call    sub_4C8D20
0x4C6E48: movzx   edi, al
0x4C6E4B: mov     eax, [ebp+24h]
0x4C6E4E: mov     eax, [eax+esi*4+30h]
0x4C6E52: cmp     dword ptr [eax+4], 0
0x4C6E56: jz      short loc_4C6E65
0x4C6E58: mov     ecx, [eax+4]
0x4C6E5B: call    sub_4C8D20
0x4C6E60: movzx   ebp, al
0x4C6E63: jmp     short loc_4C6E67
0x4C6E65: xor     ebp, ebp
0x4C6E67: mov     ecx, [esp+98h+var_80]
0x4C6E6B: mov     edx, [ecx+24h]
0x4C6E6E: mov     eax, [edx+esi*4+30h]
0x4C6E72: cmp     dword ptr [eax], 0
0x4C6E75: jz      short loc_4C6E83
0x4C6E77: mov     ecx, [eax]
0x4C6E79: call    sub_4C8D20
0x4C6E7E: movzx   esi, al
0x4C6E81: jmp     short loc_4C6E85
0x4C6E83: xor     esi, esi
0x4C6E85: mov     eax, [esp+98h+var_80]
0x4C6E89: mov     ecx, [eax+24h]
0x4C6E8C: mov     edx, [esp+98h+var_7C]
0x4C6E90: cmp     dword ptr [ecx+edx*4+20h], 0
0x4C6E95: lea     eax, [ecx+edx*4+20h]
0x4C6E99: jz      short loc_4C6EA7
0x4C6E9B: mov     ecx, [eax]
0x4C6E9D: call    sub_4C8D20
0x4C6EA2: movzx   eax, al
0x4C6EA5: jmp     short loc_4C6EA9
0x4C6EA7: xor     eax, eax
0x4C6EA9: mov     ecx, [esp+98h+var_58]
0x4C6EAD: mov     edx, [esp+98h+var_5C]
0x4C6EB1: push    0
0x4C6EB3: push    ecx
0x4C6EB4: mov     ecx, [esp+0A0h+var_60]
0x4C6EB8: push    edx
0x4C6EB9: mov     edx, [esp+0A4h+var_64]
0x4C6EBD: push    ecx
0x4C6EBE: mov     ecx, [esp+0A8h+var_68]
0x4C6EC2: push    edx
0x4C6EC3: push    ecx
0x4C6EC4: mov     ecx, [esp+0B0h+var_78]
0x4C6EC8: push    edi
0x4C6EC9: push    ebp
0x4C6ECA: push    esi
0x4C6ECB: push    eax
0x4C6ECC: call    sub_7D7400
0x4C6ED1: mov     ecx, [esp+98h+var_78]
0x4C6ED5: call    sub_7E24C0
0x4C6EDA: mov     ebp, [esp+98h+var_74]
0x4C6EDE: mov     edi, [esp+98h+var_7C]
0x4C6EE2: fldz
0x4C6EE4: push    0; a3
0x4C6EE6: push    ecx
0x4C6EE7: fstp    [esp+0A0h+a2]; a2
0x4C6EEA: mov     ecx, ebp; this
0x4C6EEC: call    NiAVObject_UpdateNiAVObject
0x4C6EF1: cmp     [esp+98h+arg_0], 0
0x4C6EF9: jz      short loc_4C6F09
0x4C6EFB: mov     ecx, ebp
0x4C6EFD: call    NiNode_UpdateDynamicEffectState
0x4C6F02: mov     ecx, ebp; this
0x4C6F04: call    NiAVObject_InitializePropertyState
0x4C6F09: add     edi, 1
0x4C6F0C: cmp     edi, 4
0x4C6F0F: mov     [esp+98h+var_7C], edi
0x4C6F13: jl      loc_4C6777
0x4C6F19: cmp     [esp+98h+arg_0], 0
0x4C6F21: jz      short loc_4C6F45
0x4C6F23: mov     edx, ds:0B333A0h
0x4C6F29: movzx   eax, byte ptr [edx+53h]
0x4C6F2D: mov     ecx, [esp+98h+var_80]
0x4C6F31: push    eax
0x4C6F32: call    sub_4C5BA0
0x4C6F37: jmp     short loc_4C6F45
0x4C6F39: call    sub_4C64E0
0x4C6F3E: mov     ecx, esi; int
0x4C6F40: call    sub_4C5640
0x4C6F45: mov     ecx, [esp+98h+var_C]
0x4C6F4C: mov     large fs:0, ecx
0x4C6F53: pop     ecx
0x4C6F54: pop     edi
0x4C6F55: pop     esi
0x4C6F56: pop     ebp
0x4C6F57: pop     ebx
0x4C6F58: add     esp, 84h
0x4C6F5E: retn    8
