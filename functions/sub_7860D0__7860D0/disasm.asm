0x7860D0: push    0FFFFFFFFh
0x7860D2: push    offset SEH_7860D0
0x7860D7: mov     eax, large fs:0
0x7860DD: push    eax
0x7860DE: sub     esp, 60h
0x7860E1: push    ebx
0x7860E2: push    ebp
0x7860E3: push    esi
0x7860E4: push    edi
0x7860E5: mov     eax, ds:0B30AACh
0x7860EA: xor     eax, esp
0x7860EC: push    eax
0x7860ED: lea     eax, [esp+80h+var_C]
0x7860F1: mov     large fs:0, eax
0x7860F7: mov     esi, ecx
0x7860F9: mov     eax, [esp+80h+arg_0]
0x786100: fld     dword ptr [eax+4]
0x786103: sub     esp, 8
0x786106: fstp    [esp+88h+var_84]; float
0x78610A: lea     ecx, [esp+88h+var_54]
0x78610E: fld     dword ptr [eax]
0x786110: fstp    [esp+88h+var_88]; float
0x786113: call    sub_78E5A0
0x786118: mov     eax, [esp+80h+arg_4]
0x78611F: fld     dword ptr [eax+4]
0x786122: sub     esp, 8
0x786125: fstp    [esp+88h+var_84]; float
0x786129: lea     ecx, [esp+88h+var_6C]
0x78612D: fld     dword ptr [eax]
0x78612F: mov     [esp+88h+var_4], 0
0x78613A: fstp    [esp+88h+var_88]; float
0x78613D: call    sub_78E5A0
0x786142: lea     ecx, [esp+80h+var_6C]
0x786146: mov     byte ptr [esp+80h+var_4], 1
0x78614B: call    sub_78E6A0
0x786150: mov     eax, [esi+10h]
0x786153: test    eax, eax
0x786155: lea     ebp, [esi+0Ch]
0x786158: jz      loc_7862E2
0x78615E: mov     ecx, [ebp+8]
0x786161: sub     ecx, eax
0x786163: mov     eax, 2AAAAAABh
0x786168: imul    ecx
0x78616A: sar     edx, 2
0x78616D: mov     eax, edx
0x78616F: shr     eax, 1Fh
0x786172: add     eax, edx
0x786174: jz      loc_7862E2
0x78617A: mov     eax, [ebp+4]
0x78617D: test    eax, eax
0x78617F: jnz     short loc_786185
0x786181: xor     ebx, ebx
0x786183: jmp     short loc_78619B
0x786185: mov     ecx, [ebp+8]
0x786188: sub     ecx, eax
0x78618A: mov     eax, 2AAAAAABh
0x78618F: imul    ecx
0x786191: sar     edx, 2
0x786194: mov     ebx, edx
0x786196: shr     ebx, 1Fh
0x786199: add     ebx, edx
0x78619B: mov     ecx, [esi+30h]
0x78619E: add     ebx, 0FFFFFFFFh
0x7861A1: test    ecx, ecx
0x7861A3: jz      short loc_7861B1
0x7861A5: mov     eax, [esi+34h]
0x7861A8: sub     eax, ecx
0x7861AA: sar     eax, 2
0x7861AD: cmp     ebx, eax
0x7861AF: jb      short loc_7861B6
0x7861B1: call    __invalid_parameter_noinfo
0x7861B6: mov     ecx, [esi+30h]
0x7861B9: mov     eax, [esi+20h]
0x7861BC: test    eax, eax
0x7861BE: lea     edx, [ecx+ebx*4]
0x7861C1: mov     [esp+80h+arg_0], edx
0x7861C8: jz      short loc_7861E4
0x7861CA: mov     ecx, [esi+24h]
0x7861CD: sub     ecx, eax
0x7861CF: mov     eax, 2AAAAAABh
0x7861D4: imul    ecx
0x7861D6: sar     edx, 2
0x7861D9: mov     eax, edx
0x7861DB: shr     eax, 1Fh
0x7861DE: add     eax, edx
0x7861E0: cmp     ebx, eax
0x7861E2: jb      short loc_7861E9
0x7861E4: call    __invalid_parameter_noinfo
0x7861E9: mov     ecx, [esi+20h]
0x7861EC: mov     eax, [esp+80h+arg_0]
0x7861F3: fld     dword ptr [eax]
0x7861F5: lea     edi, [ebx+ebx*2]
0x7861F8: add     edi, edi
0x7861FA: add     edi, edi
0x7861FC: add     edi, edi
0x7861FE: add     ecx, edi
0x786200: push    ecx
0x786201: lea     edx, [esp+84h+var_24]
0x786205: fstp    [esp+84h+var_84]; float
0x786208: push    edx; int
0x786209: call    sub_78E8A0
0x78620E: mov     [esp+80h+arg_0], eax
0x786215: mov     eax, [ebp+4]
0x786218: test    eax, eax
0x78621A: mov     byte ptr [esp+80h+var_4], 2
0x78621F: jz      short loc_78623B
0x786221: mov     ecx, [ebp+8]
0x786224: sub     ecx, eax
0x786226: mov     eax, 2AAAAAABh
0x78622B: imul    ecx
0x78622D: sar     edx, 2
0x786230: mov     eax, edx
0x786232: shr     eax, 1Fh
0x786235: add     eax, edx
0x786237: cmp     ebx, eax
0x786239: jb      short loc_786240
0x78623B: call    __invalid_parameter_noinfo
0x786240: mov     eax, [esp+80h+arg_0]
0x786247: mov     ecx, [ebp+4]
0x78624A: push    eax
0x78624B: lea     edx, [esp+84h+var_3C]
0x78624F: add     ecx, edi
0x786251: push    edx
0x786252: call    sub_78E6E0
0x786257: lea     edi, [esi+4Ch]
0x78625A: push    eax
0x78625B: mov     ecx, edi
0x78625D: mov     byte ptr [esp+84h+var_4], 3
0x786265: call    sub_785E90
0x78626A: lea     ecx, [esp+80h+var_3C]; void *
0x78626E: mov     byte ptr [esp+80h+var_4], 2
0x786273: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x786278: lea     ecx, [esp+80h+var_24]; void *
0x78627C: mov     byte ptr [esp+80h+var_4], 1
0x786281: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x786286: fld     [esp+80h+arg_8]
0x78628D: push    ecx
0x78628E: lea     eax, [esp+84h+var_3C]
0x786292: fstp    [esp+84h+var_84]; float
0x786295: push    eax; int
0x786296: lea     ecx, [esp+88h+var_6C]
0x78629A: call    sub_78E8A0
0x78629F: push    eax
0x7862A0: lea     ecx, [esp+84h+var_24]
0x7862A4: push    ecx
0x7862A5: mov     bl, 4
0x7862A7: lea     ecx, [esp+88h+var_54]
0x7862AB: mov     byte ptr [esp+88h+var_4], bl
0x7862B2: call    sub_78E7C0
0x7862B7: push    eax
0x7862B8: mov     ecx, edi
0x7862BA: mov     byte ptr [esp+84h+var_4], 5
0x7862C2: call    sub_785E90
0x7862C7: lea     ecx, [esp+80h+var_24]; void *
0x7862CB: mov     byte ptr [esp+80h+var_4], bl
0x7862CF: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7862D4: lea     ecx, [esp+80h+var_3C]; void *
0x7862D8: mov     byte ptr [esp+80h+var_4], 1
0x7862DD: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7862E2: lea     edx, [esp+80h+var_54]
0x7862E6: push    edx
0x7862E7: mov     ecx, ebp
0x7862E9: call    sub_785E90
0x7862EE: lea     eax, [esp+80h+var_54]
0x7862F2: push    eax
0x7862F3: lea     ecx, [esi+4Ch]
0x7862F6: call    sub_785E90
0x7862FB: lea     ecx, [esp+80h+var_6C]
0x7862FF: push    ecx
0x786300: lea     ecx, [esi+1Ch]
0x786303: call    sub_785E90
0x786308: lea     edx, [esp+80h+arg_8]
0x78630F: push    edx; int
0x786310: lea     ecx, [esi+2Ch]; int
0x786313: call    sub_785F30
0x786318: lea     ecx, [esp+80h+var_6C]; void *
0x78631C: mov     byte ptr [esp+80h+var_4], 0
0x786321: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x786326: lea     ecx, [esp+80h+var_54]; void *
0x78632A: mov     [esp+80h+var_4], 0FFFFFFFFh
0x786332: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x786337: mov     ecx, [esp+80h+var_C]
0x78633B: mov     large fs:0, ecx
0x786342: pop     ecx
0x786343: pop     edi
0x786344: pop     esi
0x786345: pop     ebp
0x786346: pop     ebx
0x786347: add     esp, 6Ch
0x78634A: retn    0Ch
