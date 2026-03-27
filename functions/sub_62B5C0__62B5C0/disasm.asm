0x62B5C0: push    ebx
0x62B5C1: push    ebp
0x62B5C2: push    esi
0x62B5C3: mov     esi, ecx
0x62B5C5: cmp     dword ptr [esi+2Ch], 0
0x62B5C9: push    edi
0x62B5CA: mov     edi, [esp+10h+arg_0]
0x62B5CE: jnz     short loc_62B5E1
0x62B5D0: mov     eax, [esi]
0x62B5D2: mov     edx, [eax+558h]
0x62B5D8: push    edi
0x62B5D9: call    edx
0x62B5DB: cmp     dword ptr [esi+2Ch], 0
0x62B5DF: jz      short loc_62B62A
0x62B5E1: push    1
0x62B5E3: mov     ecx, edi
0x62B5E5: call    Actor_SetAlerted
0x62B5EA: fld     dword ptr [esi+1E8h]
0x62B5F0: fadd    dword ptr ds:0B33E9Ch
0x62B5F6: mov     eax, [esi]
0x62B5F8: mov     edx, [eax+0C0h]
0x62B5FE: mov     ecx, esi
0x62B600: fstp    dword ptr [esi+1E8h]
0x62B606: call    edx
0x62B608: test    al, al
0x62B60A: jz      short loc_62B615
0x62B60C: cmp     byte ptr [esi+0D0h], 0
0x62B613: jnz     short loc_62B62A
0x62B615: fld     dword ptr [esi+1E8h]
0x62B61B: fld     dword ptr ds:0B36890h
0x62B621: fcompp
0x62B623: fnstsw  ax
0x62B625: test    ah, 5
0x62B628: jp      short loc_62B65F
0x62B62A: mov     eax, [esi]
0x62B62C: mov     edx, [eax+188h]
0x62B632: push    1
0x62B634: push    edi
0x62B635: mov     ecx, esi
0x62B637: call    edx
0x62B639: push    0
0x62B63B: mov     ecx, edi
0x62B63D: call    Actor_SetAlerted
0x62B642: mov     eax, [esi]
0x62B644: mov     edx, [eax+0BCh]
0x62B64A: push    0
0x62B64C: mov     ecx, esi
0x62B64E: call    edx
0x62B650: fldz
0x62B652: fstp    dword ptr [esi+1E8h]
0x62B658: pop     edi
0x62B659: pop     esi
0x62B65A: pop     ebp
0x62B65B: pop     ebx
0x62B65C: retn    4
0x62B65F: fldz
0x62B661: mov     ebp, [esi+2Ch]
0x62B664: fcomp   dword ptr [esi+19Ch]
0x62B66A: fnstsw  ax
0x62B66C: test    ah, 1
0x62B66F: jnz     short loc_62B6C0
0x62B671: mov     ecx, ebp; this
0x62B673: call    Actor_IsNPC
0x62B678: test    al, al
0x62B67A: jz      short loc_62B6C0
0x62B67C: push    3
0x62B67E: push    4
0x62B680: call    TESTopic__GEtTopic
0x62B685: mov     ebx, eax
0x62B687: add     esp, 8
0x62B68A: test    ebx, ebx
0x62B68C: jz      short loc_62B6B8
0x62B68E: lea     ecx, [ebx+28h]
0x62B691: test    ecx, ecx
0x62B693: jz      short loc_62B6B8
0x62B695: call    BSSimpleList_IsEmpty
0x62B69A: test    al, al
0x62B69C: jnz     short loc_62B6B8
0x62B69E: push    1
0x62B6A0: push    0
0x62B6A2: push    0
0x62B6A4: mov     [edi+0E4h], ebp
0x62B6AA: mov     eax, [esi]
0x62B6AC: mov     edx, [eax+1A4h]
0x62B6B2: push    ebx
0x62B6B3: push    edi
0x62B6B4: mov     ecx, esi
0x62B6B6: call    edx
0x62B6B8: fld     dword ptr ds:0A35AA4h
0x62B6BE: jmp     short loc_62B6CC
0x62B6C0: fld     dword ptr [esi+19Ch]
0x62B6C6: fsub    dword ptr ds:0B33E9Ch
0x62B6CC: cmp     byte ptr [esi+0D0h], 0
0x62B6D3: fstp    dword ptr [esi+19Ch]
0x62B6D9: jz      short loc_62B757
0x62B6DB: mov     eax, [esi]
0x62B6DD: mov     edx, [eax+0BCh]
0x62B6E3: push    1
0x62B6E5: mov     ecx, esi
0x62B6E7: call    edx
0x62B6E9: mov     ecx, [esi+2Ch]
0x62B6EC: mov     eax, [ecx]
0x62B6EE: mov     edx, [eax+174h]
0x62B6F4: mov     ebp, [esi]
0x62B6F6: call    edx
0x62B6F8: mov     ecx, [esi+2Ch]; this
0x62B6FB: mov     ebx, eax
0x62B6FD: call    TESObjectREFR_GetWorldSpace
0x62B702: mov     ecx, [esi+2Ch]; this
0x62B705: push    eax
0x62B706: call    TESObjectREFR_GetParentCell
0x62B70B: mov     ecx, [ebx]
0x62B70D: mov     edx, [ebx+4]
0x62B710: push    eax
0x62B711: sub     esp, 0Ch
0x62B714: mov     eax, esp
0x62B716: mov     [eax], ecx
0x62B718: mov     ecx, [ebx+8]
0x62B71B: mov     [eax+4], edx
0x62B71E: mov     edx, [ebp+3DCh]
0x62B724: mov     [eax+8], ecx
0x62B727: push    edi
0x62B728: mov     ecx, esi
0x62B72A: call    edx
0x62B72C: test    al, al
0x62B72E: jz      short loc_62B799
0x62B730: mov     ecx, [esi+2Ch]
0x62B733: mov     eax, [ecx]
0x62B735: mov     edx, [eax+174h]
0x62B73B: call    edx
0x62B73D: mov     ecx, [eax]
0x62B73F: mov     [esi+0D4h], ecx
0x62B745: mov     edx, [eax+4]
0x62B748: mov     [esi+0D8h], edx
0x62B74E: mov     eax, [eax+8]
0x62B751: mov     [esi+0DCh], eax
0x62B757: mov     edx, [esi]
0x62B759: mov     eax, [edx+238h]
0x62B75F: push    201h
0x62B764: push    edi
0x62B765: mov     ecx, esi
0x62B767: call    eax
0x62B769: fld     dword ptr ds:0A44BA4h
0x62B76F: mov     ebx, [esi]
0x62B771: push    ecx
0x62B772: mov     ecx, [esi+2Ch]; this
0x62B775: fstp    [esp+14h+var_14]
0x62B778: call    TESObjectREFR_GetWorldSpace
0x62B77D: mov     ecx, [esi+2Ch]; this
0x62B780: push    eax
0x62B781: call    TESObjectREFR_GetParentCell
0x62B786: mov     edx, [ebx+414h]
0x62B78C: push    eax
0x62B78D: lea     ecx, [esi+0D4h]
0x62B793: push    ecx
0x62B794: push    edi
0x62B795: mov     ecx, esi
0x62B797: call    edx
0x62B799: pop     edi
0x62B79A: pop     esi
0x62B79B: pop     ebp
0x62B79C: pop     ebx
0x62B79D: retn    4
