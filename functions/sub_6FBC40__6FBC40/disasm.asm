0x6FBC40: push    0FFFFFFFFh
0x6FBC42: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x6FBC47: mov     eax, large fs:0
0x6FBC4D: push    eax
0x6FBC4E: push    ecx
0x6FBC4F: push    ebx
0x6FBC50: push    ebp
0x6FBC51: push    esi
0x6FBC52: push    edi
0x6FBC53: mov     eax, ds:0B30AACh
0x6FBC58: xor     eax, esp
0x6FBC5A: push    eax
0x6FBC5B: lea     eax, [esp+24h+var_C]
0x6FBC5F: mov     large fs:0, eax
0x6FBC65: mov     eax, 1
0x6FBC6A: test    ds:0B3F528h, al
0x6FBC70: jnz     loc_6FBD18
0x6FBC76: fld     dword ptr ds:0A3D65Ch
0x6FBC7C: or      ds:0B3F528h, eax
0x6FBC82: fst     dword ptr ds:0B3F4C8h
0x6FBC88: fst     dword ptr ds:0B3F4CCh
0x6FBC8E: fst     dword ptr ds:0B3F4D0h
0x6FBC94: fst     dword ptr ds:0B3F4D4h
0x6FBC9A: fst     dword ptr ds:0B3F4D8h
0x6FBCA0: fld     dword ptr ds:0A45E4Ch
0x6FBCA6: fst     dword ptr ds:0B3F4DCh
0x6FBCAC: fst     dword ptr ds:0B3F4E4h
0x6FBCB2: fst     dword ptr ds:0B3F4F0h
0x6FBCB8: fst     dword ptr ds:0B3F4F4h
0x6FBCBE: fst     dword ptr ds:0B3F4F8h
0x6FBCC4: fst     dword ptr ds:0B3F504h
0x6FBCCA: fst     dword ptr ds:0B3F50Ch
0x6FBCD0: fst     dword ptr ds:0B3F510h
0x6FBCD6: fst     dword ptr ds:0B3F514h
0x6FBCDC: fst     dword ptr ds:0B3F51Ch
0x6FBCE2: fst     dword ptr ds:0B3F520h
0x6FBCE8: fstp    dword ptr ds:0B3F524h
0x6FBCEE: fst     dword ptr ds:0B3F4E0h
0x6FBCF4: fst     dword ptr ds:0B3F4E8h
0x6FBCFA: fst     dword ptr ds:0B3F4ECh
0x6FBD00: fst     dword ptr ds:0B3F4FCh
0x6FBD06: fst     dword ptr ds:0B3F500h
0x6FBD0C: fst     dword ptr ds:0B3F508h
0x6FBD12: fstp    dword ptr ds:0B3F518h
0x6FBD18: push    60h ; '`'; Size
0x6FBD1A: call    FormHeapAlloc
0x6FBD1F: mov     ebx, eax
0x6FBD21: mov     eax, [esp+28h+arg_0]
0x6FBD25: fld     dword ptr [eax]
0x6FBD27: mov     esi, [esp+28h+arg_4]
0x6FBD2B: fmul    dword ptr ds:0B3F4C8h
0x6FBD31: add     esp, 4
0x6FBD34: test    esi, esi
0x6FBD36: fstp    dword ptr [ebx]
0x6FBD38: fld     dword ptr ds:0B3F4CCh
0x6FBD3E: fmul    dword ptr [eax+4]
0x6FBD41: fstp    dword ptr [ebx+4]
0x6FBD44: fld     dword ptr ds:0B3F4D0h
0x6FBD4A: fmul    dword ptr [eax+8]
0x6FBD4D: fstp    dword ptr [ebx+8]
0x6FBD50: fld     dword ptr [eax]
0x6FBD52: fmul    dword ptr ds:0B3F4D4h
0x6FBD58: fstp    dword ptr [ebx+0Ch]
0x6FBD5B: fld     dword ptr ds:0B3F4D8h
0x6FBD61: fmul    dword ptr [eax+4]
0x6FBD64: fstp    dword ptr [ebx+10h]
0x6FBD67: fld     dword ptr ds:0B3F4DCh
0x6FBD6D: fmul    dword ptr [eax+8]
0x6FBD70: fstp    dword ptr [ebx+14h]
0x6FBD73: fld     dword ptr [eax]
0x6FBD75: fmul    dword ptr ds:0B3F4E0h
0x6FBD7B: fstp    dword ptr [ebx+18h]
0x6FBD7E: fld     dword ptr ds:0B3F4E4h
0x6FBD84: fmul    dword ptr [eax+4]
0x6FBD87: fstp    dword ptr [ebx+1Ch]
0x6FBD8A: fld     dword ptr ds:0B3F4E8h
0x6FBD90: fmul    dword ptr [eax+8]
0x6FBD93: fstp    dword ptr [ebx+20h]
0x6FBD96: fld     dword ptr [eax]
0x6FBD98: fmul    dword ptr ds:0B3F4ECh
0x6FBD9E: fstp    dword ptr [ebx+24h]
0x6FBDA1: fld     dword ptr ds:0B3F4F0h
0x6FBDA7: fmul    dword ptr [eax+4]
0x6FBDAA: fstp    dword ptr [ebx+28h]
0x6FBDAD: fld     dword ptr ds:0B3F4F4h
0x6FBDB3: fmul    dword ptr [eax+8]
0x6FBDB6: fstp    dword ptr [ebx+2Ch]
0x6FBDB9: fld     dword ptr [eax]
0x6FBDBB: fmul    dword ptr ds:0B3F4F8h
0x6FBDC1: fstp    dword ptr [ebx+30h]
0x6FBDC4: fld     dword ptr ds:0B3F4FCh
0x6FBDCA: fmul    dword ptr [eax+4]
0x6FBDCD: fstp    dword ptr [ebx+34h]
0x6FBDD0: fld     dword ptr ds:0B3F500h
0x6FBDD6: fmul    dword ptr [eax+8]
0x6FBDD9: fstp    dword ptr [ebx+38h]
0x6FBDDC: fld     dword ptr [eax]
0x6FBDDE: fmul    dword ptr ds:0B3F504h
0x6FBDE4: fstp    dword ptr [ebx+3Ch]
0x6FBDE7: fld     dword ptr ds:0B3F508h
0x6FBDED: fmul    dword ptr [eax+4]
0x6FBDF0: fstp    dword ptr [ebx+40h]
0x6FBDF3: fld     dword ptr ds:0B3F50Ch
0x6FBDF9: fmul    dword ptr [eax+8]
0x6FBDFC: fstp    dword ptr [ebx+44h]
0x6FBDFF: fld     dword ptr [eax]
0x6FBE01: fmul    dword ptr ds:0B3F510h
0x6FBE07: fstp    dword ptr [ebx+48h]
0x6FBE0A: fld     dword ptr ds:0B3F514h
0x6FBE10: fmul    dword ptr [eax+4]
0x6FBE13: fstp    dword ptr [ebx+4Ch]
0x6FBE16: fld     dword ptr ds:0B3F518h
0x6FBE1C: fmul    dword ptr [eax+8]
0x6FBE1F: fstp    dword ptr [ebx+50h]
0x6FBE22: fld     dword ptr [eax]
0x6FBE24: fmul    dword ptr ds:0B3F51Ch
0x6FBE2A: fstp    dword ptr [ebx+54h]
0x6FBE2D: fld     dword ptr ds:0B3F520h
0x6FBE33: fmul    dword ptr [eax+4]
0x6FBE36: fstp    dword ptr [ebx+58h]
0x6FBE39: fld     dword ptr ds:0B3F524h
0x6FBE3F: fmul    dword ptr [eax+8]
0x6FBE42: fstp    dword ptr [ebx+5Ch]
0x6FBE45: jz      loc_6FBFF8
0x6FBE4B: push    80h ; '€'; Size
0x6FBE50: call    FormHeapAlloc
0x6FBE55: add     esp, 4
0x6FBE58: test    eax, eax
0x6FBE5A: jz      short loc_6FBEBF
0x6FBE5C: fldz
0x6FBE5E: fst     dword ptr [eax]
0x6FBE60: fst     dword ptr [eax+4]
0x6FBE63: fst     dword ptr [eax+8]
0x6FBE66: fst     dword ptr [eax+0Ch]
0x6FBE69: fst     dword ptr [eax+10h]
0x6FBE6C: fst     dword ptr [eax+14h]
0x6FBE6F: fst     dword ptr [eax+18h]
0x6FBE72: fst     dword ptr [eax+1Ch]
0x6FBE75: fst     dword ptr [eax+20h]
0x6FBE78: fst     dword ptr [eax+24h]
0x6FBE7B: fst     dword ptr [eax+28h]
0x6FBE7E: fst     dword ptr [eax+2Ch]
0x6FBE81: fst     dword ptr [eax+30h]
0x6FBE84: fst     dword ptr [eax+34h]
0x6FBE87: fst     dword ptr [eax+38h]
0x6FBE8A: fst     dword ptr [eax+3Ch]
0x6FBE8D: fst     dword ptr [eax+40h]
0x6FBE90: fst     dword ptr [eax+44h]
0x6FBE93: fst     dword ptr [eax+48h]
0x6FBE96: fst     dword ptr [eax+4Ch]
0x6FBE99: fst     dword ptr [eax+50h]
0x6FBE9C: fst     dword ptr [eax+54h]
0x6FBE9F: fst     dword ptr [eax+58h]
0x6FBEA2: fst     dword ptr [eax+5Ch]
0x6FBEA5: fst     dword ptr [eax+60h]
0x6FBEA8: fst     dword ptr [eax+64h]
0x6FBEAB: fst     dword ptr [eax+68h]
0x6FBEAE: fst     dword ptr [eax+6Ch]
0x6FBEB1: fst     dword ptr [eax+70h]
0x6FBEB4: fst     dword ptr [eax+74h]
0x6FBEB7: fst     dword ptr [eax+78h]
0x6FBEBA: fstp    dword ptr [eax+7Ch]
0x6FBEBD: jmp     short loc_6FBEC1
0x6FBEBF: xor     eax, eax
0x6FBEC1: test    eax, eax
0x6FBEC3: mov     [esp+24h+arg_4], eax
0x6FBEC7: jz      loc_6FBF84
0x6FBECD: mov     ecx, [esi]
0x6FBECF: mov     [eax], ecx
0x6FBED1: mov     edx, [esi+4]
0x6FBED4: mov     [eax+4], edx
0x6FBED7: mov     ecx, [esi+8]
0x6FBEDA: mov     [eax+8], ecx
0x6FBEDD: mov     edx, [esi+0Ch]
0x6FBEE0: mov     [eax+0Ch], edx
0x6FBEE3: mov     ecx, [esi]
0x6FBEE5: mov     [eax+10h], ecx
0x6FBEE8: mov     edx, [esi+4]
0x6FBEEB: mov     [eax+14h], edx
0x6FBEEE: mov     ecx, [esi+8]
0x6FBEF1: mov     [eax+18h], ecx
0x6FBEF4: mov     edx, [esi+0Ch]
0x6FBEF7: mov     [eax+1Ch], edx
0x6FBEFA: mov     ecx, [esi]
0x6FBEFC: mov     [eax+20h], ecx
0x6FBEFF: mov     edx, [esi+4]
0x6FBF02: mov     [eax+24h], edx
0x6FBF05: mov     ecx, [esi+8]
0x6FBF08: mov     [eax+28h], ecx
0x6FBF0B: mov     edx, [esi+0Ch]
0x6FBF0E: mov     [eax+2Ch], edx
0x6FBF11: mov     ecx, [esi]
0x6FBF13: mov     [eax+30h], ecx
0x6FBF16: mov     edx, [esi+4]
0x6FBF19: mov     [eax+34h], edx
0x6FBF1C: mov     ecx, [esi+8]
0x6FBF1F: mov     [eax+38h], ecx
0x6FBF22: mov     edx, [esi+0Ch]
0x6FBF25: mov     [eax+3Ch], edx
0x6FBF28: mov     ecx, [esi]
0x6FBF2A: mov     [eax+40h], ecx
0x6FBF2D: mov     edx, [esi+4]
0x6FBF30: mov     [eax+44h], edx
0x6FBF33: mov     ecx, [esi+8]
0x6FBF36: mov     [eax+48h], ecx
0x6FBF39: mov     edx, [esi+0Ch]
0x6FBF3C: mov     [eax+4Ch], edx
0x6FBF3F: mov     ecx, [esi]
0x6FBF41: mov     [eax+50h], ecx
0x6FBF44: mov     edx, [esi+4]
0x6FBF47: mov     [eax+54h], edx
0x6FBF4A: mov     ecx, [esi+8]
0x6FBF4D: mov     [eax+58h], ecx
0x6FBF50: mov     edx, [esi+0Ch]
0x6FBF53: mov     [eax+5Ch], edx
0x6FBF56: mov     ecx, [esi]
0x6FBF58: mov     [eax+60h], ecx
0x6FBF5B: mov     edx, [esi+4]
0x6FBF5E: mov     [eax+64h], edx
0x6FBF61: mov     ecx, [esi+8]
0x6FBF64: mov     [eax+68h], ecx
0x6FBF67: mov     edx, [esi+0Ch]
0x6FBF6A: mov     [eax+6Ch], edx
0x6FBF6D: mov     ecx, [esi]
0x6FBF6F: mov     [eax+70h], ecx
0x6FBF72: mov     edx, [esi+4]
0x6FBF75: mov     [eax+74h], edx
0x6FBF78: mov     ecx, [esi+8]
0x6FBF7B: mov     [eax+78h], ecx
0x6FBF7E: mov     edx, [esi+0Ch]
0x6FBF81: mov     [eax+7Ch], edx
0x6FBF84: push    48h ; 'H'; Size
0x6FBF86: call    FormHeapAlloc
0x6FBF8B: mov     ebp, eax
0x6FBF8D: mov     ecx, 12h
0x6FBF92: mov     esi, offset unk_A7D338
0x6FBF97: mov     edi, ebp
0x6FBF99: push    0C0h ; 'À'; Size
0x6FBF9E: rep movsd
0x6FBFA0: call    FormHeapAlloc
0x6FBFA5: add     esp, 8
0x6FBFA8: mov     [esp+24h+var_10], eax
0x6FBFAC: xor     esi, esi
0x6FBFAE: cmp     eax, esi
0x6FBFB0: mov     [esp+24h+var_4], esi
0x6FBFB4: jz      short loc_6FBFCE
0x6FBFB6: mov     ecx, [esp+24h+arg_4]
0x6FBFBA: push    ebp
0x6FBFBB: push    0Ch
0x6FBFBD: push    esi
0x6FBFBE: push    esi
0x6FBFBF: push    esi
0x6FBFC0: push    ecx
0x6FBFC1: push    esi
0x6FBFC2: push    ebx
0x6FBFC3: push    8
0x6FBFC5: mov     ecx, eax
0x6FBFC7: call    sub_7174B0
0x6FBFCC: mov     esi, eax
0x6FBFCE: mov     edx, [esi]
0x6FBFD0: mov     eax, [edx+90h]
0x6FBFD6: mov     ecx, esi
0x6FBFD8: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6FBFE0: call    eax
0x6FBFE2: mov     eax, esi
0x6FBFE4: mov     ecx, [esp+24h+var_C]
0x6FBFE8: mov     large fs:0, ecx
0x6FBFEF: pop     ecx
0x6FBFF0: pop     edi
0x6FBFF1: pop     esi
0x6FBFF2: pop     ebp
0x6FBFF3: pop     ebx
0x6FBFF4: add     esp, 10h
0x6FBFF7: retn
0x6FBFF8: mov     [esp+24h+arg_4], 0
0x6FC000: jmp     short loc_6FBF84
