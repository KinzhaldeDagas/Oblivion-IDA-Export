0x4F7AF0: fldz
0x4F7AF2: mov     eax, [esp+arg_4]
0x4F7AF6: push    ebx
0x4F7AF7: mov     ebx, [esp+4+arg_C]
0x4F7AFB: push    edi
0x4F7AFC: fstp    qword ptr [ebx]
0x4F7AFE: xor     edi, edi
0x4F7B00: test    eax, eax
0x4F7B02: jz      short loc_4F7B12
0x4F7B04: movzx   ecx, byte ptr [eax+4]
0x4F7B08: add     ecx, 0FFFFFFCFh
0x4F7B0B: cmp     ecx, 2
0x4F7B0E: ja      short loc_4F7B12
0x4F7B10: mov     edi, eax
0x4F7B12: push    esi
0x4F7B13: mov     esi, [esp+0Ch+arg_0]
0x4F7B17: test    esi, esi
0x4F7B19: jz      short loc_4F7B5F
0x4F7B1B: mov     eax, [esi]
0x4F7B1D: mov     edx, [eax+190h]
0x4F7B23: mov     ecx, esi
0x4F7B25: call    edx
0x4F7B27: test    al, al
0x4F7B29: jz      short loc_4F7B5F
0x4F7B2B: test    edi, edi
0x4F7B2D: jz      short loc_4F7B5F
0x4F7B2F: mov     eax, [esp+0Ch+arg_8]
0x4F7B33: cmp     eax, 0FFFFFFFFh
0x4F7B36: jle     short loc_4F7B44
0x4F7B38: cmp     eax, 6
0x4F7B3B: jge     short loc_4F7B44
0x4F7B3D: push    0FFFFFFFFh
0x4F7B3F: push    0
0x4F7B41: push    eax
0x4F7B42: jmp     short loc_4F7B4A
0x4F7B44: push    0FFFFFFFFh
0x4F7B46: push    0
0x4F7B48: push    0FFFFFFFFh
0x4F7B4A: push    esi
0x4F7B4B: push    edi
0x4F7B4C: push    esi
0x4F7B4D: mov     ecx, offset ActorProcessManager_ptr
0x4F7B52: call    sub_675C40
0x4F7B57: test    al, al
0x4F7B59: jz      short loc_4F7B5F
0x4F7B5B: fld1
0x4F7B5D: fstp    qword ptr [ebx]
0x4F7B5F: cmp     byte ptr ds:0B361ACh, 0
0x4F7B66: pop     esi
0x4F7B67: jz      short loc_4F7B7E
0x4F7B69: fld     qword ptr [ebx]
0x4F7B6B: sub     esp, 8
0x4F7B6E: fstp    [esp+10h+var_10]
0x4F7B71: push    offset aGetcrime0_2f; "GetCrime >> %0.2f"
0x4F7B76: call    Interface_ConsolePrint
0x4F7B7B: add     esp, 0Ch
0x4F7B7E: pop     edi
0x4F7B7F: mov     al, 1
0x4F7B81: pop     ebx
0x4F7B82: retn
