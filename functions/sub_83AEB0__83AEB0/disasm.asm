0x83AEB0: push    0FFFFFFFFh
0x83AEB2: push    offset SEH_83AEB0
0x83AEB7: mov     eax, large fs:0
0x83AEBD: push    eax
0x83AEBE: sub     esp, 10h
0x83AEC1: push    ebx
0x83AEC2: push    ebp
0x83AEC3: push    esi
0x83AEC4: push    edi
0x83AEC5: mov     eax, ds:0B30AACh
0x83AECA: xor     eax, esp
0x83AECC: push    eax
0x83AECD: lea     eax, [esp+30h+var_C]
0x83AED1: mov     large fs:0, eax
0x83AED7: mov     esi, ecx
0x83AED9: mov     ebx, [esp+30h+arg_8]
0x83AEDD: mov     eax, [ebx+10h]
0x83AEE0: mov     edi, ds:0B4577Ch
0x83AEE6: push    eax
0x83AEE7: call    sub_848C40
0x83AEEC: mov     ebx, [ebx+0Ch]
0x83AEEF: push    ebx
0x83AEF0: mov     ecx, esi
0x83AEF2: call    sub_848E50
0x83AEF7: mov     ecx, [esp+30h+arg_0]
0x83AEFB: mov     eax, [esi]
0x83AEFD: mov     edx, [eax+0BCh]
0x83AF03: push    0
0x83AF05: push    ebx
0x83AF06: push    ecx
0x83AF07: mov     ecx, esi
0x83AF09: call    edx
0x83AF0B: mov     eax, [edi+24h]
0x83AF0E: mov     ecx, [esp+30h+arg_C]
0x83AF12: mov     edx, [ecx]
0x83AF14: mov     ebp, [eax]
0x83AF16: mov     eax, [edx+88h]
0x83AF1C: push    0
0x83AF1E: call    eax
0x83AF20: mov     ebx, [ebp+4]
0x83AF23: cmp     ebx, eax
0x83AF25: mov     [esp+30h+arg_8], eax
0x83AF29: jz      short loc_83AF60
0x83AF2B: test    ebx, ebx
0x83AF2D: jz      short loc_83AF4F
0x83AF2F: lea     ecx, [ebx+4]
0x83AF32: push    ecx; lpAddend
0x83AF33: call    dword ptr ds:0A2807Ch
0x83AF39: test    eax, eax
0x83AF3B: jnz     short loc_83AF4B
0x83AF3D: test    ebx, ebx
0x83AF3F: jz      short loc_83AF4B
0x83AF41: mov     edx, [ebx]
0x83AF43: mov     eax, [edx]
0x83AF45: push    1
0x83AF47: mov     ecx, ebx
0x83AF49: call    eax
0x83AF4B: mov     eax, [esp+30h+arg_8]
0x83AF4F: test    eax, eax
0x83AF51: mov     [ebp+4], eax
0x83AF54: jz      short loc_83AF60
0x83AF56: add     eax, 4
0x83AF59: push    eax; lpAddend
0x83AF5A: call    dword ptr ds:0A28078h
0x83AF60: mov     ebx, [esp+30h+arg_C]
0x83AF64: push    ebx
0x83AF65: push    ebp
0x83AF66: mov     ecx, esi
0x83AF68: call    sub_848FA0
0x83AF6D: mov     ecx, [edi+24h]
0x83AF70: mov     ebp, [ecx+4]
0x83AF73: push    0
0x83AF75: push    ebx
0x83AF76: mov     ecx, esi
0x83AF78: mov     [esp+38h+arg_8], ebp
0x83AF7C: call    sub_848FD0
0x83AF81: mov     ebp, [ebp+4]
0x83AF84: mov     ebx, eax
0x83AF86: cmp     ebp, ebx
0x83AF88: jz      short loc_83AFC0
0x83AF8A: test    ebp, ebp
0x83AF8C: jz      short loc_83AFAB
0x83AF8E: lea     edx, [ebp+4]
0x83AF91: push    edx; lpAddend
0x83AF92: call    dword ptr ds:0A2807Ch
0x83AF98: test    eax, eax
0x83AF9A: jnz     short loc_83AFAB
0x83AF9C: test    ebp, ebp
0x83AF9E: jz      short loc_83AFAB
0x83AFA0: mov     eax, [ebp+0]
0x83AFA3: mov     edx, [eax]
0x83AFA5: push    1
0x83AFA7: mov     ecx, ebp
0x83AFA9: call    edx
0x83AFAB: test    ebx, ebx
0x83AFAD: mov     eax, [esp+30h+arg_8]
0x83AFB1: mov     [eax+4], ebx
0x83AFB4: jz      short loc_83AFC0
0x83AFB6: add     ebx, 4
0x83AFB9: push    ebx; lpAddend
0x83AFBA: call    dword ptr ds:0A28078h
0x83AFC0: mov     ecx, [edi+24h]
0x83AFC3: mov     ebx, [ecx+18h]
0x83AFC6: mov     eax, ds:0B430E8h
0x83AFCB: mov     ebp, [ebx+4]
0x83AFCE: cmp     ebp, eax
0x83AFD0: mov     [esp+30h+arg_8], eax
0x83AFD4: jz      short loc_83B00C
0x83AFD6: test    ebp, ebp
0x83AFD8: jz      short loc_83AFFB
0x83AFDA: lea     edx, [ebp+4]
0x83AFDD: push    edx; lpAddend
0x83AFDE: call    dword ptr ds:0A2807Ch
0x83AFE4: test    eax, eax
0x83AFE6: jnz     short loc_83AFF7
0x83AFE8: test    ebp, ebp
0x83AFEA: jz      short loc_83AFF7
0x83AFEC: mov     eax, [ebp+0]
0x83AFEF: mov     edx, [eax]
0x83AFF1: push    1
0x83AFF3: mov     ecx, ebp
0x83AFF5: call    edx
0x83AFF7: mov     eax, [esp+30h+arg_8]
0x83AFFB: test    eax, eax
0x83AFFD: mov     [ebx+4], eax
0x83B000: jz      short loc_83B00C
0x83B002: add     eax, 4
0x83B005: push    eax; lpAddend
0x83B006: call    dword ptr ds:0A28078h
0x83B00C: mov     eax, [esp+30h+arg_C]
0x83B010: push    eax
0x83B011: push    ebx
0x83B012: mov     ecx, esi
0x83B014: call    sub_848FA0
0x83B019: mov     eax, [esp+30h+arg_0]
0x83B01D: mov     ecx, [eax+88h]
0x83B023: mov     edx, [eax+8Ch]
0x83B029: mov     eax, [eax+90h]
0x83B02F: mov     [esp+30h+var_1C], ecx
0x83B033: fld     [esp+30h+var_1C]
0x83B037: fldz
0x83B039: mov     [esp+30h+var_18], edx
0x83B03D: fld     st
0x83B03F: mov     [esp+30h+var_14], eax
0x83B043: fsubrp  st(2), st
0x83B045: mov     ebx, 1
0x83B04A: fxch    st(1)
0x83B04C: fstp    [esp+30h+arg_C]
0x83B050: fsub    [esp+30h+var_18]
0x83B054: fstp    [esp+30h+arg_0]
0x83B058: fld     [esp+30h+arg_C]
0x83B05C: mov     [esp+30h+arg_C], edi
0x83B060: fstp    [esp+30h+var_1C]
0x83B064: mov     ecx, [esp+30h+var_1C]
0x83B068: fld     [esp+30h+arg_0]
0x83B06C: mov     ds:0B4617Ch, ecx
0x83B072: fstp    [esp+30h+var_18]
0x83B076: mov     edx, [esp+30h+var_18]
0x83B07A: fld     dword ptr ds:0A94900h
0x83B080: mov     ds:0B46180h, edx
0x83B086: fst     [esp+30h+var_14]
0x83B08A: mov     eax, [esp+30h+var_14]
0x83B08E: fstp    [esp+30h+var_10]
0x83B092: mov     ecx, [esp+30h+var_10]
0x83B096: mov     ds:0B46184h, eax
0x83B09B: mov     ds:0B46188h, ecx
0x83B0A1: add     [edi+60h], ebx
0x83B0A4: mov     eax, [esi+38h]
0x83B0A7: lea     edx, [esp+30h+arg_C]
0x83B0AB: push    edx
0x83B0AC: push    eax
0x83B0AD: lea     ecx, [esi+40h]
0x83B0B0: mov     [esp+38h+var_4], 0
0x83B0B8: call    sub_76CE40
0x83B0BD: or      eax, 0FFFFFFFFh
0x83B0C0: add     [edi+60h], eax
0x83B0C3: mov     [esp+30h+var_4], eax
0x83B0C7: jnz     short loc_83B0D0
0x83B0C9: mov     ecx, edi
0x83B0CB: call    sub_7604D0
0x83B0D0: add     [esi+38h], ebx
0x83B0D3: mov     ecx, [esp+30h+var_C]
0x83B0D7: mov     large fs:0, ecx
0x83B0DE: pop     ecx
0x83B0DF: pop     edi
0x83B0E0: pop     esi
0x83B0E1: pop     ebp
0x83B0E2: pop     ebx
0x83B0E3: add     esp, 1Ch
0x83B0E6: retn    10h
