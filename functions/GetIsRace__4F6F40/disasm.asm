0x4F6F40: fldz
0x4F6F42: push    ebx
0x4F6F43: mov     ebx, [esp+4+arg_C]
0x4F6F47: fstp    qword ptr [ebx]
0x4F6F49: push    esi
0x4F6F4A: mov     esi, [esp+8+arg_0]
0x4F6F4E: push    edi
0x4F6F4F: xor     edi, edi
0x4F6F51: test    esi, esi
0x4F6F53: jz      short loc_4F6F75
0x4F6F55: mov     eax, [esi]
0x4F6F57: mov     edx, [eax+170h]
0x4F6F5D: mov     ecx, esi
0x4F6F5F: call    edx
0x4F6F61: cmp     byte ptr [eax+4], 23h ; '#'
0x4F6F65: jnz     short loc_4F6F75
0x4F6F67: mov     eax, [esi]
0x4F6F69: mov     edx, [eax+170h]
0x4F6F6F: mov     ecx, esi
0x4F6F71: call    edx
0x4F6F73: mov     edi, eax
0x4F6F75: mov     ecx, [esp+0Ch+arg_4]
0x4F6F79: xor     eax, eax
0x4F6F7B: test    ecx, ecx
0x4F6F7D: jz      short loc_4F6F87
0x4F6F7F: cmp     byte ptr [ecx+4], 9
0x4F6F83: jnz     short loc_4F6F87
0x4F6F85: mov     eax, ecx
0x4F6F87: test    edi, edi
0x4F6F89: jz      short loc_4F6F9B
0x4F6F8B: test    eax, eax
0x4F6F8D: jz      short loc_4F6F9B
0x4F6F8F: cmp     [edi+0E8h], eax
0x4F6F95: jnz     short loc_4F6F9B
0x4F6F97: fld1
0x4F6F99: fstp    qword ptr [ebx]
0x4F6F9B: cmp     byte ptr ds:0B361ACh, 0
0x4F6FA2: jz      short loc_4F6FB9
0x4F6FA4: fld     qword ptr [ebx]
0x4F6FA6: sub     esp, 8
0x4F6FA9: fstp    [esp+14h+var_14]
0x4F6FAC: push    offset aGetisrace0_2f; "GetIsRace >> %0.2f"
0x4F6FB1: call    Interface_ConsolePrint
0x4F6FB6: add     esp, 0Ch
0x4F6FB9: pop     edi
0x4F6FBA: pop     esi
0x4F6FBB: mov     al, 1
0x4F6FBD: pop     ebx
0x4F6FBE: retn
