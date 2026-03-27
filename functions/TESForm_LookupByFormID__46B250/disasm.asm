0x46B250: push    ecx
0x46B251: mov     ecx, [esp+4+a1]
0x46B255: lea     eax, [esp+4+var_4]
0x46B258: push    eax
0x46B259: push    ecx
0x46B25A: mov     ecx, offset TESForm_FormIDMap
0x46B25F: mov     [esp+0Ch+var_4], 0
0x46B267: call    NiTMap_GetAt
0x46B26C: neg     al
0x46B26E: sbb     eax, eax
0x46B270: and     eax, [esp+4+var_4]
0x46B273: pop     ecx
0x46B274: retn
