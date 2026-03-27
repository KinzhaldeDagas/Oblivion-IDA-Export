0x513E90: push    0FFFFFFFFh
0x513E92: push    offset SEH_596FE0
0x513E97: mov     eax, large fs:0
0x513E9D: push    eax
0x513E9E: sub     esp, 10h
0x513EA1: push    esi
0x513EA2: mov     eax, ds:0B30AACh
0x513EA7: xor     eax, esp
0x513EA9: push    eax
0x513EAA: lea     eax, [esp+24h+var_C]
0x513EAE: mov     large fs:0, eax
0x513EB4: mov     ecx, [esp+24h+l]
0x513EB8: mov     edx, [esp+24h+arg_10]
0x513EBC: lea     eax, [esp+24h+var_1C]
0x513EC0: push    eax; UInt16
0x513EC1: mov     eax, [esp+28h+arg_C]
0x513EC5: push    ecx; l
0x513EC6: mov     ecx, [esp+2Ch+a4]
0x513ECA: push    edx; a6
0x513ECB: mov     edx, [esp+30h+a3]
0x513ECF: push    eax; a5
0x513ED0: mov     eax, [esp+34h+arg_4]
0x513ED4: push    ecx; a4
0x513ED5: mov     ecx, [esp+38h+a1]
0x513ED9: push    edx; a3
0x513EDA: push    eax; a2
0x513EDB: xor     esi, esi
0x513EDD: push    ecx; a1
0x513EDE: mov     dword ptr [esp+44h+var_1C], esi
0x513EE2: call    Script_ExtractArgs
0x513EE7: add     esp, 20h
0x513EEA: test    al, al
0x513EEC: jnz     short loc_513EFF
0x513EEE: mov     ecx, [esp+24h+var_C]
0x513EF2: mov     large fs:0, ecx
0x513EF9: pop     ecx
0x513EFA: pop     esi
0x513EFB: add     esp, 1Ch
0x513EFE: retn
0x513EFF: mov     ecx, dword ptr [esp+24h+var_1C]; this
0x513F03: cmp     ecx, esi
0x513F05: jz      loc_513FA1
0x513F0B: movzx   eax, byte ptr [ecx+4]
0x513F0F: add     eax, 0FFFFFFCFh
0x513F12: cmp     eax, 2
0x513F15: ja      loc_513FA1
0x513F1B: mov     [esp+24h+var_14], esi
0x513F1F: mov     word ptr [esp+24h+var_10], si
0x513F24: mov     word ptr [esp+24h+var_10+2], si
0x513F29: mov     eax, [ecx+0Ch]
0x513F2C: push    eax
0x513F2D: mov     [esp+28h+var_4], esi
0x513F31: call    TESObjectREFR_GetName
0x513F36: push    eax; ArgList
0x513F37: lea     edx, [esp+2Ch+var_14]
0x513F3B: push    offset aS08x_0; "\"%s\" (%08x)"
0x513F40: push    edx; int
0x513F41: call    BSStringT_Static_Format
0x513F46: fld     dword ptr ds:0A30634h
0x513F4C: mov     eax, ds:0B02E1Ch
0x513F51: add     esp, 10h
0x513F54: push    esi; int
0x513F55: mov     esi, [esp+28h+var_14]
0x513F59: push    ecx
0x513F5A: fstp    [esp+2Ch+var_2C]; float
0x513F5D: push    0FFFFFFFFh; int
0x513F5F: add     eax, 14h
0x513F62: mov     [esp+30h+var_18], eax
0x513F66: fild    [esp+30h+var_18]
0x513F6A: push    2; int
0x513F6C: sub     esp, 8
0x513F6F: fstp    [esp+3Ch+var_38]; float
0x513F73: fld     dword ptr ds:0A4D6FCh
0x513F79: fstp    [esp+3Ch+var_3C]; float
0x513F7C: push    esi; int
0x513F7D: push    1
0x513F7F: call    sub_571F90
0x513F84: add     esp, 4
0x513F87: mov     ecx, eax
0x513F89: call    sub_5723E0
0x513F8E: mov     ecx, dword ptr [esp+24h+var_1C]
0x513F92: push    ecx
0x513F93: call    sub_57C980
0x513F98: push    esi
0x513F99: call    FormHeapFree
0x513F9E: add     esp, 8
0x513FA1: mov     al, 1
0x513FA3: mov     ecx, [esp+24h+var_C]
0x513FA7: mov     large fs:0, ecx
0x513FAE: pop     ecx
0x513FAF: pop     esi
0x513FB0: add     esp, 1Ch
0x513FB3: retn
