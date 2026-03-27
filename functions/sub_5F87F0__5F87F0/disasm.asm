0x5F87F0: push    esi
0x5F87F1: mov     esi, ecx
0x5F87F3: mov     eax, [esi+3Ch]
0x5F87F6: test    eax, eax
0x5F87F8: jz      loc_5F888C
0x5F87FE: fld1
0x5F8800: push    ecx
0x5F8801: fstp    [esp+8+var_8]; float
0x5F8804: push    eax; int
0x5F8805: call    sub_8AB8A0
0x5F880A: add     esp, 8
0x5F880D: cmp     dword ptr [esi+58h], 0
0x5F8811: jz      short loc_5F8835
0x5F8813: mov     ecx, [esi+58h]
0x5F8816: mov     eax, [ecx]
0x5F8818: mov     edx, [eax+0E8h]
0x5F881E: push    esi
0x5F881F: call    edx
0x5F8821: test    eax, eax
0x5F8823: jz      short loc_5F8835
0x5F8825: mov     edx, [eax]
0x5F8827: push    0
0x5F8829: mov     ecx, eax
0x5F882B: mov     eax, [edx+9Ch]
0x5F8831: push    0
0x5F8833: call    eax
0x5F8835: push    edi
0x5F8836: push    1
0x5F8838: mov     ecx, esi
0x5F883A: call    sub_5E13D0
0x5F883F: mov     ecx, esi; this
0x5F8841: call    MobileObject_GetCharProxy
0x5F8846: mov     edi, eax
0x5F8848: test    edi, edi
0x5F884A: jz      short loc_5F888B
0x5F884C: mov     ecx, esi; this
0x5F884E: call    TESObjectREFR_GetParentCell
0x5F8853: test    eax, eax
0x5F8855: jz      short loc_5F888B
0x5F8857: mov     ecx, esi; this
0x5F8859: call    TESObjectREFR_GetParentCell
0x5F885E: mov     esi, eax
0x5F8860: mov     ecx, esi; this
0x5F8862: call    TESObjectCELL_IsInterior
0x5F8867: test    al, al
0x5F8869: jz      short loc_5F887E
0x5F886B: lea     ecx, [esi+28h]
0x5F886E: call    sub_424180
0x5F8873: push    eax
0x5F8874: mov     ecx, edi
0x5F8876: call    sub_895060
0x5F887B: pop     edi
0x5F887C: pop     esi
0x5F887D: retn
0x5F887E: mov     eax, ds:0B35C24h
0x5F8883: push    eax
0x5F8884: mov     ecx, edi
0x5F8886: call    sub_895060
0x5F888B: pop     edi
0x5F888C: pop     esi
0x5F888D: retn
