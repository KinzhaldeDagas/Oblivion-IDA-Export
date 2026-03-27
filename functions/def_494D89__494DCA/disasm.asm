0x494DCA: call    sub_578DA0; jumptable 00494D89 default case
0x494DCF: push    0
0x494DD1: call    sub_579260
0x494DD6: add     esp, 4
0x494DD9: call    sub_5792B0
0x494DDE: cmp     byte ptr [esp+lpText], 0
0x494DE3: jz      short loc_494E02
0x494DE5: mov     ecx, offset flt_B33A48
0x494DEA: call    GameSetting_GetSafeFloatPointer
0x494DEF: fld     dword ptr [eax]
0x494DF1: push    ecx
0x494DF2: mov     ecx, ds:0B3A6B0h
0x494DF8: fstp    [esp+4+var_4]; float
0x494DFB: push    2; int
0x494DFD: call    sub_5732D0
0x494E02: mov     byte ptr ds:0B06B16h, 1
0x494E09: jmp     short loc_494E4A
0x494E0B: cmp     byte ptr ds:0B06C74h, 0
0x494E12: jz      short loc_494E2F
0x494E14: cmp     dword ptr ds:0B34FA8h, 0
0x494E1B: jz      short loc_494E2F
0x494E1D: cmp     bl, 2
0x494E20: jz      short loc_494E51
0x494E22: jle     short loc_494E59
0x494E24: cmp     bl, 4
0x494E27: jg      short loc_494E59
0x494E29: mov     [esp+arg_8], edi
0x494E2D: jmp     short loc_494E59
0x494E2F: mov     ecx, [esp+uType]
0x494E33: mov     edx, [esp+lpCaption]
0x494E37: mov     eax, [esp+lpText]
0x494E3B: push    ecx; uType
0x494E3C: push    edx; lpCaption
0x494E3D: push    eax; lpText
0x494E3E: push    0; hWnd
0x494E40: call    dword ptr ds:0A28258h
0x494E46: mov     [esp+arg_8], eax
0x494E4A: cmp     [esp+arg_8], 4
0x494E4F: jnz     short loc_494E59
0x494E51: mov     [esp+arg_8], 5
0x494E59: mov     ecx, offset TimeInfo
0x494E5E: call    sub_47D0F0
0x494E63: mov     eax, [esp+arg_8]
0x494E67: pop     esi
0x494E68: pop     ebx
0x494E69: pop     edi
0x494E6A: add     esp, 24h
0x494E6D: retn    0Ch
