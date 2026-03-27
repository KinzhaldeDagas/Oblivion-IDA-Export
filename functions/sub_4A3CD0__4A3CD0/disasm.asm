0x4A3CD0: push    0FFFFFFFFh
0x4A3CD2: push    offset SEH_4A3CD0
0x4A3CD7: mov     eax, large fs:0
0x4A3CDD: push    eax
0x4A3CDE: sub     esp, 8
0x4A3CE1: push    esi
0x4A3CE2: mov     eax, ds:0B30AACh
0x4A3CE7: xor     eax, esp
0x4A3CE9: push    eax
0x4A3CEA: lea     eax, [esp+1Ch+var_C]
0x4A3CEE: mov     large fs:0, eax
0x4A3CF4: mov     esi, ecx
0x4A3CF6: mov     [esp+1Ch+var_14], esi
0x4A3CFA: call    sub_4A34C0
0x4A3CFF: push    0Ch; Size
0x4A3D01: mov     [esp+20h+var_4], 0
0x4A3D09: mov     dword ptr [esi], offset ??_7TESRegionDataLandscape@@6B@; const TESRegionDataLandscape::`vftable'
0x4A3D0F: call    FormHeapAlloc
0x4A3D14: add     esp, 4
0x4A3D17: mov     [esp+1Ch+var_10], eax
0x4A3D1B: test    eax, eax
0x4A3D1D: mov     byte ptr [esp+1Ch+var_4], 1
0x4A3D22: jz      short loc_4A3D2D
0x4A3D24: mov     ecx, eax
0x4A3D26: call    TESTexture_constr
0x4A3D2B: jmp     short loc_4A3D2F
0x4A3D2D: xor     eax, eax
0x4A3D2F: push    0; a3
0x4A3D31: push    offset aTreesCanopysha; "Trees\\CanopyShadow.dds"
0x4A3D36: lea     ecx, [eax+4]; this
0x4A3D39: mov     byte ptr [esp+24h+var_4], 0
0x4A3D3E: mov     [esi+8], eax
0x4A3D41: call    BSStringT_Set
0x4A3D46: mov     eax, esi
0x4A3D48: mov     ecx, [esp+1Ch+var_C]
0x4A3D4C: mov     large fs:0, ecx
0x4A3D53: pop     ecx
0x4A3D54: pop     esi
0x4A3D55: add     esp, 14h
0x4A3D58: retn
