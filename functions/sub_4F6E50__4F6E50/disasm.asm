0x4F6E50: fldz
0x4F6E52: mov     eax, [esp+arg_4]
0x4F6E56: push    esi
0x4F6E57: push    edi
0x4F6E58: mov     edi, [esp+8+arg_C]
0x4F6E5C: xor     esi, esi
0x4F6E5E: fstp    qword ptr [edi]
0x4F6E60: test    eax, eax
0x4F6E62: jz      short loc_4F6E6C
0x4F6E64: cmp     byte ptr [eax+4], 35h ; '5'
0x4F6E68: jnz     short loc_4F6E6C
0x4F6E6A: mov     esi, eax
0x4F6E6C: mov     eax, [esp+8+arg_8]
0x4F6E70: test    eax, eax
0x4F6E72: jz      short loc_4F6E80
0x4F6E74: movzx   ecx, byte ptr [eax+4]
0x4F6E78: add     ecx, 0FFFFFFCFh
0x4F6E7B: cmp     ecx, 2
0x4F6E7E: jbe     short loc_4F6E84
0x4F6E80: mov     eax, [esp+8+arg_0]
0x4F6E84: test    esi, esi
0x4F6E86: jz      short loc_4F6E97
0x4F6E88: mov     ecx, eax; this
0x4F6E8A: call    TESObjectREFR_GetWorldSpace
0x4F6E8F: cmp     eax, esi
0x4F6E91: jnz     short loc_4F6E97
0x4F6E93: fld1
0x4F6E95: fstp    qword ptr [edi]
0x4F6E97: cmp     byte ptr ds:0B361ACh, 0
0x4F6E9E: jz      short loc_4F6EB5
0x4F6EA0: fld     qword ptr [edi]
0x4F6EA2: sub     esp, 8
0x4F6EA5: fstp    [esp+10h+var_10]
0x4F6EA8: push    offset aGetinworldspac; "GetInWorldspace >> %0.2f"
0x4F6EAD: call    Interface_ConsolePrint
0x4F6EB2: add     esp, 0Ch
0x4F6EB5: pop     edi
0x4F6EB6: mov     al, 1
0x4F6EB8: pop     esi
0x4F6EB9: retn
