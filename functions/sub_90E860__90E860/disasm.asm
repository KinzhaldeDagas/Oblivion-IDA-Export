0x90E860: sub     esp, 90h
0x90E866: push    ebx
0x90E867: push    ebp
0x90E868: push    esi
0x90E869: mov     esi, [esp+9Ch+arg_0]
0x90E870: xor     eax, eax
0x90E872: mov     al, [esi+48h]
0x90E875: push    edi
0x90E876: mov     ebp, ecx
0x90E878: mov     ecx, [esi+1Ch]
0x90E87B: mov     [esp+0A0h+var_78], ebp
0x90E87F: push    eax
0x90E880: push    ecx
0x90E881: lea     ecx, [esp+0A8h+var_2C]
0x90E885: call    sub_9183A0
0x90E88A: mov     edx, [esi]
0x90E88C: mov     al, [edx+8]
0x90E88F: test    al, al
0x90E891: jz      loc_90EBA1
0x90E897: xor     edi, edi
0x90E899: lea     ecx, [esp+0A0h+var_C]
0x90E8A0: mov     [esp+0A0h+var_84], edi
0x90E8A4: mov     [esp+0A0h+var_80], edi
0x90E8A8: mov     [esp+0A0h+var_7C], 80000000h
0x90E8B0: call    sub_8B0E10
0x90E8B5: mov     eax, [ebp+50h]
0x90E8B8: mov     ecx, [esp+0A0h+var_7C]
0x90E8BC: shl     eax, 1
0x90E8BE: and     ecx, 3FFFFFFFh
0x90E8C4: cmp     ecx, eax
0x90E8C6: jge     short loc_90E8E0
0x90E8C8: add     ecx, ecx
0x90E8CA: cmp     eax, ecx
0x90E8CC: jge     short loc_90E8D0
0x90E8CE: mov     eax, ecx
0x90E8D0: push    4
0x90E8D2: push    eax
0x90E8D3: lea     eax, [esp+0A8h+var_84]
0x90E8D7: push    eax
0x90E8D8: call    sub_8A6E40
0x90E8DD: add     esp, 0Ch
0x90E8E0: cmp     [ebp+0Ch], edi
0x90E8E3: jle     short loc_90E947
0x90E8E5: xor     ebx, ebx
0x90E8E7: mov     ecx, [ebp+8]
0x90E8EA: mov     eax, [ecx+ebx+4]
0x90E8EE: add     ecx, ebx
0x90E8F0: cmp     eax, offset unk_BA8788
0x90E8F5: jnz     short loc_90E93C
0x90E8F7: mov     eax, [esp+0A0h+var_80]
0x90E8FB: cdq
0x90E8FC: sub     eax, edx
0x90E8FE: mov     edx, [ecx]
0x90E900: sar     eax, 1
0x90E902: push    eax
0x90E903: push    edx
0x90E904: lea     ecx, [esp+0A8h+var_C]
0x90E90B: call    sub_8B0E80
0x90E910: mov     eax, [esi+10h]
0x90E913: mov     ecx, [eax+edi*8]
0x90E916: mov     edx, [esp+0A0h+var_80]
0x90E91A: mov     eax, [esp+0A0h+var_84]
0x90E91E: mov     [eax+edx*4], ecx
0x90E921: mov     eax, [esp+0A0h+var_80]
0x90E925: mov     ecx, [esi+10h]
0x90E928: inc     eax
0x90E929: mov     [esp+0A0h+var_80], eax
0x90E92D: mov     edx, [ecx+edi*8+4]
0x90E931: mov     ecx, [esp+0A0h+var_84]
0x90E935: mov     [ecx+eax*4], edx
0x90E938: inc     [esp+0A0h+var_80]
0x90E93C: mov     eax, [ebp+0Ch]
0x90E93F: inc     edi
0x90E940: add     ebx, 18h
0x90E943: cmp     edi, eax
0x90E945: jl      short loc_90E8E7
0x90E947: lea     ecx, [esp+0A0h+var_2C]
0x90E94B: call    sub_953130
0x90E950: mov     ecx, [esi+4]
0x90E953: mov     ecx, [ecx+44h]
0x90E956: mov     edx, [eax]
0x90E958: push    0
0x90E95A: push    ecx
0x90E95B: mov     ecx, eax
0x90E95D: call    dword ptr [edx+18h]
0x90E960: mov     edx, [esp+0A0h+var_80]
0x90E964: mov     eax, [esp+0A0h+var_84]
0x90E968: push    edx
0x90E969: push    eax
0x90E96A: lea     ecx, [esp+0A8h+var_2C]
0x90E96E: call    sub_918480
0x90E973: lea     ecx, [esp+0A0h+var_2C]
0x90E977: call    sub_953130
0x90E97C: mov     edi, eax
0x90E97E: mov     edx, [edi]
0x90E980: mov     ecx, edi
0x90E982: call    dword ptr [edx+1Ch]
0x90E985: lea     ecx, [esp+0A0h+var_54]
0x90E989: mov     [esp+0A0h+var_60], ecx
0x90E98D: mov     [esp+0A0h+var_58], 80000020h
0x90E995: xor     ecx, ecx
0x90E997: mov     edx, [esp+0A0h+var_60]
0x90E99B: mov     byte ptr [ecx+edx], 0FFh
0x90E99F: inc     ecx
0x90E9A0: cmp     ecx, 10h
0x90E9A3: jl      short loc_90E997
0x90E9A5: and     eax, 0Fh
0x90E9A8: mov     [esp+0A0h+var_5C], 10h
0x90E9B0: jz      short loc_90E9C6
0x90E9B2: mov     edx, [edi]
0x90E9B4: mov     ecx, 10h
0x90E9B9: sub     ecx, eax
0x90E9BB: mov     eax, [esp+0A0h+var_60]
0x90E9BF: push    ecx
0x90E9C0: push    eax
0x90E9C1: mov     ecx, edi
0x90E9C3: call    dword ptr [edx+0Ch]
0x90E9C6: mov     eax, [esp+0A0h+var_58]
0x90E9CA: test    eax, eax
0x90E9CC: mov     ebx, ds:0BA9DE4h
0x90E9D2: js      short loc_90E9F6
0x90E9D4: mov     ecx, [esp+0A0h+var_60]
0x90E9D8: mov     edx, large fs:2Ch
0x90E9DF: push    14h
0x90E9E1: and     eax, 3FFFFFFFh
0x90E9E6: push    eax
0x90E9E7: mov     eax, [edx+ebx*4]
0x90E9EA: push    ecx
0x90E9EB: mov     ecx, [eax+19Ch]
0x90E9F1: call    sub_8A75D0
0x90E9F6: mov     eax, [ebp+4Ch]
0x90E9F9: xor     edi, edi
0x90E9FB: lea     eax, [eax+eax*2]
0x90E9FE: cmp     eax, edi
0x90EA00: mov     [esp+0A0h+var_90], edi
0x90EA04: mov     [esp+0A0h+var_8C], edi
0x90EA08: mov     [esp+0A0h+var_88], 80000000h
0x90EA10: jle     short loc_90EA2C
0x90EA12: xor     ecx, ecx
0x90EA14: cmp     eax, edi
0x90EA16: setl    cl
0x90EA19: push    4
0x90EA1B: lea     edx, [esp+0A4h+var_90]
0x90EA1F: dec     ecx
0x90EA20: and     eax, ecx
0x90EA22: push    eax
0x90EA23: push    edx
0x90EA24: call    sub_8A6E40
0x90EA29: add     esp, 0Ch
0x90EA2C: mov     eax, [ebp+0Ch]
0x90EA2F: test    eax, eax
0x90EA31: jle     loc_90EAB7
0x90EA37: xor     ebp, ebp
0x90EA39: lea     esp, [esp+0]
0x90EA40: mov     ebx, [esp+0A0h+var_78]
0x90EA44: mov     eax, [ebx+8]
0x90EA47: cmp     dword ptr [eax+ebp+4], offset unk_BA8788
0x90EA4F: jz      short loc_90EAA2
0x90EA51: mov     ecx, [esi+10h]
0x90EA54: mov     edx, [ecx+edi*8]
0x90EA57: mov     ecx, [esp+0A0h+var_8C]
0x90EA5B: mov     eax, [esp+0A0h+var_90]
0x90EA5F: mov     [eax+ecx*4], edx
0x90EA62: mov     eax, [esp+0A0h+var_8C]
0x90EA66: mov     edx, [esi+10h]
0x90EA69: inc     eax
0x90EA6A: mov     [esp+0A0h+var_8C], eax
0x90EA6E: mov     ecx, [edx+edi*8+4]
0x90EA72: mov     edx, [esp+0A0h+var_90]
0x90EA76: mov     [edx+eax*4], ecx
0x90EA79: inc     [esp+0A0h+var_8C]
0x90EA7D: mov     eax, [ebx+8]
0x90EA80: mov     eax, [eax+ebp+4]
0x90EA84: push    0FFFFFFFFh
0x90EA86: push    eax
0x90EA87: lea     ecx, [esp+0A8h+var_C]
0x90EA8E: call    sub_8B1550
0x90EA93: mov     ecx, [esp+0A0h+var_8C]
0x90EA97: mov     edx, [esp+0A0h+var_90]
0x90EA9B: mov     [edx+ecx*4], eax
0x90EA9E: inc     [esp+0A0h+var_8C]
0x90EAA2: mov     eax, [ebx+0Ch]
0x90EAA5: inc     edi
0x90EAA6: add     ebp, 18h
0x90EAA9: cmp     edi, eax
0x90EAAB: jl      short loc_90EA40
0x90EAAD: mov     ebp, [esp+0A0h+var_78]
0x90EAB1: mov     ebx, ds:0BA9DE4h
0x90EAB7: mov     eax, [esp+0A0h+var_8C]
0x90EABB: mov     ecx, [esp+0A0h+var_90]
0x90EABF: push    eax
0x90EAC0: push    ecx
0x90EAC1: lea     ecx, [esp+0A8h+var_2C]
0x90EAC5: call    sub_918480
0x90EACA: lea     ecx, [esp+0A0h+var_2C]
0x90EACE: call    sub_953130
0x90EAD3: mov     edi, eax
0x90EAD5: mov     edx, [edi]
0x90EAD7: mov     ecx, edi
0x90EAD9: call    dword ptr [edx+1Ch]
0x90EADC: lea     ecx, [esp+0A0h+var_54]
0x90EAE0: mov     [esp+0A0h+var_60], ecx
0x90EAE4: mov     [esp+0A0h+var_58], 80000020h
0x90EAEC: xor     ecx, ecx
0x90EAEE: mov     edi, edi
0x90EAF0: mov     edx, [esp+0A0h+var_60]
0x90EAF4: mov     byte ptr [ecx+edx], 0FFh
0x90EAF8: inc     ecx
0x90EAF9: cmp     ecx, 10h
0x90EAFC: jl      short loc_90EAF0
0x90EAFE: and     eax, 0Fh
0x90EB01: mov     [esp+0A0h+var_5C], 10h
0x90EB09: jz      short loc_90EB1F
0x90EB0B: mov     edx, [edi]
0x90EB0D: mov     ecx, 10h
0x90EB12: sub     ecx, eax
0x90EB14: mov     eax, [esp+0A0h+var_60]
0x90EB18: push    ecx
0x90EB19: push    eax
0x90EB1A: mov     ecx, edi
0x90EB1C: call    dword ptr [edx+0Ch]
0x90EB1F: mov     eax, [esp+0A0h+var_58]
0x90EB23: test    eax, eax
0x90EB25: mov     edi, large fs:2Ch
0x90EB2C: js      short loc_90EB49
0x90EB2E: mov     ecx, [esp+0A0h+var_60]
0x90EB32: mov     edx, [edi+ebx*4]
0x90EB35: push    14h
0x90EB37: and     eax, 3FFFFFFFh
0x90EB3C: push    eax
0x90EB3D: push    ecx
0x90EB3E: mov     ecx, [edx+19Ch]
0x90EB44: call    sub_8A75D0
0x90EB49: mov     eax, [esp+0A0h+var_88]
0x90EB4D: test    eax, eax
0x90EB4F: js      short loc_90EB6F
0x90EB51: mov     ecx, [edi+ebx*4]
0x90EB54: mov     ecx, [ecx+19Ch]
0x90EB5A: and     eax, 3FFFFFFFh
0x90EB5F: push    14h
0x90EB61: shl     eax, 2
0x90EB64: push    eax
0x90EB65: mov     eax, [esp+0A8h+var_90]
0x90EB69: push    eax
0x90EB6A: call    sub_8A75D0
0x90EB6F: lea     ecx, [esp+0A0h+var_C]
0x90EB76: call    sub_8B0E60
0x90EB7B: mov     eax, [esp+0A0h+var_7C]
0x90EB7F: test    eax, eax
0x90EB81: js      short loc_90EBA1
0x90EB83: mov     edx, [esp+0A0h+var_84]
0x90EB87: and     eax, 3FFFFFFFh
0x90EB8C: push    14h
0x90EB8E: shl     eax, 2
0x90EB91: push    eax
0x90EB92: mov     eax, [edi+ebx*4]
0x90EB95: mov     ecx, [eax+19Ch]
0x90EB9B: push    edx
0x90EB9C: call    sub_8A75D0
0x90EBA1: mov     eax, [esi+8]
0x90EBA4: xor     ebx, ebx
0x90EBA6: cmp     eax, ebx
0x90EBA8: mov     [esp+0A0h+var_70], ebx
0x90EBAC: jle     loc_90EE30
0x90EBB2: mov     [esp+0A0h+var_68], ebx
0x90EBB6: mov     [esp+0A0h+var_6C], ebx
0x90EBBA: lea     ebx, [ebx+0]
0x90EBC0: mov     edi, [esi+30h]
0x90EBC3: mov     ecx, [esp+0A0h+var_68]
0x90EBC7: mov     ebp, [esi+4]
0x90EBCA: mov     edx, [esp+0A0h+var_6C]
0x90EBCE: xor     eax, eax
0x90EBD0: add     edi, ecx
0x90EBD2: mov     [esp+0A0h+var_84], eax
0x90EBD6: mov     [esp+0A0h+var_80], eax
0x90EBDA: mov     [esp+0A0h+var_7C], 80000000h
0x90EBE2: mov     ebx, [edi+4]
0x90EBE5: add     ebp, edx
0x90EBE7: lea     ebx, [ebx+ebx*2]
0x90EBEA: test    ebx, ebx
0x90EBEC: mov     [esp+0A0h+var_74], ebp
0x90EBF0: jle     short loc_90EC14
0x90EBF2: push    4
0x90EBF4: lea     ecx, [esp+0A4h+var_84]
0x90EBF8: push    ebx
0x90EBF9: push    ecx
0x90EBFA: call    sub_8A6E40
0x90EBFF: add     esp, 0Ch
0x90EC02: xor     eax, eax
0x90EC04: mov     edx, [esp+0A0h+var_84]
0x90EC08: mov     dword ptr [edx+eax*4], 0FFFFFFFFh
0x90EC0F: inc     eax
0x90EC10: cmp     eax, ebx
0x90EC12: jl      short loc_90EC04
0x90EC14: mov     [esp+0A0h+var_80], ebx
0x90EC18: mov     eax, [edi+4]
0x90EC1B: xor     ebx, ebx
0x90EC1D: cmp     eax, ebx
0x90EC1F: mov     [esp+0A0h+var_64], ebx
0x90EC23: jle     short loc_90EC9C
0x90EC25: xor     ebp, ebp
0x90EC27: jmp     short loc_90EC30
0x90EC29: align 10h
0x90EC30: mov     eax, [edi]
0x90EC32: mov     eax, [eax+ebp+4]
0x90EC36: mov     ecx, [esp+0A0h+var_78]
0x90EC3A: push    0FFFFFFFEh
0x90EC3C: push    eax
0x90EC3D: add     ecx, 14h
0x90EC40: call    sub_8B1550
0x90EC45: test    eax, eax
0x90EC47: jl      short loc_90EC85
0x90EC49: mov     ecx, [esi+10h]
0x90EC4C: cmp     dword ptr [ecx+eax*8], 0
0x90EC50: jl      short loc_90EC85
0x90EC52: mov     edx, [edi]
0x90EC54: mov     ecx, [edx+ebp]
0x90EC57: mov     edx, [esp+0A0h+var_74]
0x90EC5B: sub     ecx, [edx+14h]
0x90EC5E: mov     edx, [esp+0A0h+var_84]
0x90EC62: mov     [ebx+edx], ecx
0x90EC65: mov     ecx, [esi+10h]
0x90EC68: mov     edx, [ecx+eax*8]
0x90EC6B: mov     ecx, [esp+0A0h+var_84]
0x90EC6F: mov     [ebx+ecx+4], edx
0x90EC73: mov     edx, [esi+10h]
0x90EC76: mov     eax, [edx+eax*8+4]
0x90EC7A: mov     ecx, [esp+0A0h+var_84]
0x90EC7E: mov     [ebx+ecx+8], eax
0x90EC82: add     ebx, 0Ch
0x90EC85: mov     eax, [esp+0A0h+var_64]
0x90EC89: mov     ecx, [edi+4]
0x90EC8C: inc     eax
0x90EC8D: add     ebp, 0Ch
0x90EC90: cmp     eax, ecx
0x90EC92: mov     [esp+0A0h+var_64], eax
0x90EC96: jl      short loc_90EC30
0x90EC98: mov     ebp, [esp+0A0h+var_74]
0x90EC9C: mov     eax, [ebp+1Ch]
0x90EC9F: mov     edi, [ebp+14h]
0x90ECA2: mov     ecx, [esi+1Ch]
0x90ECA5: mov     edx, [ecx]
0x90ECA7: push    0
0x90ECA9: add     eax, edi
0x90ECAB: push    eax
0x90ECAC: call    dword ptr [edx+18h]
0x90ECAF: mov     ecx, [esp+0A0h+var_80]
0x90ECB3: mov     edx, [esp+0A0h+var_84]
0x90ECB7: push    ecx
0x90ECB8: push    edx
0x90ECB9: lea     ecx, [esp+0A8h+var_2C]
0x90ECBD: call    sub_918480
0x90ECC2: mov     eax, [esp+0A0h+var_7C]
0x90ECC6: test    eax, eax
0x90ECC8: js      short loc_90ECF5
0x90ECCA: mov     ecx, large fs:2Ch
0x90ECD1: mov     edx, ds:0BA9DE4h
0x90ECD7: and     eax, 3FFFFFFFh
0x90ECDC: shl     eax, 2
0x90ECDF: push    14h
0x90ECE1: push    eax
0x90ECE2: mov     eax, [esp+0A8h+var_84]
0x90ECE6: push    eax
0x90ECE7: mov     eax, [ecx+edx*4]
0x90ECEA: mov     ecx, [eax+19Ch]
0x90ECF0: call    sub_8A75D0
0x90ECF5: mov     edi, [esp+0A0h+var_6C]
0x90ECF9: mov     ebp, [esi+4]
0x90ECFC: mov     edx, [esp+0A0h+var_68]
0x90ED00: add     ebp, edi
0x90ED02: mov     edi, [esi+3Ch]
0x90ED05: xor     eax, eax
0x90ED07: add     edi, edx
0x90ED09: mov     [esp+0A0h+var_90], eax
0x90ED0D: mov     [esp+0A0h+var_8C], eax
0x90ED11: mov     [esp+0A0h+var_88], 80000000h
0x90ED19: mov     ebx, [edi+4]
0x90ED1C: lea     ebx, [ebx+ebx*2]
0x90ED1F: cmp     ebx, eax
0x90ED21: mov     [esp+0A0h+var_74], ebp
0x90ED25: jle     short loc_90ED43
0x90ED27: xor     ecx, ecx
0x90ED29: cmp     ebx, eax
0x90ED2B: setl    cl
0x90ED2E: push    4
0x90ED30: lea     edx, [esp+0A4h+var_90]
0x90ED34: dec     ecx
0x90ED35: and     ecx, ebx
0x90ED37: mov     eax, ecx
0x90ED39: push    eax
0x90ED3A: push    edx
0x90ED3B: call    sub_8A6E40
0x90ED40: add     esp, 0Ch
0x90ED43: mov     [esp+0A0h+var_8C], ebx
0x90ED47: mov     eax, [edi+4]
0x90ED4A: xor     ebx, ebx
0x90ED4C: test    eax, eax
0x90ED4E: jle     short loc_90EDA7
0x90ED50: xor     ebp, ebp
0x90ED52: mov     eax, [edi]
0x90ED54: mov     ecx, [eax+ebx*8]
0x90ED57: mov     edx, [esp+0A0h+var_74]
0x90ED5B: sub     ecx, [edx+14h]
0x90ED5E: mov     eax, [esp+0A0h+var_90]
0x90ED62: mov     [eax+ebp], ecx
0x90ED65: mov     ecx, [esp+0A0h+var_90]
0x90ED69: mov     dword ptr [ecx+ebp+4], 0
0x90ED71: mov     edx, [edi]
0x90ED73: mov     ecx, [esp+0A0h+var_90]
0x90ED77: mov     eax, [edx+ebx*8+4]
0x90ED7B: lea     edx, [ecx+ebp+8]
0x90ED7F: mov     ecx, [esp+0A0h+var_78]
0x90ED83: push    0FFFFFFFFh
0x90ED85: push    eax
0x90ED86: add     ecx, 38h ; '8'
0x90ED89: mov     [esp+0A8h+var_64], edx
0x90ED8D: call    sub_942B40
0x90ED92: mov     ecx, [esp+0A0h+var_64]
0x90ED96: mov     [ecx], eax
0x90ED98: mov     eax, [edi+4]
0x90ED9B: inc     ebx
0x90ED9C: add     ebp, 0Ch
0x90ED9F: cmp     ebx, eax
0x90EDA1: jl      short loc_90ED52
0x90EDA3: mov     ebp, [esp+0A0h+var_74]
0x90EDA7: mov     eax, [ebp+20h]
0x90EDAA: mov     edi, [ebp+14h]
0x90EDAD: mov     ecx, [esi+1Ch]
0x90EDB0: mov     edx, [ecx]
0x90EDB2: push    0
0x90EDB4: add     eax, edi
0x90EDB6: push    eax
0x90EDB7: call    dword ptr [edx+18h]
0x90EDBA: mov     ecx, [esp+0A0h+var_8C]
0x90EDBE: mov     edx, [esp+0A0h+var_90]
0x90EDC2: push    ecx
0x90EDC3: push    edx
0x90EDC4: lea     ecx, [esp+0A8h+var_2C]
0x90EDC8: call    sub_918480
0x90EDCD: mov     eax, [esp+0A0h+var_88]
0x90EDD1: test    eax, eax
0x90EDD3: js      short loc_90EE00
0x90EDD5: mov     ecx, large fs:2Ch
0x90EDDC: mov     edx, ds:0BA9DE4h
0x90EDE2: and     eax, 3FFFFFFFh
0x90EDE7: shl     eax, 2
0x90EDEA: push    14h
0x90EDEC: push    eax
0x90EDED: mov     eax, [esp+0A8h+var_90]
0x90EDF1: push    eax
0x90EDF2: mov     eax, [ecx+edx*4]
0x90EDF5: mov     ecx, [eax+19Ch]
0x90EDFB: call    sub_8A75D0
0x90EE00: mov     eax, [esp+0A0h+var_70]
0x90EE04: mov     edi, [esp+0A0h+var_6C]
0x90EE08: mov     edx, [esp+0A0h+var_68]
0x90EE0C: mov     ecx, [esi+8]
0x90EE0F: inc     eax
0x90EE10: add     edi, 30h ; '0'
0x90EE13: add     edx, 0Ch
0x90EE16: cmp     eax, ecx
0x90EE18: mov     [esp+0A0h+var_70], eax
0x90EE1C: mov     [esp+0A0h+var_6C], edi
0x90EE20: mov     [esp+0A0h+var_68], edx
0x90EE24: jl      loc_90EBC0
0x90EE2A: mov     ebp, [esp+0A0h+var_78]
0x90EE2E: xor     ebx, ebx
0x90EE30: mov     ecx, [esi+1Ch]
0x90EE33: mov     eax, [esp+0A0h+arg_4]
0x90EE3A: mov     edx, [ecx]
0x90EE3C: push    ebx
0x90EE3D: push    eax
0x90EE3E: call    dword ptr [edx+18h]
0x90EE41: mov     ecx, [esi+8]
0x90EE44: xor     eax, eax
0x90EE46: cmp     ecx, eax
0x90EE48: jle     short loc_90EEC2
0x90EE4A: lea     ebp, [esi+20h]
0x90EE4D: xor     edi, edi
0x90EE4F: jmp     short loc_90EE53
0x90EE51: xor     eax, eax
0x90EE53: mov     edx, [ebp+0]
0x90EE56: mov     ecx, 80000000h
0x90EE5B: mov     [esp+0A0h+var_60], eax
0x90EE5F: mov     [esp+0A0h+var_5C], eax
0x90EE63: mov     dword ptr [esp+0A0h+var_54], eax
0x90EE67: mov     [esp+0A0h+var_50], eax
0x90EE6B: mov     [esp+0A0h+var_48], eax
0x90EE6F: mov     [esp+0A0h+var_44], eax
0x90EE73: mov     [esp+0A0h+var_3C], eax
0x90EE77: mov     [esp+0A0h+var_38], eax
0x90EE7B: mov     [esp+0A0h+var_30], eax
0x90EE7F: mov     [esp+0A0h+var_58], ecx
0x90EE83: mov     [esp+0A0h+var_4C], ecx
0x90EE87: mov     [esp+0A0h+var_40], ecx
0x90EE8B: mov     [esp+0A0h+var_34], ecx
0x90EE8F: mov     ecx, [esi+4]
0x90EE92: lea     eax, [esp+0A0h+var_60]
0x90EE96: push    eax
0x90EE97: mov     eax, [esi+1Ch]
0x90EE9A: push    offset unk_BA9498
0x90EE9F: add     ecx, edi
0x90EEA1: push    ecx
0x90EEA2: push    eax
0x90EEA3: mov     ecx, ebp
0x90EEA5: call    dword ptr [edx+8]
0x90EEA8: lea     ecx, [esp+0A0h+var_60]
0x90EEAC: call    sub_941400
0x90EEB1: mov     eax, [esi+8]
0x90EEB4: inc     ebx
0x90EEB5: add     edi, 30h ; '0'
0x90EEB8: cmp     ebx, eax
0x90EEBA: jl      short loc_90EE51
0x90EEBC: mov     ebp, [esp+0A0h+var_78]
0x90EEC0: xor     eax, eax
0x90EEC2: mov     ecx, [esi+1Ch]
0x90EEC5: mov     edx, [ecx]
0x90EEC7: push    eax
0x90EEC8: push    18h
0x90EECA: call    dword ptr [edx+18h]
0x90EECD: lea     ecx, [esi+20h]
0x90EED0: call    sub_942CA0
0x90EED5: mov     eax, [eax]
0x90EED7: mov     bl, ds:0B2FDE5h
0x90EEDD: mov     edx, [esi+1Ch]
0x90EEE0: cmp     ah, bl
0x90EEE2: setnz   al
0x90EEE5: mov     byte ptr [esp+0A0h+var_70], al
0x90EEE9: mov     ecx, [esp+0A0h+var_70]
0x90EEED: push    ecx
0x90EEEE: push    edx
0x90EEEF: lea     ecx, [esp+0A8h+var_1C]
0x90EEF6: call    sub_9183A0
0x90EEFB: mov     ecx, [esi+10h]
0x90EEFE: mov     eax, [ebp+44h]
0x90EF01: mov     edx, [ecx+eax*8]
0x90EF04: push    edx
0x90EF05: lea     ecx, [esp+0A4h+var_1C]
0x90EF0C: call    sub_918440
0x90EF11: mov     ecx, [esi+10h]
0x90EF14: mov     eax, [ebp+44h]
0x90EF17: mov     edx, [ecx+eax*8+4]
0x90EF1B: push    edx
0x90EF1C: lea     ecx, [esp+0A4h+var_1C]
0x90EF23: call    sub_918440
0x90EF28: mov     ecx, [esi+10h]
0x90EF2B: mov     eax, [ebp+48h]
0x90EF2E: mov     edx, [ecx+eax*8]
0x90EF31: push    edx
0x90EF32: lea     ecx, [esp+0A4h+var_1C]
0x90EF39: call    sub_918440
0x90EF3E: mov     ecx, [esi+10h]
0x90EF41: mov     eax, [ebp+48h]
0x90EF44: mov     edx, [ecx+eax*8+4]
0x90EF48: push    edx
0x90EF49: lea     ecx, [esp+0A4h+var_1C]
0x90EF50: call    sub_918440
0x90EF55: lea     ecx, [esp+0A0h+var_1C]
0x90EF5C: call    sub_918180
0x90EF61: lea     ecx, [esp+0A0h+var_2C]
0x90EF65: call    sub_918180
0x90EF6A: pop     edi
0x90EF6B: pop     esi
0x90EF6C: pop     ebp
0x90EF6D: pop     ebx
0x90EF6E: add     esp, 90h
0x90EF74: retn    8
