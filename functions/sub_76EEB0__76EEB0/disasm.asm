0x76EEB0: sub     esp, 48h
0x76EEB3: push    esi
0x76EEB4: push    edi
0x76EEB5: mov     edi, [esp+50h+arg_0]
0x76EEB9: movzx   ecx, word ptr [edi+4]
0x76EEBD: mov     edx, [edi+10h]
0x76EEC0: mov     esi, [edi+24h]
0x76EEC3: xor     eax, eax
0x76EEC5: cmp     [edi+8], ax
0x76EEC9: mov     [esp+50h+var_8], ecx
0x76EECD: mov     [esp+50h+var_C], eax
0x76EED1: jbe     loc_76EF83
0x76EED7: push    ebx
0x76EED8: push    ebp
0x76EED9: lea     esp, [esp+0]
0x76EEE0: cmp     word ptr [esp+58h+var_8], 3
0x76EEE6: fld     dword ptr ds:0A40098h
0x76EEEC: jnz     loc_76EFEB
0x76EEF2: test    edx, edx
0x76EEF4: fstp    [esp+58h+var_4]
0x76EEF8: jz      loc_76EF89
0x76EEFE: fld     [esp+58h+var_4]
0x76EF02: fistp   [esp+58h+arg_0]
0x76EF06: fld     dword ptr [edx]
0x76EF08: fmul    qword ptr ds:0A3DDD8h
0x76EF0E: mov     ecx, [esp+58h+arg_0]
0x76EF12: fstp    [esp+58h+var_4]
0x76EF16: fld     [esp+58h+var_4]
0x76EF1A: fistp   [esp+58h+var_3C]
0x76EF1E: fld     dword ptr [edx+4]
0x76EF21: mov     ebx, [esp+58h+var_3C]
0x76EF25: fmul    qword ptr ds:0A3DDD8h
0x76EF2B: fstp    [esp+58h+var_4]
0x76EF2F: fld     [esp+58h+var_4]
0x76EF33: fistp   [esp+58h+var_2C]
0x76EF37: fld     dword ptr [edx+8]
0x76EF3A: mov     ebp, [esp+58h+var_2C]
0x76EF3E: fmul    qword ptr ds:0A3DDD8h
0x76EF44: fstp    [esp+58h+var_4]
0x76EF48: fld     [esp+58h+var_4]
0x76EF4C: fistp   [esp+58h+var_1C]
0x76EF50: shl     ecx, 8
0x76EF53: or      ecx, ebx
0x76EF55: shl     ecx, 8
0x76EF58: or      ecx, ebp
0x76EF5A: shl     ecx, 8
0x76EF5D: or      ecx, [esp+58h+var_1C]
0x76EF61: mov     [esi], ecx
0x76EF63: add     edx, [edi+18h]
0x76EF66: mov     ecx, [esp+58h+var_C]
0x76EF6A: add     esi, [edi+20h]
0x76EF6D: add     eax, [edi+1Ch]
0x76EF70: add     ecx, 1
0x76EF73: cmp     cx, [edi+8]
0x76EF77: mov     [esp+58h+var_C], ecx
0x76EF7B: jb      loc_76EEE0
0x76EF81: pop     ebp
0x76EF82: pop     ebx
0x76EF83: pop     edi
0x76EF84: pop     esi
0x76EF85: add     esp, 48h
0x76EF88: retn
0x76EF89: fld     [esp+58h+var_4]
0x76EF8D: fistp   [esp+58h+var_48]
0x76EF91: fld     dword ptr ds:0A40098h
0x76EF97: mov     ecx, [esp+58h+var_48]
0x76EF9B: fstp    [esp+58h+var_4]
0x76EF9F: fld     [esp+58h+var_4]
0x76EFA3: fistp   [esp+58h+var_38]
0x76EFA7: fld     dword ptr ds:0A40098h
0x76EFAD: mov     ebx, [esp+58h+var_38]
0x76EFB1: fstp    [esp+58h+var_4]
0x76EFB5: fld     [esp+58h+var_4]
0x76EFB9: fistp   [esp+58h+var_28]
0x76EFBD: fld     dword ptr ds:0A40098h
0x76EFC3: mov     ebp, [esp+58h+var_28]
0x76EFC7: fstp    [esp+58h+var_4]
0x76EFCB: fld     [esp+58h+var_4]
0x76EFCF: fistp   [esp+58h+var_18]
0x76EFD3: shl     ecx, 8
0x76EFD6: or      ecx, ebx
0x76EFD8: shl     ecx, 8
0x76EFDB: or      ecx, ebp
0x76EFDD: shl     ecx, 8
0x76EFE0: or      ecx, [esp+58h+var_18]
0x76EFE4: mov     [esi], ecx
0x76EFE6: jmp     loc_76EF66
0x76EFEB: test    edx, edx
0x76EFED: jz      short loc_76F066
0x76EFEF: fstp    st
0x76EFF1: fld     dword ptr [edx+0Ch]
0x76EFF4: fmul    qword ptr ds:0A3DDD8h
0x76EFFA: fstp    [esp+58h+var_4]
0x76EFFE: fld     [esp+58h+var_4]
0x76F002: fistp   [esp+58h+var_44]
0x76F006: fld     dword ptr [edx]
0x76F008: mov     ecx, [esp+58h+var_44]
0x76F00C: fmul    qword ptr ds:0A3DDD8h
0x76F012: fstp    [esp+58h+var_4]
0x76F016: fld     [esp+58h+var_4]
0x76F01A: fistp   [esp+58h+var_34]
0x76F01E: fld     dword ptr [edx+4]
0x76F021: mov     ebx, [esp+58h+var_34]
0x76F025: fmul    qword ptr ds:0A3DDD8h
0x76F02B: fstp    [esp+58h+var_4]
0x76F02F: fld     [esp+58h+var_4]
0x76F033: fistp   [esp+58h+var_24]
0x76F037: fld     dword ptr [edx+8]
0x76F03A: mov     ebp, [esp+58h+var_24]
0x76F03E: fmul    qword ptr ds:0A3DDD8h
0x76F044: fstp    [esp+58h+var_4]
0x76F048: fld     [esp+58h+var_4]
0x76F04C: fistp   [esp+58h+var_14]
0x76F050: shl     ecx, 8
0x76F053: or      ecx, ebx
0x76F055: shl     ecx, 8
0x76F058: or      ecx, ebp
0x76F05A: shl     ecx, 8
0x76F05D: or      ecx, [esp+58h+var_14]
0x76F061: jmp     loc_76EF61
0x76F066: fstp    [esp+58h+var_4]
0x76F06A: fld     [esp+58h+var_4]
0x76F06E: fistp   [esp+58h+var_40]
0x76F072: fld     dword ptr ds:0A40098h
0x76F078: mov     ecx, [esp+58h+var_40]
0x76F07C: fstp    [esp+58h+var_4]
0x76F080: fld     [esp+58h+var_4]
0x76F084: fistp   [esp+58h+var_30]
0x76F088: fld     dword ptr ds:0A40098h
0x76F08E: mov     ebx, [esp+58h+var_30]
0x76F092: fstp    [esp+58h+var_4]
0x76F096: fld     [esp+58h+var_4]
0x76F09A: fistp   [esp+58h+var_20]
0x76F09E: fld     dword ptr ds:0A40098h
0x76F0A4: mov     ebp, [esp+58h+var_20]
0x76F0A8: fstp    [esp+58h+var_4]
0x76F0AC: fld     [esp+58h+var_4]
0x76F0B0: fistp   [esp+58h+var_10]
0x76F0B4: shl     ecx, 8
0x76F0B7: or      ecx, ebx
0x76F0B9: shl     ecx, 8
0x76F0BC: or      ecx, ebp
0x76F0BE: shl     ecx, 8
0x76F0C1: or      ecx, [esp+58h+var_10]
0x76F0C5: mov     [esi], ecx
0x76F0C7: jmp     loc_76EF66
