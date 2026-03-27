0x4F7330: mov     eax, [esp+arg_4]
0x4F7334: fld     qword ptr ds:0A3D360h
0x4F733A: test    eax, eax
0x4F733C: mov     ecx, [esp+arg_C]
0x4F7340: fstp    qword ptr [ecx]
0x4F7342: jz      short loc_4F734F
0x4F7344: cmp     byte ptr [eax+4], 4
0x4F7348: jnz     short loc_4F734F
0x4F734A: fld     dword ptr [eax+24h]
0x4F734D: fstp    qword ptr [ecx]
0x4F734F: cmp     byte ptr ds:0B361ACh, 0
0x4F7356: jz      short loc_4F736D
0x4F7358: fld     qword ptr [ecx]
0x4F735A: sub     esp, 8
0x4F735D: fstp    [esp+8+var_8]
0x4F7360: push    offset aGetglobalvalue; "GetGlobalValue >> %0.2f"
0x4F7365: call    Interface_ConsolePrint
0x4F736A: add     esp, 0Ch
0x4F736D: mov     al, 1
0x4F736F: retn
