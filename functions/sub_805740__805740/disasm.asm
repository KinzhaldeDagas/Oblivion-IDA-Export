0x805740: push    0FFFFFFFFh
0x805742: push    offset SEH_805740
0x805747: mov     eax, large fs:0
0x80574D: push    eax
0x80574E: sub     esp, 10h
0x805751: push    ebx
0x805752: push    ebp
0x805753: push    esi
0x805754: push    edi
0x805755: mov     eax, ds:0B30AACh
0x80575A: xor     eax, esp
0x80575C: push    eax
0x80575D: lea     eax, [esp+30h+var_C]
0x805761: mov     large fs:0, eax
0x805767: mov     [esp+30h+var_1C], ecx
0x80576B: xor     esi, esi
0x80576D: mov     [esp+30h+var_14], esi
0x805771: xor     edi, edi
0x805773: mov     [esp+30h+var_4], esi
0x805777: mov     [esp+30h+var_18], edi
0x80577B: mov     eax, [ecx+7Ch]
0x80577E: test    eax, eax
0x805780: mov     ebp, 1
0x805785: mov     byte ptr [esp+30h+var_4], 1
0x80578A: jz      short loc_805795
0x80578C: mov     esi, eax
0x80578E: add     [esi+60h], ebp
0x805791: mov     [esp+30h+var_14], esi
0x805795: mov     eax, [esi+18h]
0x805798: cmp     eax, 2
0x80579B: jnb     loc_805867
0x8057A1: lea     eax, [esp+30h+var_10]
0x8057A5: push    eax
0x8057A6: call    sub_772630
0x8057AB: add     esp, 4
0x8057AE: mov     eax, [eax]
0x8057B0: test    eax, eax
0x8057B2: jz      short loc_8057BD
0x8057B4: mov     edi, eax
0x8057B6: add     [edi+5Ch], ebp
0x8057B9: mov     [esp+30h+var_18], edi
0x8057BD: mov     eax, [esp+30h+var_10]
0x8057C1: test    eax, eax
0x8057C3: mov     byte ptr [esp+30h+var_4], 1
0x8057C8: jz      short loc_8057DD
0x8057CA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8057CE: mov     ecx, eax
0x8057D0: add     eax, 5Ch ; '\'
0x8057D3: cmp     dword ptr [eax], 0
0x8057D6: jnz     short loc_8057DD
0x8057D8: call    sub_772560
0x8057DD: push    2
0x8057DF: push    ebp
0x8057E0: push    0
0x8057E2: push    edi
0x8057E3: call    sub_801110
0x8057E8: mov     ecx, [esi+14h]
0x8057EB: add     esp, 10h
0x8057EE: push    edi; a3
0x8057EF: push    ecx; a2
0x8057F0: mov     ecx, esi; this
0x8057F2: call    sub_760010
0x8057F7: lea     edx, [esp+30h+var_10]
0x8057FB: push    edx
0x8057FC: call    sub_772630
0x805801: add     esp, 4
0x805804: mov     ebx, eax
0x805806: cmp     edi, [ebx]
0x805808: mov     byte ptr [esp+30h+var_4], 3
0x80580D: jz      short loc_80582D
0x80580F: test    edi, edi
0x805811: jz      short loc_805820
0x805813: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x805817: jnz     short loc_805820
0x805819: mov     ecx, edi
0x80581B: call    sub_772560
0x805820: mov     edi, [ebx]
0x805822: test    edi, edi
0x805824: mov     [esp+30h+var_18], edi
0x805828: jz      short loc_80582D
0x80582A: add     [edi+5Ch], ebp
0x80582D: mov     eax, [esp+30h+var_10]
0x805831: test    eax, eax
0x805833: mov     byte ptr [esp+30h+var_4], 1
0x805838: jz      short loc_80584D
0x80583A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x80583E: mov     ecx, eax
0x805840: add     eax, 5Ch ; '\'
0x805843: cmp     dword ptr [eax], 0
0x805846: jnz     short loc_80584D
0x805848: call    sub_772560
0x80584D: push    2
0x80584F: push    3
0x805851: push    ebp
0x805852: push    edi
0x805853: call    sub_801110
0x805858: mov     eax, [esi+14h]
0x80585B: add     esp, 10h
0x80585E: push    edi; a3
0x80585F: push    eax; a2
0x805860: mov     ecx, esi; this
0x805862: call    sub_760010
0x805867: mov     ecx, [esp+30h+var_1C]
0x80586B: mov     ebx, [ecx+84h]
0x805871: mov     ebp, [esi+58h]
0x805874: cmp     ebp, ebx
0x805876: jz      short loc_8058AA
0x805878: test    ebp, ebp
0x80587A: jz      short loc_805899
0x80587C: lea     edx, [ebp+4]
0x80587F: push    edx; lpAddend
0x805880: call    dword ptr ds:0A2807Ch
0x805886: test    eax, eax
0x805888: jnz     short loc_805899
0x80588A: test    ebp, ebp
0x80588C: jz      short loc_805899
0x80588E: mov     eax, [ebp+0]
0x805891: mov     edx, [eax]
0x805893: push    1
0x805895: mov     ecx, ebp
0x805897: call    edx
0x805899: test    ebx, ebx
0x80589B: mov     [esi+58h], ebx
0x80589E: jz      short loc_8058AA
0x8058A0: add     ebx, 4
0x8058A3: push    ebx; lpAddend
0x8058A4: call    dword ptr ds:0A28078h
0x8058AA: mov     eax, [esp+30h+var_1C]
0x8058AE: mov     ebx, [eax+8Ch]
0x8058B4: mov     ebp, [esi+44h]
0x8058B7: cmp     ebp, ebx
0x8058B9: jz      short loc_8058ED
0x8058BB: test    ebp, ebp
0x8058BD: jz      short loc_8058DC
0x8058BF: lea     ecx, [ebp+4]
0x8058C2: push    ecx; lpAddend
0x8058C3: call    dword ptr ds:0A2807Ch
0x8058C9: test    eax, eax
0x8058CB: jnz     short loc_8058DC
0x8058CD: test    ebp, ebp
0x8058CF: jz      short loc_8058DC
0x8058D1: mov     edx, [ebp+0]
0x8058D4: mov     eax, [edx]
0x8058D6: push    1
0x8058D8: mov     ecx, ebp
0x8058DA: call    eax
0x8058DC: test    ebx, ebx
0x8058DE: mov     [esi+44h], ebx
0x8058E1: jz      short loc_8058ED
0x8058E3: add     ebx, 4
0x8058E6: push    ebx; lpAddend
0x8058E7: call    dword ptr ds:0A28078h
0x8058ED: cmp     dword ptr [esi+30h], 0
0x8058F1: jnz     short loc_8058FB
0x8058F3: call    sub_772DF0
0x8058F8: mov     [esi+30h], eax
0x8058FB: mov     ecx, [esi+30h]
0x8058FE: push    0
0x805900: push    0Fh
0x805902: push    0A8h ; '¨'
0x805907: call    sub_772CD0
0x80590C: cmp     dword ptr [esi+30h], 0
0x805910: jnz     short loc_80591A
0x805912: call    sub_772DF0
0x805917: mov     [esi+30h], eax
0x80591A: mov     ecx, [esi+30h]
0x80591D: push    0
0x80591F: push    1
0x805921: push    1Bh
0x805923: call    sub_772CD0
0x805928: cmp     dword ptr [esi+30h], 0
0x80592C: jnz     short loc_805936
0x80592E: call    sub_772DF0
0x805933: mov     [esi+30h], eax
0x805936: mov     ecx, [esi+30h]
0x805939: push    0
0x80593B: push    9
0x80593D: push    13h
0x80593F: call    sub_772CD0
0x805944: cmp     dword ptr [esi+30h], 0
0x805948: jnz     short loc_805952
0x80594A: call    sub_772DF0
0x80594F: mov     [esi+30h], eax
0x805952: mov     ecx, [esi+30h]
0x805955: push    0
0x805957: push    6
0x805959: push    14h
0x80595B: call    sub_772CD0
0x805960: cmp     dword ptr [esi+30h], 0
0x805964: jnz     short loc_80596E
0x805966: call    sub_772DF0
0x80596B: mov     [esi+30h], eax
0x80596E: mov     ecx, [esi+30h]
0x805971: push    0
0x805973: push    1
0x805975: push    0Fh
0x805977: call    sub_772CD0
0x80597C: cmp     dword ptr [esi+30h], 0
0x805980: jnz     short loc_80598A
0x805982: call    sub_772DF0
0x805987: mov     [esi+30h], eax
0x80598A: mov     ecx, [esi+30h]
0x80598D: push    0
0x80598F: push    5
0x805991: push    19h
0x805993: call    sub_772CD0
0x805998: cmp     dword ptr [esi+30h], 0
0x80599C: jnz     short loc_8059A6
0x80599E: call    sub_772DF0
0x8059A3: mov     [esi+30h], eax
0x8059A6: mov     ecx, [esi+30h]
0x8059A9: push    0
0x8059AB: push    0
0x8059AD: push    18h
0x8059AF: call    sub_772CD0
0x8059B4: cmp     dword ptr [esi+30h], 0
0x8059B8: jnz     short loc_8059C2
0x8059BA: call    sub_772DF0
0x8059BF: mov     [esi+30h], eax
0x8059C2: mov     ecx, [esi+30h]
0x8059C5: push    0
0x8059C7: push    1
0x8059C9: push    7
0x8059CB: call    sub_772CD0
0x8059D0: cmp     dword ptr [esi+30h], 0
0x8059D4: jnz     short loc_8059DE
0x8059D6: call    sub_772DF0
0x8059DB: mov     [esi+30h], eax
0x8059DE: mov     ecx, [esi+30h]
0x8059E1: push    0
0x8059E3: push    4
0x8059E5: push    17h
0x8059E7: call    sub_772CD0
0x8059EC: cmp     dword ptr [esi+30h], 0
0x8059F0: jnz     short loc_8059FA
0x8059F2: call    sub_772DF0
0x8059F7: mov     [esi+30h], eax
0x8059FA: mov     ecx, [esi+30h]
0x8059FD: push    0
0x8059FF: push    0
0x805A01: push    0Eh
0x805A03: call    sub_772CD0
0x805A08: cmp     dword ptr [esi+30h], 0
0x805A0C: jnz     short loc_805A16
0x805A0E: call    sub_772DF0
0x805A13: mov     [esi+30h], eax
0x805A16: mov     ecx, [esi+30h]
0x805A19: push    0
0x805A1B: push    0
0x805A1D: push    34h ; '4'
0x805A1F: call    sub_772CD0
0x805A24: mov     ebp, [esp+30h+var_1C]
0x805A28: or      ebx, 0FFFFFFFFh
0x805A2B: cmp     esi, [ebp+80h]
0x805A31: jz      short loc_805A51
0x805A33: add     [esi+60h], ebx
0x805A36: jnz     short loc_805A3F
0x805A38: mov     ecx, esi
0x805A3A: call    sub_7604D0
0x805A3F: mov     esi, [ebp+80h]
0x805A45: test    esi, esi
0x805A47: mov     [esp+30h+var_14], esi
0x805A4B: jz      short loc_805A51
0x805A4D: add     dword ptr [esi+60h], 1
0x805A51: cmp     dword ptr [esi+18h], 2
0x805A55: jnb     loc_805B3F
0x805A5B: lea     ecx, [esp+30h+var_10]
0x805A5F: push    ecx
0x805A60: call    sub_772630
0x805A65: add     esp, 4
0x805A68: mov     ebp, eax
0x805A6A: cmp     edi, [ebp+0]
0x805A6D: mov     byte ptr [esp+30h+var_4], 4
0x805A72: jz      short loc_805A93
0x805A74: test    edi, edi
0x805A76: jz      short loc_805A84
0x805A78: add     [edi+5Ch], ebx
0x805A7B: jnz     short loc_805A84
0x805A7D: mov     ecx, edi
0x805A7F: call    sub_772560
0x805A84: mov     edi, [ebp+0]
0x805A87: test    edi, edi
0x805A89: mov     [esp+30h+var_18], edi
0x805A8D: jz      short loc_805A93
0x805A8F: add     dword ptr [edi+5Ch], 1
0x805A93: mov     eax, [esp+30h+var_10]
0x805A97: test    eax, eax
0x805A99: mov     byte ptr [esp+30h+var_4], 1
0x805A9E: jz      short loc_805AB2
0x805AA0: add     [eax+5Ch], ebx
0x805AA3: mov     ecx, eax
0x805AA5: add     eax, 5Ch ; '\'
0x805AA8: cmp     dword ptr [eax], 0
0x805AAB: jnz     short loc_805AB2
0x805AAD: call    sub_772560
0x805AB2: push    2
0x805AB4: push    1
0x805AB6: push    0
0x805AB8: push    edi
0x805AB9: call    sub_801110
0x805ABE: mov     edx, [esi+14h]
0x805AC1: add     esp, 10h
0x805AC4: push    edi; a3
0x805AC5: push    edx; a2
0x805AC6: mov     ecx, esi; this
0x805AC8: call    sub_760010
0x805ACD: lea     eax, [esp+30h+var_10]
0x805AD1: push    eax
0x805AD2: call    sub_772630
0x805AD7: add     esp, 4
0x805ADA: mov     ebp, eax
0x805ADC: cmp     edi, [ebp+0]
0x805ADF: mov     byte ptr [esp+30h+var_4], 5
0x805AE4: jz      short loc_805B05
0x805AE6: test    edi, edi
0x805AE8: jz      short loc_805AF6
0x805AEA: add     [edi+5Ch], ebx
0x805AED: jnz     short loc_805AF6
0x805AEF: mov     ecx, edi
0x805AF1: call    sub_772560
0x805AF6: mov     edi, [ebp+0]
0x805AF9: test    edi, edi
0x805AFB: mov     [esp+30h+var_18], edi
0x805AFF: jz      short loc_805B05
0x805B01: add     dword ptr [edi+5Ch], 1
0x805B05: mov     eax, [esp+30h+var_10]
0x805B09: test    eax, eax
0x805B0B: mov     byte ptr [esp+30h+var_4], 1
0x805B10: jz      short loc_805B24
0x805B12: add     [eax+5Ch], ebx
0x805B15: mov     ecx, eax
0x805B17: add     eax, 5Ch ; '\'
0x805B1A: cmp     dword ptr [eax], 0
0x805B1D: jnz     short loc_805B24
0x805B1F: call    sub_772560
0x805B24: push    2
0x805B26: push    3
0x805B28: push    1
0x805B2A: push    edi
0x805B2B: call    sub_801110
0x805B30: mov     ecx, [esi+14h]
0x805B33: add     esp, 10h
0x805B36: push    edi; a3
0x805B37: push    ecx; a2
0x805B38: mov     ecx, esi; this
0x805B3A: call    sub_760010
0x805B3F: mov     edx, [esp+30h+var_1C]
0x805B43: mov     ebx, [edx+88h]
0x805B49: mov     ebp, [esi+58h]
0x805B4C: cmp     ebp, ebx
0x805B4E: jz      short loc_805B82
0x805B50: test    ebp, ebp
0x805B52: jz      short loc_805B71
0x805B54: lea     eax, [ebp+4]
0x805B57: push    eax; lpAddend
0x805B58: call    dword ptr ds:0A2807Ch
0x805B5E: test    eax, eax
0x805B60: jnz     short loc_805B71
0x805B62: test    ebp, ebp
0x805B64: jz      short loc_805B71
0x805B66: mov     edx, [ebp+0]
0x805B69: mov     eax, [edx]
0x805B6B: push    1
0x805B6D: mov     ecx, ebp
0x805B6F: call    eax
0x805B71: test    ebx, ebx
0x805B73: mov     [esi+58h], ebx
0x805B76: jz      short loc_805B82
0x805B78: add     ebx, 4
0x805B7B: push    ebx; lpAddend
0x805B7C: call    dword ptr ds:0A28078h
0x805B82: mov     ecx, [esp+30h+var_1C]
0x805B86: mov     ebx, [ecx+90h]
0x805B8C: mov     ebp, [esi+44h]
0x805B8F: cmp     ebp, ebx
0x805B91: jz      short loc_805BC5
0x805B93: test    ebp, ebp
0x805B95: jz      short loc_805BB4
0x805B97: lea     edx, [ebp+4]
0x805B9A: push    edx; lpAddend
0x805B9B: call    dword ptr ds:0A2807Ch
0x805BA1: test    eax, eax
0x805BA3: jnz     short loc_805BB4
0x805BA5: test    ebp, ebp
0x805BA7: jz      short loc_805BB4
0x805BA9: mov     eax, [ebp+0]
0x805BAC: mov     edx, [eax]
0x805BAE: push    1
0x805BB0: mov     ecx, ebp
0x805BB2: call    edx
0x805BB4: test    ebx, ebx
0x805BB6: mov     [esi+44h], ebx
0x805BB9: jz      short loc_805BC5
0x805BBB: add     ebx, 4
0x805BBE: push    ebx; lpAddend
0x805BBF: call    dword ptr ds:0A28078h
0x805BC5: cmp     dword ptr [esi+30h], 0
0x805BC9: jnz     short loc_805BD3
0x805BCB: call    sub_772DF0
0x805BD0: mov     [esi+30h], eax
0x805BD3: mov     ecx, [esi+30h]
0x805BD6: push    0
0x805BD8: push    0Fh
0x805BDA: push    0A8h ; '¨'
0x805BDF: call    sub_772CD0
0x805BE4: cmp     dword ptr [esi+30h], 0
0x805BE8: jnz     short loc_805BF2
0x805BEA: call    sub_772DF0
0x805BEF: mov     [esi+30h], eax
0x805BF2: mov     ecx, [esi+30h]
0x805BF5: push    0
0x805BF7: push    1
0x805BF9: push    1Bh
0x805BFB: call    sub_772CD0
0x805C00: cmp     dword ptr [esi+30h], 0
0x805C04: jnz     short loc_805C0E
0x805C06: call    sub_772DF0
0x805C0B: mov     [esi+30h], eax
0x805C0E: mov     ecx, [esi+30h]
0x805C11: push    0
0x805C13: push    9
0x805C15: push    13h
0x805C17: call    sub_772CD0
0x805C1C: cmp     dword ptr [esi+30h], 0
0x805C20: jnz     short loc_805C2A
0x805C22: call    sub_772DF0
0x805C27: mov     [esi+30h], eax
0x805C2A: mov     ecx, [esi+30h]
0x805C2D: push    0
0x805C2F: push    6
0x805C31: push    14h
0x805C33: call    sub_772CD0
0x805C38: cmp     dword ptr [esi+30h], 0
0x805C3C: jnz     short loc_805C46
0x805C3E: call    sub_772DF0
0x805C43: mov     [esi+30h], eax
0x805C46: mov     ecx, [esi+30h]
0x805C49: push    0
0x805C4B: push    1
0x805C4D: push    0Fh
0x805C4F: call    sub_772CD0
0x805C54: cmp     dword ptr [esi+30h], 0
0x805C58: jnz     short loc_805C62
0x805C5A: call    sub_772DF0
0x805C5F: mov     [esi+30h], eax
0x805C62: mov     ecx, [esi+30h]
0x805C65: push    0
0x805C67: push    5
0x805C69: push    19h
0x805C6B: call    sub_772CD0
0x805C70: cmp     dword ptr [esi+30h], 0
0x805C74: jnz     short loc_805C7E
0x805C76: call    sub_772DF0
0x805C7B: mov     [esi+30h], eax
0x805C7E: mov     ecx, [esi+30h]
0x805C81: push    0
0x805C83: push    0
0x805C85: push    18h
0x805C87: call    sub_772CD0
0x805C8C: cmp     dword ptr [esi+30h], 0
0x805C90: jnz     short loc_805C9A
0x805C92: call    sub_772DF0
0x805C97: mov     [esi+30h], eax
0x805C9A: mov     ecx, [esi+30h]
0x805C9D: push    0
0x805C9F: push    1
0x805CA1: push    7
0x805CA3: call    sub_772CD0
0x805CA8: cmp     dword ptr [esi+30h], 0
0x805CAC: jnz     short loc_805CB6
0x805CAE: call    sub_772DF0
0x805CB3: mov     [esi+30h], eax
0x805CB6: mov     ecx, [esi+30h]
0x805CB9: push    0
0x805CBB: push    4
0x805CBD: push    17h
0x805CBF: call    sub_772CD0
0x805CC4: cmp     dword ptr [esi+30h], 0
0x805CC8: jnz     short loc_805CD2
0x805CCA: call    sub_772DF0
0x805CCF: mov     [esi+30h], eax
0x805CD2: mov     ecx, [esi+30h]
0x805CD5: push    0
0x805CD7: push    0
0x805CD9: push    0Eh
0x805CDB: call    sub_772CD0
0x805CE0: cmp     dword ptr [esi+30h], 0
0x805CE4: jnz     short loc_805CEE
0x805CE6: call    sub_772DF0
0x805CEB: mov     [esi+30h], eax
0x805CEE: mov     ecx, [esi+30h]
0x805CF1: push    0
0x805CF3: push    0
0x805CF5: push    34h ; '4'
0x805CF7: call    sub_772CD0
0x805CFC: or      ebx, 0FFFFFFFFh
0x805CFF: test    edi, edi
0x805D01: mov     byte ptr [esp+30h+var_4], 0
0x805D06: jz      short loc_805D14
0x805D08: add     [edi+5Ch], ebx
0x805D0B: jnz     short loc_805D14
0x805D0D: mov     ecx, edi
0x805D0F: call    sub_772560
0x805D14: add     [esi+60h], ebx
0x805D17: mov     [esp+30h+var_4], ebx
0x805D1B: jnz     short loc_805D24
0x805D1D: mov     ecx, esi
0x805D1F: call    sub_7604D0
0x805D24: mov     ecx, dword ptr [esp+30h+var_C]
0x805D28: mov     large fs:0, ecx
0x805D2F: pop     ecx
0x805D30: pop     edi
0x805D31: pop     esi
0x805D32: pop     ebp
0x805D33: pop     ebx
0x805D34: add     esp, 1Ch
0x805D37: retn
