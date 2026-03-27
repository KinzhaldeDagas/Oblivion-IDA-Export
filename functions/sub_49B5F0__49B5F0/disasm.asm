0x49B5F0: sub     esp, 0Ch
0x49B5F3: mov     eax, [esp+0Ch+a2]
0x49B5F7: mov     edx, [esp+0Ch+a3]
0x49B5FB: push    esi
0x49B5FC: mov     esi, ecx
0x49B5FE: mov     ecx, eax
0x49B600: shl     ecx, 0Ch
0x49B603: mov     [esp+10h+a2], ecx
0x49B607: fild    [esp+10h+a2]
0x49B60B: mov     ecx, edx
0x49B60D: fld     qword ptr ds:0A30F70h
0x49B613: shl     ecx, 0Ch
0x49B616: mov     [esp+10h+a2], ecx
0x49B61A: mov     ecx, ds:0B333A0h; this
0x49B620: fadd    st(1), st
0x49B622: fxch    st(1)
0x49B624: push    edi
0x49B625: mov     edi, [ecx+34h]
0x49B628: test    edi, edi
0x49B62A: fstp    [esp+14h+var_C]
0x49B62E: fiadd   [esp+14h+a2]
0x49B632: fstp    [esp+14h+var_8]
0x49B636: fld     dword ptr ds:0A30634h
0x49B63C: fstp    [esp+14h+var_4]
0x49B640: jz      short loc_49B660
0x49B642: movzx   edx, byte ptr [edi+24h]
0x49B646: shr     edx, 1
0x49B648: test    dl, 1
0x49B64B: jnz     short loc_49B669
0x49B64D: mov     byte ptr [esi], 0
0x49B650: mov     esi, [esi+4]
0x49B653: or      word ptr [esi+18h], 1
0x49B658: pop     edi
0x49B659: pop     esi
0x49B65A: add     esp, 0Ch
0x49B65D: retn    8
0x49B660: push    edx; a3
0x49B661: push    eax; a2
0x49B662: call    TES_GetCellFromCoords
0x49B667: mov     edi, eax
0x49B669: test    edi, edi
0x49B66B: jz      short loc_49B680
0x49B66D: mov     ecx, edi
0x49B66F: call    TESObjectCELL_GetWaterHeight
0x49B674: fstp    [esp+14h+var_4]
0x49B678: push    edi
0x49B679: mov     ecx, esi
0x49B67B: call    sub_49A000
0x49B680: mov     eax, [esi+4]
0x49B683: fldz
0x49B685: mov     ecx, [esp+14h+var_C]
0x49B689: mov     edx, [esp+14h+var_8]
0x49B68D: mov     byte ptr [esi], 1
0x49B690: and     word ptr [eax+18h], 0FFFEh
0x49B696: mov     eax, [esi+4]
0x49B699: add     eax, 54h ; 'T'
0x49B69C: mov     [eax], ecx
0x49B69E: mov     ecx, [esp+14h+var_4]
0x49B6A2: mov     [eax+4], edx
0x49B6A5: push    0; a3
0x49B6A7: push    ecx
0x49B6A8: mov     [eax+8], ecx
0x49B6AB: fstp    [esp+1Ch+var_1C]; a2
0x49B6AE: mov     ecx, [esi+4]; this
0x49B6B1: call    NiAVObject_UpdateNiAVObject
0x49B6B6: pop     edi
0x49B6B7: pop     esi
0x49B6B8: add     esp, 0Ch
0x49B6BB: retn    8
