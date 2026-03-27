0x654EA0: sub     esp, 10h
0x654EA3: push    esi
0x654EA4: mov     esi, ecx
0x654EA6: cmp     dword ptr [esi+120h], 0
0x654EAD: jz      short loc_654F03
0x654EAF: cmp     byte ptr [esi+124h], 7Fh
0x654EB6: jz      short loc_654F03
0x654EB8: mov     ecx, [esi+120h]
0x654EBE: mov     eax, [ecx]
0x654EC0: mov     edx, [eax+154h]
0x654EC6: call    edx
0x654EC8: push    eax; NiObjectNET *
0x654EC9: call    NiObjectNET__GetBSFornitureMarker
0x654ECE: add     esp, 4
0x654ED1: test    eax, eax
0x654ED3: jz      short loc_654F03
0x654ED5: movzx   ecx, byte ptr [esi+124h]
0x654EDC: shl     ecx, 4
0x654EDF: add     ecx, [eax+10h]
0x654EE2: pop     esi
0x654EE3: mov     eax, [ecx]
0x654EE5: mov     edx, [ecx+4]
0x654EE8: mov     [esp+10h+var_10], eax
0x654EEB: mov     eax, [ecx+8]
0x654EEE: mov     ecx, [ecx+0Ch]
0x654EF1: shr     ecx, 10h
0x654EF4: mov     [esp+10h+var_8], eax
0x654EF8: mov     [esp+10h+var_C], edx
0x654EFC: movzx   eax, cl
0x654EFF: add     esp, 10h
0x654F02: retn
0x654F03: xor     eax, eax
0x654F05: pop     esi
0x654F06: add     esp, 10h
0x654F09: retn
