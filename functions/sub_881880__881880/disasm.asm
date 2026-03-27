0x881880: push    0FFFFFFFFh
0x881882: push    offset SEH_882120
0x881887: mov     eax, large fs:0
0x88188D: push    eax
0x88188E: push    ebx
0x88188F: push    ebp
0x881890: push    esi
0x881891: push    edi
0x881892: mov     eax, ds:0B30AACh
0x881897: xor     eax, esp
0x881899: push    eax
0x88189A: lea     eax, [esp+20h+var_C]
0x88189E: mov     large fs:0, eax
0x8818A4: mov     edi, ecx
0x8818A6: mov     ebx, [esp+20h+arg_8]
0x8818AA: mov     eax, [ebx+10h]
0x8818AD: mov     esi, ds:0B47750h
0x8818B3: push    eax
0x8818B4: call    sub_848C40
0x8818B9: mov     ebx, [ebx+0Ch]
0x8818BC: push    ebx
0x8818BD: mov     ecx, edi
0x8818BF: call    sub_848E50
0x8818C4: mov     ecx, [esp+20h+arg_0]
0x8818C8: mov     eax, [edi]
0x8818CA: mov     edx, [eax+0BCh]
0x8818D0: push    0
0x8818D2: push    ebx
0x8818D3: push    ecx
0x8818D4: mov     ecx, edi
0x8818D6: call    edx
0x8818D8: mov     eax, [esi+24h]
0x8818DB: mov     ebp, [esp+20h+arg_C]
0x8818DF: mov     ebx, [eax]
0x8818E1: mov     edx, [ebp+0]
0x8818E4: mov     eax, [edx+88h]
0x8818EA: push    0
0x8818EC: mov     ecx, ebp
0x8818EE: mov     [esp+24h+arg_8], ebx
0x8818F2: call    eax
0x8818F4: mov     ebx, [ebx+4]
0x8818F7: cmp     ebx, eax
0x8818F9: mov     [esp+20h+arg_0], eax
0x8818FD: jz      short loc_881938
0x8818FF: test    ebx, ebx
0x881901: jz      short loc_881923
0x881903: lea     ecx, [ebx+4]
0x881906: push    ecx; lpAddend
0x881907: call    dword ptr ds:0A2807Ch
0x88190D: test    eax, eax
0x88190F: jnz     short loc_88191F
0x881911: test    ebx, ebx
0x881913: jz      short loc_88191F
0x881915: mov     edx, [ebx]
0x881917: mov     eax, [edx]
0x881919: push    1
0x88191B: mov     ecx, ebx
0x88191D: call    eax
0x88191F: mov     eax, [esp+20h+arg_0]
0x881923: test    eax, eax
0x881925: mov     ecx, [esp+20h+arg_8]
0x881929: mov     [ecx+4], eax
0x88192C: jz      short loc_881938
0x88192E: add     eax, 4
0x881931: push    eax; lpAddend
0x881932: call    dword ptr ds:0A28078h
0x881938: mov     edx, [esi+24h]
0x88193B: mov     ebx, [edx+4]
0x88193E: push    0
0x881940: push    ebp
0x881941: mov     ecx, edi
0x881943: mov     [esp+28h+arg_8], ebx
0x881947: call    sub_848FD0
0x88194C: mov     ebx, [ebx+4]
0x88194F: cmp     ebx, eax
0x881951: mov     [esp+20h+arg_0], eax
0x881955: jz      short loc_881990
0x881957: test    ebx, ebx
0x881959: jz      short loc_88197B
0x88195B: lea     eax, [ebx+4]
0x88195E: push    eax; lpAddend
0x88195F: call    dword ptr ds:0A2807Ch
0x881965: test    eax, eax
0x881967: jnz     short loc_881977
0x881969: test    ebx, ebx
0x88196B: jz      short loc_881977
0x88196D: mov     edx, [ebx]
0x88196F: mov     eax, [edx]
0x881971: push    1
0x881973: mov     ecx, ebx
0x881975: call    eax
0x881977: mov     eax, [esp+20h+arg_0]
0x88197B: test    eax, eax
0x88197D: mov     ecx, [esp+20h+arg_8]
0x881981: mov     [ecx+4], eax
0x881984: jz      short loc_881990
0x881986: add     eax, 4
0x881989: push    eax; lpAddend
0x88198A: call    dword ptr ds:0A28078h
0x881990: mov     edx, [esi+24h]
0x881993: mov     ebx, [edx+8]
0x881996: mov     eax, [ebp+0]
0x881999: mov     edx, [eax+88h]
0x88199F: push    1
0x8819A1: mov     ecx, ebp
0x8819A3: mov     [esp+24h+arg_8], ebx
0x8819A7: call    edx
0x8819A9: mov     ebx, [ebx+4]
0x8819AC: cmp     ebx, eax
0x8819AE: mov     [esp+20h+arg_0], eax
0x8819B2: jz      short loc_8819ED
0x8819B4: test    ebx, ebx
0x8819B6: jz      short loc_8819D8
0x8819B8: lea     eax, [ebx+4]
0x8819BB: push    eax; lpAddend
0x8819BC: call    dword ptr ds:0A2807Ch
0x8819C2: test    eax, eax
0x8819C4: jnz     short loc_8819D4
0x8819C6: test    ebx, ebx
0x8819C8: jz      short loc_8819D4
0x8819CA: mov     edx, [ebx]
0x8819CC: mov     eax, [edx]
0x8819CE: push    1
0x8819D0: mov     ecx, ebx
0x8819D2: call    eax
0x8819D4: mov     eax, [esp+20h+arg_0]
0x8819D8: test    eax, eax
0x8819DA: mov     ecx, [esp+20h+arg_8]
0x8819DE: mov     [ecx+4], eax
0x8819E1: jz      short loc_8819ED
0x8819E3: add     eax, 4
0x8819E6: push    eax; lpAddend
0x8819E7: call    dword ptr ds:0A28078h
0x8819ED: mov     edx, [esi+24h]
0x8819F0: mov     eax, [edx+0Ch]
0x8819F3: push    1
0x8819F5: push    ebp
0x8819F6: mov     ecx, edi
0x8819F8: mov     [esp+28h+arg_8], eax
0x8819FC: call    sub_848FD0
0x881A01: mov     ecx, [esp+20h+arg_8]
0x881A05: mov     ebp, [ecx+4]
0x881A08: mov     ebx, eax
0x881A0A: cmp     ebp, ebx
0x881A0C: jz      short loc_881A44
0x881A0E: test    ebp, ebp
0x881A10: jz      short loc_881A2F
0x881A12: lea     edx, [ebp+4]
0x881A15: push    edx; lpAddend
0x881A16: call    dword ptr ds:0A2807Ch
0x881A1C: test    eax, eax
0x881A1E: jnz     short loc_881A2F
0x881A20: test    ebp, ebp
0x881A22: jz      short loc_881A2F
0x881A24: mov     eax, [ebp+0]
0x881A27: mov     edx, [eax]
0x881A29: push    1
0x881A2B: mov     ecx, ebp
0x881A2D: call    edx
0x881A2F: test    ebx, ebx
0x881A31: mov     eax, [esp+20h+arg_8]
0x881A35: mov     [eax+4], ebx
0x881A38: jz      short loc_881A44
0x881A3A: add     ebx, 4
0x881A3D: push    ebx; lpAddend
0x881A3E: call    dword ptr ds:0A28078h
0x881A44: mov     ecx, [esi+24h]
0x881A47: mov     ebp, [ecx+14h]
0x881A4A: mov     eax, ds:0B43110h
0x881A4F: mov     ebx, [ebp+4]
0x881A52: add     ebp, 4
0x881A55: cmp     ebx, eax
0x881A57: mov     [esp+20h+arg_8], eax
0x881A5B: jz      short loc_881A92
0x881A5D: test    ebx, ebx
0x881A5F: jz      short loc_881A81
0x881A61: lea     edx, [ebx+4]
0x881A64: push    edx; lpAddend
0x881A65: call    dword ptr ds:0A2807Ch
0x881A6B: test    eax, eax
0x881A6D: jnz     short loc_881A7D
0x881A6F: test    ebx, ebx
0x881A71: jz      short loc_881A7D
0x881A73: mov     eax, [ebx]
0x881A75: mov     edx, [eax]
0x881A77: push    1
0x881A79: mov     ecx, ebx
0x881A7B: call    edx
0x881A7D: mov     eax, [esp+20h+arg_8]
0x881A81: test    eax, eax
0x881A83: mov     [ebp+0], eax
0x881A86: jz      short loc_881A92
0x881A88: add     eax, 4
0x881A8B: push    eax; lpAddend
0x881A8C: call    dword ptr ds:0A28078h
0x881A92: mov     ecx, [esi+24h]
0x881A95: mov     ebp, [ecx+18h]
0x881A98: mov     eax, ds:0B43108h
0x881A9D: mov     ebx, [ebp+4]
0x881AA0: add     ebp, 4
0x881AA3: cmp     ebx, eax
0x881AA5: mov     [esp+20h+arg_8], eax
0x881AA9: jz      short loc_881AE0
0x881AAB: test    ebx, ebx
0x881AAD: jz      short loc_881ACF
0x881AAF: lea     edx, [ebx+4]
0x881AB2: push    edx; lpAddend
0x881AB3: call    dword ptr ds:0A2807Ch
0x881AB9: test    eax, eax
0x881ABB: jnz     short loc_881ACB
0x881ABD: test    ebx, ebx
0x881ABF: jz      short loc_881ACB
0x881AC1: mov     eax, [ebx]
0x881AC3: mov     edx, [eax]
0x881AC5: push    1
0x881AC7: mov     ecx, ebx
0x881AC9: call    edx
0x881ACB: mov     eax, [esp+20h+arg_8]
0x881ACF: test    eax, eax
0x881AD1: mov     [ebp+0], eax
0x881AD4: jz      short loc_881AE0
0x881AD6: add     eax, 4
0x881AD9: push    eax; lpAddend
0x881ADA: call    dword ptr ds:0A28078h
0x881AE0: mov     eax, [esi+24h]
0x881AE3: mov     ebp, [eax+1Ch]
0x881AE6: mov     eax, ds:0B4310Ch
0x881AEB: mov     ebx, [ebp+4]
0x881AEE: cmp     ebx, eax
0x881AF0: mov     ecx, eax
0x881AF2: mov     [esp+20h+arg_8], ecx
0x881AF6: jz      short loc_881B2D
0x881AF8: test    ebx, ebx
0x881AFA: jz      short loc_881B1C
0x881AFC: lea     ecx, [ebx+4]
0x881AFF: push    ecx; lpAddend
0x881B00: call    dword ptr ds:0A2807Ch
0x881B06: test    eax, eax
0x881B08: jnz     short loc_881B18
0x881B0A: test    ebx, ebx
0x881B0C: jz      short loc_881B18
0x881B0E: mov     edx, [ebx]
0x881B10: mov     eax, [edx]
0x881B12: push    1
0x881B14: mov     ecx, ebx
0x881B16: call    eax
0x881B18: mov     ecx, [esp+20h+arg_8]
0x881B1C: test    ecx, ecx
0x881B1E: mov     [ebp+4], ecx
0x881B21: jz      short loc_881B2D
0x881B23: add     ecx, 4
0x881B26: push    ecx; lpAddend
0x881B27: call    dword ptr ds:0A28078h
0x881B2D: mov     ebx, 1
0x881B32: add     [esi+60h], ebx
0x881B35: mov     [esp+20h+arg_8], esi
0x881B39: mov     edx, [edi+38h]
0x881B3C: lea     ecx, [esp+20h+arg_8]
0x881B40: push    ecx
0x881B41: push    edx
0x881B42: lea     ecx, [edi+40h]
0x881B45: mov     [esp+28h+var_4], 0
0x881B4D: call    sub_76CE40
0x881B52: or      eax, 0FFFFFFFFh
0x881B55: add     [esi+60h], eax
0x881B58: mov     [esp+20h+var_4], eax
0x881B5C: jnz     short loc_881B65
0x881B5E: mov     ecx, esi
0x881B60: call    sub_7604D0
0x881B65: add     [edi+38h], ebx
0x881B68: mov     ecx, [esp+20h+var_C]
0x881B6C: mov     large fs:0, ecx
0x881B73: pop     ecx
0x881B74: pop     edi
0x881B75: pop     esi
0x881B76: pop     ebp
0x881B77: pop     ebx
0x881B78: add     esp, 0Ch
0x881B7B: retn    10h
