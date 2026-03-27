0x4F7EF0: fld     qword ptr ds:0A3D360h
0x4F7EF6: push    esi
0x4F7EF7: mov     esi, [esp+4+arg_0]
0x4F7EFB: test    esi, esi
0x4F7EFD: push    edi
0x4F7EFE: mov     edi, [esp+8+arg_C]
0x4F7F02: fstp    qword ptr [edi]
0x4F7F04: jz      short loc_4F7F2C
0x4F7F06: mov     eax, [esi]
0x4F7F08: mov     edx, [eax+190h]
0x4F7F0E: mov     ecx, esi
0x4F7F10: call    edx
0x4F7F12: test    al, al
0x4F7F14: jz      short loc_4F7F2C
0x4F7F16: mov     ecx, esi
0x4F7F18: call    sub_5E0380
0x4F7F1D: test    eax, eax
0x4F7F1F: jz      short loc_4F7F2C
0x4F7F21: cmp     byte ptr [eax+20h], 11h
0x4F7F25: jnz     short loc_4F7F2C
0x4F7F27: fild    dword ptr [eax+40h]
0x4F7F2A: fstp    qword ptr [edi]
0x4F7F2C: cmp     byte ptr ds:0B361ACh, 0
0x4F7F33: jz      short loc_4F7F4A
0x4F7F35: fld     qword ptr [edi]
0x4F7F37: sub     esp, 8
0x4F7F3A: fstp    [esp+10h+var_10]
0x4F7F3D: push    offset aProcedure0_2f; "Procedure >> %0.2f"
0x4F7F42: call    Interface_ConsolePrint
0x4F7F47: add     esp, 0Ch
0x4F7F4A: pop     edi
0x4F7F4B: mov     al, 1
0x4F7F4D: pop     esi
0x4F7F4E: retn
