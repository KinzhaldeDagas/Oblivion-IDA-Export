0x4F6EC0: fldz
0x4F6EC2: push    ebx
0x4F6EC3: mov     ebx, [esp+4+arg_C]
0x4F6EC7: fstp    qword ptr [ebx]
0x4F6EC9: push    esi
0x4F6ECA: mov     esi, [esp+8+arg_0]
0x4F6ECE: push    edi
0x4F6ECF: xor     edi, edi
0x4F6ED1: test    esi, esi
0x4F6ED3: jz      short loc_4F6EF5
0x4F6ED5: mov     eax, [esi]
0x4F6ED7: mov     edx, [eax+170h]
0x4F6EDD: mov     ecx, esi
0x4F6EDF: call    edx
0x4F6EE1: cmp     byte ptr [eax+4], 23h ; '#'
0x4F6EE5: jnz     short loc_4F6EF5
0x4F6EE7: mov     eax, [esi]
0x4F6EE9: mov     edx, [eax+170h]
0x4F6EEF: mov     ecx, esi
0x4F6EF1: call    edx
0x4F6EF3: mov     edi, eax
0x4F6EF5: mov     ecx, [esp+0Ch+arg_4]
0x4F6EF9: xor     eax, eax
0x4F6EFB: test    ecx, ecx
0x4F6EFD: jz      short loc_4F6F07
0x4F6EFF: cmp     byte ptr [ecx+4], 5
0x4F6F03: jnz     short loc_4F6F07
0x4F6F05: mov     eax, ecx
0x4F6F07: test    edi, edi
0x4F6F09: jz      short loc_4F6F1B
0x4F6F0B: test    eax, eax
0x4F6F0D: jz      short loc_4F6F1B
0x4F6F0F: cmp     [edi+104h], eax
0x4F6F15: jnz     short loc_4F6F1B
0x4F6F17: fld1
0x4F6F19: fstp    qword ptr [ebx]
0x4F6F1B: cmp     byte ptr ds:0B361ACh, 0
0x4F6F22: jz      short loc_4F6F39
0x4F6F24: fld     qword ptr [ebx]
0x4F6F26: sub     esp, 8
0x4F6F29: fstp    [esp+14h+var_14]
0x4F6F2C: push    offset aGetisclass0_2f; "GetIsClass >> %0.2f"
0x4F6F31: call    Interface_ConsolePrint
0x4F6F36: add     esp, 0Ch
0x4F6F39: pop     edi
0x4F6F3A: pop     esi
0x4F6F3B: mov     al, 1
0x4F6F3D: pop     ebx
0x4F6F3E: retn
